#include "macros.hpp"

class CfgPatches
{
    class adv_tfar_unsung_backpacks
    {
        units[] = {
			"TFAR_UNS_ARMY_RTO"
			,"TFAR_UNS_ARMY_RTO2"
			,"TFAR_UNS_SF_RTO"
			,"TFAR_UNS_Alice_FR"
			,"TFAR_UNS_USMC_RTO"
			,"TFAR_UNS_USMC_RTO2"
			,"TFAR_UNS_NVA_RTO"
		};
        weapons[] = {};
        requiredVersion = 1.70;
        requiredAddons[] = {
			"uns_backpacks"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

class CfgVehicles
{
	
	//BLUFOR
	class UNS_ARMY_RTO;
	class TFAR_UNS_ARMY_RTO: UNS_ARMY_RTO {
		displayName = "(UNS) PRC-25 1 (TFAR)";
		macro_make_radio
		macro_west_radio
	};
	class UNS_ARMY_RTO2;
	class TFAR_UNS_ARMY_RTO2: UNS_ARMY_RTO2 {
		displayName = "(UNS) PRC-25 1/Ruck (TFAR)";
		macro_make_radio
		macro_west_radio
	};
	class UNS_SF_RTO;
	class TFAR_UNS_SF_RTO: UNS_SF_RTO {
		displayName = "(UNS) PRC-25 2 (TFAR)";
		macro_make_radio
		macro_west_radio
	};
	class UNS_Alice_FR;
	class TFAR_UNS_Alice_FR: UNS_Alice_FR {
		displayName = "(UNS) USMC Alice Pack/Frame RTO (TFAR)";
		macro_make_radio
		macro_west_radio
	};
	class UNS_USMC_RTO;
	class TFAR_UNS_USMC_RTO: UNS_USMC_RTO {
		displayName = "(UNS) USMC PRC-10 (TFAR)";
		macro_make_radio
		macro_west_radio
	};
	class UNS_USMC_RTO2;
	class TFAR_UNS_USMC_RTO2: UNS_USMC_RTO2 {
		displayName = "(UNS) USMC PRC-10 Etool (TFAR)";
		macro_make_radio
		macro_west_radio
	};

	//OPFOR
	class UNS_NVA_RTO;
	class TFAR_UNS_NVA_RTO: UNS_NVA_RTO {
		displayName = "(UNS) NVA RTO Pack (TFAR)";
		macro_make_radio
		macro_east_radio
	};

};