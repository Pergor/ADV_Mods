class CfgVehicles {
	class B_GEN_Offroad_01_gen_F;
	class B_GEN_Soldier_F;
	class B_GEN_Commander_F;
	
	class adv_gen_offroad_01_gen_F: B_GEN_Offroad_01_gen_F
	{
		faction = "adv_faction_enemies_gen";
		side = 2;
	};
	
	class adv_gen_soldier_F: B_GEN_Soldier_F
	{
		faction = "adv_faction_enemies_gen";
		side = 2;
	};

	class adv_gen_commander_F: B_GEN_Commander_F
	{
		faction = "adv_faction_enemies_gen";
		side = 2;
	};
	
	class C_Offroad_02_unarmed_F;
	class B_Offroad_02_gen_F: C_Offroad_02_unarmed_F 
	{
		displayName = "MB 4WD (Gendarmerie)";
		crew = "B_GEN_Commander_F";
		typicalCargo[] = {"B_GEN_Commander_F"};
		faction = "BLU_GEN_F";
		side = 1;
		textureList[] = {};
		hiddenSelectionsTextures[] = {
			"adv_enemies_gen\textures\offroad_02_ext_gen_co.paa"
			,"adv_enemies_gen\textures\offroad_02_ext_gen_co.paa"
			,"adv_enemies_gen\textures\offroad_02_int_gen_co.paa"
			,"adv_enemies_gen\textures\offroad_02_int_gen_co.paa"
		};
	};
	class adv_gen_Offroad_02_gen_F: B_Offroad_02_gen_F 
	{
		crew = "adv_gen_commander_F";
		typicalCargo[] = {"adv_gen_commander_F"};
		faction = "adv_faction_enemies_gen";
		side = 2;
	};
};