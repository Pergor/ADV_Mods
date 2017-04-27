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
		"_gwh"
	];
	waitUntil { !( (currentWeapon _unit) isEqualTo (secondaryWeapon _unit) ) };
	sleep 2.8;
	private _secWeap = secondaryWeapon _unit;
	if (toUpper _secWeap in ["BWA3_PZF3","BWA3_PZF3_LOADED"]) then {
		_secWeap = "BWA3_PZF3_USED";
	};
	if (toUpper _secWeap in ["BWA3_RGW90","BWA3_RGW90_LOADED"]) then {
		_secWeap = "BWA3_RGW90_USED";
	};
	_gwh = "GroundWeaponHolder" createVehicle position _unit;
	_gwh addWeaponCargoGlobal [_secWeap,1];
	_unit removeWeapon _secWeap;
};
true;