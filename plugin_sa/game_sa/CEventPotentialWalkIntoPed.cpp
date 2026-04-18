/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPotentialWalkIntoPed.h"

// 0x4AE6E0
CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(CPed* pOtherPed, const CVector& vTarget, const int iMoveState) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AE6E0, CEventPotentialWalkIntoPed*, CPed*, const CVector&, const int>(this, pOtherPed, vTarget, iMoveState);
}

eEventType CEventPotentialWalkIntoPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPotentialWalkIntoPed*))plugin::GetVMT(this, 1))(this);
}

int CEventPotentialWalkIntoPed::GetEventPriority() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoPed*))plugin::GetVMT(this, 2))(this);
}

int CEventPotentialWalkIntoPed::GetLifeTime() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoPed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPotentialWalkIntoPed::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPotentialWalkIntoPed*))plugin::GetVMT(this, 16))(this);
}

bool CEventPotentialWalkIntoPed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoPed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventPotentialWalkIntoPed::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventPotentialWalkIntoPed*))plugin::GetVMT(this, 10))(this);
}

bool CEventPotentialWalkIntoPed::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoPed*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}