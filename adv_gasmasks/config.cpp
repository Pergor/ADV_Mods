class CfgPatches
{
    class adv_gasmasks
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {"Shemaghs","ace_goggles"};
		version = "1.1";
		versionStr = "1.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define OVERLAY_MACRO ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";\
	ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";\
	ACE_Protection = 1;\
	ACE_Resistance = 2;

class CfgGlasses {
	class None;
	class Mask_M40: None {
		OVERLAY_MACRO
	};
	class Mask_M50: None {
		OVERLAY_MACRO
	};
};

class CfgFunctions {
	class adv_gasmasks {
		tag = "ADV_gasmasks";
		class init {
			file = "adv_gasmasks\functions";
			class breathing {};
			class init {
				postInit = 1;
			};
		};
	};
};