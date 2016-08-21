//base rifleman
class adv_us80m_soldier_f : adv_us80a_soldier_f {
	faction = "adv_faction_enemies_us80m";
};
//soldier AT
class adv_us80m_soldier_lat_f : adv_us80a_soldier_lat_f {
	faction = "adv_faction_enemies_us80m";
};
//Radio Operator
class adv_us80m_soldier_radio_f : adv_us80a_soldier_radio_f {
	faction = "adv_faction_enemies_us80m";
};
//marksman
class adv_us80m_soldier_m_f : adv_us80a_soldier_m_f {
	faction = "adv_faction_enemies_us80m";
};
//squad leader	
class adv_us80m_soldier_sl_f : adv_us80a_soldier_sl_f {
	faction = "adv_faction_enemies_us80m";
};
//team leader	
class adv_us80m_soldier_tl_f : adv_us80a_soldier_tl_f {
	faction = "adv_faction_enemies_us80m";
};
//medic
class adv_us80m_medic_f : adv_us80a_medic_f {
	faction = "adv_faction_enemies_us80m";
};
//grenadier
class adv_us80m_soldier_gl_f: adv_us80a_soldier_gl_f {
	faction = "adv_faction_enemies_us80m";
};
//breacher
class adv_us80m_soldier_sg_f: adv_us80a_soldier_sg_f {
	faction = "adv_faction_enemies_us80m";
};
//AR
class adv_us80m_soldier_ar_f: adv_us80a_soldier_ar_f {
	faction = "adv_faction_enemies_us80m";
};
//heavygunner
class adv_us80m_heavygunner_f: adv_us80a_heavygunner_f {
	faction = "adv_faction_enemies_us80m";
};
//crew
class adv_us80m_crew_f: adv_us80a_crew_f {
	faction = "adv_faction_enemies_us80m";
};
//Helicrew
class adv_us80m_helipilot_f: adv_us80a_helipilot_f {
	faction = "adv_faction_enemies_us80m";
};
//Pilot
class adv_us80m_pilot_f: adv_us80a_pilot_f {
	faction = "adv_faction_enemies_us80m";
};

//vehicles
class RHS_UH1Y;
class rhsusf_CH53E_USMC;
class CUP_B_AV8B_CAP_USMC;
class CUP_B_AAV_USMC;
class CUP_B_LAV25_USMC;
//tracked
class adv_us80m_m113_f: adv_us80a_m113_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
class adv_us80m_m113_m2_f: adv_us80a_m113_m2_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
class adv_us80m_m113_ammo_f: adv_us80a_m113_ammo_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
class adv_us80m_m1a1_f: adv_us80a_m1a1_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
class adv_us80m_aav_f: CUP_B_AAV_USMC {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
class adv_us80m_lav_f: CUP_B_LAV25_USMC {
	standard_cfg_vehicle_m
	crew = "adv_us80m_crew_f";
};
//wheeled
class adv_us80m_mb4wd_f: adv_us80a_mb4wd_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";
};
class adv_us80m_m1025a2_f: adv_us80a_m1025a2_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";
};
class adv_us80m_m1025a2_m2_f: adv_us80a_m1025a2_m2_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";
};
class adv_us80m_mtvr_f: adv_us80a_mtvr_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";
};
class adv_us80m_m1030_f: adv_us80a_m1030_f {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";
};
//static
class adv_us80m_tow: adv_us80a_tow {
	standard_cfg_vehicle_m
	crew = "adv_us80a_soldier_f";		
};
class adv_us80m_m2staticmg: adv_us80a_m2staticmg {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";		
};
class adv_us80m_m2staticmg_minitripod: adv_us80a_m2staticmg_minitripod {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";		
};
class adv_us80m_stinger: adv_us80a_stinger {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";		
};
class adv_us80m_m252: adv_us80a_m252 {
	standard_cfg_vehicle_m
	crew = "adv_us80m_soldier_f";		
};
//air vehicles
class adv_us80m_uh1y_f: RHS_UH1Y {
	standard_cfg_vehicle_m
	crew = "adv_us80m_helipilot_f";
};
class adv_us80m_ch53_f: rhsusf_CH53E_USMC {
	standard_cfg_vehicle_m
	crew = "adv_us80m_helipilot_f";
};
class adv_us80m_av8b_f: CUP_B_AV8B_CAP_USMC {
	standard_cfg_vehicle_m
	crew = "adv_us80m_pilot_f";
};