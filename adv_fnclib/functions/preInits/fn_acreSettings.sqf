/*
ADV_fnclib_fnc_acreSettings by Belbo
contains all the variables that are important for acre2
*/
params [
	["_initState", "", [""]]
];

if ( hasInterface && !isServer && _initState == "preInit" ) exitWith {
	adv_radioSettings_exitState = "exit with preInit";
};
if ( isServer && _initState == "postInit") exitWith {
	adv_radioSettings_exitState = "exit with postInit";
};

if ( isClass (configFile >> "CfgPatches" >> "acre_main") ) exitWith {
	//Initialize ACRE radios
	[true, true] call acre_api_fnc_setupMission;
	[true] call acre_api_fnc_setRevealToAI;
	[false] call acre_api_fnc_setFullDuplex;
	[true] call acre_api_fnc_setInterference;
	[true] call acre_api_fnc_ignoreAntennaDirection;
	[0.15] call acre_api_fnc_setLossModelScale;
	//radios
	acre_westPersonalRadio = "ACRE_PRC152";
	acre_eastPersonalRadio = "ACRE_PRC148";
	acre_guerPersonalRadio = "ACRE_PRC148";
	
	acre_westRiflemanRadio = "ACRE_PRC343";
	acre_eastRiflemanRadio = "ACRE_PRC343";
	acre_gerRiflemanRadio = "ACRE_PRC343";
	
	acre_westBackpackRadio = "ACRE_PRC117F";
	acre_eastBackpackRadio = "ACRE_PRC117F";
	acre_guerBackpackRadio = "ACRE_PRC117F";
	//channel setup
	_channelNames = ["VEHICLES","PLTNET 1","LOG","RECON","AIRNET","PLTNET 2","PLTNET 3","PLTNET 4","CHAN 9","CHAN 10","CHAN 11","CHAN 12","CHAN 13","CHAN 14","CHAN 15"];
	_148chNames = ["1-VEHICLES","2-PLTNET 1","3-LOG","4-RECON","5-AIRNET"];
	for "_i" from 1 to (count _channelNames) do {
		["ACRE_PRC152", "default", _i, "description", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC117F", "default", _i, "name", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		
		["ACRE_PRC152", "default2", _i, "description", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC117F", "default2", _i, "name", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		
		["ACRE_PRC152", "default3", _i, "description", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC117F", "default3", _i, "name", _channelNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
	};
	for "_i" from 1 to (count _148chNames) do {
		["ACRE_PRC148", "default", _i, "label", _148chNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC148", "default2", _i, "label", _148chNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC148", "default3", _i, "label", _148chNames select (_i-1)] call acre_api_fnc_setPresetChannelField;
	};
	//zeus channel
	["ACRE_PRC148", "default", 16, "label", "16-ADMIN"] call acre_api_fnc_setPresetChannelField;
	["ACRE_PRC152", "default", 16, "description", "ADMIN"] call acre_api_fnc_setPresetChannelField;
	["ACRE_PRC117F", "default", 16, "name", "ADMIN"] call acre_api_fnc_setPresetChannelField;
	for "_i" from 2 to 3 do {
		["ACRE_PRC148", format ["default%1",_i], 16, "label", "16-ADMIN"] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC152", format ["default%1",_i], 16, "description", "ADMIN"] call acre_api_fnc_setPresetChannelField;
		["ACRE_PRC117F", format ["default%1",_i], 16, "name", "ADMIN"] call acre_api_fnc_setPresetChannelField;
	};

	[] spawn {
		
		//babel:
		private _bluforLanguage = "English";
		private _opforLanguage = "Farsi";
		[[west, _bluforLanguage],[east, _opforLanguage],[independent, _bluforLanguage, _opforLanguage],[civilian, _bluforLanguage, _opforLanguage, "Local Language"]] call acre_api_fnc_babelSetupMission;
		["en", _bluforLanguage] call acre_api_fnc_babelAddLanguageType;
		["ru", _opforLanguage] call acre_api_fnc_babelAddLanguageType;
		["gr", "Local Language"] call acre_api_fnc_babelAddLanguageType;
		
		//local stuff:
		if (hasInterface) then {
			waitUntil { player == player && time > 1};
			//presets and languages per side:
			switch ( side (group player) ) do {
				case civilian: {
					["en","ru","gr"] call acre_api_fnc_babelSetSpokenLanguages;
				};
				case east: {
					private _languages = ["ru"];
					_languages call acre_api_fnc_babelSetSpokenLanguages;
				};
				case independent: {
					call {
						_languages = ["en","gr"];
						_languages call acre_api_fnc_babelSetSpokenLanguages;
					};
				};
				default {
					private _languages = ["en"];
					_languages call acre_api_fnc_babelSetSpokenLanguages;
				};
			};
		};
	};
};
nil;