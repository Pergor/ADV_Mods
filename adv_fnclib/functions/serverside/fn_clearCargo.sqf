/*
 * Author: Belbo
 *
 * Removes all items from inventory of vehicles or ammoboxes.
 *
 * Arguments:
 * Array of vehicles - <ARRAY> of <OBJECTS>
 *
 * Return Value:
 * Function executed - <BOOL>
 *
 * Example:
 * [crate_1, crate_2, ..., crate_n] call adv_fnclib_fnc_clearCargo;
 *
 * Public: Yes
 */

if (count _this == 0) exitWith {};
//removes all content from the target:
{
	if !(_x isEqualTo objNull) then {
		private _target = _x;
		clearWeaponCargoGlobal _target;clearMagazineCargoGlobal _target;clearBackpackCargoGlobal _target;clearItemCargoGlobal _target;
	};
} count _this;

true;