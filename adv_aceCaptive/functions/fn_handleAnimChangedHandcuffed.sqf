params ["_unit", "_newAnimation"];

if (_unit == (vehicle _unit)) then {
    if ((_newAnimation != "Acts_AidlPsitMstpSsurWnonDnon01") && {!(_unit getVariable ["ACE_isUnconscious", false])}) then {
        [_unit, "Acts_AidlPsitMstpSsurWnonDnon01", 1] call ace_common_fnc_doAnimation;
    };
} else {
    private _turretPath = [];
    {
        _x params ["_xUnit", "", "", "_xTurretPath"];
        if (_unit == _xUnit) exitWith {_turretPath = _xTurretPath};
    } forEach (fullCrew (vehicle _unit));
    if (_turretPath isEqualTo []) exitWith {};

    [_unit, "ACE_HandcuffedFFV", 2] call ace_common_fnc_doAnimation;
    [_unit, "ACE_HandcuffedFFV", 1] call ace_common_fnc_doAnimation;
};