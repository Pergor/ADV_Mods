/*
ADV-aceSplint - by Belbo
*/

private _handle = _this spawn {


	params ["_target","_oldBps","_oldGetHitPoint","_hitPointArray"];

	_hitPointArray params ["_hitpoint","_bodyPart","_selection","_str"];
	_oldBps params ["_hitHeadOld","_hitBodyOld","_hitLeftArmOld","_hitRightArmOld","_hitLeftLegOld","_hitRightLegOld"];
	
	[_target,format ["Reopening of Splint is being handled for %1.",_bodyPart]] call adv_aceSplint_fnc_diag;

	private _chance = missionNamespace getVariable ["adv_aceSplint_reopenChance",30];
	private _time = missionNamespace getVariable ["adv_aceSplint_reopenTime",600];

	if (ceil random 100 < _chance) exitWith {
		[_target,format ["Splint for %1 will reopen in %2 seconds.",_bodyPart,_time]] call adv_aceSplint_fnc_diag;
		
		sleep _time;
		
		private _bps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
		_bps params ["_hitHead","_hitBody","_hitLeftArm","_hitRightArm","_hitLeftLeg","_hitRightLeg"];
		
		if (_hitPoint isEqualTo "hithands") then {
			_target setHitPointDamage ["HitHands", 1];
			_bps set [2,_hitLeftArm+_hitLeftArmOld];
			_bps set [3,_hitRightArm+_hitRightArmOld];
			
		};
		
		if (_hitPoint isEqualTo "hitlegs") then {
			_target setHitPointDamage ["HitLegs", 1];
			_bps set [4,_hitLeftLeg+_hitLeftLegOld];
			_bps set [5,_hitRightLeg+_hitRightLegOld];
		};
		
		_target setVariable ["ace_medical_bodypartstatus",_bps,true];
		
		[_target, "activity", localize "STR_ADV_ACESPLINT_REOPEN", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;
		[_target, "activity_view", localize "STR_ADV_ACESPLINT_REOPEN", [_nameCaller,_nameTarget,_str]] call ace_medical_fnc_addToLog;
		
		[_target,format ["Splint for %1 has reopened, new ace_medical_bodypartstatus is %2",_bodyPart,_bps]] call adv_aceSplint_fnc_diag;
	};
};

_handle