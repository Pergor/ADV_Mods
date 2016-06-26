/*
ADV_fnclib_fnc_acreSettings by Belbo
contains all the variables that are important for acre2
*/

if ( isClass (configFile >> "CfgPatches" >> "acre_main") ) exitWith {

	//Initialize ACRE radios
	[true] call acre_api_fnc_setRevealToAI;
	[false] call acre_api_fnc_setFullDuplex;
	[true] call acre_api_fnc_setInterference;
	[0.6] call acre_api_fnc_setLossModelScale;
	//babel:
	[[west, "English"],[east, "Russian"],[independent, "English", "Russian"],[civilian, "English", "Russian"]] call acre_api_fnc_setupMission;
	["en", "English"] call acre_api_fnc_babelAddLanguageType;
	["ru", "Russian"] call acre_api_fnc_babelAddLanguageType;

	if (hasInterface) then {
		switch ( side (group player) ) do {
			case west: {
				["en"] call acre_api_fnc_babelSetSpokenLanguages;
			};
			case civilian: {
				["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
			};
			case east: {
				["ru"] call acre_api_fnc_babelSetSpokenLanguages;
			};
			case independent: {
				["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
			};
		};
	};
	
	true
};