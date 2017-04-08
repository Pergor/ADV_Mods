/*
 * Author: Belbo
 *
 * Adds an action to an object that allows teleport to a provided location from this object.
 *
 * Arguments:
 * 0: object the action should be attached to. - <OBJECT>
 * 1: target position of teleport. Can be position, object or marker. - <ARRAY>, <OBJECT>, <STRING>
 * 2: name of the location to be shown while being teleported (optional) - <STRING>
 * 3: custom name of the teleport action. Overrides _this select 2 (optional) - <STRING>
 *
 * Return Value:
 * Function executed - <BOOL>
 *
 * Example:
 * [start, target] spawn ADV_fnclib_fnc_teleport;
 *
 * Public: Yes
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

_id = _start addAction [
	_actionText,
	{
		[_this select 1, (_this select 3) select 0, (_this select 3) select 1, (_this select 3) select 2] spawn adv_scriptfnc_teleport;
	},[_target,_name,_text],6,false,true,"","true",5
];
	
_id;