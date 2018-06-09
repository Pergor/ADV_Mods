/*
 * Author: Belbo
 *
 * Adds an EVH to a vehicle that will create a lightpoint for Flare_82mm_AMOS_White that is visible in MP.
 *
 * Arguments:
 * 0: vehicle - <BOOL>
 *
 * Return Value:
 * nil - <NULL>
 *
 * Example:
 * NONE
 *
 * Public: No
 */
 
params ["_unit"];

adv_configsVanilla_scriptfnc_setMortarFlare = {
	_this spawn {
		params ["_evhVars","_light","_flareSize","_flareBrightness","_flareIntensity","_flareColor"];
		_evhVars params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
		
		private _activationTime = 10;
		sleep _activationTime;
		_light setLightUseFlare true;
		_light setLightFlareSize _flareSize;
		_light setLightFlareMaxDistance 12000;
		_light setLightBrightness _flareBrightness;
		_light setLightIntensity _flareIntensity;
		_light setLightColor _flareColor;
		_light setLightAmbient _flareColor;
		_light setLightDayLight true;
		if !(local _unit) exitWith {};
		private _timeToLive = getNumber (configFile >> "CfgAmmo" >> _ammo >> "timeToLive");
		sleep _timeToLive-_activationTime;
		deleteVehicle _light;
	};
};

private _index = _unit addEventHandler ["Fired",{
	params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
	if !(_ammo == "FlareCore") exitWith {};
	private _light = createVehicle ["#lightpoint", getPos _projectile, [], 0, "NONE"];
	_light attachTo [_projectile];
	
	private _flareSize = getNumber (configFile >> "CfgAmmo" >> _ammo >> "flareSize");
	private _brightness = getNumber (configFile >> "CfgAmmo" >> _ammo >> "brightness");
	private _intensity = getNumber (configFile >> "CfgAmmo" >> _ammo >> "intensity");
	
	[[_this, _light, _flareSize, _brightness, _intensity, [0.95,0.95,1]],adv_configsVanilla_scriptfnc_setMortarFlare] remoteExec ["call",0];
}];

_unit setVariable ["adv_configsVanilla_EVH_mortarFlare",_index];

nil