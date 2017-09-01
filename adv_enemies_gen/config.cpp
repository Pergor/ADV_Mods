class CfgPatches
{
    class adv_enemies_gen
    {
        units[] = {
			"adv_gen_commander_F"
			,"adv_gen_soldier_F"
			,"adv_gen_offroad_01_gen_F"
			,"B_Offroad_02_gen_F"
			,"adv_gen_Offroad_02_gen_F"
		};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"A3_Soft_F_Exp_Offroad_01"
			,"A3_Characters_F_Exp"
		};
		version = "1.0.1";
		versionStr = "1.0.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses {
	class adv_faction_enemies_gen {
		displayName = "ADV - Gendarmerie Enemies";
		priority = 1;
		side = 2;
		icon = "\A3\data_f\cfgfactionclasses_ind_ca.paa";
	};
};

class CfgVehicleClasses {
	class adv_vehicleclass_enemies_gen {
		displayName = "Men";
		priority = 2;
	};
	class adv_vehicleclass_enemies_gen_veh {
		displayName = "Car";
		priority = 2;
	};	
};

#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"