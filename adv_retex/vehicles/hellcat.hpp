class I_Heli_light_03_dynamicLoadout_F;
class I_Heli_light_03_unarmed_F;

class adv_retex_hellcat_dynamicLoadout_f: I_Heli_light_03_dynamicLoadout_F {
	standard_macro
	nato_macro
	crew = "B_helipilot_F";
	displayname = "WY-55 Hellcat (NATO)";
	forceInGarage = 1;
	hiddenSelectionsTextures[] = {"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	textureList[] = {"Green",1};
	typicalCargo[] = {"B_Soldier_F"};
};
class adv_retex_hellcat_unarmed_f: I_Heli_light_03_unarmed_F {
	standard_macro
	nato_macro
	crew = "B_helipilot_F";
	displayname = "WY-55 Hellcat (Unarmed - NATO)";
	forceInGarage = 1;
	hiddenSelectionsTextures[] = {"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	textureList[] = {"Green",1};
	typicalCargo[] = {"B_Soldier_F"};
};