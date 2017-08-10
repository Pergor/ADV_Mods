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
				class adv_enemies_gen_cars
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
			};
		};
	};
};