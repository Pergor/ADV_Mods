class CfgPatches
{
    class adv_configsAce
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Weapons_F"
			,"A3_Weapons_F_Machineguns_M200"
			,"A3_Weapons_F_Exp_Machineguns_LMG_03"
			,"adv_configsVanilla"
			,"ace_ballistics"
			,"ace_grenades"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define standard_flare intensity = 50000;\
	flareSize = 18;\
	timeToLive = 60;

class CfgAmmo {
	class FlareCore;
    class FlareBase: FlareCore {
        standard_flare
	};
    class F_40mm_White: FlareBase {
        standard_flare
    };
	class Flare_82mm_AMOS_White : FlareCore {
        intensity = 120000;
        flareSize = 18;
		timeToLive = 60;
		aimAboveTarget[] = {20,40,80,120,160,200,240};
		aimAboveDefault = 4;
	};
};


class CfgWeapons
{
	class Rifle_Long_Base_F;
	
	class LMG_Mk200_F: Rifle_Long_Base_F {
		magazines[] += {"200Rnd_65x39_cased_Box_red","200Rnd_65x39_cased_Box_Tracer_red"};
	};
	
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
};