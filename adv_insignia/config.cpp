class CfgPatches
{
    class adv_insignia
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {};
		version = "1.1.1";
		versionStr = "1.1.1";
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

#define macro_insignia(NAME,TEXTURE) displayName = NAME;\
		texture = TEXTURE;\
		author = "[SeL] Belbo";\
		textureVehicle = "";

class CfgUnitInsignia
{
	//general insignia
	class ADV_insignia_medic
	{
		macro_insignia("Insignia Medic (fabric)","\adv_insignia\img\ADV_medic.paa")
	};
	class ADV_insignia_medic_veh
	{
		macro_insignia("Insignia Medic Vehicle","\adv_insignia\img\ADV_medic_veh.paa")
	};
	class ADV_insignia_eod
	{
		macro_insignia("Insignia EOD","\adv_insignia\img\adv_eod.paa")
	};
	class ADV_insignia_fac
	{
		macro_insignia("Insignia FAC","\adv_insignia\img\adv_fac.paa")
	};
	class ADV_insignia_jfo
	{
		macro_insignia("Insignia JFO","\adv_insignia\img\adv_jfo.paa")
	};
	class ADV_insignia_jtac
	{
		macro_insignia("Insignia JTAC","\adv_insignia\img\adv_jtac.paa")
	};
	class ADV_insignia_ucp_jtac
	{
		macro_insignia("Insignia JTAC (UCP)","\adv_insignia\img\adv_ucp_jtac.paa")
	};
	class ADV_insignia_ucp_eod
	{
		macro_insignia("Insignia EOD (UCP)","\adv_insignia\img\adv_ucp_eod.paa")
	};

	//usarmy insignia
	#include "usarmy_ocp.hpp"
	#include "usarmy_ucp.hpp"

	//russian insignia
	#include "rus.hpp"
	
};