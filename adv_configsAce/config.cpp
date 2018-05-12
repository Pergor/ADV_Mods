class CfgPatches
{
    class adv_configsAce
    {
        units[] = {
			"adv_Box_82mmShells_F"
		};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"adv_configsVanilla"
			,"ace_smallarms"
			,"ace_ballistics"
			,"ace_grenades"
			,"ace_realisticweights"
		};
		version = "1.0.3";
		versionStr = "1.0.3";
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

#define standard_flare intensity = 50000;\
	flareSize = 18;\
	timeToLive = 60;
	
class cfgFunctions {
	//a little trick for the stupid ace-itemCheck:
	class ace_medical
	{
		tag = "ace_medical";
		class ace_medical
		{
			class itemCheck
			{
				file = "adv_configsAce\functions\fn_itemCheck.sqf";
			};
			class useItem
			{
				file = "adv_configsAce\functions\fn_useItem.sqf";
			};
		};
	};	
};

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
	//inheritances:
	class ACE_ItemCore;
	
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
	};
	
	//lmgs:
	class LMG_Mk200_F: Rifle_Long_Base_F {
		magazines[] += {"200Rnd_65x39_cased_Box_red","200Rnd_65x39_cased_Box_Tracer_red","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag"};
	};
	
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
	
	//launchers:
	class launch_NLAW_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 120;
        };
	};
	
	class ACE_personalAidKit: ACE_ItemCore {
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
	};
};

class cfgVehicles
{
	//inheritances
	class Item_Base_F;
	class Box_Syndicate_WpsLaunch_F;
	
	class ACE_personalAidKitItem: Item_Base_F {
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
	};
	
	//boxes
	class adv_Box_82mmShells_F : Box_Syndicate_WpsLaunch_F {
		author = "[SeL] Belbo";
		displayName = "82mm Mortar Ammo";
		
		class TransportWeapons {};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_HE,16);
			MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_Smoke,8);
		};
		class TransportItems {};
		class TransportBackpacks {};
	};

};