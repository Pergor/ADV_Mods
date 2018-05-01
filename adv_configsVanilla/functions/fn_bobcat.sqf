/*
 * Author: Belbo
 *
 * Adds an action to a bobcat that will enable driver to raise and lower the plow, which can act as a blast shield against mines.
 *
 * Arguments:
 * 0 - target vehicle - <OBJECT>
 *
 * Return Value:
 * nil - <NULL>
 *
 * Example:
 * NONE
 *
 * Public: No
 */
 
params ["_target"];

_target addAction [
	"Lower Plow"
	,{
		params ["_target","_caller","_ID","_args"];
		_target animateSource ["MovePlow", 1];
	},[],-2,false,true,"","(driver _target) isEqualTo _this && _target animationSourcePhase 'MovePlow' isEqualTo 0",5
];
_target addAction [
	"Raise Plow"
	,{
		params ["_target","_caller","_ID","_args"];
		_target animateSource ["MovePlow", 0];
	},[],-2,false,true,"","(driver _target) isEqualTo _this && _target animationSourcePhase 'MovePlow' isEqualTo 1",5
];

if ( isClass(configFile >> "CfgPatches" >> "ace_interact_menu") ) then {

	_lowerPlow = ["lowerPlowAction",("<t color=""#00FF00"">" + "Lower Plow" + "</t>"),"",{
		
		params ["_target", "_player", "_params"];
		_target animateSource ["MovePlow", 1];
		
	},{ (driver _target) isEqualTo _player && _target animationSourcePhase 'MovePlow' isEqualTo 0 }] call ace_interact_menu_fnc_createAction;
	
	_raisePlow = ["raisePlowAction",("<t color=""#FF0000"">" + "Raise Plow" + "</t>"),"",{
		
		params ["_target", "_player", "_params"];
		_target animateSource ["MovePlow", 0];
		
	},{ (driver _target) isEqualTo _player && _target animationSourcePhase 'MovePlow' isEqualTo 1 }] call ace_interact_menu_fnc_createAction;
	
	[_target , 1, ["ACE_SelfActions"],_lowerPlow] call ace_interact_menu_fnc_addActionToObject;
	[_target , 1, ["ACE_SelfActions"],_raisePlow] call ace_interact_menu_fnc_addActionToObject;

};

_target addEventHandler [
	"explosion"
	,{
		params ["_target","_damage"];
		if (_target animationSourcePhase 'MovePlow' isEqualTo 1 && speed _target < 25 && (_target getHitPointDamage "hitengine")<0.8) then {
			private _oldDamage = (damage _target)-_damage;
			private _newDamage = _oldDamage+(_damage)*0.1;
			{_target setHitPointDamage [_x,_newDamage];nil} count [
				"hitengine","hitrtrack","hitltrack","#light_l","#light_l_flare","#light_r","#light_r_flare"
			];
			nil
		};
	}
];