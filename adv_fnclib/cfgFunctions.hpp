class CfgFunctions {
	class adv_fnclib {
		tag = "adv_fnclib";
		class clientside {
			file = "adv_fnclib\functions\clientside";
			class fullHeal {};
			class teleport {};
			class undercover {};
		};
		class global {
			file = "adv_fnclib\functions\global";
			class changeName {};
			class radioRelay {};
			class spawnFire {};
			class weather {};
		};
		class preInits {
			file = "adv_fnclib\functions\preInits";
			class acreSettings {};
			class tfarSettings {};
		};
		class serverside {
			file = "adv_fnclib\functions\serverside";
			class artillery {};
			class CASRun {};
			class clearCargo {};
			class createZeus {};
			class disableVeh {};
			class flare {};
			class paraBomb {};
			class paraCrate {};
			class removeWeapon {};
			class setSide {};
			class zeusObjects {};
		};
	};
};