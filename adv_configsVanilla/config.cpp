class CfgPatches
{
    class adv_configsVanilla
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Weapons_F"
		};
		version = "1.02";
		versionStr = "1.02";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgWeapons
{
	/*
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	*/
	class LMG_03_base_F;
	class LMG_03_F: LMG_03_base_F {
		magazines[] += {
			"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F",
			"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"
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

class CfgAmmo {
	class FlareCore;
	class Flare_82mm_AMOS_White : FlareCore {
        intensity = 120000;
        flareSize = 18;
		timeToLive = 60;
		aimAboveTarget[] = {20,40,80,120,160,200,240};
		aimAboveDefault = 4;
	};
	class SmokeShell;
	class SmokeShellArty : SmokeShell {
		effectsSmoke = "SmokeShellWhiteEffect";
	};
};
