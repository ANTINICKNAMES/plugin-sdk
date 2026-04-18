/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventFireNearby.h"

// 0x4B1F10
CEventFireNearby::CEventFireNearby(const CVector& vFirePos) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B1F10, CEventFireNearby*, const CVector&>(this, vFirePos);
}

eEventType CEventFireNearby::GetEventType() {
    return ((eEventType(__thiscall*)(CEventFireNearby*))plugin::GetVMT(this, 1))(this);
}

int CEventFireNearby::GetEventPriority() {
    return ((int(__thiscall*)(CEventFireNearby*))plugin::GetVMT(this, 2))(this);
}

int CEventFireNearby::GetLifeTime() {
    return ((int(__thiscall*)(CEventFireNearby*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventFireNearby::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventFireNearby*))plugin::GetVMT(this, 16))(this);
}

bool CEventFireNearby::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventFireNearby*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventFireNearby::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventFireNearby*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}