#define MACRO_VEC_ISOLATION(vehicle,baseClass,isolation) class vehicle : baseClass { \
    tf_isolatedAmount = isolation; \
};

class MRAP_01_base_F;
MACRO_VEC_ISOLATION(rhsusf_hmmwe_base,MRAP_01_base_F,0.4)
MACRO_VEC_ISOLATION(rhsusf_RG33L_base,MRAP_01_base_F,0.6)
MACRO_VEC_ISOLATION(rhsusf_Cougar_base,MRAP_01_base_F,0.6)
MACRO_VEC_ISOLATION(rhsusf_mrzr_base,MRAP_01_base_F,0.0)
MACRO_VEC_ISOLATION(rhsusf_m998_w_2dr,rhsusf_hmmwe_base,0.0)

class rhsusf_m998_w_4dr_fulltop;
MACRO_VEC_ISOLATION(rhsusf_m1025_w,rhsusf_m998_w_4dr_fulltop,0.4)

class rhsusf_M1078A1P2_B_M2_fmtv_usarmy;
MACRO_VEC_ISOLATION(rhsusf_M1078A1R_SOV_M2_D_fmtv_socom,rhsusf_M1078A1P2_B_M2_fmtv_usarmy,0.0)
MACRO_VEC_ISOLATION(rhsusf_M1078A1R_SOV_M2_D_fmtv_socom,rhsusf_M1078A1P2_B_M2_fmtv_usarmy,0.0)

class Truck_01_base_F;
MACRO_VEC_ISOLATION(rhsusf_HEMTT_A4_base,Truck_01_base_F,0.4)
MACRO_VEC_ISOLATION(rhsusf_fmtv_base,Truck_01_base_F,0.4)
MACRO_VEC_ISOLATION(rhsusf_caiman_base,Truck_01_base_F,0.6)
MACRO_VEC_ISOLATION(rhsusf_himars_base,Truck_01_base_F,0.6)