/*
 * Author: Belbo
 *
 * Sets the frequencies according to tfar-standards for the provided unit.
 *
 * Arguments:
 * 0: target - <OBJECT>
 *
 * Return Value:
 * New settings - <ARRAY> or false if tfar not present - <BOOL>
 *
 * Example:
 * [player] call adv_fnclib_fnc_setFrequencies;
 *
 * Public: No
 */

params [
	["_unit", player, [objNull]]
];

if (isClass(configFile >> "CfgPatches" >> "tfar_core")) exitWith {
	private _settings = switch ( side (group _unit) ) do {
		default { [TFAR_freq_sw_west,TFAR_freq_lr_west] };
		case east: { [TFAR_freq_sw_east,TFAR_freq_lr_east] };
		case independent: { [TFAR_freq_sw_independent,TFAR_freq_lr_independent] };
	};
	private _sw = (_settings select 0) select 2;
	private _lr = (_settings select 1) select 2;
	adv_evh_radioSettings = _settings;
	if (call TFAR_fnc_haveSWRadio) then {
		[(call TFAR_fnc_activeSwRadio), _settings select 0] call TFAR_fnc_setSwSettings;
	};
	if (call TFAR_fnc_haveLRRadio) then {
		[(call TFAR_fnc_activeLrRadio), _settings select 1] call TFAR_fnc_setLrSettings;
	};
	_settings;
};

false;