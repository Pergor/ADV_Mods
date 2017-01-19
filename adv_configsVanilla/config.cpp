class CfgPatches
{
    class adv_configsVanilla
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Weapons_F_LongRangeRifles_M320",
			"A3_Weapons_F_LongRangeRifles_GM6",
			"A3_Weapons_F_EPB_LongRangeRifles_M320",
			"A3_Weapons_F_EPA_LongRangeRifles_GM6",
			"A3_Weapons_F_Bootcamp_LongRangeRifles_M320",
			"A3_Weapons_F_Bootcamp_LongRangeRifles_GM6",
			"A3_Weapons_F_Mark_LongRangeRifles_M320",
			"A3_Weapons_F_Mark_LongRangeRifles_GM6_camo"
		};
		version = "1.01";
		versionStr = "1.01";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {
			"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F"
			,"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	
	/*
	class LRR_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};
	class srifle_LRR_F: LRR_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 308.75;
		};
	};
	
	class GM6_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};
	class srifle_GM6_F: GM6_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 253.8;
		};
	};
	*/
};
