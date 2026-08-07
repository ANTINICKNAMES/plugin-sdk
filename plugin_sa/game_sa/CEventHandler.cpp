/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHandler.h"

// 0x4B8CC0
int CEventHandler::GetCurrentEventType() {
    return plugin::CallMethodAndReturn<int, 0x4B8CC0, CEventHandler*>(this);
}

// inline, unknown address
CEvent* CEventHandler::GetCurrentEvent() {
    return m_history.GetCurrentEvent();
}

// 0x4C3790
void CEventHandler::Flush() {
    plugin::CallMethod<0x4C3790, CEventHandler*>(this);
}

// 0x4C3820
void CEventHandler::FlushImmediately() {
    plugin::CallMethod<0x4C3820, CEventHandler*>(this);
}

// 0x4C3F10
void CEventHandler::HandleEvents() {
    plugin::CallMethod<0x4C3F10, CEventHandler*>(this);
}

// 0x4C4220
CTask* CEventHandler::ComputeEventResponseTask(CPed& ped, CEvent& rEvent) {
    return plugin::CallAndReturn<CTask*, 0x4C4220, CPed&, CEvent&>(ped, rEvent);
}

// inlined, perhaps 0x5FE9E0
bool CEventHandler::IsRespondingToEvent(int iEventType) {
    return m_history.IsRespondingToEvent(iEventType);
}

// 0x4BC370
bool CEventHandler::IsTemporaryEvent(CEvent& event) {
    return plugin::CallAndReturn<bool, 0x4BC370, CEvent&>(event);
}

// inline, perhaps 0x5FE9F0
void CEventHandler::ResetResponse() {
    m_pTaskPhysResponse  = nullptr;
    m_pTaskEventResponse = nullptr;
    m_pTaskSecondaryAim = nullptr;
    m_pTaskSecondarySay = nullptr;
    m_pTaskSecondaryPartialAnim = nullptr;
}

// inline, unknown address
void CEventHandler::ResetHistory() 
{
    m_history.ClearAllEvents();
}

// inline, unknown address
// #UNKNOWN_FUNCTIONALITY
void CEventHandler::RecordActiveEvent(CEvent& event) {
}

// inline, unknown address
// #UNKNOWN_FUNCTIONALITY
void CEventHandler::RecordPassiveEvent(CEvent& event) {
}

// 0x4C3870
void CEventHandler::ComputeEventResponseTask(CEvent* pEvent, CTask* pAbortedTaskEventResponse) {
    plugin::CallMethod<0x4C3870, CEventHandler*, CEvent*, CTask*>(this, pEvent, pAbortedTaskEventResponse);
}

// 0x4BCC30
void CEventHandler::ComputeDraggedOutCarResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BCC30, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BD6A0
void CEventHandler::ComputeVehicleCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BD6A0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BDB80
void CEventHandler::ComputePedCollisionWithPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BDB80, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BE7D0
void CEventHandler::ComputePedCollisionWithPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BE7D0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B8CE0
void CEventHandler::ComputePlayerCollisionWithPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B8CE0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BF2B0
void CEventHandler::ComputeBuildingCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BF2B0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B92B0
void CEventHandler::ComputeObjectCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B92B0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BF9B0
void CEventHandler::ComputePersonalityResponseToDamage(CEventDamage* pEventDamage, CEntity* pInflictor) {
    plugin::CallMethod<0x4BF9B0, CEventHandler*, CEventDamage*, CEntity*>(this, pEventDamage, pInflictor);
}

// 0x4C0170
void CEventHandler::ComputeDamageResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest, CTask* pAbortedTaskEventResponse) {
    plugin::CallMethod<0x4C0170, CEventHandler*, CEvent*, CTask*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest, pAbortedTaskEventResponse);
}

// 0x4B9400
void CEventHandler::ComputeDeathResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9470
void CEventHandler::ComputeDeadPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9470, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C0BD0
void CEventHandler::ComputeVehiclePotentialCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C0BD0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B96D0
void CEventHandler::ComputeVehiclePotentialPassiveCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B96D0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// unknown address
//void CEventHandler::ComputeVehicleHitAndRunResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
//}

