class CfgPatches
{
    class adv_tfar_backpacks
    {
        units[] = {
			"adv_tf_anprc155_west"
			,"adv_tf_rt1523g_ind"
			,"adv_tf_rt1523g_rhs_ind"
			,"adv_tf_rt1523g_black_ind"
			,"adv_tf_rt1523g_sage_ind"
			,"adv_tf_rt1523g_green_ind"
			,"adv_tf_rt1523g_opf"
			,"adv_tf_rt1523g_rhs_opf"
			,"adv_tf_rt1523g_black_opf"
			,"adv_tf_rt1523g_sage_opf"
			,"adv_tf_rt1523g_green_opf"
		};
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {
			"task_force_radio_items"
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
	class tf_anprc155_coyote;
	class adv_tf_anprc155_west: tf_anprc155_coyote {
		displayName = "AN/PRC 155 Coyote - BLU";
		tf_encryptionCode = "tf_west_radio_code";
	};
	
	//INDFOR
	class tf_rt1523g;
	class adv_tf_rt1523g_ind: tf_rt1523g {
		displayName = "RT-1523G (ASIP) - IND";
		tf_encryptionCode = "tf_guer_radio_code";
	};
	
	class tf_rt1523g_rhs;
	class adv_tf_rt1523g_rhs_ind: tf_rt1523g_rhs {
		displayName = "RT-1523G (ASIP) RHS - IND";
		tf_encryptionCode = "tf_guer_radio_code";
	};
	
	class tf_rt1523g_black;
	class adv_tf_rt1523g_black_ind: tf_rt1523g_black {
		displayName = "RT-1523G (ASIP) Black - IND";
		tf_encryptionCode = "tf_guer_radio_code";
	};
	
	class tf_rt1523g_sage;
	class adv_tf_rt1523g_sage_ind: tf_rt1523g_sage {
		displayName = "RT-1523G (ASIP) Sage - IND";
		tf_encryptionCode = "tf_guer_radio_code";
	};
	
	class tf_rt1523g_green;
	class adv_tf_rt1523g_green_ind: tf_rt1523g_green {
		displayName = "RT-1523G (ASIP) Green - IND";
		tf_encryptionCode = "tf_guer_radio_code";
	};
	
	//OPFOR
	class adv_tf_rt1523g_opf: tf_rt1523g {
		displayName = "RT-1523G (ASIP) - OPF";
		tf_encryptionCode = "tf_east_radio_code";
	};
	
	class adv_tf_rt1523g_rhs_opf: tf_rt1523g_rhs {
		displayName = "RT-1523G (ASIP) RHS - OPF";
		tf_encryptionCode = "tf_east_radio_code";
	};
	
	class adv_tf_rt1523g_black_opf: tf_rt1523g_black {
		displayName = "RT-1523G (ASIP) Black - OPF";
		tf_encryptionCode = "tf_east_radio_code";
	};
	
	class adv_tf_rt1523g_sage_opf: tf_rt1523g_sage {
		displayName = "RT-1523G (ASIP) Sage - OPF";
		tf_encryptionCode = "tf_east_radio_code";
	};
	
	class adv_tf_rt1523g_green_opf: tf_rt1523g_green {
		displayName = "RT-1523G (ASIP) Green - OPF";
		tf_encryptionCode = "tf_east_radio_code";
	};
};
