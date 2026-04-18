/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLeaderEnteredCarAsDriver.h"

// 0x48E1C0
CEventLeaderEnteredCarAsDriver::CEventLeaderEnteredCarAsDriver(CVehicle* pVehicle) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x48E1C0, CEventLeaderEnteredCarAsDriver*, CVehicle*>(this, pVehicle);
}

eEventType CEventLeaderEnteredCarAsDriver::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLeaderEnteredCarAsDriver*))plugin::GetVMT(this, 1))(this);
}

int CEventLeaderEnteredCarAsDriver::GetEventPriority() {
    return ((int(__thiscall*)(CEventLeaderEnteredCarAsDriver*))plugin::GetVMT(this, 2))(this);
}

int CEventLeaderEnteredCarAsDriver::GetLifeTime() {
    return ((int(__thiscall*)(CEventLeaderEnteredCarAsDriver*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventLeaderEnteredCarAsDriver::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventLeaderEnteredCarAsDriver*))plugin::GetVMT(this, 16))(this);
}

bool CEventLeaderEnteredCarAsDriver::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLeaderEnteredCarAsDriver*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventLeaderEnteredCarAsDriver::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventLeaderEnteredCarAsDriver*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

bool CEventLeaderEnteredCarAsDriver::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventLeaderEnteredCarAsDriver*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}

bool CEventLeaderEnteredCarAsDriver::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventLeaderEnteredCarAsDriver*))plugin::GetVMT(this, 15))(this);
}