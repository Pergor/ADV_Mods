/*
fn_aceMedicalItems: adds ACE³ medical items to a unit.
call like this:
[_unit] call ADV_fnclib_fnc_aceGear;
*/

params [
	["_unit", player, [objNull]]
];


if (isNil "_mediKit") then { _mediKit = 0; };
if (isNil "_FirstAidKits") then { _FirstAidKits = 0; };

if (isNil "_ACE_fieldDressing") then { _ACE_fieldDressing = 0; };
if (isNil "_ACE_elasticBandage") then { _ACE_elasticBandage = 0; };
if (isNil "_ACE_packingBandage") then { _ACE_packingBandage = 0; };
if (isNil "_ACE_quikclot") then { _ACE_quikclot = 0; };
if (isNil "_ACE_atropine") then { _ACE_atropine = 0; };
if (isNil "_ACE_adenosine") then { _ACE_adenosine = 0; };
if (isNil "_ACE_epinephrine") then { _ACE_epinephrine = 0; };
if (isNil "_ACE_morphine") then { _ACE_morphine = 0; };
if (isNil "_ACE_tourniquet") then { _ACE_tourniquet = 0; };
if (isNil "_ACE_bloodIV") then { _ACE_bloodIV = 0; };
if (isNil "_ACE_bloodIV_500") then { _ACE_bloodIV_500 = 0; };
if (isNil "_ACE_bloodIV_250") then { _ACE_bloodIV_250 = 0; };
if (isNil "_ACE_plasmaIV") then { _ACE_plasmaIV = 0; };
if (isNil "_ACE_plasmaIV_500") then { _ACE_plasmaIV_500 = 0; };
if (isNil "_ACE_plasmaIV_250") then { _ACE_plasmaIV_250 = 0; };
if (isNil "_ACE_salineIV") then { _ACE_salineIV = 0; };
if (isNil "_ACE_salineIV_500") then { _ACE_salineIV_500 = 0; };
if (isNil "_ACE_salineIV_250") then { _ACE_salineIV_250 = 0; };
if (isNil "_ACE_bodyBag") then { _ACE_bodyBag = 0; };
if (isNil "_ACE_surgicalKit") then { _ACE_surgicalKit = 0; };
if (isNil "_ACE_personalAidKit") then { _ACE_personalAidKit = 0; };


