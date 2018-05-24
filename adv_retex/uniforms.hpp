class Uniform_Base;
class U_B_CombatUniform_mcam;
class U_B_CombatUniform_mcam_vest;
class U_B_CombatUniform_mcam_tshirt;
class U_I_CombatUniform;
class UniformItem;

#define macro_uniformInfo(TEXTURE,CLASS) hiddenSelections[] = {"camo","insignia"};\
	hiddenSelectionsTextures[] = {TEXTURE};\
	class ItemInfo: UniformItem {\
		uniformModel = "-";\
		uniformClass = #CLASS;\
		containerClass = "Supply40";\
		mass = 40;\
	};

class U_B_CombatUniform_mcam_worn: Uniform_Base {
	macro_uniformInfo("a3\characters_f_epb\BLUFOR\Data\clothing1_dirty_co.paa",adv_retex_dummy_mcam_worn)
};
class adv_retex_u_CombatUniform_wdl: U_B_CombatUniform_mcam {
	displayName = "Combat Fatigues (Woodland)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",adv_retex_dummy_wdl)
};
class adv_retex_u_CombatUniform_wdl_vest: U_B_CombatUniform_mcam_vest {
	displayName = "Recon Fatigues (Woodland)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",adv_retex_dummy_wdl_vest)
};
class adv_retex_u_CombatUniform_wdl_tshirt: U_B_CombatUniform_mcam_tshirt {
	displayName = "Combat Fatigues (Woodland) (Tee)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",adv_retex_dummy_wdl_tshirt)
};

class adv_retex_u_CombatUniform_sgg: U_B_CombatUniform_mcam {
	displayName = "Combat Fatigues (Sage)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",adv_retex_dummy_sgg)
};
class adv_retex_u_CombatUniform_sgg_vest: U_B_CombatUniform_mcam {
	displayName = "Recon Fatigues (Sage)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",adv_retex_dummy_sgg_vest)
};
class adv_retex_u_CombatUniform_sgg_tshirt: U_B_CombatUniform_mcam {
	displayName = "Combat Fatigues (Sage) (Tee)";
	macro_uniformInfo("a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",adv_retex_dummy_sgg_tshirt)
};

class adv_retex_u_CombatUniform_i_wdl: U_I_CombatUniform {
	displayName = "BDU (Woodland)";
	macro_uniformInfo("adv_retex\textures\equipment\ia_soldier_01_clothing_wdl_co.paa",adv_retex_dummy_i_wdl)
};
class adv_retex_u_CombatUniform_i_wdl_shortsleeve: U_I_CombatUniform {
	displayName = "BDU (Woodland) (Rolled-up)";
	macro_uniformInfo("adv_retex\textures\equipment\ia_soldier_01_clothing_wdl_co.paa",adv_retex_dummy_i_wdl_shortsleeve)
};