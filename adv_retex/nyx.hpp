//INHERITANCES
class Tank_F: Tank {
	class AnimationSources;
};
class LT_01_base_F: Tank_F {
	class AnimationSources: AnimationSources {
		class showBags;
		class showTools;
	};
	class TextureSources;
};

class LT_01_AA_base_F: LT_01_base_F {};
class LT_01_AT_base_F: LT_01_base_F {};
class LT_01_cannon_base_F: LT_01_base_F {};
class LT_01_scout_base_F: LT_01_base_F {};

class I_LT_01_AA_F: LT_01_AA_base_F {
	class AnimationSources: AnimationSources {
		class showTools: showTools {
			initPhase = 1;
		};
	};
};
class I_LT_01_AT_F: LT_01_AT_base_F {
	class AnimationSources: AnimationSources {
		class showTools: showTools {
			initPhase = 1;
		};
	};
};
class I_LT_01_cannon_F: LT_01_cannon_base_F {
	class AnimationSources: AnimationSources {
		class showTools: showTools {
			initPhase = 1;
		};
	};
};
class I_LT_01_scout_F: LT_01_scout_base_F {
	class AnimationSources: AnimationSources {
		class showTools: showTools {
			initPhase = 1;
		};
	};
};

//Nyx AA
class adv_retex_b_lt_aa_f: I_LT_01_AA_F {
	standard_macro
	nato_macro
	animationList[] = {"showBags",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "AWC 301 Nyx (AA - NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"Indep_Olive",1};
	hiddenSelectionsTextures[] = {
		"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
		,"A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		,"A3\armor_f\data\cage_olive_co.paa"
	};
};
//Nyx AT
class adv_retex_b_lt_at_f: I_LT_01_AT_F {
	standard_macro
	nato_macro
	animationList[] = {"showBags",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "AWC 301 Nyx (AT - NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"Indep_Olive",1};
	hiddenSelectionsTextures[] = {
		"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
		,"A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		,"A3\armor_f\data\cage_olive_co.paa"
	};
};
//Nyx cannon
class adv_retex_b_lt_cannon_f: I_LT_01_cannon_F {
	standard_macro
	nato_macro
	animationList[] = {"showBags",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "AWC 301 Nyx (Autocannon - NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"Indep_Olive",1};
	hiddenSelectionsTextures[] = {
		"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
		,"A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		,"A3\armor_f\data\cage_olive_co.paa"
	};
};
//Nyx scout
class adv_retex_b_lt_scout_f: I_LT_01_scout_F {
	standard_macro
	nato_macro
	animationList[] = {"showBags",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	displayName = "AWC 301 Nyx (Recon - NATO)";
	forceInGarage = 1;
	crew = "B_crew_F";
	typicalCargo[] = {"B_soldier_F"};
	textureList[] = {"Indep_Olive",1};
	hiddenSelectionsTextures[] = {
		"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
		,"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa"
		,"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		,"A3\armor_f\data\cage_olive_co.paa"
	};
};