/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLeaderEntryExit.h"

// 0x43E1C0
CEventLeaderEntryExit::CEventLeaderEntryExit(CPed* pPed) : CEventAreaCodes(pPed) {
    plugin::CallMethod<0x43E1C0, CEventLeaderEntryExit*, CPed*>(this, pPed);
}

eEventType CEventLeaderEntryExit::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLeaderEntryExit*))plugin::GetVMT(this, 1))(this);
}

int CEventLeaderEntryExit::GetLifeTime() {
    return ((int(__thiscall*)(CEventLeaderEntryExit*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventLeaderEntryExit::Clone() {
    return ((CEvent * (__thiscall*)(CEventLeaderEntryExit*))plugin::GetVMT(this, 4))(this);
}

bool CEventLeaderEntryExit::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventLeaderEntryExit*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

bool CEventLeaderEntryExit::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventLeaderEntryExit*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}

bool CEventLeaderEntryExit::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventLeaderEntryExit*))plugin::GetVMT(this, 15))(this);
}