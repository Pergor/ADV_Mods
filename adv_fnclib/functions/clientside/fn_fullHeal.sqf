/*
 * Author: Belbo
 *
 * Heals target in vanilla and all ace_medical-levels.
 *
 * Arguments:
 * 0: target - <OBJECT>
 *
 * Return Value:
 * Function executed - <BOOL>
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
	if ( (missionnamespace getVariable ["ace_medical_level",2]) > 1 ) then {
		if (isNull player) then {
			[objNull,_target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
		} else {
			[player,_target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
		};
	} else {
		_target setVariable ["ace_medical_pain", 0, true];
		_target setVariable ["ace_medical_morphine", 0, true];
		
		_target setVariable ["ace_medical_bloodVolume", 100, true];
		
		_target setVariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0], true];

		_target setHitPointDamage ["hitHead", 0];
		_target setHitPointDamage ["hitBody", 0];
		_target setHitPointDamage ["hitArms", 0];
		_target setHitPointDamage ["hitLegs", 0];

		[_target,false] call ACE_medical_fnc_setUnconscious;
	};
};

true;