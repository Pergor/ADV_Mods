/*
ADV_fnclib_fnc_removeWeapon
Removes weapons from every unit it is called upon and places them in a ground weapon holder.

example:

[] spawn {
	waitUntil {captive target_1};
	[target_1] call ADV_fnclib_fnc_removeWeapon;
};

*/

if (!isServer) exitWith {};

private ["_target","_gwh","_handgunWeap","_primWeap","_secWeap"];

{
	_target = _x;
	_gwh = "GroundWeaponHolder" createVehicle position _target;
	_handgunWeap = handgunWeapon _target;
	_primWeap = primaryWeapon _target;
	_secWeap = secondaryWeapon _target;
	_gwh addWeaponCargo [_handgunWeap,1];
	_gwh addWeaponCargo [_primWeap,1];
	_gwh addWeaponCargo [_secWeap,1];
	_target removeWeapon _handgunWeap;
	_target removeWeapon _primWeap;
	_target removeWeapon _secWeap;
	nil;
} count _this;

if (true) exitWith {};