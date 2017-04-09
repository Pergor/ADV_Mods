/*
 * Author: Belbo
 *
 * Creates a fire, light or smoke effect at a given object.
 *
 * Arguments:
 * 0: object to attach the effect to - <OBJECT>
 * 1: type of effect, can be: "FIRE_SMALL", "FIRE_MEDIUM", "FIRE_BIG", "SMOKE_SMALL", "SMOKE_MEDIUM", "SMOKE_BIG", "LIGHT_SMALL" (optional) - <STRING>
 *
 * Return Value:
 * Array of created effects, in order: 0: fire effect - <OBJECT>; 1: smoke effect - <OBJECT>; 2: light effect - <OBJECT>. Entry will be objNull if specific effect not present. - <ARRAY>
 *
 * Example:
 * _effects = [wreck_1, "FIRE_SMALL"] call adv_fnclib_fnc_spawnFire;
 *
 * Public: No
 */

params [
	["_object", objNull, [objNull]]
	,["_effect", "FIRE_MEDIUM", [""]]
	,"_pos","_fire","_smoke"
	,"_light","_brightness","_color","_ambient","_intensity","_attenuation"
];

_pos = getPosATL _object;

_fire = "";
_smoke = "";
_light = "";
_light = objNull;
_color = [1,0.85,0.6];
_ambient = [1,0.3,0];
_lightsource = false;
_particleFire = [1,1,1];
_return = [objNull,objNull,objNull];

switch (toUpper _effect) do {
	case "FIRE_SMALL" : {
		_fire = "SmallDestructionFire";
		_smoke = "SmallDestructionSmoke";
	};
	case "FIRE_MEDIUM" : {
		_fire = "MediumDestructionFire";
		_smoke = "MediumDestructionSmoke";
		_lightsource = true;
		_brightness = 1.0;
		_intensity = 400;
		_attenuation = [0,0,0,2];
	};
	case "FIRE_BIG" : {
		_fire = "BigDestructionFire";
		_smoke = "BigDestructionSmoke";
		_lightsource = true;
		_brightness = 1.0;
		_intensity = 1600;
		_attenuation = [0,0,0,1.6];
	};
	case "FIRE_NODAMAGE" : {
		_fire = "BigDestructionFire";
		_smoke = "BigDestructionSmoke";
		_brightness = 1.0;
		_intensity = 1600;
		_attenuation = [0,0,0,1.6];
		_particleFire = [0,0,0];
	};
	case "SMOKE_SMALL" : {
		_smoke 	= "SmallDestructionSmoke";
	};
	case "SMOKE_MEDIUM" : {
		_smoke 	= "MediumSmoke";
	};
	case "SMOKE_BIG" : {
		_smoke 	= "BigDestructionSmoke";
	};
	case "LIGHT_SMALL" : {
		_lightsource = true;
		_brightness = 1.0;
		_intensity = 1600;
		_attenuation = [1,0,1.2,0];
	};
	default {};
};

if !(_fire isEqualTo "") then {
	_eFire = "#particlesource" createVehicleLocal _pos;
	_eFire setParticleClass _fire;
	_eFire setPosATL _pos;
	if (_object isKindOf "AllVehicles") then {
		_eFire attachTo [_object];
	};
	_return set [0,_eFire];
};

if ( !(_smoke isEqualTo "") && !(_object isKindOf "AllVehicles") ) then {
	_eSmoke = "#particlesource" createVehicleLocal _pos;
	_eSmoke setParticleClass _smoke;
	_eSmoke setPosATL _pos;
	_return set [1,_eSmoke];
};

//create lightsource
if (_lightsource) then {
	_light = createVehicle ["#lightpoint", _pos, [], 0, "CAN_COLLIDE"];
	if ( (toUpper _effect) in ["FIRE_BIG","FIRE_MEDIUM","FIRE_NODAMAGE"] ) then {
		_pos = [_pos select 0,_pos select 1,(_pos select 2)+1];
	};
	_light setPosATL _pos;

	_light setLightBrightness _brightness;
	_light setLightColor _color;
	_light setLightAmbient _ambient;
	_light setLightIntensity _intensity;
	_light setLightAttenuation _attenuation;
	if ( (toUpper _effect) in ["FIRE_BIG","FIRE_MEDIUM","FIRE_NODAMAGE"] ) then {
		_light setLightDayLight false;
	} else {
		_light setLightDayLight true;
	};
	_return set [2,_light];
};

_return;