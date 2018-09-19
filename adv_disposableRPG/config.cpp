class CfgPatches
{
    class adv_disposableRPG
    {
        units[] = {};
        weapons[] = {
			"adv_launch_RPG32_F"
			,"adv_launch_RPG32_HE_F"
			,"adv_launch_RPG32_ghex_F"
			,"adv_launch_RPG32_ghex_HE_F"
		};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"ace_disposable"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_DUMMY		author = "[SeL] Belbo";\
	scope = 1;\
	scopeArsenal = 1;\
	displayName = "Preload Missile Dummy";\
	picture = "\a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa";\
	weaponPoolAvailable = 0;\
	mass = 0;

#define MACRO_LAUNCHER	scope = 1;\
	ACE_isUsedLauncher = 1;\
	author = "[SeL] Belbo";\
	descriptionShort = "Used Rocket Launcher";\
	magazines[] = {"ADV_FiredMissileDummy"};\
	weaponPoolAvailable = 0;

class CfgMagazines {
    class RPG32_F;
    class ADV_PreloadedMissileDummy_HEAT: RPG32_F {
        MACRO_DUMMY
    };
	
	class RPG32_HE_F;
    class ADV_PreloadedMissileDummy_HE: RPG32_HE_F {
        MACRO_DUMMY
    };
    class ADV_FiredMissileDummy: ADV_PreloadedMissileDummy_HEAT {
        count = 0;
    };
};

class CfgWeapons {
	class launch_RPG32_F;
	class adv_launch_RPG32_F: launch_RPG32_F {
		author = "[SeL] Belbo";
		displayName = "RPG-42 Disposable Alamut - HEAT";
		ACE_UsedTube = "adv_launch_RPG32_used_F";
		magazines[] = {"ADV_PreloadedMissileDummy_HEAT"};
	};

	class adv_launch_RPG32_HE_F: adv_launch_RPG32_F {
		author = "[SeL] Belbo";
		displayName = "RPG-42 Disposable Alamut - HE";
		magazines[] = {"ADV_PreloadedMissileDummy_HE"};
	};

	class adv_launch_RPG32_used_F : launch_RPG32_F {
		MACRO_LAUNCHER
		displayName = "Used RPG-42 Alamut";
	};

	class launch_RPG32_ghex_F;
	class adv_launch_RPG32_ghex_F: launch_RPG32_ghex_F {
		author = "[SeL] Belbo";
		displayName = "RPG-42 Disposable Alamut - HEAT (Green Hex)";
		ACE_UsedTube = "adv_launch_RPG32_ghex_used_F";
		magazines[] = {"ADV_PreloadedMissileDummy_HEAT"};
	};

	class adv_launch_RPG32_ghex_HE_F: adv_launch_RPG32_ghex_F {
		author = "[SeL] Belbo";
		displayName = "RPG-42 Disposable Alamut - HE (Green Hex)";
		magazines[] = {"ADV_PreloadedMissileDummy_HE"};
	};

	class adv_launch_RPG32_ghex_used_F: launch_RPG32_ghex_F {
		MACRO_LAUNCHER
		displayName = "Used RPG-42 Alamut (Green Hex)";
	};
};
