/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDamage.h"

// 0x4B33B0 (used in CloneEditable() )
CEventDamage::CEventDamage(const CEventDamage& event) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B33B0, CEventDamage*, const CEventDamage&>(this, event);
}

// 0x4AD830
CEventDamage::CEventDamage(CEntity* pInflictor, uint32_t nTime, eWeaponType eWeaponUsed, ePedPieceTypes eHitZone, uint8_t iPedHitDir, bool bJumpedOutOfMovingCar, bool bDamagedInVehicle) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AD830, CEventDamage*, CEntity*, uint32_t, eWeaponType, ePedPieceTypes, uint8_t, bool, bool>
        (this, pInflictor, nTime, eWeaponUsed, eHitZone, iPedHitDir, bJumpedOutOfMovingCar, bDamagedInVehicle);
}

eEventType CEventDamage::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 1))(this);
}

int CEventDamage::GetEventPriority() {
    return ((int(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 2))(this);
}

int CEventDamage::GetLifeTime() {
    return ((int(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDamage::CloneEditable() {
    return ((CEvent*(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 16))(this);
}

bool CEventDamage::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDamage*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventDamage::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventDamage*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

bool CEventDamage::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 7))(this);
}

void CEventDamage::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventDamage*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

CEntity* CEventDamage::GetSourceEntity() {
    return ((CEntity*(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 10))(this);
}

float CEventDamage::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 12))(this);
}

bool CEventDamage::DoInformVehicleOccupants(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDamage*, CPed*))plugin::GetVMT(this, 13))(this, pPed);
}

bool CEventDamage::TakesPriorityOver(CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventDamage*, CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}


bool CEventDamage::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventDamage*))plugin::GetVMT(this, 15))(this);
}

// 0x4ADBF0
bool CEventDamage::IsSameEventForAI(CEventDamage* pEvent) {
    return plugin::CallMethodAndReturn<bool, 0x4ADBF0, CEventDamage*>(this, pEvent);
}

// 0x4ABCA0
bool CEventDamage::HasKilledPed() {
    return plugin::CallMethodAndReturn<bool, 0x4ABCA0, CEventDamage*>(this);
}

// 0x4B3A60
void CEventDamage::ComputeDeathAnim(CPed* pPed, bool bAtGenerateEventStage) {
    plugin::CallMethod<0x4B3A60, CEventDamage*, CPed*, bool>(this, pPed, bAtGenerateEventStage);
}

// 0x4B3FC0
void CEventDamage::ComputeDamageAnim(CPed* pPed, bool bAtGenerateEventStage) {
    plugin::CallMethod<0x4B3FC0, CEventDamage*, CPed*, bool>(this, pPed, bAtGenerateEventStage);
}

// 0x4ADD60
void CEventDamage::ComputeHeadShot(bool& bHeadShot) {
    plugin::CallMethod<0x4ADD60, CEventDamage*, bool&>(this, bHeadShot);
}

// 0x4ADC10
void CEventDamage::ComputeBodyPartToRemove(int& iBodyPartToRemove) {
    plugin::CallMethod<0x4ADC10, CEventDamage*, int&>(this, iBodyPartToRemove);
}

// inline, unknown address
CEntity* CEventDamage::GetInflictor() {
    return m_pInflictor;
}

// inline, unknown address
uint32_t CEventDamage::GetDamageTime() {
    return m_nDamageTime;
}

// inline, unknown address
eWeaponType CEventDamage::GetWeaponUsed() {
    return m_eWeaponUsed;
}

// inline, unknown address
// unknown implementation, so I assumed this
float CEventDamage::GetDamageApplied() {
    return m_pedDamageResponse.m_fDamageHealth + m_pedDamageResponse.m_fDamageArmor;
}

// inline, unknown address
ePedPieceTypes CEventDamage::GetHitZone() {
    return m_eHitZone;
}

// inline, unknown address
void CEventDamage::SetHitZone(ePedPieceTypes eHitZone) {
    m_eHitZone = eHitZone;
}

// inline, unknown address
uint8_t CEventDamage::GetPedHitDir() {
    return m_iPedHitDir;
}

// inline, unknown address
bool CEventDamage::GetFallDown() {
    return m_bFallDown;
}


// inline, unknown address
void CEventDamage::SetIsStealthMode(bool bStealthMode) {
    m_bStealthMode = bStealthMode;
}

// inline, unknown address
bool CEventDamage::GetIsStealthMode() {
    return m_bStealthMode;
}

// inline, unknown address
AssocGroupId CEventDamage::GetAnimGroup() {
    return m_nAnimGroup;
}

// inline, unknown address
AnimationId CEventDamage::GetAnimId() 
{
    return m_nAnimId;
}

// inline, unknown address
void CEventDamage::SetAnimId(AnimationId nAnimId) {
    m_nAnimId = nAnimId;
}

// inline unknown address
float CEventDamage::GetAnimBlend() {
    return m_fAnimBlendSpeed;
}

// inline unknown address
float CEventDamage::GetAnimSpeed() {
    return m_fAnimPlaySpeed;
}

// inline, unknown address
bool CEventDamage::GetAnimAdded() {
    return m_bAnimAdded;
}

// inline, unknown address
void CEventDamage::SetAnimInfo(AssocGroupId nAnimGroup, AnimationId nAnimId, float fAnimBlend, float fAnimSpeed) {
    m_nAnimGroup = nAnimGroup;
    m_nAnimId = nAnimId;
    m_fAnimBlendSpeed = fAnimBlend;
    m_fAnimPlaySpeed = fAnimSpeed;
    m_bAnimAdded = true;
}

// inline, unknown address
void CEventDamage::SetAnimAdded() {
    m_bAnimAdded = true;
}

// inline, unknown address
CPedDamageResponse& CEventDamage::GetDamageResponseData() {
    return m_pedDamageResponse;
}

// 0x4B3A20
void CEventDamage::ProcessDamage(CPed* pPed) {
    plugin::CallMethod<0x4B3A20, CEventDamage*, CPed*>(this, pPed);
}

// 0x4AD9C0
void CEventDamage::From(const CEventDamage& src) {
    plugin::CallMethod<0x4AD9C0, CEventDamage*, const CEventDamage&>(this, src);
}