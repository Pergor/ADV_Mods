/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

if (isNil "ADV_array_dispLaunch" || !hasInterface) exitWith {};

//this is where the magic happens:
if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) exitWith {
	//if ace is present, this ace-selfaction will be added:
	_ace_dropLaunch = [
		"dropLauncherSelfAction",
		("<t color=""#FF0000"">" + (localize "STR_ADV_DROPLAUNCHER_DROPLAUNCHER") + "</t>"),
		"",
		{ [player] call ADV_dropLauncher_fnc_dropLauncher },
		{ !(secondaryWeapon player == "") && ( toUpper (secondaryWeapon player) ) in ADV_array_dispLaunch }
	] call ace_interact_menu_fnc_createAction;
	[player , 1, ["ACE_SelfActions"],_ace_dropLaunch] call ace_interact_menu_fnc_addActionToObject;
};