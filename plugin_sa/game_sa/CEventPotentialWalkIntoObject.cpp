/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPotentialWalkIntoObject.h"

// 0x4AE5D0
CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(CObject* pObject, const int iMoveState) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AE5D0, CEventPotentialWalkIntoObject*, CObject*, const int>(this, pObject, iMoveState);
}

eEventType CEventPotentialWalkIntoObject::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPotentialWalkIntoObject*))plugin::GetVMT(this, 1))(this);
}

int CEventPotentialWalkIntoObject::GetEventPriority() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoObject*))plugin::GetVMT(this, 2))(this);
}

int CEventPotentialWalkIntoObject::GetLifeTime() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoObject*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPotentialWalkIntoObject::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPotentialWalkIntoObject*))plugin::GetVMT(this, 16))(this);
}

bool CEventPotentialWalkIntoObject::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoObject*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventPotentialWalkIntoObject::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoObject*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}