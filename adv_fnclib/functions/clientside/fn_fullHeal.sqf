/*
 * Author: Belbo
 *
 * Heals target in vanilla and all ace_medical-levels.
 *
 * Arguments:
 * 0: target - <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call adv_fnclib_fnc_fullHeal
 *
 * Public: No
 */

params [
	["_target", player, [objNull]]
];

_target setDamage 0;

if (isClass(configFile >> "CfgPatches" >> "ace_medical")) exitWith {
	if (isNull player) then {
		[objNull,_target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
	} else {
		[player,_target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
	};
	nil
};