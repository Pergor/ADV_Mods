if (isClass(configFile >> "CfgGlasses" >> "Mask_M40")) exitWith {
	[player] spawn ADV_gasmasks_fnc_breathing;
	ADV_gasmasks_EVH = player addEventhandler ["Respawn",{[player] spawn ADV_gasmasks_fnc_breathing;}];
};