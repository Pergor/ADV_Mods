/*
remove vehicle cargo globally
[item_1,item_2] call ADV_fnclib_fnc_clearCargo;
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