class I_Soldier_02_F;

class I_medic_F: I_Soldier_02_F {
	backpack = "B_AssaultPack_dgtl_Medic";
};

#define macro_uniformDummy(UCL,HST,MDL) scope = 1;\
	uniformClass = #UCL;\
	hiddenSelections[] = {"Camo"};\
	hiddenSelectionsTextures[] = {HST};\
	model = MDL;

class B_soldier_f;
class adv_retex_dummy_mcam_worn: B_soldier_F {
	macro_uniformDummy(U_B_CombatUniform_mcam_worn,"a3\characters_f_epb\BLUFOR\Data\clothing1_dirty_co.paa","\A3\characters_F\BLUFOR\b_soldier_01.p3d")
};
class adv_retex_dummy_wdl: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_wdl,"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa","\A3\characters_F\BLUFOR\b_soldier_01.p3d")
};
class adv_retex_dummy_wdl_vest: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_wdl_vest,"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa","\A3\characters_F\BLUFOR\b_soldier_03.p3d")
};
class adv_retex_dummy_wdl_tshirt: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_wdl_tshirt,"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa","\A3\characters_F\BLUFOR\b_soldier_02.p3d")
};
class adv_retex_dummy_sgg: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_sgg,"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\characters_F\BLUFOR\b_soldier_01.p3d")
};
class adv_retex_dummy_sgg_vest: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_sgg_vest,"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\characters_F\BLUFOR\b_soldier_03.p3d")
};
class adv_retex_dummy_sgg_tshirt: B_soldier_F {
	macro_uniformDummy(adv_retex_u_CombatUniform_sgg_tshirt,"a3\characters_f\BLUFOR\Data\clothing_sage_co.paa","\A3\characters_F\BLUFOR\b_soldier_02.p3d")
};