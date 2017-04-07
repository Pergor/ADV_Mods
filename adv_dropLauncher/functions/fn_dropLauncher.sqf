/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

_this spawn {
	params [
		["_unit", player, [objNull]],
		"_secWeap","_gwh"
	];
	_secWeap = secondaryWeapon _unit;
	waitUntil { !( (currentWeapon _unit) isEqualTo _secWeap ) };
	sleep 2.5;
	_gwh = "GroundWeaponHolder" createVehicle position _unit;
	_gwh addWeaponCargo [_secWeap,1];
	//{_x addCuratorEditableObjects [[_gwh],false];} forEach allCurators;
	_unit removeWeapon _secWeap;
	//_unit selectWeapon (primaryWeapon _unit);
};
true;