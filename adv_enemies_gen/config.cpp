class CfgPatches
{
    class adv_enemies_gen
    {
        units[] = {
			"adv_gen_commander_F"
			,"adv_gen_soldier_F"
			,"adv_gen_offroad_01_gen_F"
			,"B_Offroad_02_gen_F"
			,"B_GEN_Offroad_01_armed_F"
			,"adv_gen_offroad_01_armed_F"
			,"adv_gen_Offroad_02_gen_F"
			,"B_Offroad_02_LMG_gen_F"
			,"adv_gen_Offroad_02_LMG_gen_F"
			,"B_Offroad_02_AT_gen_F"
			,"adv_gen_Offroad_02_AT_gen_F"
			,"adv_gen_van_02_vehicle_f"
			,"adv_gen_van_02_transport_f"
		};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"A3_Characters_F_Exp"
			,"A3_Soft_F_Offroad_01"
			,"A3_Soft_F_Exp_Offroad_01"
			,"A3_Soft_F_Exp_Offroad_02"
			,"a3_Soft_F_Orange_van_02"
		};
		version = "1.0.3";
		versionStr = "1.0.3";
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