/*
ADV_fnclib_fnc_CASRun by Belbo

Spawns a CAS run at given position with given direction, given plane class and given type.
Call with:
[attackLogic,0,"B_Plane_CAS_01_F",0] call ADV_fnc_CASRun;

_this select 0 = position of attack (position in form of [x,y,z], marker or object);
_this select 1 = direction of attack (number);
_this select 2 = class of attack plane (string - optional);
_this select 3 = type of attack run - 0 = gun only, 1 = rockets only, 2 = gun and rockets (scalar - optional);
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