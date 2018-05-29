class CfgPatches
{
    class adv_units_wdl
    {
        units[] = {
			"adv_wdl_soldier_f"
			,"adv_wdl_soldier_lite_f"
			,"adv_wdl_soldier_GL_f"
			,"adv_wdl_soldier_AR_f"
			,"adv_wdl_soldier_SL_f"
			,"adv_wdl_soldier_TL_f"
			,"adv_wdl_soldier_M_f"
			,"adv_wdl_soldier_LAT_f"
			,"adv_wdl_soldier_LAT2_f"
			,"adv_wdl_medic_f"
			,"adv_wdl_soldier_repair_f"
			,"adv_wdl_soldier_exp_f"
			,"adv_wdl_soldier_a_f"
			,"adv_wdl_soldier_at_f"
			,"adv_wdl_soldier_aa_f"
			,"adv_wdl_engineer_f"
			,"adv_wdl_officer_f"
			,"adv_wdl_crew_f"
			,"adv_wdl_pilot_f"
			,"adv_wdl_helipilot_f"
			,"adv_wdl_helicrew_f"
			,"adv_wdl_HeavyGunner_f"
			,"adv_wdl_Sharpshooter_F"
			,"adv_wdl_Sharpshooter2_F"
			,"adv_wdl_ghillie_lsh_F"
			,"adv_wdl_ghillie_sard_F"
			,"adv_wdl_ghillie_tna_F"
			,"adv_wdl_MRAP_01_F"
			,"adv_wdl_MRAP_01_gmg_F"
			,"adv_wdl_MRAP_01_hmg_F"
			,"adv_wdl_strider_F"
			,"adv_wdl_strider_gmg_F"
			,"adv_wdl_strider_hmg_F"
			,"adv_wdl_mbt_01_cannon_F"
			,"adv_wdl_mbt_01_TUSK_F"
			,"adv_wdl_mbt_01_mlrs_F"
			,"adv_wdl_mbt_01_arty_F"
			,"adv_wdl_apc_wheeled_01_cannon_F"
			,"adv_wdl_apc_tracked_01_CRV_F"
			,"adv_wdl_apc_tracked_01_rcws_F"
			,"adv_wdl_apc_tracked_01_AA_F"
			,"adv_wdl_truck_01_transport_F"
			,"adv_wdl_truck_01_covered_F"
			,"adv_wdl_truck_01_mover_F"
			,"adv_wdl_truck_01_box_F"
			,"adv_wdl_truck_01_Repair_F"
			,"adv_wdl_truck_01_ammo_F"
			,"adv_wdl_truck_01_Fuel_F"
			,"adv_wdl_truck_01_medical_F"
			,"adv_wdl_static_AT_F"
			,"adv_wdl_static_AA_F"
			,"adv_wdl_Mortar_01_F"
			,"adv_wdl_hmg_01_F"
			,"adv_wdl_hmg_01_high_F"
			,"adv_wdl_gmg_01_F"
			,"adv_wdl_gmg_01_high_F"
			,"adv_wdl_heli_light_01_F"
			,"adv_wdl_heli_light_01_dynamicLoadout_F"
			,"adv_wdl_heli_transport_01_F"
			,"adv_wdl_heli_transport_03_F"
			,"adv_wdl_heli_transport_03_unarmed_F"
			,"adv_wdl_AFV_Wheeled_01_cannon_F"
			,"adv_wdl_AFV_Wheeled_01_up_cannon_F"
			,"adv_wdl_gorgon_F"
			,"adv_wdl_gorgon_san_F"
			,"adv_wdl_mora_F"
			,"adv_wdl_marid_F"
			,"adv_wdl_marid_san_F"
			,"adv_wdl_Quadbike_01_F"
			,"adv_wdl_LSV_01_unarmed_F"
			,"adv_wdl_LSV_01_armed_F"
			,"adv_wdl_LSV_01_AT_F"
		};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
			"adv_retex"
			,"A3_Characters_F"
		};
		version = "1.0.0";
		versionStr = "1.0.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class cfgFactionClasses {
	class BLU_F;
	class adv_faction_units_wdl: BLU_F {
		displayName = "NATO (Woodland)";
	};
};

#include "macros.hpp"

class cfgWeapons {
	#include "weapons.hpp"
};

class cfgVehicles {
	#include "backpacks.hpp"
	#include "units.hpp"
	#include "vehicles.hpp"
};







