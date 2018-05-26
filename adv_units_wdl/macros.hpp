#define macro_standard author = "[SeL] Belbo";\
	scope = 2;\
	faction = "adv_faction_units_wdl";

//backpacks	
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};
#define MACRO_ADDMAGAZINE(ITEM,COUNT) class _xx_##ITEM { \
    magazine = #ITEM; \
    count = COUNT; \
};

//units:
#define macro_mags_base "16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"

#define macro_mags_2(MAGS) MAGS,MAGS
#define macro_mags_3(MAGS) MAGS,MAGS,MAGS
#define macro_mags_4(MAGS) MAGS,MAGS,MAGS,MAGS
#define macro_mags_5(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_6(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_7(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_8(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_9(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_10(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_11(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_12(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS
#define macro_mags_13(MAGS) MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS,MAGS

#define macro_linked_base "ItemMap","ItemCompass","ItemWatch","ItemRadio"
#define macro_linked_base_nvg "ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"

#define macro_linked_1(ARG1) linkedItems[] = {ARG1,macro_linked_base};\
	respawnLinkedItems[] = {ARG1,macro_linked_base};
#define macro_linked_2(ARG1,ARG2) linkedItems[] = {ARG1,ARG2,macro_linked_base};\
	respawnLinkedItems[] = {ARG1,ARG2,macro_linked_base};
#define macro_linked_3(ARG1,ARG2,ARG3) linkedItems[] = {ARG1,ARG2,ARG3,macro_linked_base};\
	respawnLinkedItems[] = {ARG1,ARG2,ARG3,macro_linked_base};
#define macro_linked_4(ARG1,ARG2,ARG3,ARG4) linkedItems[] = {ARG1,ARG2,ARG3,ARG4,macro_linked_base};\
	respawnLinkedItems[] = {ARG1,ARG2,ARG3,ARG4,macro_linked_base};
#define macro_linked_5(ARG1,ARG2,ARG3,ARG4,ARG5) linkedItems[] = {ARG1,ARG2,ARG3,ARG4,ARG5,macro_linked_base};\
	respawnLinkedItems[] = {ARG1,ARG2,ARG3,ARG4,ARG5,macro_linked_base};
#define macro_linked_standard(ARG1) linkedItems[] = {ARG1,"H_HelmetIA_wdl",macro_linked_base_nvg};\
	respawnLinkedItems[] = {ARG1,"H_HelmetIA_wdl",macro_linked_base_nvg};

#define macro_weapons_base "hgun_P07_F","Throw","Put"

#define macro_uniform(UNIFORM,TEXTURE,MODEL) uniformClass = #UNIFORM;\
	hiddenSelectionsTextures[] = {#TEXTURE};\
	model = #MODEL;

#define macro_uniform_CU macro_uniform(adv_retex_u_CombatUniform_wdl, a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa, a3\characters_F\BLUFOR\b_soldier_01.p3d)
#define macro_uniform_CU_vest macro_uniform(adv_retex_u_CombatUniform_wdl_vest, a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa, a3\characters_F\BLUFOR\b_soldier_03.p3d)
#define macro_uniform_CU_tshirt macro_uniform(adv_retex_u_CombatUniform_wdl_tshirt, a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa, a3\characters_F\BLUFOR\b_soldier_02.p3d)

#define macro_uniform_CU_I macro_uniform(adv_retex_u_CombatUniform_i_wdl, adv_retex\textures\equipment\ia_soldier_01_clothing_wdl_co.paa, a3\Characters_F_Beta\INDEP\ia_soldier_01.p3d)
#define macro_uniform_CU_I_ss macro_uniform(adv_retex_u_CombatUniform_i_wdl_shortsleeve, adv_retex\textures\equipment\ia_soldier_01_clothing_wdl_co.paa, a3\Characters_F_Beta\INDEP\ia_soldier_02.p3d)

//vehicles
#define macro_veh_crew(ARG1,ARG2) crew = #ARG1;\
	typicalCargo[] = {#ARG2};