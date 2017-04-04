/*
ADV_fnclib_fnc_inGroup
Checks if target has a certain groupID

possible call - has to be executed locally:
[player,"JUPITER"] call ADV_fnclib_fnc_inGroup

Return value: Boolean
*/

params [
	["_target", player, [objNull]]
	,["_grpName", "", [""]]
];

if ( [_grpName, groupID (group _target) ] call BIS_fnc_inString ) exitWith {true};

false;