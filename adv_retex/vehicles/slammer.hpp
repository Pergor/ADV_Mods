//INHERITANCES
class B_MBT_01_TUSK_F;
class B_MBT_01_cannon_F;

/*
textures[] = {
	"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa"
	,"A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa"
	,"A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa"
	,"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
};
*/

//slammer
//class adv_retex_b_slammer_f: B_T_MBT_01_cannon_F {
class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F {
	displayName = "M2A1 Slammer (Olive)";
	standard_macro
	forceInGarage = 1;
	hiddenSelectionsTextures[] = {
		"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa"
		,"A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa"
		,"A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa"
		,"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
//class adv_retex_b_slammer_up_f: B_T_MBT_01_TUSK_F {
class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F {
	displayName = "M2A4 Slammer UP (Olive)";
	standard_macro
	forceInGarage = 1;
	hiddenSelectionsTextures[] = {
		/*
		"adv_retex\textures\slammer\mbt_01_body_co_wd.paa"
		,"adv_retex\textures\slammer\mbt_01_tow_co_wd.paa"
		,"adv_retex\textures\slammer\mbt_addons_co_wd.paa"
		*/
		"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa"
		,"A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa"
		,"A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa"
		,"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};