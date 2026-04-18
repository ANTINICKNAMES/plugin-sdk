/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePedHateBadlyLit.h"

// 0x5FF250
CEventAcquaintancePedHateBadlyLit::CEventAcquaintancePedHateBadlyLit(CPed* pAcquaintancePed, const int iTimeSpotted, const CVector& vTargetPosAtSpotTime) 
    : CEventAcquaintancePed(pAcquaintancePed) {
    plugin::CallMethod<0x5FF250, CEventAcquaintancePedHateBadlyLit*, CPed*, const int, const CVector&>(this, pAcquaintancePed, iTimeSpotted, vTargetPosAtSpotTime);
}

eEventType CEventAcquaintancePedHateBadlyLit::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePedHateBadlyLit*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePedHateBadlyLit::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePedHateBadlyLit*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventAcquaintancePedHateBadlyLit::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventAcquaintancePedHateBadlyLit*))plugin::GetVMT(this, 16))(this);
}

bool CEventAcquaintancePedHateBadlyLit::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventAcquaintancePedHateBadlyLit*))plugin::GetVMT(this, 5))(this);
}

bool CEventAcquaintancePedHateBadlyLit::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventAcquaintancePedHateBadlyLit*))plugin::GetVMT(this, 15))(this);
}