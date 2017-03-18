
class Box_NATO_WpsSpecial_F;
class Box_EAST_WpsSpecial_F;
class Box_IND_WpsSpecial_F;
class Box_NATO_WpsLaunch_F;
class Box_EAST_WpsLaunch_F;
class Box_IND_WpsLaunch_F;

//NATO
class adv_Box_NATO_MMG_F : Box_NATO_WpsSpecial_F {
	author = "[SeL] Belbo";
	displayName = "MMG Ammo [NATO]";
	
	class TransportWeapons {};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(130Rnd_338_Mag,10);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(B_IR_Grenade,1);
	};
	class TransportItems {
		//MACRO_ADDITEM(FirstAidKit,2);
	};
	class TransportBackpacks {};
};

class adv_Box_NATO_AT_F : Box_NATO_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AT Ammo [NATO]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_NLAW_F,2);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AT,3);
		MACRO_ADDMAGAZINE(NLAW_F,2);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(B_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {};
};

class adv_Box_NATO_AA_F : Box_NATO_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AA Ammo [NATO]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_B_Titan_F,1);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AA,3);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(B_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {
		MACRO_ADDBACKPACK(B_AssaultPack_rgr,2);
	};
};

//EAST
class adv_Box_EAST_MMG_F : Box_EAST_WpsSpecial_F {
	author = "[SeL] Belbo";
	displayName = "MMG Ammo [CSAT]";
	
	class TransportWeapons {};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(150Rnd_93x64_Mag,10);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(O_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {};
};

class adv_Box_EAST_AT_F : Box_EAST_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AT Ammo [CSAT]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_RPG32_F,1);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AT,3);
		MACRO_ADDMAGAZINE(RPG32_F,1);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(O_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {};
};

class adv_Box_EAST_AA_F : Box_EAST_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AA Ammo [CSAT]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_O_Titan_F,1);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AA,3);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(O_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {
		MACRO_ADDBACKPACK(B_AssaultPack_rgr,2);
	};
};

//INDFOR
class adv_Box_IND_MMG_F : Box_IND_WpsSpecial_F {
	author = "[SeL] Belbo";
	displayName = "MMG Ammo [AAF]";
	
	class TransportWeapons {};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(130Rnd_338_Mag,10);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(I_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {};
};

class adv_Box_IND_AT_F : Box_IND_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AT Ammo [AAF]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_NLAW_F,2);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AT,3);
		MACRO_ADDMAGAZINE(NLAW_F,2);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(I_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {};
};

class adv_Box_IND_AA_F : Box_IND_WpsLaunch_F {
	author = "[SeL] Belbo";
	displayName = "AA Ammo [AAF]";

	class TransportWeapons {
		MACRO_ADDWEAPON(launch_I_Titan_F,1);
	};
	class TransportMagazines {
		MACRO_ADDMAGAZINE(Titan_AA,3);
		MACRO_ADDMAGAZINE(SmokeShell,2);
		MACRO_ADDMAGAZINE(I_IR_Grenade,1);
	};
	class TransportItems {};
	class TransportBackpacks {
		MACRO_ADDBACKPACK(B_AssaultPack_rgr,2);
	};
};