// 0x4BC710
void CEventHandler::ComputeShotFiredResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BC710, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C1590
void CEventHandler::ComputePedEnteredVehicleResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C1590, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B97B0
void CEventHandler::ComputeReviveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B97B0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B98E0
void CEventHandler::ComputeChatPartnerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B98E0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B99F0
void CEventHandler::ComputeSexyPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B99F0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9AA0
void CEventHandler::ComputeSexyVehicleResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9AA0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C1910
void CEventHandler::ComputePedToChaseResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C1910, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9B50
void CEventHandler::ComputePedToFleeResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9B50, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9BE0
void CEventHandler::ComputeAttractorResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9BE0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C2610
void CEventHandler::ComputePotentialPedCollideResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C2610, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9F80
void CEventHandler::ComputeVehicleToStealResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9F80, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9FF0
void CEventHandler::ComputeKnockOffBikeResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9FF0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C2840
void CEventHandler::ComputeGunAimedAtResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C2840, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BA7C0
void CEventHandler::ComputeScriptCommandResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BA7C0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BA8B0
void CEventHandler::ComputeVehicleDiedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4BA8B0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9DD0
void CEventHandler::ComputePedFriendResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9DD0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C19A0
void CEventHandler::ComputePedThreatResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4C19A0, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9C90
void CEventHandler::ComputePedThreatBadlyLitResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9C90, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4B9D40
void CEventHandler::ComputePedSoundQuietResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9D40, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BA990
void CEventHandler::ComputeLowHealthResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAA30
void CEventHandler::ComputeReallyLowHealthResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAAD0
void CEventHandler::ComputeLowAngerAtPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAC10
void CEventHandler::ComputeHighAngerAtPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAD50
void CEventHandler::ComputeOnFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// Android
//void CEventHandler::ComputeBuildingCollisionPassiveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
//}plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);

// 0x4BAE30
void CEventHandler::ComputeWaterCannonResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAF80
void CEventHandler::ComputeInWaterResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BAFE0
void CEventHandler::ComputeInteriorUseInfoResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB050
void CEventHandler::ComputeSignalAtPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB0C0
void CEventHandler::ComputePassObjectResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB130
void CEventHandler::ComputeCreatePartnerTaskResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB280
void CEventHandler::ComputePlayerWantedLevelResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB2E0
void CEventHandler::ComputeVehicleOnFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB740
void CEventHandler::ComputeCopCarBeingStolenResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C2FC0
void CEventHandler::ComputeVehicleDamageResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BB800
void CEventHandler::ComputeSpecialResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C3430
void CEventHandler::ComputeGotKnockedOverByCarResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBB90
void CEventHandler::ComputeObjectCollisionPassiveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBC30
void CEventHandler::ComputeCarUpsideDownResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBCD0
void CEventHandler::ComputePotentialWalkIntoFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBE30
void CEventHandler::ComputeShotFiredWhizzedByResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4C35F0
void CEventHandler::ComputeSeenPanickedPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBF50
void CEventHandler::ComputeAreaCodesResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BBFB0
void CEventHandler::ComputeFireNearbyResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BC050
void CEventHandler::ComputeSeenCopResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BC150
void CEventHandler::ComputeOnEscalatorResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BC230
void CEventHandler::ComputeDangerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BC1D0
void CEventHandler::ComputeDontJoinGroupResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest) {
    plugin::CallMethod<0x4B9400, CEventHandler*, CEvent*, CTask*, CTask*>(this, pEvent, pTaskActive, pTaskActiveSimplest);
}

// 0x4BC600
void CEventHandler::SetEventResponseTask(CEvent& event) {
    plugin::CallMethod<0x4BC600, CEventHandler*, CEvent&>(this, event);
}

// inline
//bool CEventHandler::Response() {
//}

// 0x4BC3E0
bool CEventHandler::IsKillTaskAppropriate(CPed* pPed, CPed* pOtherPed, CEvent& event) {
    return plugin::CallAndReturn<bool, 0x4BC3E0, CPed*, CPed*, CEvent&>(pPed, pOtherPed, event);
}

// 0x4B9340
void CEventHandler::RegisterKill(CPed* pPed, CEntity* pInflictor, eWeaponType eWeaponUsed, bool bHeadShot) {
    plugin::Call<0x4B9340, CPed*, CEntity*, eWeaponType, bool>(pPed, pInflictor, eWeaponUsed, bHeadShot);
}