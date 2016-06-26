/*
ADV_fnclib_fnc_undercover
Makes unit civilian if it has no weapon equipped.

possible call - has to be executed locally on each client the unit is local to:
[player,40] spawn ADV_fnc_undercover

_this select 0 = unit;
*/

params [
	["_unit", player, [objNull]],
	["_range", 50, [0]]
];

ADV_fnclib_var_undercover = true;

while {ADV_fnclib_var_undercover} do {
	waitUntil { sleep 1; currentWeapon _unit == "" && (_unit findNearestEnemy _unit) distance player > _range && (_unit findNearestEnemy _unit) knowsAbout player < 2.5 };
	_unit setCaptive true;
	waitUntil { sleep 1; !(currentWeapon _unit == "") && !(currentWeapon _unit == binocular _unit) };
	_unit setCaptive false;
};
_unit setCaptive false;

if (true) exitWith {};