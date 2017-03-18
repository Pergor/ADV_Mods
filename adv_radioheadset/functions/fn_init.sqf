/*
ADV_fnc_radioHeadset - by Belbo
*/

if ( !hasInterface || !isClass (configFile >> "CfgPatches" >> "task_force_radio") ) exitWith {};

if (isClass(configFile >> "CfgPatches" >> "tfar_core")) exitWith {
	[player] spawn adv_radioheadset_fnc_radioswitch;
};

[player] spawn adv_radioheadset_fnc_radioheadset;