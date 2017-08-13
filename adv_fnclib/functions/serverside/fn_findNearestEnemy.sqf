/*
 * Author: Belbo
 *
 * Finds the nearest enemy to the target in the provided radius.
 *
 * Arguments:
 * 0: target - <OBJECT>
 * 1: radius - <NUMBER>
 *
 * Return Value:
 * Found enemy or objNull if no enemy is within radius - <OBJECT>
 *
 * Example:
 * [player,1000] call adv_fnclib_fnc_findNearestEnemy;
 *
 * Public: No
 */

params [
	["_unit", objNull, [objNull]]
	,["_radius", 2000, [0]]
];

/*
//maybe there already is one?
private _closest = (_unit findNearestEnemy _unit);
if ( !isNull _closest && (_unit distance _closest) < 100 ) exitWith {
	_closest;
};
*/

//define the output if no enemy is found:
private _closest = objNull;

//who are our enemies?
private _enemySides = [side group _unit] call BIS_fnc_enemySides;

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