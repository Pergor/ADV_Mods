class CfgPatches
{
    class adv_configsVanilla
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Weapons_F"
			,"A3_Weapons_F_Machineguns_M200"
			,"A3_Weapons_F_Exp_Machineguns_LMG_03"
		};
		version = "1.02";
		versionStr = "1.02";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

class cfgMagazines {
	class 200Rnd_65x39_cased_Box_Tracer;
	class 200Rnd_65x39_cased_Box_Tracer_red: 200Rnd_65x39_cased_Box_Tracer {
		displayName = "6.5 mm 200Rnd Tracer Box (Red)";
		descriptionShort = "6.5mm Tracer Red";
		ammo = "B_65x39_Caseless";
	};
	class 200Rnd_65x39_cased_Box_red: 200Rnd_65x39_cased_Box_Tracer_red {
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		displayName = "6.5 mm 200Rnd Box Reload Tracer (Red)";
		tracersEvery = 5;
		lastRoundsTracer = 3;
	};
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
	class Rifle_Long_Base_F;
	
	class LMG_Mk200_F: Rifle_Long_Base_F {
		magazines[] += {"200Rnd_65x39_cased_Box_red","200Rnd_65x39_cased_Box_Tracer_red","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag"};
	};
	
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
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

class CfgVehicles {
	#include "boxes.hpp"
};
