class CfgPatches
{
    class adv_insignia
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {};
		version = "1.1";
		versionStr = "1.1";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgFunctions {
	class adv_insignia {
		tag = "adv_insignia";
		class init {
			file = "adv_insignia\functions";
			class insignia { };
		};
	};
};

class CfgUnitInsignia
{
	//general insignia
	class ADV_insignia_medic
	{
		displayName = "Insignia Medic (fabric)";
		author = "[SeL] Belbo // Adrian";
		texture = "\adv_insignia\img\ADV_medic.paa";
		textureVehicle = "";
	};
	class ADV_insignia_medic_veh
	{
		displayName = "Insignia Medic Vehicle";
		author = "[SeL] Belbo // Adrian";
		texture = "\adv_insignia\img\ADV_medic_veh.paa";
		textureVehicle = "";
	};

	//usarmy insignia
	#include "usarmy_ocp.hpp"
	#include "usarmy_ucp.hpp"

	//russian insignia
	#include "rus.hpp"
	
};