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

params [
	["_uniformsOnly",true,[true]]
];

adv_fnclib_undercover_uniforms_west = [
	"U_B_COMBATUNIFORM_MCAM","U_B_COMBATUNIFORM_MCAM_TSHIRT","U_B_CTRG_1","U_B_CTRG_2","U_B_CTRG_3"
	,"U_B_GHILLIESUIT","U_B_HELIPILOTCOVERALLS","U_B_PILOTCOVERALLS","U_B_COMBATUNIFORM_MCAM_VEST","U_B_SURVIVAL_UNIFORM"
	,"U_I_G_STORY_PROTAGONIST_F","U_B_COMBATUNIFORM_MCAM_WORN","U_B_T_SOLDIER_F","U_B_T_SOLDIER_AR_F","U_B_CTRG_SOLDIER_F"
	,"U_B_CTRG_SOLDIER_3_F","U_B_CTRG_SOLDIER_2_F","U_B_CTRG_SOLDIER_URB_1_F","U_B_CTRG_SOLDIER_URB_3_F","U_B_CTRG_SOLDIER_URB_2_F"
	,"U_B_T_SNIPER_F","U_B_T_SOLDIER_SL_F"
];
adv_fnclib_undercover_uniforms_east = [
	"U_O_COMBATUNIFORM_OCAMO","U_O_COMBATUNIFORM_OUCAMO","U_O_GHILLIESUIT","U_O_OFFICERUNIFORM_OCAMO","U_O_PILOTCOVERALLS","U_O_SPECOPSUNIFORM_OCAMO"
	,"U_O_T_SOLDIER_F","U_O_T_SNIPER_F","U_O_T_OFFICER_F","U_O_V_SOLDIER_VIPER_F","U_O_V_SOLDIER_VIPER_HEX_F"
];
adv_fnclib_undercover_uniforms_independent = [
	"U_I_COMBATUNIFORM","U_I_OFFICERUNIFORM","U_I_COMBATUNIFORM_SHORTSLEEVE","U_I_GHILLIESUIT","U_I_HELIPILOTCOVERALLS","U_I_PILOTCOVERALLS"
	,"U_I_C_SOLDIER_PARA_2_F","U_I_C_SOLDIER_PARA_3_F","U_I_C_SOLDIER_PARA_5_F","U_I_C_SOLDIER_PARA_4_F","U_I_C_SOLDIER_PARA_1_F","U_I_C_SOLDIER_CAMO_F"
];

adv_fnclib_undercover_uniforms = call {
	if (side (group player) isEqualTo west) exitWith {
		adv_fnclib_undercover_uniforms_east+adv_fnclib_undercover_uniforms_independent
	};
	if (side (group player) isEqualTo east) exitWith {
		adv_fnclib_undercover_uniforms_west+adv_fnclib_undercover_uniforms_independent
	};
	if (side (group player) isEqualTo independent) exitWith {
		adv_fnclib_undercover_uniforms_west+adv_fnclib_undercover_uniforms_east
	};
};

adv_fnclib_undercover_scriptfnc_setCaptive = {
	params ["_unit","_captive"];
	if (_captive && !(captive _unit)) then {
		systemChat "You are now undercover.";
		["You are now undercover.", 4] call adv_fnclib_fnc_timedHint;
	};
	if (!_captive && (captive _unit)) then {
		systemChat "You are no longer undercover.";
		["You are no longer undercover.", 4] call adv_fnclib_fnc_timedHint;
	};
	_unit setCaptive _captive;
	call {
		if (!_captive) exitWith {
			_unit setVariable ["adv_fnclib_undercover_tooClose",true];
		};
		_unit setVariable ["adv_fnclib_undercover_tooClose",false];
	};
};

adv_fnclib_undercover_scriptfnc_switch_tooclose = {
	[ { ( !isNull ([player,8] call adv_fnclib_fnc_findNearestEnemy) ) || (player getVariable ["adv_fnclib_undercover_tooClose",false]) }, {
		params ["_unit"];
		[_unit, false] call adv_fnclib_undercover_scriptfnc_setCaptive;
	},[player]] call CBA_fnc_waitUntilAndExecute;
};

adv_fnclib_undercover_scriptfnc_switch_uniform = {
	params [
		["_unit", player, [objNull]]
	];
	
	if ( toUpper (uniform _unit) in adv_fnclib_undercover_uniforms ) exitWith {
		[_unit, true] call adv_fnclib_undercover_scriptfnc_setCaptive;
		[_unit] call adv_fnclib_undercover_scriptfnc_switch_tooclose;
	};
	
	[_unit, false] call adv_fnclib_undercover_scriptfnc_setCaptive;
};

adv_fnclib_undercover_scriptevh_uniform = ["loadout", {[_this select 0] call adv_fnclib_undercover_scriptfnc_switch_uniform}] call CBA_fnc_addPlayerEventHandler;

if (_uniformsOnly) exitWith {true;};

private _weapon = currentWeapon player;
if (_weapon isEqualTo "" || _weapon isEqualTo (binocular player)) then {
	player setCaptive true;
};
adv_fnclib_undercover_scriptfnc_switch_onFoot = {
	params [
		["_unit", player, [objNull]]
		,["_weapon", currentWeapon player, [""]]
	];
	if (_weapon isEqualTo (binocular _unit)) exitWith {};
	if ( toUpper (uniform _unit) in adv_fnclib_undercover_uniforms ) exitWith {};
	
	private _nextEnemy = [_unit,60] call adv_fnclib_fnc_findNearestEnemy;	private _enemyInRadius = [_unit,400] call adv_fnclib_fnc_findNearestEnemy;
	
	if ( _weapon isEqualTo "" && _nextEnemy distance _unit > 50 && _enemyInRadius knowsAbout _unit < 1.5 ) exitWith {
		[_unit, true] call adv_fnclib_undercover_scriptfnc_setCaptive;
		[_unit] call adv_fnclib_undercover_scriptfnc_switch_tooclose;
	};
	
	[_unit, false] call adv_fnclib_undercover_scriptfnc_setCaptive;
};

adv_fnclib_undercover_scriptfnc_switch_inVeh = {
	params [
		["_unit", player, [objNull]]
		,["_veh", vehicle player, [objNull]]
	];
	
	if ( (_veh currentWeaponTurret [-1]) isEqualTo "" && (_veh currentWeaponTurret [0]) isEqualTo "" ) exitWith {};
	
	[_unit, false] call adv_fnclib_undercover_scriptfnc_setCaptive;
};

adv_fnclib_undercover_scriptevh_onFoot = ["weapon", {[_this select 0, _this select 1] call adv_fnclib_undercover_scriptfnc_switch_onFoot}] call CBA_fnc_addPlayerEventHandler;
adv_fnclib_undercover_scriptevh_inVeh = ["vehicle", {[_this select 0, _this select 1] call adv_fnclib_undercover_scriptfnc_switch_inVeh}] call CBA_fnc_addPlayerEventHandler;

true;