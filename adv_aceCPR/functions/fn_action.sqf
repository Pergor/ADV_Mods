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
call {
	if (local _target) exitWith {
		//diagnostics
		[_target,"target is local"] call adv_aceCPR_fnc_diag;
		
		//add time call:
		["adv_aceCPR_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
	};
	
	//diagnostics:
	[_target,"target is not local to the caller"] call adv_aceCPR_fnc_diag;
	
	//add time call:
	["adv_aceCPR_evh_addTime", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

//if the target is just in cardiac arrest, only regular cpr should be used:
private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target getVariable ["ace_medical_inReviveState",false];

//if necessary execute the custom cpr action:
if ( (missionNamespace getVariable ["ace_medical_enableRevive",0]) > 0 && _inRevive ) exitWith {
	//diagnostics:
	[_target,"fnc_cpr is being executed"] call adv_aceCPR_fnc_diag;
	
	//cpr call:
	[_caller, _target] call adv_aceCPR_fnc_CPR;
	true;
};

//diagnostics:
[_target,"only regular CPR is being executed"] call adv_aceCPR_fnc_diag;

//execute the regular ace-cpr action:
[_caller,_target,_selectionName,_className,_items] call ace_medical_fnc_treatmentAdvanced_CPR;

//return:
false;
