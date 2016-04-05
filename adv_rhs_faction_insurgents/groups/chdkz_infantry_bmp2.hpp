
			class rhs_group_east_ins_bmp2
			{
				name = "Mechanized (BMP-2)";
				aliveCategory="Mechanized";

				class rhs_group_east_ins_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					side=0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle = "rhs_g_soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle = "rhs_bmp2k_chdkz";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_east_ins_bmp2_squad: rhs_group_east_ins_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_SQUAD";

					class Unit0: Unit0
					{
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
						rank = "CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_east_ins_bmp2_squad_2mg: rhs_group_east_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_east_ins_bmp2_squad_sniper: rhs_group_east_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_medic_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_east_ins_bmp2_squad_mg_sniper: rhs_group_east_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";

					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
				};
				class rhs_group_east_ins_bmp2_squad_aa: rhs_group_east_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						//vehicle = "rhs_bmp2_сhdkz";
						rank = "CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
				};
			};