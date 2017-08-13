/*
 * Author: Belbo
 *
 * Parachutes target over specified position. Backpack will be saved and readded after landing.
 * If you want to change the altitudes of the jump and the forced opening, set these variables globally:
 * adv_parajump_start -> starting altitude
 * adv_parajump_opening -> forced opening altitude
 *
 * Arguments:
 * 0: unit - <OBJECT>
 * 1: position - <ARRAY>
 *
 * Return Value:
 * Function executed - <BOOL>
 *
 * Example:
 * [player, [0,0,0]] call adv_fnclib_fnc_paraJump;
 *
 * Public: Yes
 */
 
_this spawn {

	params [
		["_unit", player,[objNull]],
		["_targetPos", [0,0,0], [[]]]
	];
	
	private _enableUserInput = {
		disableUserInput false;
		disableUserInput true;
		disableUserInput false;
	};

	if (!local _unit) exitWith {};
	disableUserInput true;

	//has the unit had a backpack?
	_unit setVariable ["adv_var_parajump_backpack", backpack _unit];
	_unit setVariable ["adv_var_parajump_backpackItems", backpackItems _unit];
	if !((_unit getVariable "adv_var_parajump_backpack") isEqualTo "") then {
		//removeBackpack _unit;
		_gwh = "GroundWeaponHolder_Scripted" createVehicleLocal [0,0,0]; 
		_unit setVariable ["adv_var_parajump_gwh", _gwh];
		_unit action ["DropBag", _gwh, backpack _unit];
		systemChat "Backpack saved. Wait after landing for it to be readded!";
		sleep 2;
	};
	sleep 1;
	//Parachute is given
	_unit addBackpackGlobal "B_Parachute";
	sleep 2+(random 4);
	//unit is moved to height 2000 on given position
	_startingHeight = missionNamespace getVariable ["adv_parajump_start",3000];
	_openingHeight = missionNamespace getVariable ["adv_parajump_opening",120];
	private _ACE_GForceCoef = _unit getVariable ["ACE_GForceCoef",1];
	_unit setVariable ["ACE_GForceCoef", 0];
	_target = [(_targetPos select 0)+(20+(random 10)), (_targetPos select 1)+(20+(random 10)), _startingHeight];
	_unit setPos _target;
	_unit allowDamage false;
	call _enableUserInput;
	_openingHeight =  if ( _openingHeight < 119 ) then { 120 } else { _openingHeight };

	//safety:
	waitUntil {((getPos _unit) select 2) > 500};
	_unit moveTo _targetPos;
	waitUntil {((getPos _unit) select 2) < _openingHeight};
	if (isClass(configFile >> "CfgPatches" >> "ace_parachute")) then {
		if !(toUpper (backpack _unit) isEqualTo "ACE_RESERVEPARACHUTE") then {
			_unit action ["openParachute", _unit];
		};
	} else {
		_unit action ["openParachute", _unit];
	};
	_unit moveTo _targetPos;
	waitUntil {((getPos _unit) select 2) < 50};
	_unit allowDamage true;
	_unit setVariable ["ACE_GForceCoef", _ACE_GForceCoef];

	//removal of the parachute:
	waitUntil { (isTouchingGround _unit && !underWater _unit) || ((getPosATL _unit) select 2) < 1 };
	disableUserInput true;
	if !(isClass(configFile >> "CfgPatches" >> "ace_parachute")) then { _unit playMove "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"; };
	sleep 1;
	_unit action ["PutBag"];
	sleep 1;
	//and readding the old one:
	if !((_unit getVariable "adv_var_parajump_backpack") isEqualTo "") then {
		/*
		_unit addBackpackGlobal (_unit getVariable "adv_var_parajump_backpack");
		{ (backpackContainer _unit) addItemCargoGlobal [_x,1] } count (_unit getVariable "adv_var_parajump_backpackItems");
		*/
		waitUntil { (isTouchingGround _unit && !underwater _unit) || ( ((getPosASL _unit) select 2) > 0 && ((getPosATL _unit) select 2) < 0.5 ) };
		sleep 1;
		_unit action ["TakeBag", (firstBackpack (_unit getVariable "adv_var_parajump_gwh"))];
		sleep 1;
		deleteVehicle (_unit getVariable "adv_var_parajump_gwh");
		systemChat "Backpack readded.";
	};
	sleep 1;
	call _enableUserInput;
};
true;