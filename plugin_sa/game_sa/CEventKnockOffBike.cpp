/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventKnockOffBike.h"

// 0x4AFC70
// Unused
CEventKnockOffBike::CEventKnockOffBike() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AFC70, CEventKnockOffBike*>(this);
}

// 0x4AFCF0
// Main ctor
CEventKnockOffBike::CEventKnockOffBike(CVehicle* pVehicle, const CVector& vecSpeed, const CVector& vecNorm, float fImpulse, float fPedDamage, eWeaponType nWeaponType,
    int8_t nDirn, const int nDownTime, CPed* pDraggingPed, const bool bWasDriver, const bool bForce) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AFCF0, CEventKnockOffBike*, CVehicle*, const CVector&, const CVector&, float, float, eWeaponType, int8_t, const int, CPed*, const bool, const bool>
        (this, pVehicle, vecSpeed, vecNorm, fImpulse, fPedDamage, nWeaponType, nDirn, nDownTime, pDraggingPed, bWasDriver, bForce);
}

// 0x4B4A50
// for Clone()
CEventKnockOffBike::CEventKnockOffBike(const CEventKnockOffBike& src) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B4A50, CEventKnockOffBike*, const CEventKnockOffBike&>(this, src);
}

// 0x4B4AA0
CEventKnockOffBike& CEventKnockOffBike::operator=(const CEventKnockOffBike& src) {
    return plugin::CallMethodAndReturn<CEventKnockOffBike&, 0x4B4AA0, CEventKnockOffBike*, const CEventKnockOffBike&>(this, src);
}

eEventType CEventKnockOffBike::GetEventType() {
    return ((eEventType(__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 1))(this);
}

int CEventKnockOffBike::GetEventPriority() {
    return ((int(__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 2))(this);
}

int CEventKnockOffBike::GetLifeTime() {
    return ((int(__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventKnockOffBike::Clone() {
    return ((CEvent * (__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 4))(this);
}

bool CEventKnockOffBike::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventKnockOffBike*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventKnockOffBike::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 12))(this);
}

bool CEventKnockOffBike::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventKnockOffBike*))plugin::GetVMT(this, 7))(this);
}

void CEventKnockOffBike::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventKnockOffBike*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

// 0x4AFF60
void CEventKnockOffBike::SetPedOutCar(CPed* pPed) {
    plugin::CallMethod<0x4AFF60, CEventKnockOffBike*, CPed*>(this, pPed);
}

// 0x4B0020
AnimationId CEventKnockOffBike::CalcForcesAndAnims(CPed* pPed) {
    return plugin::CallMethodAndReturn<AnimationId, 0x4B0020, CEventKnockOffBike*, CPed*>(this, pPed);
}

// 0x4B4AC0
bool CEventKnockOffBike::SetPedSafePosition(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x4B4AC0, CEventKnockOffBike*, CPed*>(this, pPed);
}

// 0x4AFDD0
void CEventKnockOffBike::From(const CEventKnockOffBike& src) {
    plugin::CallMethod<0x4AFDD0, CEventKnockOffBike*, const CEventKnockOffBike&>(this, src);
}