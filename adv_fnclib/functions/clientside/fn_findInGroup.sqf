/*
ADV_fnclib_fnc_findInGroup
Checks if a member of the target's group has a specified string in it's name.

possible call - has to be executed locally:
[player,"commander_1"] call ADV_fnclib_fnc_findInGroup

Return value: Boolean
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