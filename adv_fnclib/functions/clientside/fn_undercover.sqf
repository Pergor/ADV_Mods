/*
ADV_fnclib_fnc_undercover
Makes unit civilian if it has no weapon equipped.

possible call - has to be executed locally on the player's client:
call ADV_fnclib_fnc_undercover
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

nil;