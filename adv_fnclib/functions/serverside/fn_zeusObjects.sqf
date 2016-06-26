/*
adv_fnclib_fnc_zeusObjects by Belbo
Makes most units placed in the editor and playable units editable by Zeus.
Call from init.sqf via:
if (isServer) then {[CURATORMODULENAME] spawn compile preprocessFileLineNumbers "fn_zeus.sqf";};
or:
if (isServer) then {[] spawn compile preprocessFileLineNumbers "fn_zeus.sqf";};
*/

if (!isServer) exitWith {};

//_curator = [_this, 0, true] call BIS_fnc_param;

params [
	["_curator", true, [true, objNull]]
];

//makes all units continuously available to Zeus (for respawning players and AI that's being spawned by a script.)
switch (typeName _curator) do {
	case "OBJECT": {
		//adds objects placed in editor:
		_curator addCuratorEditableObjects [vehicles,true];
		_curator addCuratorEditableObjects [(allMissionObjects "Man"), false];
		_curator addCuratorEditableObjects [(allMissionObjects "Air"), true];
		_curator addCuratorEditableObjects [(allMissionObjects "Ammo"), false];
		//makes all units continuously available to Zeus (for respawning players and AI that's being spawned by a script.)
		while {true} do {
			_curatorUnit = getAssignedCuratorUnit _curator;
			if (!isNil "_curatorUnit") then {
				_curator addCuratorEditableObjects [allUnits, false];
				_curator addCuratorEditableObjects [vehicles, true];
			};
			sleep 5;
		};
	};
	default {
		{
			_x addCuratorEditableObjects [vehicles,true];
			_x addCuratorEditableObjects [(allMissionObjects "Man"), false];
			_x addCuratorEditableObjects [(allMissionObjects "Air"), true];
			_x addCuratorEditableObjects [(allMissionObjects "Ammo"), false];
			nil;
		} count allCurators;
		while {true} do {
			{
				_curatorUnit = getAssignedCuratorUnit _x;
				if (!isNil "_curatorUnit") then {
					_x addCuratorEditableObjects [allUnits, false];
					_x addCuratorEditableObjects [vehicles, true];
				};
			} count allCurators;
			sleep 5;
		};
	};
};

if (true) exitWith {};