//Pretty name shown inside of Addon Options
#define CBA_SETTINGS_CAT "adv_aceCPR"

//CPR quotient
[
    "adv_aceCPR_quotient", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "CPR Resuscitate Quotient", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,50,1,2], // data for this setting: [min, max, default, number of shown trailing decimals]
    false // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
] call CBA_Settings_fnc_init;

//CPR Probabilities
adv_aceCPR_probabilities = [40,15,5,85];

//Resuscitate Probability Doctor
[
    "adv_aceCPR_probabilities_doctor", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Resuscitate Chance (Doctor)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,100,40,1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
    {
        params ["_value"];
        adv_aceCPR_probabilities set [0,_value];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

//Resuscitate Probability Medic
[
    "adv_aceCPR_probabilities_medic", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Resuscitate Chance (Medic)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,100,15,1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
    {
        params ["_value"];
        adv_aceCPR_probabilities set [1,_value];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

//Resuscitate Probability Doctor
[
    "adv_aceCPR_probabilities_soldier", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Resuscitate Chance (Soldier)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,100,5,1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
    {
        params ["_value"];
        adv_aceCPR_probabilities set [2,_value];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

//Resuscitate Probability Doctor
[
    "adv_aceCPR_probabilities_doctor", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Resuscitate Chance (AED)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0,100,85,1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
    {
        params ["_value"];
        adv_aceCPR_probabilities set [3,_value];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;


/*
//Uncomment this if you want clients to be able to freely set debug.
//Debug
[
    "adv_aceCPR_diag", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Debug", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    CBA_SETTINGS_CAT, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: default
    false // "global" flag. Set this to true to always have this setting forced on all clients in multiplayer
] call CBA_Settings_fnc_init;
*/