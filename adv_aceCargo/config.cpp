#define macro_10 ace_cargo_space = 10;\
		ace_cargo_hasCargo = 1;
#define macro_20 ace_cargo_space = 20;\
		ace_cargo_hasCargo = 1;
#define macro_40 ace_cargo_space = 40;\
		ace_cargo_hasCargo = 1;
#define macro_ugv ace_refuel_fuelCapacity = 2000;\
		supplyRadius = 10;\
		transportAmmo = 300000;\
		transportFuel = 300000;\
		ace_repair_canRepair = 1;\
		ace_cargo_space = 8;\
		ace_cargo_hasCargo = 1;

class CfgPatches
{
    class adv_aceCargo
    {
        units[] = {
			"B_UGV_resupply_F",
			"O_UGV_resupply_F",
			"I_UGV_resupply_F"
		};
        weapons[] = {};
        requiredVersion = 1.58;
        requiredAddons[] = { "ace_cargo", "ace_repair", "A3_Air_F_Heli_Heli_Transport_03", "A3_Armor_F_Panther", "A3_Soft_F_Gamma_HEMTT", "A3_Soft_F_EPC_Truck_03" };
		version = "1.02";
		versionStr = "1.02";
		author[] = {"[SeL] Belbo // Adrian"};
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgVehicles {

    class ThingX;
    class Items_base_F;
    class ReammoBox_F: ThingX {
        ace_cargo_size = 1; // 1 = small, 2 = large
        ace_cargo_canLoad = 1;
    };
	
	class APC_Tracked_01_base_F;
	class Heli_Transport_03_base_F;
	class Heli_Transport_03_unarmed_base_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_transport_F;
	class Truck_03_base_F;
	class B_UGV_01_F;
	class O_UGV_01_F;
	class I_UGV_01_F;
	
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F {
		macro_10
	};
	
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F {
		macro_40
	};	
	class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F {
		macro_40
	};	

	class B_Truck_01_ammo_F: B_Truck_01_mover_F {
		macro_20
	};
    class B_Truck_01_medical_F: B_Truck_01_transport_F {
		macro_20
    };

	class O_Truck_03_ammo_F: Truck_03_base_F {
		macro_20
	};
    class O_Truck_03_medical_F: Truck_03_base_F {
		macro_20
    };

	class B_UGV_resupply_F: B_UGV_01_F
	{
		displayName = "UGV Stomper (Resupply)";
		macro_ugv
	};
	class O_UGV_resupply_F: O_UGV_01_F
	{
		displayName = "UGV Saif (Resupply)";
		macro_ugv
	};
	class I_UGV_resupply_F: I_UGV_01_F
	{
		displayName = "UGV Stomper (Resupply)";
		macro_ugv
	};
};