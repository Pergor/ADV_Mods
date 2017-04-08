/*
 * Author: Belbo (QA and approved by Nyaan)
 *
 * This function turns a vehicle into a radio repeater for use with TFAR. 
 * The distance multiplicator is applied to all units of the side provided if at least one radio repeater is up and running.
 * If a radio repeater is destroyed, damaged beyond 60% or descended below the given minimum height it will stop working as a radio repeater.
 * If the last radio repeater is deactivated, the distance multiplicator is removed for all units of the side provided.
 *
 * Arguments:
 * 0: target to become relay - <OBJECT>
 * 1: side for which relay should be available (optional) - <SIDE>
 * 2: minimum height (over NN) above which the relay can be switched on (optional) - <NUMBER>
 *
 * Return Value:
 * Script handle <HANDLE>
 *
 * Example:
 * _handle = [MRAP_1, west, 50] call adv_fnclib_fnc_radioRelay;
 *
 * Public: Yes/No
 */

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitWith {};

_handle = _this spawn {

	params [
		["_relay", objNull, [objNull]],
		["_side", west, [west]],
		["_minHeight", 10, [0]]
	];

	//if ( _relay getVariable [format ["adv_var_isRelay_%1",_side],false] ) exitWith {};

	//switches for turning the relay on and off (the code that's being executed locally by the activator:
	adv_radioRelay_scriptfnc_turnOn = {
		params ["_relay","_side"];
		_relay setVariable [format ["adv_var_isRelay_%1",_side],true,true];
		systemChat "Radio repeater activated.";
		if (typeOf _relay == "Land_DataTerminal_01_F") then { [_relay,3] call BIS_fnc_dataTerminalAnimate; };
	};
	adv_radioRelay_scriptfnc_turnOff = {
		params ["_relay","_side"];
		//_relay setVariable [format ["adv_var_isRelay_%1",_side],false,true];
		_relay setVariable ["adv_var_isRelay_WEST",false,true];
		_relay setVariable ["adv_var_isRelay_EAST",false,true];
		_relay setVariable ["adv_var_isRelay_INDEPENDENT",false,true];
		systemChat "Radio repeater deactivated.";
		if (typeOf _relay == "Land_DataTerminal_01_F") then { [_relay,0] call BIS_fnc_dataTerminalAnimate; };
	};
	adv_radioRelay_condition = {
		params ["_relay","_unit","_side"];
		if ( !(_relay getVariable [format ["adv_var_isRelay_%1",_side],false]) && damage _relay < 0.6 ) exitWith {true};
		false;
	};

	if (hasInterface) then {
		waitUntil {player == player};
	};

	//code executed for players so they have actions to activate/deactivate the relay:
	//if ( hasInterface && (side player == _side || typeOf _relay == "Land_DataTerminal_01_F") ) then {
	if ( hasInterface && side player == _side ) then {

		//code for ace interaction:
		if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {
			_ace_relayActionON = [
				"relayActionOn",
				("<t color=""#00FF00"">" + ("ACTIVATE RADIO REPEATER") + "</t>"),
				"",
				{
					[_this select 0, (_this select 2) select 0] call adv_radioRelay_scriptfnc_turnOn;
				},
				{ [_this select 0, _this select 1, (_this select 2) select 0] call adv_radioRelay_condition },
				nil,[_side]
			] call ace_interact_menu_fnc_createAction;
			_ace_relayActionOFF = [
				"relayActionOff",
				("<t color=""#FF0000"">" + ("DEACTIVATE RADIO REPEATER") + "</t>"),
				"",
				{
					[_this select 0, (_this select 2) select 0] call adv_radioRelay_scriptfnc_turnOff;
				},
				{ !([_this select 0, _this select 1, (_this select 2) select 0] call adv_radioRelay_condition) },
				nil,[_side]
			] call ace_interact_menu_fnc_createAction;
		
			//adding the actions to the relay:
			[_relay , 0, ["ACE_MainActions"],_ace_relayActionON] call ace_interact_menu_fnc_addActionToObject;
			[_relay , 0, ["ACE_MainActions"],_ace_relayActionOFF] call ace_interact_menu_fnc_addActionToObject;
			
			//and make it carryable if it's a DataTerminal:
			if (typeOf _relay == "Land_DataTerminal_01_F") then {
				[_relay,true,[0,1,0]] call ace_dragging_fnc_setDraggable;
			};
			
		} else {
			//if ace is not present, we have to add actions the vanilla way:
			[_relay,_side] spawn {
				params ["_relay","_side"];
				while { alive _relay } do {
					waitUntil { sleep 1; (damage _relay) < 0.6 };
					
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
					waitUntil { sleep 1; _relay getVariable (format ["adv_var_isRelay_%1",_side]) };
					waitUntil { sleep 1; ((damage _relay) > 0.6 || !alive _relay) || !(_relay getVariable (format ["adv_var_isRelay_%1",_side])) };
					if (!isNil "adv_handle_relayActionOff") then { _relay removeAction adv_handle_relayActionOff; };
				};
			};
		};
	};

	//code that's only executed on the server, that handles the deactivation of the radio relay by damage or height or speed, and that handles the effect of the relay:
	if (isServer) exitWith {
		if ( _relay getVariable ["adv_radioRelay_available",true] ) then {
			_relay setVariable ["adv_radioRelay_available",false];
			[_relay,_side,_minHeight] spawn {
			params ["_relay","_side","_minHeight"];
				while {alive _relay} do {
					waitUntil { sleep 2; damage _relay > 0.6 || !alive _relay || getTerrainHeightASL (getPos _relay) < _minHeight || !((speed _relay) == 0) };
					_relay setVariable ["adv_var_isRelay_WEST",false,true];
					_relay setVariable ["adv_var_isRelay_EAST",false,true];
					_relay setVariable ["adv_var_isRelay_INDEPENDENT",false,true];
					waitUntil { sleep 2; damage _relay < 0.4 || !alive _relay  || ((speed _relay) == 0) };
				};
				_relay setVariable [format ["adv_radioRelay_available",true]];
			};
		};
		if !( missionNamespace getVariable [format ["ADV_var_relayScriptHasRun_%1",_side],false] ) then {
			adv_radioRelay_terminals = [];
			{ adv_radioRelay_terminals pushBack _x; } forEach (allMissionObjects "Land_DataTerminal_01_F");
			missionNamespace setVariable [format ["ADV_var_relayScriptHasRun_%1",_side],true,true];
			while {true} do {
				waitUntil { sleep 2; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+adv_radioRelay_terminals) > 0 };
				{
					if ( (side _x) == _side ) then {
						_x setVariable ["tf_sendingDistanceMultiplicator", 2, true];
					};
				} forEach allPlayers;
				waitUntil { sleep 2; {_x getVariable [format ["adv_var_isRelay_%1",_side],false]} count (vehicles+adv_radioRelay_terminals) == 0 };
				{
					if ( (side _x) == _side || (side _x) == sideEnemy ) then {
						_x setVariable ["tf_sendingDistanceMultiplicator", 1, true];
					};
				} forEach allPlayers;
			};
		};
	};
};

_handle;
//Thank you for your attention.