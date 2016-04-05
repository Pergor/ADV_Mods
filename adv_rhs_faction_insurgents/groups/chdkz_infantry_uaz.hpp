
			class rhs_group_east_ins_uaz
			{
				name = "Motorized (UAZ)";
				aliveCategory="Motorized";
				class BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (AGS-30)";
					side=0;
					faction = "rhs_faction_insurgents";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side=0;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side=0;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side=0;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side=0;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_Team_HMG: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (DShkM)";
					class Unit0
					{
						side=0;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side=0;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side=0;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side=0;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side=0;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AT: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (SPG-9)";
					class Unit0
					{
						side=0;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side=0;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side=0;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side=0;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side=0;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AA: BUS_MotInf_Team_GMG
				{
					name = "Mot. Air-defense Team";
					class Unit0
					{
						side=0;
						vehicle = "RHS_UAZ_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side=0;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side=0;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};