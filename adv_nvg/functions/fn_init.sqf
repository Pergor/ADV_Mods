/*
adv_nvg-init - by Belbo
*/
if (!hasInterface) exitWith {};
adv_nvg_wetdist = ppEffectCreate ["WetDistortion",300];
adv_nvg_wetdist ppEffectForceInNVG true;
adv_nvg_wetdist ppEffectAdjust [7,0.056,0.056,0,0,0,0,0,0,0.1,0,0,0,0,0];
adv_nvg_wetdist ppEffectEnable false;
adv_nvg_wetdist ppEffectCommit 0;

adv_nvg_scriptfnc_nvgSwitch = {
	call {
		if (currentVisionMode player isEqualTo 1) exitWith {
			adv_nvg_wetdist ppEffectEnable true;
		};
		adv_nvg_wetdist ppEffectEnable false;
	};
};

adv_nvg_evh_nvgOn = ["visionMode", {call adv_nvg_scriptfnc_nvgSwitch}] call CBA_fnc_addPlayerEventHandler;