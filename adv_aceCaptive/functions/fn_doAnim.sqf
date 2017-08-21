params ["_unit","_state"];

//anims: Acts_ExecutionVictim_Loop
//		 Acts_AidlPsitMstpSsurWnonDnon01

if (_state isEqualTo 'down') exitWith {
	[{
		params ["_unit"];
		if !(_unit getVariable ["ace_captives_isHandcuffed", false]) exitWith {};
		_unit disableAI "MOVE";

		//Adding custom animation changed evh:
		//If we get a change in animation then redo the animation (handles people vaulting to break the animation chain)
		private _animChangedEHID = _unit getVariable ["ace_captives_handcuffAnimEHID", -1]; 
		if (_animChangedEHID != -1) then {
			_unit removeEventHandler ["AnimChanged", _animChangedEHID];
		};
		_unit setVariable ["ace_captives_handcuffAnimEHID", -1];
		
		_animChangedEHID = _unit addEventHandler ["AnimChanged", adv_aceCaptive_fnc_handleAnimChangedHandcuffed];
		_unit setVariable ["ace_captives_handcuffAnimEHID", _animChangedEHID];
		
		[_unit] call ace_common_fnc_fixLoweredRifleAnimation;
		[_unit, "Acts_ExecutionVictim_Loop", 2] call ace_common_fnc_doAnimation;

	}, [_unit], 0.01] call CBA_fnc_waitAndExecute;
};

//original EVH from ace_captives_fnc_setHandcuffed:
[{
	params ["_unit"];
	if (!(_unit getVariable ["ace_captives_isHandcuffed", false])) exitWith {};
	
	_unit enableAI "MOVE";

	if ((vehicle _unit) == _unit) then {
		[_unit] call ace_common_fnc_fixLoweredRifleAnimation;
		[_unit, "ace_amovpercmstpscapwnondnon", 2] call ace_common_fnc_doAnimation;
	} else {
		[_unit, "ACE_HandcuffedFFV", 2] call ace_common_fnc_doAnimation;
		[_unit, "ACE_HandcuffedFFV", 1] call ace_common_fnc_doAnimation;
	};

	//Adds an animation changed eh
	//If we get a change in animation then redo the animation (handles people vaulting to break the animation chain)
	private _animChangedEHID = _unit getVariable ["ace_captives_handcuffAnimEHID", -1];
	if (_animChangedEHID != -1) then {
		_unit removeEventHandler ["AnimChanged", _animChangedEHID];
	};
	_animChangedEHID = _unit addEventHandler ["AnimChanged", ace_captives_fnc_handleAnimChangedHandcuffed];
	_unit setVariable ["ace_captives_handcuffAnimEHID", _animChangedEHID];

}, [_unit], 0.01] call CBA_fnc_waitAndExecute;