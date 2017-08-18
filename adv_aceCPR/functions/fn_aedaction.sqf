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

private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target getVariable ["ace_medical_inReviveState",false];

//if necessary execute the custom cpr action:
if ( _inCardiac ) exitWith {
	//execute aed treatment local to the target:
	call {
		if (local _target) exitWith {
			//diagnostics
			[_target,"target is local"] call adv_aceCPR_fnc_diag;
			
			//aed event:
			["adv_aceCPR_evh_AED_Local", [_caller, _target]] call CBA_fnc_localEvent;
		};
		
		//diagnostics:
		[_target,"target is not local to the caller"] call adv_aceCPR_fnc_diag;
		
		//aed event:
		["adv_aceCPR_evh_AED_Local", [_caller, _target], _target] call CBA_fnc_targetEvent;
	};
};

//return:
false;
