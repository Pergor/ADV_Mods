﻿/*
 * Author: Belbo
 *
 * Adds insignia to the unit depending on adv_missiontemplate-variables, side and rank of unit.
 *
 * Arguments:
 * 0: target - <OBJECT>
 *
 * Return Value:
 * Insignia applied? - <BOOL>
 *
 * Example:
 * [player] call adv_fnclib_fnc_insignia;
 *
 * Public: Yes
 */

params [
	["_target", player, [objNull]],
	"_insigniaArray","_insignia"
];

private _insignia = _target call BIS_fnc_getUnitInsignia;
[_target,""] call BIS_fnc_setUnitInsignia;

//adv insignia
if !( side (group _target) == east || side (group _target) == civilian ) exitWith {
	_insigniaArray = if ( ["ucp",uniform _target] call BIS_fnc_inString ) then {
		switch (rank _target) do {
			case "PRIVATE": {["ADV_insignia_usarmy_ucp_00","ADV_insignia_usarmy_ucp_01","ADV_insignia_usarmy_ucp_02","ADV_insignia_usarmy_ucp_02"];};
			case "CORPORAL": {["ADV_insignia_usarmy_ucp_03"];};
			case "SERGEANT": {["ADV_insignia_usarmy_ucp_04","ADV_insignia_usarmy_ucp_04","ADV_insignia_usarmy_ucp_05","ADV_insignia_usarmy_ucp_06","ADV_insignia_usarmy_ucp_07"];};
			case "LIEUTENANT": {["ADV_insignia_usarmy_ucp_08","ADV_insignia_usarmy_ucp_09","ADV_insignia_usarmy_ucp_09"];};
			case "CAPTAIN": {["ADV_insignia_usarmy_ucp_10"];};
			case "MAJOR": {["ADV_insignia_usarmy_ucp_11","ADV_insignia_usarmy_ucp_11","ADV_insignia_usarmy_ucp_12"];};
			case "COLONEL": {["ADV_insignia_usarmy_ucp_13"];};
		};	
	} else {
		switch (rank _target) do {
			case "PRIVATE": {["ADV_insignia_usarmy_00","ADV_insignia_usarmy_01","ADV_insignia_usarmy_02","ADV_insignia_usarmy_02"];};
			case "CORPORAL": {["ADV_insignia_usarmy_03"];};
			case "SERGEANT": {["ADV_insignia_usarmy_04","ADV_insignia_usarmy_04","ADV_insignia_usarmy_05","ADV_insignia_usarmy_06","ADV_insignia_usarmy_07"];};
			case "LIEUTENANT": {["ADV_insignia_usarmy_08","ADV_insignia_usarmy_09","ADV_insignia_usarmy_09"];};
			case "CAPTAIN": {["ADV_insignia_usarmy_10"];};
			case "MAJOR": {["ADV_insignia_usarmy_11","ADV_insignia_usarmy_11","ADV_insignia_usarmy_12"];};
			case "COLONEL": {["ADV_insignia_usarmy_13"];};
		};
	};
	_insignia = selectRandom _insigniaArray;
	[_target,_insignia] call BIS_fnc_setUnitInsignia;
	true;
};
if ( side (group _target) == east ) exitWith {
	_insigniaArray = switch (rank _target) do {
		case "PRIVATE": {["ADV_insignia_rus_00"];};
		case "CORPORAL": {["ADV_insignia_rus_01"];};
		case "SERGEANT": {["ADV_insignia_rus_02","ADV_insignia_rus_03","ADV_insignia_rus_04","ADV_insignia_rus_05"];};
		case "LIEUTENANT": {["ADV_insignia_rus_06","ADV_insignia_rus_07","ADV_insignia_rus_08"];};
		case "CAPTAIN": {["ADV_insignia_rus_09"];};
		case "MAJOR": {["ADV_insignia_rus_10","ADV_insignia_rus_10","ADV_insignia_rus_11"];};
		case "COLONEL": {["ADV_insignia_rus_12"];};
	};
	_insignia = selectRandom _insigniaArray;
	[_target,_insignia] call BIS_fnc_setUnitInsignia;
	true;
};

[_target,_insignia] call BIS_fnc_setUnitInsignia;

false;