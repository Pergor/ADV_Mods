class CfgPatches
{
    class adv_enemies_hod
    {
        units[] = {
			"adv_hod_soldier_k98_1_f",
			"adv_hod_soldier_k98_2_f",
			"adv_hod_soldier_k98_3_f",
			"adv_hod_soldier_m38_1_f",
			"adv_hod_soldier_m38_2_f",
			"adv_hod_soldier_m38_3_f",
			"adv_hod_soldier_mk14_1_f",
			"adv_hod_soldier_mk14_2_f",
			"adv_hod_soldier_mk14_3_f"
		};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
			"A3_Characters_F",
			"rhs_main"
			"rhsgref_main"
		};
		version = "1.02";
		versionStr = "1.02";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses{
	class adv_faction_enemies_hod {
		displayName = "ADV - HOD Enemies";
		priority = 1;
		side = 0;
		icon = "\A3\data_f\cfgfactionclasses_opf_ca.paa";
	};
};

class CfgVehicleClasses {
	class adv_vehicleclass_enemies_hod {
		displayName = "Men";
		priority = 2;
	};	
};

#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"