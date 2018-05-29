class V_I_G_resistanceLeader_F;
class adv_wdl_TacVest_F: V_I_G_resistanceLeader_F {
	displayName = "Tactical Vest (Woodland)";
	scope = 1;
};

class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_blk_ACO_F: arifle_SPAR_01_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_ACO";
		};
	};
};
class arifle_SPAR_01_blk_Pointer_F: arifle_SPAR_01_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
	};
};
class arifle_SPAR_01_blk_ARCO_Pointer_F: arifle_SPAR_01_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Arco_blk_F";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
	};
};
class arifle_SPAR_01_blk_Holo_Pointer_F: arifle_SPAR_01_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Holosight_blk_F";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
	};
};
class arifle_SPAR_01_blk_Holo_F: arifle_SPAR_01_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Holosight_blk_F";
		};
	};
};

class arifle_SPAR_01_GL_blk_F;
class arifle_SPAR_01_GL_blk_ACO_F: arifle_SPAR_01_GL_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_ACO";
		};
	};
};
class arifle_SPAR_01_GL_blk_ARCO_Pointer_F: arifle_SPAR_01_GL_blk_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Arco_blk_F";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
	};		
};

class SMG_05_F;
class SMG_05_Holo_F: SMG_05_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Holosight_smg_blk_F";
		};
	};
};	
class SMG_05_ACO_F: SMG_05_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Aco_smg";
		};
	};
};	

class LMG_03_F;
class LMG_03_pointer_F: LMG_03_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
	};
};

class MMG_02_black_F;
class MMG_02_black_ARCO_LP_F: MMG_02_black_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Arco_blk_F";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
	};		
};

class srifle_DMR_03_F;
class srifle_DMR_03_AMS_LP_BI_F: srifle_DMR_03_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_AMS";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
	};		
};

class srifle_DMR_06_olive_F;
class srifle_DMR_06_olive_AMS_BI_F: srifle_DMR_06_olive_F {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_AMS";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "bipod_02_F_blk";
		};
	};		
};