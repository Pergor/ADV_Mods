#define standard_values_a faction = "adv_faction_enemies_us80a";\
						side = 1;\
						aliveCategory = "Infantry";

#define standard_values_a_veh faction = "adv_faction_enemies_us80a";\
						side = 1;\
						aliveCategory = "Motorized";
						
#define standard_values_m faction = "adv_faction_enemies_us80m";\
						side = 1;\
						aliveCategory = "Infantry";

#define standard_values_m_veh faction = "adv_faction_enemies_us80m";\
						side = 1;\
						aliveCategory = "Motorized";

class CfgGroups
{
	class west
	{
		#include "\adv_enemies_us80\groups\grps_army.hpp"
		#include "\adv_enemies_us80\groups\grps_marines.hpp"
	};
};