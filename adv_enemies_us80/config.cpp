class CfgPatches
{
    class adv_enemies_us80
    {
        units[] = {
			"adv_us80a_soldier_f",
			"adv_us80a_soldier_lat_f",
			"adv_us80a_soldier_sl_f",
			"adv_us80a_soldier_tl_f",
			"adv_us80a_soldier_radio_f",
			"adv_us80a_soldier_m_f",
			"adv_us80a_soldier_ar_f",
			"adv_us80a_heavygunner_f",
			"adv_us80a_soldier_gl_f",
			"adv_us80a_soldier_sg_f",
			"adv_us80a_medic_f",
			"adv_us80a_crew_f",
			"adv_us80a_helipilot_f",
			"adv_us80a_pilot_f",
			"adv_us80a_m113_f",
			"adv_us80a_m113_m2_f",
			"adv_us80a_m113_ammo_f",
			"adv_us80a_m163_f",
			"adv_us80a_mb4wd_f",
			"adv_us80a_m1025a2_f",
			"adv_us80a_m1025a2_m2_f",
			"adv_us80a_mtvr_f",
			"adv_us80a_m1030_f",
			"adv_us80a_m1a1_f",
			"adv_us80a_m119",
			"adv_us80a_tow",
			"adv_us80a_m2staticmg",
			"adv_us80a_m2staticmg_minitripod",
			"adv_us80a_stinger",
			"adv_us80a_m252",
			"adv_us80a_uh60m_f",
			"adv_us80a_ch47_f",
			"adv_us80a_mh6m_f",
			"adv_us80a_a10_f",
			"adv_us80m_soldier_f",
			"adv_us80m_soldier_lat_f",
			"adv_us80m_soldier_sl_f",
			"adv_us80m_soldier_tl_f",
			"adv_us80m_soldier_radio_f",
			"adv_us80m_soldier_m_f",
			"adv_us80m_soldier_ar_f",
			"adv_us80m_heavygunner_f",
			"adv_us80m_soldier_gl_f",
			"adv_us80m_soldier_sg_f",
			"adv_us80m_medic_f",
			"adv_us80m_crew_f",
			"adv_us80m_helipilot_f",
			"adv_us80m_pilot_f",
			"adv_us80m_m113_f",
			"adv_us80m_m113_m2_f",
			"adv_us80m_m113_ammo_f",
			"adv_us80m_mb4wd_f",
			"adv_us80m_m1025a2_f",
			"adv_us80m_m1025a2_m2_f",
			"adv_us80m_mtvr_f",
			"adv_us80m_m1030_f",
			"adv_us80m_m1a1_f",
			"adv_us80m_tow",
			"adv_us80m_m2staticmg",
			"adv_us80m_m2staticmg_minitripod",
			"adv_us80m_stinger",
			"adv_us80m_m252",
			"adv_us80m_uh1y_f",
			"adv_us80m_ch53_f",
			"adv_us80m_lav_f",
			"adv_us80m_av8b_f"
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
	class adv_faction_enemies_us80a {
		displayName = "ADV - US80ies Army";
		priority = 1;
		side = 1;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		//flag = "\a3\Data_f\Flags\flag_nato_co.paa";
	};
	class adv_faction_enemies_us80m {
		displayName = "ADV - US80ies Marines";
		priority = 1;
		side = 1;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		//flag = "\a3\Data_f\Flags\flag_nato_co.paa";
	};
};

class CfgVehicleClasses {
	class adv_vehicleclass_enemies_us80a {
		displayName = "Men";
		priority = 2;
	};
	class adv_vehicleclass_enemies_us80m {
		displayName = "Men";
		priority = 2;
	};	
};

#include "\adv_enemies_us80\vehicles\cfgVehicles.hpp"
#include "\adv_enemies_us80\groups\cfgGroups.hpp"