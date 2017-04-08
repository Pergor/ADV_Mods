/*
 * Author: Belbo
 *
 * Creats CAS run on target
 *
 * Arguments:
 * 0: target position - <ARRAY>, <OBJECT>, <STRING>
 * 1: direction of attack (optional) - <NUMBER>
 * 2: class of attack plane (optional) - <STRING>
 * 3: type of attack run - 0 = gun only, 1 = rockets only, 2 = gun and rockets (optional) - <NUMBER>
 *
 * Return Value:
 * Function executed <BOOL>
 *
 * Example:
 * [attackLogic,0,"B_Plane_CAS_01_F",0] call ADV_fnclib_fnc_CASRun;
 *
 * Public: Yes
 */

if !(isServer || hasInterface) exitWith {};

params [
	["_position", [0,0,0], [[],"",objNull]],
	["_dir", 0, [0]],
	["_class", "B_Plane_CAS_01_F", [""]],
	["_type", 0, [0]],
	"_pos","_dummy"
];

_pos = switch (typeName _position) do {
	case "STRING": {getMarkerPos _position};
	case "OBJECT": {getPos _position};
	case "ARRAY": {_position};
	default {[0,0,0]};
};
_dummy = "LaserTargetCBase" createVehicle _pos;
_dummy enableSimulation false; _dummy hideObject true;
_dummy setVariable ["vehicle",_class];
_dummy setVariable ["type",_type];
_dummy setDir _dir;

[_dummy,nil,true] spawn BIS_fnc_moduleCAS;

[_dummy] spawn {
    sleep 45;
    deleteVehicle (_this select 0);
};

true;