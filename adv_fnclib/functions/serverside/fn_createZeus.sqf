/*
create zeus script by Belbo

Creates a zeus module for a player with a specified unit's name

_this select 0 = string of player's unit - (string)

call like this:
["zeus_1"] remoteExecCall ["adv_fnc_createZeus",2];
*/

if (!isServer) exitWith {};

params [
	["_unitName", "", [""]]
];

{
	_unit = _x;
	if ( isNull (getAssignedCuratorLogic _unit) && str _unit == _unitName ) then {
		_grp = createGroup sideLogic;
		_curator = _grp createUnit ["ModuleCurator_F",[0,0,0],[],0,"NONE"];
		_curator setVariable ["Addons",2,true];
		//_curator addCuratorAddons activatedAddons;
		
		_curator addCuratorEditableObjects [vehicles,true];
		_curator addCuratorEditableObjects [(allMissionObjects "Man"), false];
		_curator addCuratorEditableObjects [(allMissionObjects "Air"), true];
		_curator addCuratorEditableObjects [(allMissionObjects "Ammo"), false];
		_curator setVariable ["birdType",""];
		_curator setVariable ["showNotification",false];
		[_curator, [-1, -2, 2]] call bis_fnc_setCuratorVisionModes;
		
		/*
		[_curator, "player",["%ALL"]] call BIS_fnc_setCuratorAttributes;
		[_curator, "object",["%ALL"]] call BIS_fnc_setCuratorAttributes;
		[_curator, "group",["%ALL"]] call BIS_fnc_setCuratorAttributes;
		[_curator, "waypoint",["%ALL"]] call BIS_fnc_setCuratorAttributes;
		[_curator, "marker",["%ALL"]] call BIS_fnc_setCuratorAttributes;
		
		_cfg = (configFile >> "CfgPatches");
		_newAddons = [];
		for "_i" from 0 to ((count _cfg) - 1) do {
			_name = configName (_cfg select _i);
			if (! (["a3_", _name] call BIS_fnc_inString)) then {_newAddons pushBack _name};
		};
		if (count _newAddons > 0) then {_curator addCuratorAddons _newAddons};
		*/
		
		_curator addEventHandler ["CuratorPinged", {
			_curator = _this select 0;
			_zeus = getAssignedCuratorUnit _curator;
			if (isNull _zeus) then {
				unassignCurator _curator;
				deleteVehicle _curator;
			};
		}];
		
		_unit assignCurator _curator;
	};
	nil;
} count allPlayers;

true;