/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPotentialWalkIntoVehicle.h"

// 0x4AE320
CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(CVehicle* pThreatVehicle, const int iMoveState) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AE320, CEventPotentialWalkIntoVehicle*, CVehicle*, const int>(this, pThreatVehicle, iMoveState);
}

eEventType CEventPotentialWalkIntoVehicle::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPotentialWalkIntoVehicle*))plugin::GetVMT(this, 1))(this);
}

int CEventPotentialWalkIntoVehicle::GetEventPriority() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoVehicle*))plugin::GetVMT(this, 2))(this);
}

int CEventPotentialWalkIntoVehicle::GetLifeTime() {
    return ((int(__thiscall*)(CEventPotentialWalkIntoVehicle*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPotentialWalkIntoVehicle::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPotentialWalkIntoVehicle*))plugin::GetVMT(this, 16))(this);
}

bool CEventPotentialWalkIntoVehicle::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoVehicle*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventPotentialWalkIntoVehicle::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventPotentialWalkIntoVehicle*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}