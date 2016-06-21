#define macro_10 ace_cargo_space = 10;\
		ace_cargo_hasCargo = 1;
#define macro_20 ace_cargo_space = 20;\
		ace_cargo_hasCargo = 1;
#define macro_40 ace_cargo_space = 40;\
		ace_cargo_hasCargo = 1;
#define macro_ugv ace_refuel_fuelCargo = 2000;\
		supplyRadius = 10;\
		transportAmmo = 30000;\
		ace_repair_canRepair = 1;\
		ace_cargo_space = 8;\
		ace_cargo_hasCargo = 1;

#define macro_refuel_actions 	class ACE_Actions: ACE_Actions {\
			class ACE_MainActions: ACE_MainActions {\
				class aceCargo_refuel {\
					displayName = "Refuel";\
					condition = "true";\
					statement = "";\
					showDisabled = 0;\
					priority = 2;\
					distance = 4.5;\
					icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					class ace_refuel_TakeNozzle {\
						displayName = "Take Fuel Nozzle";\
						condition = "[_player, _target] call ace_refuel_fnc_canTakeNozzle";\
						statement = "[_player, _target, objNull] call ace_refuel_fnc_takeNozzle";\
						exceptions[] = {"isNotInside"};\
						icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					};\
					class ace_refuel_CheckFuelCounter {\
						displayName = "Check Fuel Counter";\
						condition = "true";\
						statement = "[_player, _target, objNull] call ace_refuel_fnc_readFuelCounter";\
						exceptions[] = {"isNotInside"};\
						icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					};\
					class ace_refuel_CheckFuel{\
						displayName = "Check Fuel";\
						condition = "[_player, _target] call ace_refuel_fnc_canCheckFuel";\
						statement = "[_player, _target, objNull] call ace_refuel_fnc_checkFuel";\
						exceptions[] = {"isNotInside"};\
						icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					};\
					class ace_refuel_Connect {\
						displayName = "Connect Fuel Nozzle";\
						condition = "[_player, _target] call ace_refuel_fnc_canConnectNozzle";\
						statement = "[_player, _target, objNull] call ace_refuel_fnc_connectNozzle";\
						exceptions[] = {"isNotInside"};\
						icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					};\
					class ace_refuel_Return {\
						displayName = "Return Fuel Nozzle";\
						condition = "[_player, _target] call ace_refuel_fnc_canReturnNozzle";\
						statement = "[_player, _target, objNull] call ace_refuel_fnc_returnNozzle";\
						exceptions[] = {"isNotInside"};\
						icon = "\ace_refuel\ui\icon_refuel_interact.paa";\
					};\
				};\
			};\
		};
		

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
		author = "[SeL] Belbo // Adrian";
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
	
	class Land;
	class LandVehicles: Land {
		class ACE_Actions {
			class ACE_MainActions {};
		};		
	};
	class Car: LandVehicles {
		class Car_F {
			class ACE_Actions: ACE_Actions {
				class ACE_MainActions: ACE_MainActions {};
			};
		};
	};
	class Car_F: Car {};
	class UGV_01_base_F: Car_F {};
	
	class B_UGV_01_F: UGV_01_base_F {};
	class O_UGV_01_F: UGV_01_base_F {};
	class I_UGV_01_F: UGV_01_base_F {};
	
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

	class B_UGV_resupply_F: B_UGV_01_F {
		displayName = "UGV Stomper (Resupply)";
		macro_ugv
		macro_refuel_actions
	};
	class O_UGV_resupply_F: O_UGV_01_F {
		displayName = "UGV Saif (Resupply)";
		macro_ugv
		macro_refuel_actions
	};
	class I_UGV_resupply_F: I_UGV_01_F {
		displayName = "UGV Stomper (Resupply)";
		macro_refuel_actions
		macro_ugv
	};
};