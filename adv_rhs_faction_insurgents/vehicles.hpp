#define crewMacro 	crew=adv_rhs_g_Crew_F;\
			side=0;\
			faction=adv_rhs_faction_insurgents;
#define crewMacroInf 	crew=adv_rhs_g_Soldier_F;\
			side=0;\
			faction=adv_rhs_faction_insurgents;
#define Author_Macro	author=adv;


//uaz
	class RHS_UAZ_Base;
	class rhs_uaz_open_Base;
	class RHS_UAZ_DShKM_Base;
	class RHS_UAZ_AGS30_Base;
	class RHS_UAZ_SPG9_Base;
	class adv_RHS_UAZ_chdkz_Base: RHS_UAZ_Base
	{
		accuracy = 0.5;
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
		};
	};
	class adv_rhs_uaz_open_chdkz_Base: rhs_uaz_open_Base
	{
		accuracy = 0.5;
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
		};
	};
	class adv_RHS_UAZ_chdkz: adv_RHS_UAZ_chdkz_Base
	{
		scope=2;
		Author_Macro
	};
	class adv_rhs_uaz_open_chdkz: adv_rhs_uaz_open_chdkz_base
	{
		scope=2;
		Author_Macro
	};
	class adv_rhs_uaz_dshkm_chdkz: RHS_UAZ_DShKM_Base
	{
		scope=2;
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
		};
	};
	class adv_rhs_uaz_ags_chdkz: RHS_UAZ_AGS30_Base
	{
		scope=2;
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
		};
	};
	class adv_rhs_uaz_spg9_chdkz: RHS_UAZ_SPG9_Base
	{
		scope=2;
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
		};
	};


// Ural

	class RHS_Ural_Civ_Base;
	class adv_rhs_ural_chdkz : RHS_Ural_Civ_Base
	{
		scope=2;
		displayName="$STR_RHS_URAL4320_NAME";
		crewMacroInf
		Author_Macro
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class adv_rhs_ural_open_chdkz : RHS_Ural_Civ_Base
	{
		scope=2;
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\ural_open_ca.paa";
		displayName="$STR_RHS_URAL4320OPEN_NAME";
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class adv_rhs_ural_work_chdkz : RHS_Ural_Civ_Base
	{
		scope=2;
		displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};

	class adv_rhs_ural_work_open_chdkz : RHS_Ural_Civ_Base
	{
		scope=2;
		displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
		Author_Macro
		crewMacroInf
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_BM21_MSV_01;
	class adv_RHS_BM21_chdkz: RHS_BM21_MSV_01
	{
		crewMacroInf
		Author_Macro
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
//mi8
	class RHS_Mi8AMT_VVS_Base;
	class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base
	{
		class EventHandlers;
	};
	class adv_RHS_Mi8amt_chdkz: RHS_Mi8amt_vvs
	{
		crewMacro
		Author_Macro
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] =
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa"
		};
		class EventHandlers : EventHandlers
		{
		};
	};
//ZSU
	class rhs_zsutank_base;
	class rhs_zsu234_aa: rhs_zsutank_base
	{
		class EventHandlers;
	};
	class adv_rhs_zsu234_chdkz: rhs_zsu234_aa
	{
		_generalMacro = "rhs_zsu234_chdkz";

		Author_Macro
		crewMacro

		hiddenSelectionsTextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa",
			"\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa",
			"\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
	};

//BMP1/2


	class rhs_bmp1_msv;
	class rhs_bmp1p_msv;
	class rhs_bmp1k_msv;
	class rhs_bmp1d_msv;
	class rhs_bmp2_msv;
	class rhs_bmp2e_msv;
	class rhs_bmp2k_msv;
	class rhs_bmp2d_msv;

	class rhs_brm1k_msv;
	class rhs_prp3_msv;
	#define BMP_Textures rhs_decalParameters[]={\
			"['Number', cBMP3NumberPlaces, 'CDF']", \
			"['Label', cBMPPlatoon, 'Platoon',11]",\
			"['Label', cBMPLeftBack, 'Army', 22]"\
		};\
		hiddenSelectionsTextures[] =\
		{\
			"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa",\
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"\
		};

	class adv_rhs_bmp1_chdkz : rhs_bmp1_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp1p_chdkz : rhs_bmp1p_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp1d_chdkz : rhs_bmp1d_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp1k_chdkz : rhs_bmp1k_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp2_chdkz : rhs_bmp2_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp2e_chdkz : rhs_bmp2e_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp2k_chdkz : rhs_bmp2k_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};
	class adv_rhs_bmp2d_chdkz : rhs_bmp2d_msv
	{
		scope = 2;
		Author_Macro
		crewMacro
		BMP_Textures
	};

//BMD2
	class rhs_bmd_base;
	class rhs_bmd2_base : rhs_bmd_base
	{
		class EventHandlers;
	};
	class adv_rhs_bmd2_chdkz : rhs_bmd2_base
	{
		scope = 2;
		Author_Macro
		crewMacro
		rhs_decalParameters[]={
			"['Number', cBMD3NumberPlaces, 'CDF']",  // Set number (random)
			"['Label', cBMDPlnSymPlaces, 'Platoon',11]",
			"['Label', cBMDArmySymPlaces, 'Army', 22]"
		};

		hiddenSelectionsTextures[] =
		{

			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa",
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_chdkz_co.paa",
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa",

			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"
		};
	};
//BMD1
	class rhs_bmd1_base : rhs_bmd_base
	{
		class EventHandlers;
	};
	class adv_rhs_bmd1_chdkz : rhs_bmd1_base
	{
		scope = 2;
		Author_Macro
		crewMacro
		rhs_decalParameters[]={
			"['Number', cBMD3NumberPlaces, 'Default']",  // Set number (random)
			"['Label', cBMDPlnSymPlaces, 'Platoon',11]",
			"['Label', cBMDArmySymPlaces, 'Army', 22]"
		};

		hiddenSelectionsTextures[] =
		{

			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa",
			"rhsafrf\addons\rhs_c_cti_indep\data\sa_bmd1_02_chdkz_co.paa",
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa",

			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"
		};
	};
//BTR70
	class rhs_btr_base;
	class rhs_btr70_vmf : rhs_btr_base
	{
		class EventHandlers;
	};
	class adv_rhs_btr70_chdkz : rhs_btr70_vmf
	{
		Author_Macro
		crewMacro
		rhs_decalParameters[]={
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTR2SideRoundelPlaces, 'Army',22]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_1_co.paa",
			"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_2_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
//BTR60
	class rhs_btr60_base;
	class rhs_btr60_vmf : rhs_btr60_base
	{
		class EventHandlers;
	};
	class adv_rhs_btr60_chdkz : rhs_btr60_vmf
	{
		rhs_decalParameters[]={
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTR2SideRoundelPlaces, 'Army',22]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};
		Author_Macro
		crewMacro

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_c_cti_indep\data\btr60_body_gue_co.paa",
			"rhsafrf\addons\rhs_c_cti_indep\data\btr60_details_gue_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
//T72
	class rhs_a3t72tank_base;
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		class EventHandlers;
	};
	class adv_rhs_t72bb_chdkz: rhs_t72bb_tv
	{
		Author_Macro
		crewMacro
		class EventHandlers : EventHandlers
		{
			class rhs_flag_init
			{
				init = "_this call rhs_fnc_t72_flag_init";
			};
		};
	};