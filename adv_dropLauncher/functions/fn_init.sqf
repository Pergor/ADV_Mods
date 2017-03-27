/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

//add names of used disposable launchers, if necessary:
ADV_array_dropLaunch = [
	"ACE_LAUNCH_NLAW_USED_F"
	,"BWA3_PZF3_USED","BWA3_RGW90_USED"
	,"RHS_WEAP_M136_HP_USED","RHS_WEAP_M136_USED","RHS_WEAP_M136_HEDP_USED"
	,"RHS_WEAP_M72A7_USED"
	,"RHS_WEAP_RPG26_USED","RHS_WEAP_RSHG2_USED","RHS_WEAP_RPG18_USED"
	"STI_M136_USED"
];

if ( !hasInterface ) exitWith {};

//ace-selector and start of the initial action handling:
if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {
	call ADV_dropLauncher_fnc_aceAction;
} else {
	/*
	ADV_action_dropIt = player addAction [
		"<t color=""#FFFFFF"">" + (localize "STR_ADV_DROPLAUNCHER_DROPLAUNCHER") + "</t>",
		{ [player] call ADV_dropLauncher_fnc_dropLauncher },
		"",
		6,
		true,
		true,
		"",
		"( toUpper (secondaryWeapon player) ) in ADV_array_dispLaunch"
	];
	*/
	ADV_dropLauncher_handle_mainLoop = [] spawn ADV_dropLauncher_fnc_loop;
};