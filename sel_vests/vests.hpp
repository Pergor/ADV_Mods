#define macro_vest_standard(NAME) displayName = NAME;\
	author = "Spezialeinheit Luchs";\
	scope = 2;

#define macro_vest_texture(TEXTURE) hiddenSelections[] = {"Camo"};\
	hiddenSelectionsTextures[] = {TEXTURE};

class Vest_NoCamo_Base;
class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
	class ItemInfo;
};
class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
	class ItemInfo;
};


class adv_PlateCarrier1_nobelt_rgr: V_PlateCarrier1_rgr {
	macro_vest_standard("Carrier Lite (No belt)")
	macro_vest_texture("sel_vests\textures\vests_co_rgr.paa")
	model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_rgr.paa")
		uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
	};
};
class adv_PlateCarrier1_nobelt_wdl: adv_PlateCarrier1_nobelt_rgr {
	macro_vest_standard("Carrier Lite (No belt) Woodland")
	macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	};	
};
class adv_PlateCarrier1_nobelt_sel: adv_PlateCarrier1_nobelt_rgr {
	macro_vest_standard("Carrier Lite (No belt) (SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	};	
};
class adv_PlateCarrier1_nobelt_sel_wdl: adv_PlateCarrier1_nobelt_rgr {
	macro_vest_standard("Carrier Lite (No belt) (Woodland - SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	};	
};

class adv_PlateCarrier1_sel: V_PlateCarrier1_rgr {
	macro_vest_standard("Carrier Lite (SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	};	
};
class adv_PlateCarrier1_wdl: V_PlateCarrier1_rgr {
	macro_vest_standard("Carrier Lite (Woodland)")
	macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	};	
};
class adv_PlateCarrier1_sel_wdl: V_PlateCarrier1_rgr {
	macro_vest_standard("Carrier Lite (Woodland - SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	};	
};

class adv_PlateCarrier2_sel: V_PlateCarrier2_rgr {
	macro_vest_standard("Carrier Rig (SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel.paa")
	};	
};
class adv_PlateCarrier2_wdl: V_PlateCarrier2_rgr {
	macro_vest_standard("Carrier Rig (Woodland)")
	macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_wdl.paa")
	};	
};
class adv_PlateCarrier2_sel_wdl: V_PlateCarrier2_rgr {
	macro_vest_standard("Carrier Rig (Woodland - SeL)")
	macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	class ItemInfo: ItemInfo {
		macro_vest_texture("sel_vests\textures\vests_co_sel_wdl.paa")
	};	
};
