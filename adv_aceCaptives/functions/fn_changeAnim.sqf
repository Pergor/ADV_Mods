params ["_caller","_target"];

private _captiveAceAnim = "ace_amovpercmstpscapwnondnon";
private _animState = animationState _target;

private _callerAnim = call {
	if (currentWeapon _caller isEqualTo primaryWeapon _caller ) exitWith {
		"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"
	};
	if (currentWeapon _caller isEqualTo handgunweapon _caller ) exitWith {
		"AinvPercMstpSrasWpstDnon_Putdown_AmovPercMstpSrasWpstDnon"
	};
	if (currentWeapon _caller isEqualTo secondaryweapon _caller ) exitWith {
		"AinvPercMstpSrasWlnrDnon_Putdown_AmovPercMstpSrasWlnrDnon"
	};
	"AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"
};
[_caller, _callerAnim, 1] call ace_common_fnc_doAnimation;

if (toLower _animState == toLower _captiveAceAnim) exitWith {
	if (local _target) exitWith {
		["adv_aceCaptives_evh_doAnim", [_target,"down"]] call CBA_fnc_localEvent;
	};
	["adv_aceCaptives_evh_doAnim", [_target,"down"], _target] call CBA_fnc_targetEvent;
};

if (local _target) exitWith {
	["adv_aceCaptives_evh_doAnim", [_target,"up"]] call CBA_fnc_localEvent;
};
["adv_aceCaptives_evh_doAnim", [_target,"up"], _target] call CBA_fnc_targetEvent;

nil;