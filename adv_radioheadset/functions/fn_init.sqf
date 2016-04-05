/*
ADV_fnc_radioHeadset - by Belbo
*/

if ( !hasInterface || !isClass (configFile >> "CfgPatches" >> "task_force_radio") ) exitWith {};

[player] spawn adv_radioheadset_fnc_radioheadset;