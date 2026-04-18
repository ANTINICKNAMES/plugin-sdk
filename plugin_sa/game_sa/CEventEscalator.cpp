/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventEscalator.h"

// 0x5FF820 ; inline
CEventEscalator::CEventEscalator() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x5FF820, CEventEscalator*>(this);
}

eEventType CEventEscalator::GetEventType() {
    return ((eEventType(__thiscall*)(CEventEscalator*))plugin::GetVMT(this, 1))(this);
}

int CEventEscalator::GetEventPriority() {
    return ((int(__thiscall*)(CEventEscalator*))plugin::GetVMT(this, 2))(this);
}

int CEventEscalator::GetLifeTime() {
    return ((int(__thiscall*)(CEventEscalator*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventEscalator::Clone() {
    return ((CEvent * (__thiscall*)(CEventEscalator*))plugin::GetVMT(this, 4))(this);
}

bool CEventEscalator::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventEscalator*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventEscalator::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventEscalator*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}