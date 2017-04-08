/*
 * Author: Belbo
 *
 * Checks if a member of the target's group has a specified string in it's name.
 *
 * Arguments:
 * 0: unit - <OBJECT>
 * 1: string to check for - <STRING>
 *
 * Return Value:
 * group member present? - <BOOL>
 *
 * Example:
 * _commander_1_isInGroup = [player,"commander_1"] call adv_fnclib_fnc_findingroup
 *
 * Public: No
 */

params [
	["_target", player, [objNull]]
	,["_str", "", [""]]
];

private _grp = group _target;
private _units = units _grp;
private _count = {
	private _name = str _x;
	[_str, _name ] call BIS_fnc_inString;
} count _units;

if ( _count > 0 ) exitWith {true};

false;