class B_Carryall_oli;
class adv_wdl_Carryall_oli_Ammo: B_Carryall_oli {
	scope = 1;
	class TransportItems {
		MACRO_ADDITEM(FirstAidKit,4)
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(30Rnd_556x45_Stanag,6)
		MACRO_ADDMAGAZINE(200Rnd_556x45_Box_F,1)
		MACRO_ADDMAGAZINE(NLAW_F,1)
		MACRO_ADDMAGAZINE(HandGrenade,2)
		MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,3)
		MACRO_ADDMAGAZINE(3Rnd_HE_Grenade_shell,1)
		MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,2)
	};
};	
class B_Kitbag_rgr;
class adv_wdl_Kitbag_rgr_AT: B_Kitbag_rgr {
	scope = 1;
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AT,2)
		MACRO_ADDMAGAZINE(Titan_AP,2)
	};
};
class adv_wdl_Kitbag_rgr_AA: B_Kitbag_rgr {
	scope = 1;
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AA,2)
	};
};
class adv_wdl_Kitbag_rgr_Eng: B_Kitbag_rgr {
	scope = 1;
	class TransportItems {
		MACRO_ADDITEM(ToolKit,1)
		MACRO_ADDITEM(MineDetector,1)
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,1)
		MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2)
	};
};