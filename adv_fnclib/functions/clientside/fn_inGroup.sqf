/*
 * Author: Belbo
 *
 * Checks if string is in targets groupID
 *
 * Arguments:
 * 0: target - <OBJECT>
 * 1: String to check for - <STRING>
 *
 * Return Value:
 * Is unit in group with provided string? - <BOOL>
 *
 * Example:
 * _isInJupiter = [player,"JUPITER"] call ADV_fnclib_fnc_inGroup
 *
 * Public: No
 */

params [
	["_target", player, [objNull]]
	,["_grpName", "", [""]]
];

if ( [_grpName, groupID (group _target) ] call BIS_fnc_inString ) exitWith {true};

false;