if ( isClass(configFile >> "CfgPatches" >> "ACE_medical") ) exitWith {
	if ( (missionnamespace getVariable ["ace_medical_level",2]) > 1 ) then {
		if ( (missionnamespace getVariable ["ace_medical_consumeItem_PAK",0]) == 0 && _ACE_personalAidKit > 1 ) then { _ACE_personalAidKit = 1; };
		for "_i" from 1 to _ACE_personalAidKit do { _unit addItem "ACE_personalAidKit"; };
		if (missionnamespace getVariable ["ace_medical_enableAdvancedWounds",false]) then {
			for "_i" from 1 to _ACE_surgicalKit do { _unit addItem "ACE_surgicalKit"; };
		};
		if ( !(backpack _unit == "") && (_mediKit > 0 || _FirstAidKits > 4) ) then {
			
			private _mediBack = unitBackpack _unit;
			_mediBack addItemCargoGlobal ["ACE_fieldDressing", _ACE_fieldDressing];
			_mediBack addItemCargoGlobal ["ACE_elasticBandage", _ACE_elasticBandage];
			_mediBack addItemCargoGlobal ["ACE_packingBandage", _ACE_packingBandage];
			_mediBack addItemCargoGlobal ["ACE_quikclot", _ACE_quikclot];
			
			_mediBack addItemCargoGlobal ["ACE_morphine", _ACE_morphine];
			_mediBack addItemCargoGlobal ["ACE_epinephrine", _ACE_epinephrine];
			_mediBack addItemCargoGlobal ["ACE_adenosine", _ACE_adenosine];
			_mediBack addItemCargoGlobal ["ACE_atropine", _ACE_atropine];
			_mediBack addItemCargoGlobal ["ACE_tourniquet", _ACE_tourniquet];
			
			_mediBack addItemCargoGlobal ["ACE_bloodIV", _ACE_bloodIV];
			_mediBack addItemCargoGlobal ["ACE_bloodIV_500", _ACE_bloodIV_500];
			_mediBack addItemCargoGlobal ["ACE_bloodIV_250", _ACE_bloodIV_250];
			_mediBack addItemCargoGlobal ["ACE_plasmaIV", _ACE_plasmaIV];
			_mediBack addItemCargoGlobal ["ACE_plasmaIV_500", _ACE_plasmaIV_500];
			_mediBack addItemCargoGlobal ["ACE_plasmaIV_250", _ACE_plasmaIV_250];
			_mediBack addItemCargoGlobal ["ACE_salineIV", _ACE_salineIV];
			_mediBack addItemCargoGlobal ["ACE_salineIV_500", _ACE_salineIV_500];
			_mediBack addItemCargoGlobal ["ACE_salineIV_250", _ACE_salineIV_250];
			
			_mediBack addItemCargoGlobal ["ACE_bodyBag", _ACE_bodyBag];
		} else {
			for "_i" from 1 to _ACE_fieldDressing do { _unit addItem "ACE_fieldDressing"; };
			for "_i" from 1 to _ACE_elasticBandage do { _unit addItem "ACE_elasticBandage"; };
			for "_i" from 1 to _ACE_packingBandage do { _unit addItem "ACE_packingBandage"; };
			for "_i" from 1 to _ACE_quikclot do { _unit addItem "ACE_quikclot"; };
			for "_i" from 1 to _ACE_morphine do { _unit addItem "ACE_morphine";};
			for "_i" from 1 to _ACE_tourniquet do { _unit addItem "ACE_tourniquet"; };
			
			for "_i" from 1 to _ACE_epinephrine do { _unit addItem "ACE_epinephrine"; };
			for "_i" from 1 to _ACE_atropine do { _unit addItem "ACE_atropine"; };
			for "_i" from 1 to _ACE_adenosine do { _unit addItem "ACE_adenosine"; };
			
			for "_i" from 1 to _ACE_bloodIV do { _unit addItem "ACE_bloodIV"; };
			for "_i" from 1 to _ACE_bloodIV_500 do { _unit addItem "ACE_bloodIV_500"; };
			for "_i" from 1 to _ACE_bloodIV_250 do { _unit addItem "ACE_bloodIV_250"; };
			for "_i" from 1 to _ACE_plasmaIV do { _unit addItem "ACE_plasmaIV"; };
			for "_i" from 1 to _ACE_plasmaIV_500 do { _unit addItem "ACE_plasmaIV_500"; };
			for "_i" from 1 to _ACE_plasmaIV_250 do { _unit addItem "ACE_plasmaIV_250"; };
			for "_i" from 1 to _ACE_salineIV do { _unit addItem "ACE_salineIV"; };
			for "_i" from 1 to _ACE_salineIV_500 do { _unit addItem "ACE_salineIV_500"; };
			for "_i" from 1 to _ACE_salineIV_250 do { _unit addItem "ACE_salineIV_250"; };
			
		};
		//_mediBack addItemCargoGlobal ["ACE_surgicalKit", _ACE_surgicalKit];
		//_mediBack addItemCargoGlobal ["ACE_personalAidKit", _ACE_personalAidKit];
	} else {
		if ( !(backpack _unit == "") && (_mediKit >= 1 || _FirstAidKits >= 5) ) then {
			_mediBack = unitBackpack _unit;
			_mediBack addItemCargoGlobal ["ACE_fieldDressing", _ACE_elasticBandage+_ACE_packingBandage+_ACE_packingBandage+_ACE_quikclot];
			_mediBack addItemCargoGlobal ["ACE_morphine", _ACE_morphine];
			_mediBack addItemCargoGlobal ["ACE_epinephrine", _ACE_epinephrine];
			
			_mediBack addItemCargoGlobal ["ACE_bloodIV", _ACE_bloodIV+_ACE_plasmaIV+_ACE_salineIV];
			_mediBack addItemCargoGlobal ["ACE_bloodIV_500", _ACE_bloodIV_500+_ACE_plasmaIV_500+_ACE_salineIV_500];
			_mediBack addItemCargoGlobal ["ACE_bloodIV_250", _ACE_bloodIV_250+_ACE_plasmaIV_250+_ACE_salineIV_250];
			
			_mediBack addItemCargoGlobal ["ACE_bodyBag", _ACE_bodyBag];
		} else {
			for "_i" from 1 to _ACE_elasticBandage+_ACE_elasticBandage+_ACE_packingBandage+_ACE_quikclot do { _unit addItem "ACE_fieldDressing"; };
			for "_i" from 1 to _ACE_morphine do { _unit addItem "ACE_morphine";};
			for "_i" from 1 to _ACE_epinephrine do { _unit addItem "ACE_epinephrine"; };
			
			for "_i" from 1 to _ACE_bloodIV+_ACE_plasmaIV+_ACE_salineIV do { _unit addItem "ACE_bloodIV"; };
			for "_i" from 1 to _ACE_bloodIV_500+_ACE_plasmaIV_500+_ACE_salineIV_500 do { _unit addItem "ACE_bloodIV_500"; };
			for "_i" from 1 to _ACE_bloodIV_250+_ACE_plasmaIV_250+_ACE_salineIV_250 do { _unit addItem "ACE_bloodIV_250"; };
			for "_i" from 1 to _ACE_bodyBag do { _unit addItem "ACE_bodyBag"; };
		};
	};
};
	
true;