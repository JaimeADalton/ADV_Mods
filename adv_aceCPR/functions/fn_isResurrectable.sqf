/*
ADV_aceCPR_fnc_canCPR - by Belbo
*/

params [
	["_target", objNull, [objNull]]
];
private _maxRevTime = missionNamespace getVariable ["ace_medical_maxReviveTime",900];
private _inRevState = _target getVariable ["ace_medical_inReviveState",false];
private _cprMaxTime = missionNamespace getVariable ["adv_aceCPR_maxTime",900];

//return:
if ( alive _target && _inRevState ) exitWith {
	private _startTime = _target getVariable ["ace_medical_reviveStartTime",0];
	private _timeLeft = _startTime + ( _maxRevTime min _cprMaxTime );
	
	if ( CBA_missionTime > _timeLeft ) exitWith { false };
	true
};

true