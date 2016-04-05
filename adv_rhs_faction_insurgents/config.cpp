#define Standard_Component side=0;\
			faction=adv_rhs_faction_insurgents;

class CfgPatches
{
    class adv_rhs_faction_insurgents
    {
        units[] = {
			"adv_rhs_g_Soldier_F",
			"adv_rhs_g_Soldier_F2",
			"adv_rhs_g_Soldier_F3",
			"adv_rhs_g_Soldier_lite_F",
			"adv_rhs_g_Soldier_SL_F",
			"adv_rhs_g_Soldier_TL_F",
			"adv_rhs_g_Soldier_AR_F",
			"adv_rhs_g_Soldier_EXP_F",
			"adv_rhs_g_Soldier_GL_F",
			"adv_rhs_g_Soldier_M_F",
			"adv_rhs_g_Soldier_LAT_F",
			"adv_rhs_g_Soldier_AT_F",
			"adv_rhs_g_Soldier_AA_F",
			"adv_rhs_g_Soldier_AAR_F",
			"adv_rhs_g_medic_F",
			"adv_rhs_g_engineer_F",
			"adv_rhs_g_crew_F",
			"adv_RHS_UAZ_chdkz",
			"adv_rhs_uaz_open_chdkz",
			"adv_rhs_uaz_dshkm_chdkz",
			"adv_rhs_uaz_ags_chdkz",
			"adv_rhs_uaz_spg9_chdkz",
			"adv_rhs_ural_chdkz",
			"adv_rhs_ural_open_chdkz",
			"adv_rhs_ural_work_chdkz",
			"adv_rhs_ural_work_open_chdkz",
			"adv_RHS_BM21_chdkz",
			"adv_RHS_Mi8amt_chdkz",
			"adv_rhs_zsu234_chdkz",
			"adv_rhs_bmp1_chdkz",
			"adv_rhs_bmp1p_chdkz",
			"adv_rhs_bmp1d_chdkz",
			"adv_rhs_bmp1k_chdkz",
			"adv_rhs_bmp2_chdkz",
			"adv_rhs_bmp2e_chdkz",
			"adv_rhs_bmp2k_chdkz",
			"adv_rhs_bmp2d_chdkz",
			"adv_rhs_bmd2_chdkz",
			"adv_rhs_bmd1_chdkz",
			"adv_rhs_btr70_chdkz",
			"adv_rhs_btr60_chdkz",
			"adv_rhs_t72bb_chdkz",
		};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {rhs_main};
		version = "1.0";
		versionStr = "1.0";
		author[] = {"[SeL] Belbo // Adrian"};
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFactionClasses
{
	class adv_rhs_faction_insurgents
	{
		displayName = "Eastern Militia";
	};
};

class CfgVehicles 
{
	class rhs_g_Soldier_F;
	class rhs_g_Soldier_F2;
	class rhs_g_Soldier_F3;
	class rhs_g_Soldier_lite_F;
	class rhs_g_Soldier_SL_F;
	class rhs_g_Soldier_TL_F;
	class rhs_g_Soldier_AR_F;
	class rhs_g_Soldier_EXP_F;
	class rhs_g_Soldier_GL_F;
	class rhs_g_Soldier_M_F;
	class rhs_g_Soldier_LAT_F;
	class rhs_g_Soldier_AT_F;
	class rhs_g_Soldier_AA_F;
	class rhs_g_Soldier_AAR_F;
	class rhs_g_Soldier_AAT_F;
	class rhs_g_medic_F;
	class rhs_g_engineer_F;
	class rhs_g_crew_F;
	
	class adv_rhs_g_Soldier_F: rhs_g_Soldier_F 
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_F2: rhs_g_Soldier_F2 
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_F3: rhs_g_Soldier_F3
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_lite_F: rhs_g_Soldier_lite_F 
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_SL_F: rhs_g_Soldier_SL_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_TL_F: rhs_g_Soldier_TL_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_AR_F: rhs_g_Soldier_AR_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_EXP_F: rhs_g_Soldier_EXP_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_GL_F: rhs_g_Soldier_GL_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_M_F: rhs_g_Soldier_M_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_LAT_F: rhs_g_Soldier_LAT_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_AT_F: rhs_g_Soldier_AT_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_AA_F: rhs_g_Soldier_AA_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_AAR_F: rhs_g_Soldier_AAR_F
	{
		Standard_Component
	};
	class adv_rhs_g_Soldier_AAT_F: rhs_g_Soldier_AAT_F
	{
		Standard_Component
	};
	class adv_rhs_g_medic_F: rhs_g_medic_F
	{
		Standard_Component
	};
	class adv_rhs_g_engineer_F: rhs_g_engineer_F
	{
		Standard_Component
	};
	class adv_rhs_g_crew_F: rhs_g_crew_F
	{
		Standard_Component
	};
	
	#include "vehicles.hpp"
};

class CfgGroups
{
	class East
	{
		class adv_rhs_faction_insurgents
		{
			name = "Eastern Militia";
			#include "groups\chdkz_infantry.hpp"
			#include "groups\chdkz_arty_bm21.hpp"
			#include "groups\chdkz_infantry_bmd1.hpp"
			#include "groups\chdkz_infantry_bmd2.hpp"
			#include "groups\chdkz_infantry_bmp1.hpp"
			#include "groups\chdkz_infantry_bmp2.hpp"
			#include "groups\chdkz_infantry_btr70.hpp"
			#include "groups\chdkz_infantry_btr60.hpp"
			#include "groups\chdkz_infantry_ural.hpp"
			#include "groups\chdkz_infantry_uaz.hpp"
			#include "groups\chdkz_tanks_t72.hpp"
		};
	};
};