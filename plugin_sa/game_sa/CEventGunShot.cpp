/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGunShot.h"

// 0x4AC610
CEventGunShot::CEventGunShot(CEntity* pFiringEntity, CVector ShotOrigin, CVector ShotTarget, bool bSilent) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AC610, CEventGunShot*, CEntity*, CVector, CVector, bool>(this, pFiringEntity, ShotOrigin, ShotTarget, bSilent);
}

eEventType CEventGunShot::GetEventType() {
    return ((eEventType(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 1))(this);
}

int CEventGunShot::GetEventPriority() {
    return ((int(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 2))(this);
}

int CEventGunShot::GetLifeTime() {
    return ((int(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventGunShot::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 16))(this);
}

bool CEventGunShot::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventGunShot*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventGunShot::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 7))(this);
}

void CEventGunShot::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventGunShot*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

CEntity* CEventGunShot::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 10))(this);
}

float CEventGunShot::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 12))(this);
}

bool CEventGunShot::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventGunShot*))plugin::GetVMT(this, 15))(this);
}

bool CEventGunShot::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventGunShot*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}