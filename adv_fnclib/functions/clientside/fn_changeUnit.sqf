/*
adv_fnclib_fnc_changeUnit by Belbo

Changes the vehicleVarName of a unit.

Possible call - has to be executed where unit is local:
[cursorTarget,"player_12"] call ADV_fnclib_fnc_changeUnit;
-> cursorTarget will be globally known as player_12 afterwards.

_this select 0 = unit that has to be renamed (object).
_this select 1 = new varName (string)

Returns new vehicleVarName of object or false if object is not local.
*/

params [
	["_target", objNull, [objNull]],
	["_newName", "", [""]]
];

if !(local _target) exitWith {false};

private _oldName = str _target;
[_target,_newName] remoteExec ["setVehicleVarName",0];
_target call compile format ["%1 = _this; publicVariable '%1'", _newName];

private _return = vehicleVarName _target;
_return;