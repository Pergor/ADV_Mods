/*
 * Author: Belbo
 *
 * Disables provided vehicles
 *
 * Arguments:
 * Array of vehicles - <ARRAY> of <OBJECTS>
 *
 * Return Value:
 * Function executed <BOOL>
 *
 * Example:
 * [MRAP_1, MRAP_2, ..., MRAP_n] call adv_fnclib_fnc_disableVeh;
 *
 * Public: Yes
 */

if (!isServer) exitWith {};
if (count _this == 0) exitWith {};

{
	_x enableSimulationGlobal false;
	[_x] call ADV_fnclib_fnc_clearCargo;
	_x lock true;
	if (isClass(configFile >> "CfgPatches" >> "ace_cargo")) then {
		[_x] call ace_cargo_fnc_handleDestroyed
	};
	nil;
} count _this;
	
true;