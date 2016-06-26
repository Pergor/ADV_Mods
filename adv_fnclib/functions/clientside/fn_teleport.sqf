/*
ADV_fnclib_fnc_teleport by Belbo

Attaches an action to an object that allows teleport to a provided location from this object.

Possible call - has to be executed on each client locally:
[START,TARGET] call ADV_fnc_teleport;

_this select 0 = objects the action should be attached to. (object)
_this select 1 = object, marker or position the teleport should lead to. (object, marker, positionATL)
_this select 2 = Name for the location. (optional - string)
*/

params [
	["_start", objNull, [objNull]],
	["_target", objNull, [objNull,"",[]]],
	["_name","",[""]]
];
_name = if (_name == "") then {_target} else {_name};

adv_scriptfnc_teleport = {
	params [
		["_unit", player, [objNull]],
		["_target", objNull, [objNull,"",[]]]
	];
	_targetPos = switch (typeName _target) do {
		case "STRING": { getMarkerPos _target };
		case "OBJECT": { getPosATL _target };
		case "ARRAY": { _target };
		default {nil};
	};
	titleText ["", "BLACK OUT", 2];
	sleep 2;
	titleText [format ["You are being teleported to %1.", _target], "BLACK FADED"];
	sleep 1;
	if (_target isKindOf "AllVehicles") then {
		_unit moveInCargo _target;
	} else {
		_unit setPosATL _targetPos;
	};
	sleep 1;
	titleFadeOut 2;
};

_start addAction [
	format ["<t color='#00FF00'>Teleport to %1</t>",_name],
	{
		[_this select 1,_this select 3] spawn adv_scriptfnc_teleport;
	},_target,6,false,true,"","player distance cursortarget <5"
];
	
if (true) exitWith {};