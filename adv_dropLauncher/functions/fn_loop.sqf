/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

if (isNil "ADV_array_dispLaunch" || !hasInterface) exitWith {};

//if ace is not present, this loop will start that adds a regular addaction to the player:
while { true } do {
	waitUntil { sleep 2; !(secondaryWeapon player == "") };
	waitUntil { sleep 1; ( toUpper (secondaryWeapon player) ) in ADV_array_dispLaunch };
	sleep 1;
	ADV_action_dropIt = player addAction [
		"<t color=""#FFFFFF"">" + (localize "STR_ADV_DROPLAUNCHER_DROPLAUNCHER") + "</t>",
		{ [player] call ADV_dropLauncher_fnc_dropLauncher },
		"",
		6
	];
	sleep 1;
	waitUntil {	sleep 1; !( ( toUpper (secondaryWeapon player) ) in ADV_array_dispLaunch ) };
	player removeAction ADV_action_dropIt;
	sleep 1;
};