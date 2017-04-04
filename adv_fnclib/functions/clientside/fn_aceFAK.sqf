/*
ADV_fnclib_fnc_aceFAK by Belbo:

Adds a predefined amount of ace_medical-items to a unit.

Possible call - has to be executed on the client the unit is local to:

[player,1] call ADV_fnclib_fnc_aceFAK;

_this select 0 = unit to add items to.
_this select 1 = set of items (1 - small amount (soldier's individual pack); 2 - medium amount (cls equipment); 3 - large amount (medic equipment);)
*/

if !( isClass(configFile >> "CfgPatches" >> "ACE_medical") ) exitWith {};

params [
	["_unit", player, [objNull]]
	,["_FAKtype", 1, [0]]
	,"_ACE_Items","_ACE_fieldDressing","_ACE_packingBandage","_ACE_elasticBandage","_ACE_quikclot","_ACE_tourniquet","_ACE_morphine","_ACE_epinephrine"
	,"_ACE_salineIV","_ACE_salineIV_500","_ACE_salineIV_250"
	,"_ACE_plasmaIV","_ACE_plasmaIV_500","_ACE_plasmaIV_250"
	,"_ACE_bloodIV","_ACE_bloodIV_500","_ACE_bloodIV_250"
	,"_ACE_surgicalKit","_ACE_personalAidKit","_ACE_bodyBag","_medicBack"
];

_ACE_fieldDressing = 0;
_ACE_elasticBandage = 0;
_ACE_packingBandage = 0;
_ACE_quikclot = 0;
_ACE_atropine = 0;
_ACE_adenosine = 0;
_ACE_epinephrine = 0;
_ACE_morphine = 0;
_ACE_tourniquet = 0;
_ACE_bloodIV = 0;
_ACE_bloodIV_500 = 0;
_ACE_bloodIV_250 = 0;
_ACE_plasmaIV = 0;
_ACE_plasmaIV_500 = 0;
_ACE_plasmaIV_250 = 0;
_ACE_salineIV = 0;
_ACE_salineIV_500 = 0;
_ACE_salineIV_250 = 0;
_ACE_bodyBag = 0;
_ACE_surgicalKit = 0;
_ACE_personalAidKit = 0;

_ACE_Items = ["ACE_atropine","ACE_adenosine","ACE_fieldDressing","ACE_elasticBandage","ACE_quikclot","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_250","ACE_bodyBag","ACE_epinephrine","ACE_morphine","ACE_packingBandage","ACE_personalAidKit","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_250","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_250","ACE_surgicalKit","ACE_tourniquet"];
{ _unit removeItems _x; nil;} count _ACE_Items;

switch _FAKtype do {
	//rifleman equipment:
	default {
		if ( (missionnamespace getVariable ["ace_medical_level",2]) > 1 ) then {
			call {
				if (missionnamespace getVariable ["ace_medical_enableAdvancedWounds",false]) exitWith {
					_ACE_fieldDressing = 8;
					_ACE_elasticBandage = 4;
					_ACE_packingBandage = 4;
					_ACE_quikclot = 4;
				};
				_ACE_fieldDressing = 10;
				_ACE_elasticBandage = 2;
			};
			_ACE_morphine = 1;
			_ACE_tourniquet = 2;
			if ( isClass(configFile >> "CfgPatches" >> "adv_aceCPR") ) then {
				_ACE_salineIV_500 = 1;
			};
		} else {
			_ACE_fieldDressing = 12;
			_ACE_morphine = 1;
		};
	};
	//medium equipment (CLS):
	case 2: {
		if ( (missionnamespace getVariable ["ace_medical_level",2]) > 1 || (missionnamespace getVariable ["ace_medical_medicSetting",2]) > 1 ) then {
			call {
				if (missionnamespace getVariable ["ace_medical_enableAdvancedWounds",false]) exitWith {
					_ACE_fieldDressing = 24;
					_ACE_elasticBandage = 24;
					_ACE_packingBandage = 6;
				};
				_ACE_fieldDressing = 24;
				_ACE_elasticBandage = 24;
				_ACE_packingBandage = 6;
			};
			_ACE_epinephrine = 6;
			_ACE_morphine = 6;
			_ACE_tourniquet = 3;
			_ACE_salineIV_500 = 8;
			_ACE_surgicalKit = 1;
			if ( (missionnamespace getVariable ["ace_medical_consumeItem_SurgicalKit",0]) > 0 ) then {
				_ACE_surgicalKit = 5;
			};
		} else {
			_ACE_fieldDressing = 48;
			_ACE_epinephrine = 6;
			_ACE_morphine = 6;
			_ACE_bloodIV_500 = 8;
		};
	};
	//medic equipment (medic):
	case 3: {
		if ( (missionnamespace getVariable ["ace_medical_level",2]) > 1 || (missionnamespace getVariable ["ace_medical_medicSetting",2]) > 1 ) then {
			call {
				if (missionnamespace getVariable ["ace_medical_enableAdvancedWounds",false]) exitWith {
					_ACE_fieldDressing = 32;
					_ACE_elasticBandage = 32;
					_ACE_packingBandage = 12;
					_ACE_quikclot = 12;
				};
				_ACE_fieldDressing = 32;
				_ACE_elasticBandage = 32;
				_ACE_packingBandage = 24;
			};
			_ACE_adenosine = 4;
			_ACE_epinephrine = 12;
			_ACE_morphine = 12;
			_ACE_tourniquet = 6;
			_ACE_plasmaIV_500 = 12;
			if ( adv_par_ace_medical_GivePAK == 1 ) then {
				_ACE_personalAidKit = 1;
				if ( (missionnamespace getVariable ["ace_medical_consumeItem_PAK",0]) > 0 ) then {
					_ACE_personalAidKit = 2;
				};
			};
			_ACE_surgicalKit = 1;
			if ( (missionnamespace getVariable ["ace_medical_consumeItem_SurgicalKit",0]) > 0 ) then {
				_ACE_surgicalKit = 5;
			};
		} else {
			_ACE_fieldDressing = 64;
			_ACE_epinephrine = 12;
			_ACE_morphine = 12;
			_ACE_bloodIV_500 = 8;
			_ACE_bloodIV_250 = 8;
		};
	};
};

if ( !(backpack _unit == "") && _FAKtype > 1 ) then {
	_mediKit = 1;
};

[_unit] call adv_fnc_aceMedicalItems;