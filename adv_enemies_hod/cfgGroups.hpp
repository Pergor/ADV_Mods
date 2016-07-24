#define standard_values faction = "adv_faction_enemies_hod";\
						side = 0;\
						aliveCategory = "Infanty";

class CfgGroups
{
	class east
	{
		class adv_enemies_hod
		{
			name = "ADV - HOD Enemies";
			class Infantry
			{
				name = "Infantry";
				class adv_enemies_hod_ft_1
				{
					name = "Fire Team 1";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_hod_soldier_mk14_1_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_2_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_hod_soldier_m38_3_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_1_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class adv_enemies_hod_ft_2
				{
					name = "Fire Team 2";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_hod_soldier_mk14_2_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_3_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_hod_soldier_m38_1_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_2_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class adv_enemies_hod_ft_3
				{
					name = "Fire Team 3";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_3_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_hod_soldier_mk14_1_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_2_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_hod_soldier_m38_3_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class adv_enemies_hod_ft_4
				{
					name = "Fire Team 4";
					standard_values
					class Unit0
					{
						side = 0;
						vehicle = "adv_hod_soldier_m38_1_f";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "adv_hod_soldier_mk14_2_f";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "adv_hod_soldier_m38_3_f";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "adv_hod_soldier_k98_1_f";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};