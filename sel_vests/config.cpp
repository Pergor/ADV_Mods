class CfgPatches
{
    class sel_vests
    {
        units[] = {};
        weapons[] = {
			"adv_PlateCarrier1_nobelt_rgr"
			,"adv_PlateCarrier1_sel"
			,"adv_PlateCarrier2_sel"
			,"adv_PlateCarrier1_nobelt_sel"
		};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Characters_F"
		};
		version = "1.0.0";
		versionStr = "1.0.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgWeapons {
	#include "vests.hpp"
};