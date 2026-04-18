/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventStuckInAir.h"

// 0x4B1490
CEventStuckInAir::CEventStuckInAir(CPed* pPed) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B1490, CEventStuckInAir*, CPed*>(this, pPed);
}

eEventType CEventStuckInAir::GetEventType() {
    return ((eEventType(__thiscall*)(CEventStuckInAir*))plugin::GetVMT(this, 1))(this);
}

int CEventStuckInAir::GetEventPriority() {
    return ((int(__thiscall*)(CEventStuckInAir*))plugin::GetVMT(this, 2))(this);
}

int CEventStuckInAir::GetLifeTime() {
    return ((int(__thiscall*)(CEventStuckInAir*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventStuckInAir::Clone() {
    return ((CEvent * (__thiscall*)(CEventStuckInAir*))plugin::GetVMT(this, 4))(this);
}

bool CEventStuckInAir::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventStuckInAir*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventStuckInAir::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventStuckInAir*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}

bool CEventStuckInAir::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventStuckInAir*))plugin::GetVMT(this, 15))(this);
}