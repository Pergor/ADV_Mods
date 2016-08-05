class CfgPatches
{
    class adv_enemies_pirates
    {
        units[] = {
			"adv_pirates_soldier_1_f",
			"adv_pirates_soldier_2_f",
			"adv_pirates_soldier_3_f",
			"adv_pirates_soldier_AR_f",
			"adv_pirates_soldier_AT_f",
			"adv_pirates_soldier_M_f",
			"adv_pirates_medic_f",
			"adv_pirates_soldier_TL_f",
			"adv_pirates_offroad_f",
			"adv_pirates_offroad_armed_f",
			"adv_pirates_mb4wd_f"
		};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
			"A3_Characters_F_OPFOR",
			"A3_Characters_F",
			"A3_Soft_F_Gamma_Offroad"
		};
		version = "1.02";
		versionStr = "1.02";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses {
	class adv_faction_enemies_pirates {
		displayName = "ADV - Pirates";
		priority = 1;
		side = 0;
		icon = "\A3\data_f\cfgfactionclasses_opf_ca.paa";
	};
};

class CfgVehicleClasses {
	class adv_vehicleclass_enemies_pirates {
		displayName = "Men";
		priority = 2;
	};
	class adv_vehicleclass_enemies_pirates_vehicles {
		displayName = "Car";
		priority = 2;
	};
};

#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"