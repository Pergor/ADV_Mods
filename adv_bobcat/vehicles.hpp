class APC_Tracked_01_base_F;
class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F {
	class Eventhandlers;
};
class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F {
	animationList[] = {"showCamonetHull",0,"showCamonetPlates1",0,"showCamonetPlates2",0,"showWheels",1,"showAmmobox",1,"showBags",1};
	class EventHandlers: EventHandlers {
		init = "params ['_target'];[_target] call adv_bobcat_fnc_bobcat";
	};	
};