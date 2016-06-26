/*
ADV_fnclib_fnc_paraBomb by Belbo

Spawns a bomb at a chute in the given height.
Call with:
[spawnLocation,500] call ADV_fnc_paraBomb;
or
["landingMarker",500] call ADV_fnc_paraBomb;

_this select 0 = Object or Marker at the spawn Location (object or string);
_this select 1 = Height (number);
_this select 2 = Type of Bomb (String - optional);
*/

if !(isServer || hasInterface) exitWith {};

params [
	["_target", objNull, [objNull,""]],
	["_height", 800, [0]],
	["_bombType", "Bo_GBU12_LGB", [""]],
	"_targetType","_targetPos", "_chute", "_bomb"
];

_targetType = typeName (_target);

_targetPos = nil;
if (_targetType == "STRING") then {
	_targetpos = [getMarkerPos _target select 0, getMarkerPos _target select 1, _height];
};
if (_targetType == "OBJECT") then {
	_targetPos = [getPos _target select 0, getPos _target select 1, _height];
};
_chute = createVehicle ["B_Parachute_02_F", _targetPos, [], 0, "NONE"];
_bomb = createVehicle [_bombType, _targetpos, [], 0, "NONE"];
_bomb attachTo [_chute, [0, 0, 0]];
_chute setVelocity [0,0,-50];

if (true) exitWith {};