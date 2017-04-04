/*
Vehicle disabling Script by belbo
Ersetzt ein Fahrzeug durch ein anderes
_this = vehicles
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
	
if (true) exitWith{};