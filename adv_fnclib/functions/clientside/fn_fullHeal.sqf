/*
ADV_fnclib_fnc_fullHeal - by Belbo:

Heals unit completely, with differenct ace_medical-levels and vanilla.

Possible call - has to be called on either the client with [player] or on server with the unit's name:
[player] call ADV_fnclib_fnc_fullHeal;
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