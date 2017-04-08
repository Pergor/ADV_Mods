/*
 * Author: Belbo
 *
 * Removes all weapons from every unit it is called upon and places them in a ground weapon holder.
 *
 * Arguments:
 * Array of objects - <ARRAY> of <OBJECTS>
 *
 * Return Value:
 * Function executed - <BOOL>
 *
 * Example:
 * [player_1, player_2, ..., player_n] call adv_fnclib_fnc_removeWeapon;
 *
 * Public: Yes
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

true;