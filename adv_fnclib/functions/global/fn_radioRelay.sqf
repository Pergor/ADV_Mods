/*
ADV_fnclib_fnc_radioRelay - by Belbo (QA and approved by Nyaan)

This function turns a vehicle into a radio repeater for use with TFAR. 
The distance multiplicator is applied to all units of the side provided if at least one radio repeater is up and running.
If a radio repeater is destroyed, damaged beyond 60% or descended below the given minimum height it will stop working as a radio repeater.
If the last radio repeater is deactivated, the distance multiplicator is removed for all units of the side provided.

Possible call - has to be executed globally:

in init.sqf:
[VEHICLE, west, 90] spawn ADV_fnclib_fnc_radioRelay;
or
[VEHICLE, west, 90] spawn compile preprocessFileLineNumbers "fn_radioRelay.sqf";

or from a local client:
[VEHICLE, west, 90] remoteExec ["ADV_fnclib_fnc_radioRelay",0];
or
{[VEHICLE, west, 90] spawn compile preprocessFileLineNumbers "fn_radioRelay.sqf";} remoteExec ["bis_fnc_spawn",0];
*/

params [
	["_relay", objNull, [objNull]],
	["_side", west, [west]],
	["_minHeight", 10, [0]]
];

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitWith {};

//switches for turning the relay on and off (the code that's being executed locally by the activator:
adv_radioRelay_scriptfnc_turnOn = {
	params ["_relay","_side"];
	//_relay will be only boosting signal for the side it has been set to:
	_relay setVariable [format ["adv_var_isRelay_%1",_side],true,true];
	//little hint:
	systemChat "Radio repeater activated.";
	//animation for the terminal:
	if (typeOf _relay == "Land_DataTerminal_01_F") then { [_relay,3] call BIS_fnc_dataTerminalAnimate; };
};
adv_radioRelay_scriptfnc_turnOff = {
	params ["_relay","_side"];
	_relay setVariable [format ["adv_var_isRelay_%1",_side],false,true];
	systemChat "Radio repeater deactivated.";
	if (typeOf _relay == "Land_DataTerminal_01_F") then { [_relay,0] call BIS_fnc_dataTerminalAnimate; };
};

if (hasInterface) then {
	waitUntil {player == player};
};

//code executed for players so they have actions to activate/deactivate the relay:
if ( hasInterface && (side player == _side || typeOf _relay == "Land_DataTerminal_01_F") ) then {

	//code for ace interaction:
	if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {
		//creating the action for activating the relay:
		_ace_relayActionON = [
			"relayActionOn",
			("<t color=""#00FF00"">" + ("ACTIVATE RADIO REPEATER") + "</t>"),
			"",
			{
				[_this select 0, (_this select 2) select 0] call adv_radioRelay_scriptfnc_turnOn;
			},
			//It'll only be shown if the vehicle has less than 40% damaged:
			{ !((_this select 0) getVariable [format ["adv_var_isRelay_%1",(_this select 2) select 0],false]) && damage (_this select 0) < 0.4 },
			nil,[_side]
		] call ace_interact_menu_fnc_createAction;
		//creating the action for deactivating the relay:
		_ace_relayActionOFF = [
			"relayActionOff",
			("<t color=""#FF0000"">" + ("DEACTIVATE RADIO REPEATER") + "</t>"),
			"",
			{
				[_this select 0, (_this select 2) select 0] call adv_radioRelay_scriptfnc_turnOff;
			},
			//It'll only be shown if the vehicle has less than 60% damaged:
			{ ((_this select 0) getVariable [format ["adv_var_isRelay_%1",(_this select 2) select 0],false]) && damage (_this select 0) < 0.6 },
			nil,[_side]
		] call ace_interact_menu_fnc_createAction;
		
		//adding the actions to the relay:
		[_relay , 0, ["ACE_MainActions"],_ace_relayActionON] call ace_interact_menu_fnc_addActionToObject;
		[_relay , 0, ["ACE_MainActions"],_ace_relayActionOFF] call ace_interact_menu_fnc_addActionToObject;
		
		//and make it carryable if it's a DataTerminal:
		if (typeOf _relay == "Land_DataTerminal_01_F") then {
			[_relay,true,[0,1,0]] call ace_dragging_fnc_setCarryable;
		};
		
	} else {
		//if ace is not present, we have to add actions the vanilla way:
		[_relay,_side] spawn {
			params ["_relay","_side"];
			//unfortunately the while loop is necessary because the side has to be dynamically set and evaluated in the condition:
			while { alive _relay } do {
				//the action to activate the relay is shown if the damage of the relay is below 60%
				waitUntil { sleep 1; (damage _relay) < 0.6 };
				//failsafe to deactivate the relay:
				_relay setVariable [format ["adv_var_isRelay_%1",_side],false,true];
				
				adv_handle_relayActionOn = _relay addAction [("<t color=""#00FF00"">" + ("Activate Radio Repeater") + "</t>"), {
					
					params ["_relay","_caller","_action","_side"];
					[_relay, _side] call adv_radioRelay_scriptfnc_turnOn;
					_relay removeAction _action;

					adv_handle_relayActionOff = _relay addAction [("<t color=""#FF0000"">" + ("Deactivate Radio Repeater") + "</t>"), {
						
						params ["_relay","_caller","_action","_side"];
						[_relay, _side] call adv_radioRelay_scriptfnc_turnOff;
						_relay removeAction _action;
						
					},_side,6,false,true,"","true",5];
					
				},_side,6,false,true,"","true",5];
				//wait until the relay is activated:
				waitUntil { sleep 1; _relay getVariable (format ["adv_var_isRelay_%1",_side]) };
				//wait until the damage of the relay is higher than 60% or until it's deactivated or dead:
				waitUntil { sleep 1; ((damage _relay) > 0.6 || !alive _relay) || !(_relay getVariable (format ["adv_var_isRelay_%1",_side])) };
				//in case it's not being deactivated manually we have to remove the action of the vehicle:
				if (!isNil "adv_handle_relayActionOff") then { _relay removeAction adv_handle_relayActionOff; };
				//and it will start all over again at line 97.
			};
		};
	};
};

