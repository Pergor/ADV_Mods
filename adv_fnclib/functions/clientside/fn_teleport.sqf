/*
ADV_fnc_teleport by Belbo

Attaches an action to an object that allows teleport to a provided location from this object.

Possible call - has to be executed on each client locally:
[START,TARGET] call ADV_fnclib_fnc_teleport;

_this select 0 = objects the action should be attached to. (object)
_this select 1 = object, marker or position the teleport should lead to. (object, marker, positionATL)
_this select 2 = Name for the location. (optional - string)
_this select 3 = Text for the action. Overwrites _this select 2, name of the location. (optional - string)
*/

params [
	["_start", objNull, [objNull]],
	["_target", objNull, [objNull,"",[]]],
	["_name","",[""]],
	["_text","",[""]]
];
_name = if (_name isEqualTo "" || isNil "_name") then {_target} else {_name};

adv_scriptfnc_teleport = {
	params [
		["_unit", player, [objNull]],
		["_target", objNull, [objNull,"",[]]],
		["_name","",[""]],
		["_text","",[""]]
	];
	_targetPos = switch (typeName _target) do {
		case "STRING": { getMarkerPos _target };
		case "OBJECT": { getPosATL _target };
		case "ARRAY": { _target };
		default {nil};
	};
	titleText ["", "BLACK OUT", 2];
	sleep 2;
	if (_text isEqualTo "" || isNil "_text") then {
		titleText [format ["You are being teleported to %1.", _name], "BLACK FADED"];
	};
	sleep 1;
	if (_target isKindOf "AllVehicles") then {
		_unit moveInCargo _target;
	} else {
		_unit setPosATL _targetPos;
	};
	sleep 1;
	titleFadeOut 2;
};

_actionText = if (_text isEqualTo "" || isNil "_text") then {
	format ["<t color='#00FF00'>Teleport to %1</t>",_name];
} else {
	format ["<t color='#00FF00'>%1</t>",_text];
};

_start addAction [
	_actionText,
	{
		[_this select 1, (_this select 3) select 0, (_this select 3) select 1, (_this select 3) select 2] spawn adv_scriptfnc_teleport;
	},[_target,_name,_text],6,false,true,"","true",5
];
	
if (true) exitWith {};