//INHERITANCES
class APC_Wheeled_03_base_F;
class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {
	class AnimationSources;
	class TextureSources;
};
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
	class Eventhandlers;
	class AnimationSources: AnimationSources {
		class HideTurret;
		class showBags;
		class showBags2;
		class showSLATHull;
		class showTools;
	};
	class TextureSources: TextureSources {
		class adv_blufor {
			displayName = "NATO";
			faction[] = {"BLU_F"};
			textures[] = {
				"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa"
				,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa"
				,"a3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa"
				,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
				,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
				,"A3\armor_f\data\cage_sand_co.paa"
			};
		};
		class adv_blufor_san {
			displayName = "NATO (SAN)";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\gorgon\apc_wheeled_03_ext_co_san.paa"
				,"adv_retex\textures\gorgon\apc_wheeled_03_ext2_co_san.paa"
				,"a3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa"
				,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
				,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
				,"A3\armor_f\data\cage_sand_co.paa"
			};
		};
	};
};

//gorgon
class adv_retex_b_gorgon_f: I_APC_Wheeled_03_cannon_F {
	standard_macro
	nato_macro
	class AnimationSources: AnimationSources {
		class showBags: showBags {
			initPhase = 1;
		};
		class showBags2: showBags2 {
			initPhase = 1;
		};
		class showTools: showTools {
			initPhase = 1;
		};
	};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "AFV-4 Gorgon (NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"adv_blufor",1};
	hiddenSelectionsTextures[] = {
		"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa"
		,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa"
		,"a3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa"
		,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
		,"A3\armor_f\data\cage_sand_co.paa"
	};
};

//san variant:
class adv_retex_b_gorgon_san_f: adv_retex_b_gorgon_f {
	standard_macro
	displayName = "AFV-4 Gorgon (SAN)";
	class AnimationSources: AnimationSources {
		class HideTurret: HideTurret {
			initPhase = 1;
		};
		class showBags: showBags {
			initPhase = 0;
		};
		class showSLATHull: showSLATHull {
			initPhase = 1;
		};
	};
	textureList[] = {"adv_blufor_san",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\gorgon\apc_wheeled_03_ext_co_san.paa"
		,"adv_retex\textures\gorgon\apc_wheeled_03_ext2_co_san.paa"
		,"a3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa"
		,"a3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"
		,"A3\armor_f\data\cage_sand_co.paa"
	};
	class EventHandlers: EventHandlers {
		init = "params ['_target'];_target lockturret [[0],true];";
	};
	threat[] = {0,0,0};
	attendant = 1;
};