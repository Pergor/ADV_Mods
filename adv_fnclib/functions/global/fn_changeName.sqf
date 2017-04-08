/*
 * Author: Belbo
 *
 * Changes the display name of an AI-unit.
 *
 * Arguments:
 * 0: target - <OBJECT>
 * 1: first name - <STRING>
 * 2: last name - <STRING>
 *
 * Return Value:
 * Array in format ["first name", "last name", "First name Last name"] - <ARRAY> of <STRINGS>
 *
 * Example:
 * [TARGET,"FIRSTNAME","LASTNAME"] call adv_fnclib_fnc_changename;
 *
 * Public: No
 */

params [
	["_target", objNull, [objNull]],
	["_firstName", "Peter", [""]],
	["_lastName", "Schmitz", [""]],
	"_wholeName"
];
_wholeName = format ["%1 %2",_firstName,_lastName];
_return = [_firstName,_lastName,_wholeName];

(driver _target) setName _return;
_target setName _return;

_return;