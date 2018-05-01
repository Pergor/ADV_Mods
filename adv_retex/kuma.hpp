//INHERITANCES
class MBT_03_base_F;
class I_MBT_03_base_F:MBT_03_base_F {
	class AnimationSources;
	class TextureSources;
};
class I_MBT_03_cannon_F: I_MBT_03_base_F {
	class Eventhandlers;
	class AnimationSources: AnimationSources {
		class HideHull;
		class HideTurret;
		class showCamonetCannon;
		class showCamonetCannon1;
		class showCamonetHull;
		class showCamonetTurret;
	};
	class TextureSources: TextureSources {
		class adv_blufor {
			displayName = "NATO";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\kuma\TankBodyTexture.paa"
				,"adv_retex\textures\kuma\TankTurretTexture.paa"
				,"adv_retex\textures\kuma\TankTurretMGTexture.paa"
				,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
			};
		};
	};
};

//kuma
class adv_retex_b_kuma_f: I_MBT_03_cannon_F {
	standard_macro
	nato_macro
	class AnimationSources: AnimationSources {
		class HideHull: HideHull {
			initPhase = 1;
		};
		class HideTurret: HideTurret {
			initPhase = 1;
		};
	};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "MBT-52 Kuma";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"adv_blufor",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\kuma\TankBodyTexture.paa"
		,"adv_retex\textures\kuma\TankTurretTexture.paa"
		,"adv_retex\textures\kuma\TankTurretMGTexture.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
	};
};