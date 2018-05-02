//MAKROS
#define HIDE_TURRET class HideTurret: HideTurret {\
	initPhase = 1;\
};

#define SHOW_BAGS class ShowBags: ShowBags {\
	initPhase = 1;\
};

#define SHOW_BAGS2 class ShowBags2: ShowBags2 {\
	initPhase = 1;\
};

#define SHOW_CANISTERS class showCanisters: showCanisters {\
	initPhase = 1;\
};

#define SHOW_SLATHULL class ShowSLATHull: ShowSLATHull {\
	initPhase = 1;\
};

#define SHOW_TOOLS class ShowTOOLS: ShowTOOLS {\
	initPhase = 1;\
};

//INHERITANCES
class Wheeled_Apc_F;
class APC_Wheeled_03_base_F: Wheeled_Apc_F {
	class AnimationSources;
};
class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {
	class AnimationSources: AnimationSources {
		class HideTurret;
		class showBags;
		class showBags2;
		class showSLATHull;
		class showTools;
	};
};
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
	class Eventhandlers;
	class AnimationSources: AnimationSources {
		SHOW_BAGS
		SHOW_BAGS2
		SHOW_TOOLS
	};
};

class APC_Wheeled_02_base_F: Wheeled_Apc_F {
	class AnimationSources;
};
class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F {
	class AnimationSources: AnimationSources {
		class HideTurret;
		class showBags;
		class showCamonetHull;
		class showCanisters;
		class showSLATHull;
		class showTools;
	};
};
class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
	class Eventhandlers;
	animationList[] = {"showBags",1,"showCanisters",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class AnimationSources: AnimationSources {
		SHOW_BAGS
		SHOW_CANISTERS
		SHOW_TOOLS
	};
};

class O_T_APC_Wheeled_02_rcws_v2_ghex_F: APC_Wheeled_02_base_v2_F {
	class Eventhandlers;
	animationList[] = {"showBags",1,"showCanisters",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class AnimationSources: AnimationSources {
		SHOW_BAGS
		SHOW_TOOLS
	};
};

class I_APC_Wheeled_03_cannon_nt_F: I_APC_Wheeled_03_cannon_F {
	displayName = "AFV-4 Gorgon (No Turret)";
	class AnimationSources: AnimationSources {
		HIDE_TURRET
	};
	class EventHandlers: EventHandlers {
		init = "params ['_target'];_target lockturret [[0],true];";
	};
};
class O_APC_Wheeled_02_rcws_nt_F: O_APC_Wheeled_02_rcws_v2_F {
	displayName = "MSE-3 Marid (No Turret)";
	class AnimationSources: AnimationSources {
		HIDE_TURRET
	};
	class EventHandlers: EventHandlers {
		init = "params ['_target'];_target lockturret [[0],true];";
	};
};
class O_T_APC_Wheeled_02_rcws_ghex_nt_F: O_T_APC_Wheeled_02_rcws_v2_ghex_F {
	displayName = "MSE-3 Marid (No Turret)";
	class AnimationSources: AnimationSources {
		HIDE_TURRET
	};
	class EventHandlers: EventHandlers {
		init = "params ['_target'];_target lockturret [[0],true];";
	};
};