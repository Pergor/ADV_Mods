params ["_target","_state"];


if !( _target isEqualTo (vehicle _target) ) exitWith { false };
if !( _target getVariable ["ace_captives_isHandcuffed", false] ) exitWith { false };

private _captiveAceAnim = "ace_amovpercmstpscapwnondnon";
//private _captiveNewAnim = "Acts_AidlPsitMstpSsurWnonDnon01";
private _animState = animationState _target;

if ( _state isEqualTo "down" && !(toLower _animState == toLower _captiveAceAnim) ) exitWith { false };
if ( _state isEqualTo "up" && (toLower _animState == toLower _captiveAceAnim) ) exitWith { false };

true;