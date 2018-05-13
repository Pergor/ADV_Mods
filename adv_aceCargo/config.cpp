class CfgPatches
{
    class adv_aceCargo
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {
			"ace_main",
			"ace_modules",
			"ace_common",
			"ace_interaction",
			"ace_interact_menu",
			"ace_cargo",
			"A3_Armor_F_AMV",
			"A3_Armor_F_Marid",
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Air_F_Heli_Heli_Transport_03",
			"A3_Armor_F_Panther"
		};
		version = "1.05";
		versionStr = "1.05";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_SPACE(SPACE)	ace_cargo_space = SPACE;\
	ace_cargo_hasCargo = 1;

class CfgVehicles {

    class ThingX;
    class Items_base_F;
    class ReammoBox_F: ThingX {
        ace_cargo_size = 1;
    };	

    class StaticMortar;
    class Mortar_01_base_F: StaticMortar {
        ace_cargo_size = 1;
	};
	
	class LandVehicle;
	class APC_Tracked_01_base_F;
	class Heli_Transport_03_base_F;
	class Heli_Transport_03_unarmed_base_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_fuel_F;
	class Truck_03_base_F;
	/*
	class Quadbike_01_base_F;
	
	class B_Quadbike_01_F: Quadbike_01_base_F {
		MACRO_SPACE(20)
	};
	*/
	
	class Car: LandVehicle {
		MACRO_SPACE(6)
	};
	
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F {
		MACRO_SPACE(10)
	};
	
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F {
		MACRO_SPACE(20)
	};	
	class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F {
		MACRO_SPACE(20)
	};	

	class B_Truck_01_ammo_F: B_Truck_01_mover_F {
		MACRO_SPACE(20)
	};
    class B_Truck_01_medical_F: B_Truck_01_transport_F {
		MACRO_SPACE(20)
    };

	class O_Truck_03_ammo_F: Truck_03_base_F {
		MACRO_SPACE(20)
	};
    class O_Truck_03_medical_F: Truck_03_base_F {
		MACRO_SPACE(20)
    };
};