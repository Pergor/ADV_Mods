//INHERITANCES
class APC_Wheeled_02_base_F;
class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F{
	class AnimationSources;
	class TextureSources;
};
class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
	class Eventhandlers;
	class AnimationSources: AnimationSources {
		class HideTurret;
		class showBags;
		class showCamonetHull;
		class showCanisters;
		class showSLATHull;
		class showTools;
	};
	class TextureSources: TextureSources {
		class adv_blufor {
			displayName = "NATO";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\marid\apc_wheeled_02_ext_01_blufor_co.paa"
				,"adv_retex\textures\marid\apc_wheeled_02_ext_02_blufor_co.paa"
				,"a3\data_f\vehicles\turret_co.paa"
				//,"A3\armor_f\data\cage_csat_green_CO.paa"
				,"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				,"A3\armor_f\data\cage_csat_co.paa"
			};
		};
		class adv_blufor_san {
			displayName = "NATO (SAN)";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\marid\apc_wheeled_02_ext_01_blufor_co_san.paa"
				,"adv_retex\textures\marid\apc_wheeled_02_ext_02_blufor_co.paa"
				,"a3\data_f\vehicles\turret_co.paa"
				,"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				,"A3\armor_f\data\cage_csat_co.paa"
			};
		};
	};
};

//marid
class adv_retex_b_marid_f: O_APC_Wheeled_02_rcws_v2_F {
	standard_macro
	nato_macro
	class AnimationSources: AnimationSources {
		class showBags: showBags {
			initPhase = 1;
		};
		class showCanisters: showCanisters {
			initPhase = 1;
		};
		class showTools: showTools {
			initPhase = 1;
		};
	};
	animationList[] = {"showBags",1,"showCanisters",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "MSE-3 Marid";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"adv_blufor",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\marid\apc_wheeled_02_ext_01_blufor_co.paa"
		,"adv_retex\textures\marid\apc_wheeled_02_ext_02_blufor_co.paa"
		,"a3\data_f\vehicles\turret_co.paa"
		,"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		,"A3\armor_f\data\cage_csat_co.paa"
	};
	class EventHandlers: EventHandlers {
		//init = "params ['_target'];if (local _target) then {[_target] call adv_retex_fnc_setTextureMarid;};";
	};
};
class adv_retex_b_marid_san_f: adv_retex_b_marid_f {
	standard_macro
	nato_macro
	displayName = "MSE-3 Marid (SAN)";
	textureList[] = {"adv_blufor_san",1};
	animationList[] = {"showBags",0,"showCanisters",1,"showTools",1,"showCamonetHull",0,"showSLATHull",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\marid\apc_wheeled_02_ext_01_blufor_co_san.paa"
		,"adv_retex\textures\marid\apc_wheeled_02_ext_02_blufor_co.paa"
		,"a3\data_f\vehicles\turret_co.paa"
		,"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		,"A3\armor_f\data\cage_csat_co.paa"
	};
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
	class EventHandlers: EventHandlers {
		//init = "params ['_target'];if (local _target) then {[_target] call adv_retex_fnc_setTextureMaridSan;};_target lockturret [[0],true];";
		init = "params ['_target'];_target lockturret [[0],true];";
	};
	threat[] = {0,0,0};
	attendant = 1;
};