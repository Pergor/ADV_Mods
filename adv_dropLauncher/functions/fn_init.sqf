/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

//add names of used disposable launchers, if necessary:
ADV_array_dropLaunch = [];
if (isClass(configFile >> "CfgPatches" >> "ace_disposable")) then {
	ADV_array_dropLaunch pushBack "LAUNCH_NLAW_F";
};
ADV_array_dropLaunch append [
	"BWA3_Pzf3","BWA3_RGW90"
	,"BWA3_PZF3_LOADED","BWA3_RGW90_LOADED"
	,"STI_M136"
	,"CUP_launch_NLAW","CUP_launch_RPG18","CUP_launch_M136"
];

if ( !hasInterface ) exitWith {};

[] spawn {
	waitUntil {player == player};
	adv_dropLauncher_evh = player addEventhandler ["fired",
		{
			params ["_unit","_weapon"];
			if !( _weapon isEqualTo (secondaryWeapon _unit) ) exitWith {};
			if ( (toUpper _weapon) in ADV_array_dropLaunch ) exitWith {
				[_unit] spawn adv_dropLauncher_fnc_dropLauncher;
			};
		}
	];
};
/*
ADV_array_dropLaunch = [
	"ACE_LAUNCH_NLAW_USED_F"
	,"BWA3_PZF3_USED","BWA3_RGW90_USED"
	,"RHS_WEAP_M136_HP_USED","RHS_WEAP_M136_USED","RHS_WEAP_M136_HEDP_USED"
	,"RHS_WEAP_M72A7_USED"
	,"RHS_WEAP_RPG26_USED","RHS_WEAP_RSHG2_USED","RHS_WEAP_RPG18_USED"
	,"STI_M136_USED"
];

if ( !hasInterface ) exitWith {};
//ace-selector and start of the initial action handling:
if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {
	call ADV_dropLauncher_fnc_aceAction;
} else {
	ADV_dropLauncher_handle_mainLoop = [] spawn ADV_dropLauncher_fnc_loop;
};
	*/
