/*
Disposable launchers script by Belbo
Adds action to remove disposable launchers.
defined in cfgFunctions (functions\client\fn_dispLaunch.sqf)
Call from initPlayerLocal.sqf via:
[] spawn ADV_fnc_dispLaunch;
*/

_this spawn {
	params [
		["_unit", player, [objNull]]
	];
	sleep 1;
	private _secWeap = secondaryWeapon _unit;
	waitUntil { !( (currentWeapon _unit) isEqualTo _secWeap ) };
	if (toUpper _secWeap in ["BWA3_PZF3","BWA3_PZF3_LOADED"]) then {
		_secWeap = "BWA3_PZF3_USED";
	};
	if (toUpper _secWeap in ["BWA3_RGW90","BWA3_RGW90_LOADED"]) then {
		_secWeap = "BWA3_RGW90_USED";
	};
	if (secondaryWeapon _unit isEqualTo _secWeap) exitWith {
		systemChat "Dropped empty tube.";
		_unit removeWeapon _secWeap;
		private _emptyTube = createVehicle ["WeaponHolderSimulated", _unit modelToWorldVisual ((_unit selectionPosition "leftHand") vectorAdd [0,-0.45,-0.05]), [], 0, "CAN_COLLIDE"];
		_emptyTube setdir (getDir _unit -90);
		_emptyTube addWeaponCargoGlobal [_secWeap, 1];
		_emptyTube setVelocity [sin(getdir _unit+90)*2,cos(getdir _unit+90)*2,0];
		sleep 300;
		deleteVehicle _emptyTube;
	};
};
true;