#define standard_values faction = "adv_faction_enemies_gen";\
						side = 2;\
						aliveCategory = "Infantry";

class CfgGroups
{
	class Indep
	{
		class adv_enemies_gen
		{
			name = "Gendarmerie";
			class Infantry
			{
				name = "Infantry";
				class adv_enemies_gen_ft_1
				{
					name = "Gendarmerie Patrol";
					standard_values
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "adv_gen_commander_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "adv_gen_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class vehicles
			{
				name="Motorized";
				aliveCategory="Motorized";
				class adv_enemies_gen_offroad
				{
					name="Motorized Gendarmerie Patrol";
					faction = "adv_faction_enemies_gen";
					side = 2;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					aliveCategory = "Motorized";
					class Unit0
					{
						side=2;
						vehicle="adv_gen_offroad_01_gen_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="adv_gen_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
				};
				class adv_enemies_gen_mb4wd
				{
					name="Motorized Gendarmerie Patrol (MB4WD)";
					faction = "adv_faction_enemies_gen";
					side = 2;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					aliveCategory = "Motorized";
					class Unit0
					{
						side=2;
						vehicle="adv_gen_offroad_02_gen_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="adv_gen_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
				};
			};
		};
	};
	class West {
		class Gendarmerie {
			class Motorized {
				class GENDARME_MotInf_Patrol;
				class GENDARME_MotInf_Patrol_MB4WD:GENDARME_MotInf_Patrol
				{
					name="Motorized Gendarmerie Patrol (MB4WD)";
					side = 1;
					class Unit0
					{
						side=1;
						vehicle="B_offroad_02_gen_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_GEN_Soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};					
				};;
			};
		};
	};
};