//code that's only executed on the server, that handles the deactivation of the radio relay by damage or height or speed, and that handles the effect of the relay:
if (isServer) exitWith {
	//this contains a loop to check if the relay has been destroyed or damaged or is moving or below _minHeight so it'll automatically switch off.
	[_relay,_side,_minHeight] spawn {
		params ["_relay","_side","_minHeight"];
		//we make sure the loop is only executed once for every vehicle:
		if ( _relay getVariable ["adv_radioRelay_available",true] ) then {
			_relay setVariable ["adv_radioRelay_available",false];
			//the loop runs as long as the vehicle is alive:
			while {alive _relay} do {
				//this waits until the damage to the relay is higher than 60%, the relay is dead, below minimal height or moving:
				waitUntil { sleep 2; damage _relay > 0.6 || !alive _relay || getTerrainHeightASL (getPos _relay) < _minHeight || !((speed _relay) == 0) };
				//we disable the relay for every side:
				_relay setVariable ["adv_var_isRelay_west",false,true];
				_relay setVariable ["adv_var_isRelay_east",false,true];
				_relay setVariable ["adv_var_isRelay_independent",false,true];
				//and wait until the relay is either dead or stopped moving or has been repaired:
				waitUntil { sleep 2; damage _relay < 0.4 || !alive _relay  || ((speed _relay) == 0) };
				//and start again at line 138.
			};
			//theoretically making the loop available again - even though the vehicle isn't alive anymore:
			_relay setVariable [format ["adv_radioRelay_available",true]];
		};
	};
	//the code for this must not be executed more than once per side and mission. This makes sure of that:
	if !( missionNamespace getVariable [format ["ADV_var_relayScriptHasRun_%1",_side],false] ) then {
		missionNamespace setVariable [format ["ADV_var_relayScriptHasRun_%1",_side],true,true];
		//this is the "main-loop" of the script that sets the effect of all the relays in the mission:
		while {true} do {
			//this waits until there is more than one active relay of the provided side...
			waitUntil { sleep 2; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+allMissionObjects "Land_DataTerminal_01_F") > 0 };
			//... and boosts the sending distance if a relay is active:
			{
				if ( (side _x) == _side ) then {
					_x setVariable ["tf_sendingDistanceMultiplicator", 2, true];
				};
			} forEach allPlayers;
			//this waits until there is no active relay of the provided side left...
			waitUntil { sleep 2; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+allMissionObjects "Land_DataTerminal_01_F") == 0 };
			//and returns to the old sending distance multiplicator:
			{
				if ( (side _x) == _side || (side _x) == sideEnemy ) then {
					_x setVariable ["tf_sendingDistanceMultiplicator", 1, true];
				};
			} forEach allPlayers;
			//and we start again at line 157.
		};
	};
};
//Thank you for your attention.