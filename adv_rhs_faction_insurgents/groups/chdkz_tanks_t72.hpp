
			class rhs_group_east_ins_72
			{
				name = "T-72 Groups";
				aliveCategory="Armored";


				class RHS_T72BBPlatoon
				{
					name = "T-72 g.1985 Platoon";
					side=0;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA
				{
					name = "T-72 g.1985 Platoon (Combined)";
					side=0;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class RHS_T72BBSection
				{
					name = "T-72 g.1985 Section";
					side=0;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle = "RHS_T72BB_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
					};
				};

			};