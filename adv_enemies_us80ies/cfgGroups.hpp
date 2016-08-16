#define standard_values faction = "adv_faction_enemies_us80ies";\
						side = 1;\
						aliveCategory = "Infantry";

#define standard_values_veh faction = "adv_faction_enemies_us80ies";\
						side = 1;\
						aliveCategory = "Motorized";

class CfgGroups
{
	class west
	{
		class adv_enemies_us80ies
		{
			name = "ADV - US80ies Enemies";
			class Infantry
			{
				name = "Infantry";
				class adv_enemies_us80ies_infsquad
				{
					name = "Rifle Squad";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_sl_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_radio_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_medic_f";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_gl_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_tl_f";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_ar_f";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_f";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class adv_enemies_us80ies_reconsquad
				{
					name = "Recon Squad";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_sl_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_radio_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_medic_f";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_m_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_tl_f";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_m_f";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_ar_f";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class adv_enemies_us80ies_weaponsquad
				{
					name = "Weapon Squad";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_sl_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_radio_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_medic_f";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_gl_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_tl_f";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_ar_f";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_m_f";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class adv_enemies_us80ies_infteam
				{
					name = "Fire Team";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_tl_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_ar_f";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_gl_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class adv_enemies_us80ies_infteam_AT
				{
					name = "Anti-armor Team";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_tl_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class adv_enemies_us80ies_infteam_recon
				{
					name = "Recon Team";
					standard_values
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_sl_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_radio_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_m_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_soldier_lat_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class vehicles
			{
				name = "Motorized";
				aliveCategory = "Motorized";
				class adv_enemies_us80ies_hmmwv_squad
				{
					name = "HMMWV Squad";
					standard_values_veh
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_m1025a2_m2_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_m1025a2_m2_f";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_m1025a2_m2_f";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_m1025a2_f";
						rank = "CORPORAL";
						position[] = {-20,-20,0};
					};
				};
				class adv_enemies_us80ies_m113_squad
				{
					name = "M113 Platoon";
					standard_values_veh
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_m113_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_m113_f";
						rank = "CORPORAL";
						position[] = {20,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_m113_f";
						rank = "CORPORAL";
						position[] = {-20,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_m113_ammo_f";
						rank = "CORPORAL";
						position[] = {-30,-20,0};
					};
				};
				class adv_enemies_us80ies_aav_squad
				{
					name = "AAV Platoon";
					standard_values_veh
					class Unit0
					{
						side = 1;
						vehicle = "adv_us80ies_aav_f";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "adv_us80ies_aav_f";
						rank = "CORPORAL";
						position[] = {20,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "adv_us80ies_aav_f";
						rank = "CORPORAL";
						position[] = {-20,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "adv_us80ies_aav_f";
						rank = "CORPORAL";
						position[] = {-30,-20,0};
					};
				};
			};
		};
	};
};