/*
ADV_fnclib_fnc_radioRelay - by Belbo (QA and approved by Nyaan)

This function turns a vehicle into a radio repeater for use with TFAR. 
The distance multiplicator is applied to all units of the side provided if at least one radio repeater is up and running.
If a radio repeater is destroyed, damaged beyond 60% or descended below the given minimum height it will stop working as a radio repeater.
If the last radio repeater is deactivated, the distance multiplicator is removed for all units of the side provided.

Possible call - has to be executed on client and server:

in init.sqf:
[VEHICLE, west, 90] spawn ADV_fnclib_fnc_radioRelay;

or from a local client:
[VEHICLE, west, 90] remoteExec ["ADV_fnclib_fnc_radioRelay",0];
*/

params [
	["_relay", objNull, [objNull]],
	["_side", west, [west]],
	["_minHeight", 10, [0]]
];

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitWith {};
if (hasInterface) then {
	waitUntil {player == player};
};

if (side player == _side || typeOf _relay == "Land_DataTerminal_01_F") then {

	if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {

		_ace_relayActionON = [
			"relayActionOn",
			("<t color=""#00FF00"">" + ("ACTIVATE RADIO REPEATER") + "</t>"),
			"",
			{ (_this select 0) setVariable [format ["adv_var_isRelay_%1",((_this select 2) select 0)],true,true]; systemChat "Radio repeater activated."; if (typeOf (_this select 0) == "Land_DataTerminal_01_F") then { [(_this select 0),3] call BIS_fnc_dataTerminalAnimate; }; },	
			{ !((_this select 0) getVariable [format ["adv_var_isRelay_%1",(_this select 2) select 0],false]) && damage (_this select 0) < 0.4 },
			nil,[_side]
		] call ace_interact_menu_fnc_createAction;
		
		_ace_relayActionOFF = [
			"relayActionOff",
			("<t color=""#FF0000"">" + ("DEACTIVATE RADIO REPEATER") + "</t>"),
			"",
			{ (_this select 0) setVariable [format ["adv_var_isRelay_%1",((_this select 2) select 0)],false,true]; systemChat "Radio repeater deactivated."; if (typeOf (_this select 0) == "Land_DataTerminal_01_F") then { [(_this select 0),0] call BIS_fnc_dataTerminalAnimate; }; },	
			{ ((_this select 0) getVariable [format ["adv_var_isRelay_%1",(_this select 2) select 0],false]) && damage (_this select 0) < 0.6 },
			nil,[_side]
		] call ace_interact_menu_fnc_createAction;
		
		[_relay , 0, ["ACE_MainActions"],_ace_relayActionON] call ace_interact_menu_fnc_addActionToObject;
		[_relay , 0, ["ACE_MainActions"],_ace_relayActionOFF] call ace_interact_menu_fnc_addActionToObject;
		
		if (typeOf _relay == "Land_DataTerminal_01_F") then {
			[_relay,true,[0,1,0]] call ace_dragging_fnc_setCarryable;
		};
		
	} else {
	
		[_relay,_side] spawn {
			_relay = _this select 0;
			_side = _this select 1;
			
			while { alive _relay } do {
				waitUntil { sleep 1; (damage _relay) < 0.6 };
				_relay setVariable [format ["adv_var_isRelay_%1",_side],false,true];
			
				adv_handle_relayActionOn = _relay addAction [("<t color=""#00FF00"">" + ("Activate Radio Repeater") + "</t>"), {
				
					(_this select 0) setVariable [format ["adv_var_isRelay_%1",((_this select 3) select 0)],true,true];
					systemChat "Radio repeater activated.";
					if (typeOf (_this select 0) == "Land_DataTerminal_01_F") then { [(_this select 0),3] call BIS_fnc_dataTerminalAnimate; };
					(_this select 0) removeAction (_this select 2);
					
					adv_handle_relayActionOff = (_this select 0) addAction [("<t color=""#FF0000"">" + ("Deactivate Radio Repeater") + "</t>"), {
					
						(_this select 0) setVariable [format ["adv_var_isRelay_%1",((_this select 3) select 0)],false,true];
						systemChat "Radio repeater deactivated.";
						if (typeOf (_this select 0) == "Land_DataTerminal_01_F") then { [(_this select 0),0] call BIS_fnc_dataTerminalAnimate; };
						(_this select 0) removeAction (_this select 2);
						
					},_side,6,false,true,"","player distance _target <5"];
					
				},_side,6,false,true,"","player distance _target <5"];
				
				waitUntil { sleep 1; _relay getVariable (format ["adv_var_isRelay_%1",_side]) };
				waitUntil { sleep 1; ((damage _relay) > 0.6 || !alive _relay) || !(_relay getVariable (format ["adv_var_isRelay_%1",_side])) };
				if (!isNil "adv_handle_relayActionOff") then { _relay removeAction adv_handle_relayActionOff; };
			};
		};
	};
};

if (isServer) then {
	[_relay,_side,_minHeight] spawn {
		_relay = _this select 0;
		_side = _this select 1;
		_minHeight = _this select 2;
		while {alive _relay} do {
			waitUntil { sleep 1; damage _relay > 0.6 || !alive _relay || getTerrainHeightASL (getPos _relay) < _minHeight || !((speed _relay) == 0) };
			_relay setVariable [format ["adv_var_isRelay_%1",_side],false,true];
			waitUntil { sleep 1; damage _relay < 0.4 || !alive _relay  || ((speed _relay) == 0) };
		};
	};
	if !( missionNamespace getVariable [format ["ADV_var_relayScriptHasRun_%1",_side],false] ) then {
		missionNamespace setVariable [format ["ADV_var_relayScriptHasRun_%1",_side],true,true];
		while {true} do {
			waitUntil { sleep 1; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+allMissionObjects "Land_DataTerminal_01_F") > 0 };
			
			{
				if ( (side _x) == _side ) then {
					_x setVariable ["tf_sendingDistanceMultiplicator", 2, true];
				};
			} forEach allPlayers;
			
			waitUntil { sleep 1; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+allMissionObjects "Land_DataTerminal_01_F") == 0 };
			
			{
				if ( (side _x) == _side || (side _x) == sideEnemy ) then {
					_x setVariable ["tf_sendingDistanceMultiplicator", 1, true];
				};
			} forEach allPlayers;
		};
	};
};