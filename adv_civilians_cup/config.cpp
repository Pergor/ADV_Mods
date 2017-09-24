class CfgPatches
{
    class adv_civilians_cup
    {
        units[] = {
			"adv_civ_tk_1"
			,"adv_civ_tk_1_j"
			,"adv_civ_tk_2"
			,"adv_civ_tk_2_j"
			,"adv_civ_tk_3"
			,"adv_civ_tk_3_j"
			,"adv_civ_tk_4"
			,"adv_civ_tk_4_j"
			,"adv_civ_tk_5"
			,"adv_civ_tk_5_j"
			,"adv_civ_tk_6"
			,"adv_civ_tk_6_j"
			,"adv_civ_tk_7"
			,"adv_civ_tk_7_j"
			,"adv_civ_tk_8"
			,"adv_civ_tk_8_j"
			,"adv_civ_tk_9"
			,"adv_civ_tk_9_j"
			,"adv_civ_tk_10"
		};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Characters_F"
			,"CUP_Creatures_Military_TakiInsurgents"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgVehicleClasses {
	class adv_civilians_cup_tk_men {
		displayName = "Men";
	};	
};

#include "cfgVehicles.hpp"
