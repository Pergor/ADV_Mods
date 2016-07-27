#define standard_values faction = "adv_faction_enemies_pirates";\
	side = 0;\
	aliveCategory = "Infantry";

class CfgGroups
{
	class east
	{
		class adv_enemies_pirates
		{
			name = "ADV - Pirates Enemies";
			class Infantry
			{
				name = "Infantry";
				class adv_enemies_pirates_ft_1
				{
					name = "Fire Team 1";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_pirates_soldier_TL_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_pirates_soldier_AR_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_pirates_soldier_1_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_pirates_soldier_2_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "adv_pirates_medic_f";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class adv_enemies_pirates_ft_2
				{
					name = "Fire Team 2";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_pirates_soldier_3_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_pirates_soldier_AR_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_pirates_soldier_2_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_pirates_soldier_1_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "adv_pirates_medic_f";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class adv_enemies_pirates_ft_3
				{
					name = "Fire Team (with Marksman)";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_pirates_soldier_TL_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_pirates_soldier_AR_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_pirates_soldier_M_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_pirates_soldier_3_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "adv_pirates_medic_f";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class adv_enemies_pirates_ft_4
				{
					name = "Fire Team (with RPG)";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_pirates_soldier_1_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_pirates_soldier_AT_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_pirates_soldier_2_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_pirates_soldier_3_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "adv_pirates_medic_f";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};
			class vehicles
			{
				name="Motorized";
				aliveCategory="Motorized";
				class adv_enemies_pirates_cars_1
				{
					name="Armed Vehicle Duo";
					faction = "adv_faction_enemies_pirates";
					side = 0;
					class Unit0
					{
						side=0;
						vehicle="adv_pirates_offroad_armed_f";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_pirates_offroad_armed_f";
						rank="PRIVATE";
						position[]={7,-7,0};
					};
				};
				class adv_enemies_pirates_cars_2
				{
					name="Unarmed Vehicle Duo";
					faction = "adv_faction_enemies_pirates";
					side = 0;
					class Unit0
					{
						side=0;
						vehicle="adv_pirates_offroad_f";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="adv_pirates_mb4wd_f";
						rank="PRIVATE";
						position[]={7,-7,0};
					};
				};
			};
		};
	};
};