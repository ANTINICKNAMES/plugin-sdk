/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGunShotWhizzedBy.h"

// 0x4B1FD0
CEventGunShotWhizzedBy::CEventGunShotWhizzedBy(CEntity* pFiringEntity, const CVector& vShotOrigin, const CVector& vShotTarget, const bool bIsSilent)
    : CEventGunShot(pFiringEntity, vShotOrigin, vShotTarget, bIsSilent) {
    plugin::CallMethod<0x4B1FD0, CEventGunShotWhizzedBy*, CEntity*, const CVector&, const CVector&, const bool> (this, pFiringEntity, vShotOrigin, vShotTarget, bIsSilent);
}

eEventType CEventGunShotWhizzedBy::GetEventType() {
    return ((eEventType(__thiscall*)(CEventGunShotWhizzedBy*))plugin::GetVMT(this, 1))(this);
}

int CEventGunShotWhizzedBy::GetEventPriority() {
    return ((int(__thiscall*)(CEventGunShotWhizzedBy*))plugin::GetVMT(this, 2))(this);
}

int CEventGunShotWhizzedBy::GetLifeTime() {
    return ((int(__thiscall*)(CEventGunShotWhizzedBy*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventGunShotWhizzedBy::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventGunShotWhizzedBy*))plugin::GetVMT(this, 16))(this);
}

bool CEventGunShotWhizzedBy::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventGunShotWhizzedBy*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventGunShotWhizzedBy::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventGunShotWhizzedBy*))plugin::GetVMT(this, 15))(this);
}