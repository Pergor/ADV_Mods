/*
 * Author: Belbo
 *
 * Sets player on captive if he has no weapon equipped or isn't seated in an armed vehicle.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Function executed - <BOOL>
 *
 * Example:
 * call adv_fnclib_fnc_undercover
 *
 * Public: Yes
 */

private _weapon = currentWeapon player;
if (_weapon isEqualTo "" || _weapon isEqualTo (binocular player)) then {
	player setCaptive true;
};

adv_fnclib_undercover_scriptfnc_switch_onfoot = {
	params [
		["_unit", player, [objNull]]
		,["_weapon", currentWeapon player, [""]]
	];
	if (_weapon isEqualTo (binocular _unit)) exitWith {};
	if ( _weapon isEqualTo "" && ([_unit,60] call adv_fnclib_fnc_findNearestEnemy) distance _unit > 50 && ([_unit,400] call adv_fnclib_fnc_findNearestEnemy) knowsAbout _unit < 1.5 ) exitWith {
		if !(captive _unit) then {
			systemChat "You are now undercover.";
		};
		_unit setCaptive true;
	};
	if (captive _unit) then {
		systemChat "You are no longer undercover.";
	};
	_unit setCaptive false;
};

adv_fnclib_undercover_scriptfnc_switch_inVeh = {
	params [
		["_unit", player, [objNull]]
		,["_veh", vehicle player, [objNull]]
	];
	if ( (_veh currentWeaponTurret [-1]) isEqualTo "" && (_veh currentWeaponTurret [0]) isEqualTo "" ) exitWith {};
	if (captive _unit) then {
		systemChat "You are no longer undercover.";
	};
	_unit setCaptive false;
};

adv_fnclib_undercover_scriptevh_onFoot = ["weapon", {[_this select 0, _this select 1] call adv_fnclib_undercover_scriptfnc_switch_onfoot}] call CBA_fnc_addPlayerEventHandler;
adv_fnclib_undercover_scriptevh_inVeh = ["vehicle", {[_this select 0, _this select 1] call adv_fnclib_undercover_scriptfnc_switch_inveh}] call CBA_fnc_addPlayerEventHandler;

true;