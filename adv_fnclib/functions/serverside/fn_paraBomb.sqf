/*
 * Author: Belbo
 *
 * Creates a bomb in air that slides down with a parachute.
 *
 * Arguments:
 * 0: spawn position/object/marker - <ARRAY>, <OBJECT> or <STRING>
 * 1: Height (optional) - <NUMBER>
 * 2: Classname of Bomb (optional) - <STRING>
 *
 * Return Value:
 * Spawned bomb - <OBJECT>
 *
 * Example:
 * _bomb = [spawnLocation,500,"Bo_GBU12_LGB"] call adv_fnclib_fnc_paraBomb;
 *
 * Public: Yes
 */

if !(isServer || hasInterface) exitWith {};

params [
	["_target", objNull, [objNull,"",[]]],
	["_height", 800, [0]],
	["_bombType", "Bo_GBU12_LGB", [""]],
	"_targetType","_targetPos", "_chute", "_bomb"
];

_targetType = typeName (_target);

_targetPos = nil;
private _targetPos = call {
	if (_target isEqualType "") exitWith {
		[getMarkerPos _target select 0, getMarkerPos _target select 1, _height];
	};
	if (_target isEqualType objNull) exitWith {
		[getPosWorld _target select 0, getPosWorld _target select 1, _height];
	};
	if (_target isEqualType []) exitWith {
		[_target select 0,_target select 1, _height];
	};
	nil;
};
_chute = createVehicle ["B_Parachute_02_F", _targetPos, [], 0, "NONE"];
_bomb = createVehicle [_bombType, _targetpos, [], 0, "NONE"];
_bomb attachTo [_chute, [0, 0, 0]];
_chute setVelocity [0,0,-50];

_bomb;