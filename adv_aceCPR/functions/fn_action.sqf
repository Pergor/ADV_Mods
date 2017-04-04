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

//add the time of the CPR animation to the revive-timer:
if (local _target) then {
	//diagnostics:
	if (adv_aceCPR_diag) then {
		["adv_aceCPR_evh_log", ["adv_aceCPR - target is local"]] call CBA_fnc_localEvent;
	};
	
	["adv_aceCPR_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
} else {
	//diagnostics:
	if (adv_aceCPR_diag) then {
		["adv_aceCPR_evh_log", ["adv_aceCPR - target is not local to the caller"]] call CBA_fnc_localEvent;
		["adv_aceCPR_evh_log", ["adv_aceCPR - target is not local to the caller"], _target] call CBA_fnc_targetEvent;
	};
	
	["adv_aceCPR_evh_addTime", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

//execute the regular ace-cpr action:
[_caller,_target,_selectionName,_className,_items] call ace_medical_fnc_treatmentAdvanced_CPR;

//if necessary execute the custom cpr action:
if ( (missionNamespace getVariable ["ace_medical_enableRevive",0]) > 0 ) exitWith {
	//diagnostics
	if (adv_aceCPR_diag) then {
		["adv_aceCPR_evh_log", ["adv_aceCPR - fnc_cpr is being executed."]] call CBA_fnc_localEvent;
	};
	
	[_caller, _target] call adv_aceCPR_fnc_CPR;
	true;
};

//diagnostics:
if (adv_aceCPR_diag) then {
	["adv_aceCPR_evh_log", ["adv_aceCPR - Only regular CPR is being executed."]] call CBA_fnc_localEvent;
};

//return:
false;