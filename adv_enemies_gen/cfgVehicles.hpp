class CfgVehicles {
	class B_GEN_Offroad_01_gen_F;
	class B_GEN_Soldier_F;
	class B_GEN_Commander_F;
	class B_G_Offroad_01_armed_F;
	
	class adv_gen_offroad_01_gen_F: B_GEN_Offroad_01_gen_F
	{
		faction = "adv_faction_enemies_gen";
		side = 2;
	};
	class B_GEN_Offroad_01_armed_F: B_G_Offroad_01_armed_F
	{
		_generalMacro = "B_GEN_Offroad_01_gen_F";
		DLC = "Expansion";
		faction = "BLU_GEN_F";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Offroad_01_gen_F.jpg";
		icon = "\A3\Soft_F_Exp\Offroad_01\Data\UI\map_Offroad_01_gen_CA.paa";
		picture = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Offroad_01_gen_CA.paa";
		crew = "B_GEN_Commander_F";
		typicalCargo[] = {"B_GEN_Soldier_F"};
		textureList[] = {"Gendarmerie",1};
		animationList[] = {"HidePolice",0,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0,"HideDoor3",0.33,"HideBackpacks",1};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};
	};
	class adv_gen_offroad_01_armed_F: B_GEN_Offroad_01_armed_F
	{
		faction = "adv_faction_enemies_gen";
		crew = "adv_gen_commander_F";
		typicalCargo[] = {"adv_gen_commander_F"};
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