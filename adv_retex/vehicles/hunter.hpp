//INHERITANCES
//car_f defined in config.hpp!
class MRAP_01_base_F: Car_F {
	class TextureSources;
};
class B_MRAP_01_F: MRAP_01_base_F {
	class TextureSources: TextureSources {
		class sand {
			author = "Bohemia Interactive";
			displayName = "Standard";
			faction[] = {"BLU_F"};
			textures[] = {
				"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa"
				,"\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"
				,""
			};
		};
		class adv_desert {
			author = "Spezialeinheit-Luchs";
			displayName = "Desert";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\hunter\rhs_body.paa"
				,"adv_retex\textures\hunter\rhs_back.paa"
				,""
			};
		};
	};
};

class MRAP_01_hmg_base_F: MRAP_01_base_F {};
class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F {
	hiddenSelections[] = {"Camo1","Camo2","camo3"};
	class TextureSources: TextureSources {
		class sand {
			author = "Bohemia Interactive";
			displayName = "Standard";
			faction[] = {"BLU_F"};
			textures[] = {
				"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa"
				,"\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"
				,"\A3\Data_F\Vehicles\Turret_CO.paa"
			};
		};
		class adv_desert {
			author = "Spezialeinheit-Luchs";
			displayName = "Desert";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\hunter\rhs_body.paa"
				,"adv_retex\textures\hunter\rhs_back.paa"
				,"adv_retex\textures\hunter\rhs_turret.paa"
			};
		};
	};
};

class MRAP_01_gmg_base_F: MRAP_01_base_F {};
class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F {
	hiddenSelections[] = {"Camo1","Camo2","camo3"};
	class TextureSources: TextureSources {
		class sand {
			author = "Bohemia Interactive";
			displayName = "Standard";
			faction[] = {"BLU_F"};
			textures[] = {
				"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa"
				,"\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"
				,"\A3\Data_F\Vehicles\Turret_CO.paa"
			};
		};
		class adv_desert {
			author = "Spezialeinheit-Luchs";
			displayName = "Desert";
			faction[] = {"BLU_F"};
			textures[] = {
				"adv_retex\textures\hunter\rhs_body.paa"
				,"adv_retex\textures\hunter\rhs_back.paa"
				,"adv_retex\textures\hunter\rhs_turret.paa"
			};
		};
	};	
};

//hunter
class adv_retex_b_mrap_f: B_MRAP_01_F {
	displayName = "Hunter (Desert)";
	standard_macro
	forceInGarage = 1;
	textureList[] = {"adv_desert",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\hunter\rhs_body.paa"
		,"adv_retex\textures\hunter\rhs_back.paa"
	};
};
class adv_retex_b_mrap_hmg_f: B_MRAP_01_hmg_F {
	displayName = "Hunter HMG (Desert)";
	standard_macro
	forceInGarage = 1;
	textureList[] = {"adv_desert",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\hunter\rhs_body.paa"
		,"adv_retex\textures\hunter\rhs_back.paa"
		,"adv_retex\textures\hunter\rhs_turret.paa"
	};
};
class adv_retex_b_mrap_gmg_f: B_MRAP_01_gmg_F {
	displayName = "Hunter GMG (Desert)";
	standard_macro
	forceInGarage = 1;
	textureList[] = {"adv_desert",1};
	hiddenSelectionsTextures[] = {
		"adv_retex\textures\hunter\rhs_body.paa"
		,"adv_retex\textures\hunter\rhs_back.paa"
		,"adv_retex\textures\hunter\rhs_turret.paa"
	};
};