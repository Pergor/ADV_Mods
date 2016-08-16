class CfgPatches
{
    class adv_enemies_us80ies
    {
        units[] = {
			"adv_us80ies_soldier_f",
			"adv_us80ies_soldier_lat_f",
			"adv_us80ies_soldier_sl_f",
			"adv_us80ies_soldier_tl_f",
			"adv_us80ies_soldier_radio_f",
			"adv_us80ies_soldier_m_f",
			"adv_us80ies_soldier_ar_f",
			"adv_us80ies_soldier_gl_f",
			"adv_us80ies_medic_f",
			"adv_us80ies_pilot_f",
			"adv_us80ies_m113_f",
			"adv_us80ies_m113_ammo_f",
			"adv_us80ies_m1025a2_f",
			"adv_us80ies_m1025a2_m2_f",
			"adv_us80ies_mtvr_f",
			"adv_us80ies_aav_f",
			"adv_us80ies_m1030_f",
			"adv_us80ies_uh1y_f",
			"adv_us80ies_av8b_f"
		};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Characters_F",
			"CUP_TrackedVehicles_AAV",
			"CUP_WheeledVehicles_MTVR",
			"CUP_AirVehicles_AV8B",
			"rhsusf_main",
			"rhsgref_main"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses {
	class adv_faction_enemies_us80ies {
		displayName = "ADV - US80ies Enemies";
		priority = 1;
		side = 1;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		//flag = "\a3\Data_f\Flags\flag_nato_co.paa";
	};
};

class CfgVehicleClasses {
	class adv_vehicleclass_enemies_us80ies {
		displayName = "Men";
		priority = 2;
	};	
};

#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"