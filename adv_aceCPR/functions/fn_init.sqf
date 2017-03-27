/*
ADV-aceCPR - by Belbo
*/

params [
	"_caller"
	,"_target"
	,"_selectionName"
	,"_className"
	,"_items"
];

//for diagnostic purposes only:
if (isNil "adv_aceCPR_diag") then {
	adv_aceCPR_diag = false;
};

//add the time of the CPR animation to the revive-timer:
if (local _target) then {
	[_target] call adv_aceCPR_fnc_addTime;
	
	//diagnostics:
	if (adv_aceCPR_diag) then {
		diag_log "adv_aceCPR - target is local";
	};
} else {
	[_target] remoteExecCall ["adv_aceCPR_fnc_addTime", _target];
	
	//diagnostics:
	if (adv_aceCPR_diag) then {
		diag_log "adv_aceCPR - target is not local";
	};
};

//execute the regular ace-cpr action:
[_caller,_target,_selectionName,_className,_items] call ace_medical_fnc_treatmentAdvanced_CPR;

//if necessary execute the custom cpr action:
if ( [_target] call adv_aceCPR_fnc_canCPR && (missionNamespace getVariable ["ace_medical_enableRevive",0]) > 0 ) exitWith {
	[_caller,_target] call adv_aceCPR_fnc_CPR;
	if (adv_aceCPR_diag) then {
		diag_log "adv_aceCPR - CPR is being executed.";
	};
	true;
};

//diagnostics:
if (adv_aceCPR_diag) then {
	diag_log "adv_aceCPR - Only regular CPR is being executed.";
};

//return:
false;
