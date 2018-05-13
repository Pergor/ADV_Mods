//INHERITANCES
class I_MRAP_03_F;
class I_MRAP_03_hmg_F;
class I_MRAP_03_gmg_F;

//strider
class adv_retex_b_strider_f: I_MRAP_03_F {
	standard_macro
	nato_macro
	displayName = "Strider (NATO)";
	crew = "B_soldier_F";
	typicalCargo[] = {"B_soldier_F"};
	forceInGarage = 1;
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	hiddenSelectionsTextures[] = {
		"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
		,"a3\data_f\vehicles\turret_co.paa"
	};
};
class adv_retex_b_strider_hmg_f: I_MRAP_03_hmg_F {
	standard_macro
	nato_macro
	displayName = "Strider HMG (NATO)";
	crew = "B_soldier_F";
	typicalCargo[] = {"B_soldier_F"};
	forceInGarage = 1;
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	hiddenSelectionsTextures[] = {
		"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
		,"a3\data_f\vehicles\turret_co.paa"
	};
};
class adv_retex_b_strider_gmg_f: I_MRAP_03_gmg_F {
	standard_macro
	nato_macro
	displayName = "Strider GMG (NATO)";
	crew = "B_soldier_F";
	typicalCargo[] = {"B_soldier_F"};
	forceInGarage = 1;
	class TransportMagazines {
		natomags
	};
	class TransportWeapons {
		natoweapons
	};
	hiddenSelectionsTextures[] = {
		"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa"
		,"a3\data_f\vehicles\turret_co.paa"
	};
};