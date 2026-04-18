/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLeaderQuitEnteringCarAsDriver.h"

// 0x63A110
CEventLeaderQuitEnteringCarAsDriver::CEventLeaderQuitEnteringCarAsDriver() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x63A110, CEventLeaderQuitEnteringCarAsDriver*>(this);
}

eEventType CEventLeaderQuitEnteringCarAsDriver::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*))plugin::GetVMT(this, 1))(this);
}

int CEventLeaderQuitEnteringCarAsDriver::GetEventPriority() {
    return ((int(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*))plugin::GetVMT(this, 2))(this);
}

int CEventLeaderQuitEnteringCarAsDriver::GetLifeTime() {
    return ((int(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventLeaderQuitEnteringCarAsDriver::Clone() {
    return ((CEvent * (__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*))plugin::GetVMT(this, 4))(this);
}

bool CEventLeaderQuitEnteringCarAsDriver::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventLeaderQuitEnteringCarAsDriver::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

bool CEventLeaderQuitEnteringCarAsDriver::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventLeaderQuitEnteringCarAsDriver*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}