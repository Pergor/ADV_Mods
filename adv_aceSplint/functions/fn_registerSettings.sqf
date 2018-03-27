//Pretty name shown inside of Addon Options
#define CBA_SETTINGS_CAT "adv_aceSplit"

//Reopen Chance
[
    "adv_aceSplint_reopenChance", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Reopen Chance (%)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,3600,30,1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
] call CBA_Settings_fnc_init;

//Reopen Time
[
    "adv_aceSplint_reopenTime", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Reopen Time", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,100,30,0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
] call CBA_Settings_fnc_init;

/*
//Uncomment this if you want clients to be able to freely set debug.
//Debug
[
    "adv_aceSplit_diag", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Debug", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: default
    false // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
] call CBA_Settings_fnc_init;
*/