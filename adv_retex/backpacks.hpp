//KITBAGS
class B_Kitbag_Base;
class B_Kitbag_rgr;
class B_Kitbag_blk: B_Kitbag_Base {
	hiddenSelectionsTextures[] = {"A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
	_generalMacro = "B_Kitbag_blk";
	scope = 2;
	displayName = "Kitbag (Black)";
};
class B_Kitbag_dgtl: B_Kitbag_Base {
	hiddenSelectionsTextures[] = {"A3\weapons_f\ammoboxes\bags\data\backpack_fast_digi_co.paa"};
	_generalMacro = "B_Kitbag_dgtl";
	scope = 2;
	displayName = "Kitbag (Digi)";
};
class B_Kitbag_rgr_medic: B_Kitbag_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_fast_rgr_medic_co.paa"};
	scope = 2;
	displayName = "Kitbag (Green - Medic)";
	class TransportItems {
		MACRO_ADDITEM(Medikit,1)
		MACRO_ADDITEM(FirstAidKit,10)
	};
};
class B_Kitbag_dgtl_medic: B_Kitbag_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_fast_digi_medic_co.paa"};
	scope = 2;
	displayName = "Kitbag (Digi - Medic)";
	class TransportItems {
		MACRO_ADDITEM(Medikit,1)
		MACRO_ADDITEM(FirstAidKit,10)
	};	
};
class B_Kitbag_blk_medic: B_Kitbag_blk {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_fast_blk_medic_co.paa"};
	_generalMacro = "B_Kitbag_blk";
	scope = 2;
	displayName = "Kitbag (Black - Medic)";
};

//ASSAULT PACKS
class B_AssaultPack_rgr;
class B_AssaultPack_rgr_Medic: B_AssaultPack_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_rgr_medic_co.paa"};
	scope = 2;
	displayName = "Assaultpack (Green - Medic)";
};
class B_AssaultPack_rgr_ReconMedic: B_AssaultPack_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_rgr_medic_co.paa"};
};
class B_AssaultPack_rgr_BTReconMedic: B_AssaultPack_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_rgr_medic_co.paa"};
};
class B_AssaultPack_rgr_CTRGMedic_F: B_AssaultPack_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_rgr_medic_co.paa"};
};
class B_AssaultPack_blk_Medic : B_AssaultPack_rgr {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_blk_medic_co.paa"};
	scope = 2;
	displayName = "Assaultpack (Black - Medic)";
};
class B_AssaultPack_dgtl_Medic: B_AssaultPack_rgr_Medic {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\backpack_compact_digi_medic_co.paa"};
	scope = 2;
	displayName = "Assaultpack (Digi - Medic)";
	class TransportItems {
		MACRO_ADDITEM(Medikit,1)
		MACRO_ADDITEM(FirstAidKit,10)
	};	
};
class B_AssaultPack_tna_F;
class B_AssaultPack_tna_BTMedic_F : B_AssaultPack_tna_F {
	hiddenSelectionsTextures[] = {"adv_retex\textures\backpacks\B_AssaultPack_tna_medic_F_co.paa"};
	scope = 2;
	displayName = "Assaultpack (Tropic - Medic)";
	class TransportItems {
		MACRO_ADDITEM(Medikit,1)
		MACRO_ADDITEM(FirstAidKit,10)
	};
};

//CARRYALL
class B_Carryall_Base;
class B_Carryall_blk: B_Carryall_Base {
	_generalMacro = "B_Carryall_blk";
	scope = 2;
	displayName = "Carryall Backpack (Black)";
	hiddenSelectionsTextures[] = {"A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"};
};