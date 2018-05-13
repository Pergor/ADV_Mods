//INHERITANCES
class APC_tracked_03_base_F;
class I_APC_tracked_03_base_F: APC_tracked_03_base_F {
	class AnimationSources;
	class TextureSources;
};
class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {
	class Eventhandlers;
	class AnimationSources: AnimationSources {
		class HideTurret;
		class showBags;
		class showBags2;
		class showCamonetHull;
		class showCamonetTurret;
		class showSLATHull;
		class showSLATTurret;
		class showTools;
	};
	class TextureSources: TextureSources {
		class adv_blufor {
			displayName = "NATO";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\mora\TurretTexture.paa"
				,"adv_retex\textures\mora\BodyTexture.paa"
				,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
				,"A3\armor_f\data\cage_G3_co.paa"
			};
		};
	};
};

//mora
class adv_retex_b_mora_f: I_APC_tracked_03_cannon_F {
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
	displayName = "FV-720 Mora (NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"adv_blufor",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\mora\TurretTexture.paa"
		,"adv_retex\textures\mora\BodyTexture.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		,"A3\armor_f\data\cage_G3_co.paa"
	};
};