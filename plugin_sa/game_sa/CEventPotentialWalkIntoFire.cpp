/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPotentialWalkIntoFire.h"

// 0x4B1E20
CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(const CVector& vFirePos, const float fStrength, const int iMoveState) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B1E20, CEventPotentialWalkIntoFire*, const CVector&, const float, const int>(this, vFirePos, fStrength, iMoveState);
}

eEventType CEventPotentialWalkIntoFire::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPotentialWalkIntoFire*))plugin::GetVMT(this, 1))(this);
}

int CEventPotentialWalkIntoFire::GetEventPriority() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoFire*))plugin::GetVMT(this, 2))(this);
}

int CEventPotentialWalkIntoFire::GetLifeTime() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoFire*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPotentialWalkIntoFire::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPotentialWalkIntoFire*))plugin::GetVMT(this, 16))(this);
}

bool CEventPotentialWalkIntoFire::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoFire*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}