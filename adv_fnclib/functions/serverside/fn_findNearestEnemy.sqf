/*
adv_fnclib_fnc_findNearestEnemy: Finds the nearest enemy.

	[player,1000] call adv_fnclib_fnc_findNearestEnemy;

_this select 0 = unit to which the next enemy should be found.
_this select 1 = radius in which to look for the nearest enemy.

return: closest enemy within radius or Null-Object if none is found.
*/

params [
	["_unit", objNull, [objNull]]
	,["_radius", 2000, [0]]
	,"_closest"
];
//maybe there already is one?
_closest = (_unit findNearestEnemy _unit);
if ( !isNull _closest ) exitWith {
	_closest;
};
//who are our enemies?
private _enemySides = [side _unit] call BIS_fnc_enemySides;
//are there any enemies within the radius?
private _nearEnemies = allUnits select { (_x distance _unit) < _radius && (side _x) in _enemySides};
//let's loop through the enemies to find the closest one:
private _closestdist = _radius+1;
{
	if (_x distance _unit < _closestdist) then {
		_closest = _x;
		_closestdist = _x distance _unit;
	};
} forEach _nearEnemies;
//return the closest at the end of the function:
_closest;