/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLeaderExitedCarAsDriver.h"

// 0x4B8300
CEventLeaderExitedCarAsDriver::CEventLeaderExitedCarAsDriver() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B8300, CEventLeaderExitedCarAsDriver*>(this);
}

eEventType CEventLeaderExitedCarAsDriver::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLeaderExitedCarAsDriver*))plugin::GetVMT(this, 1))(this);
}

int CEventLeaderExitedCarAsDriver::GetEventPriority() {
    return ((int(__thiscall*)(CEventLeaderExitedCarAsDriver*))plugin::GetVMT(this, 2))(this);
}

int CEventLeaderExitedCarAsDriver::GetLifeTime() {
    return ((int(__thiscall*)(CEventLeaderExitedCarAsDriver*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventLeaderExitedCarAsDriver::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventLeaderExitedCarAsDriver*))plugin::GetVMT(this, 16))(this);
}

bool CEventLeaderExitedCarAsDriver::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLeaderExitedCarAsDriver*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventLeaderExitedCarAsDriver::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventLeaderExitedCarAsDriver*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

bool CEventLeaderExitedCarAsDriver::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventLeaderExitedCarAsDriver*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}