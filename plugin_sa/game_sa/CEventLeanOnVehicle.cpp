/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLeanOnVehicle.h"

// 0x65DAF0
CEventLeanOnVehicle::CEventLeanOnVehicle(CVehicle* pVehicle, int32_t time) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x65DAF0, CEventLeanOnVehicle*, CVehicle*, int32_t>(this, pVehicle, time);
}

eEventType CEventLeanOnVehicle::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLeanOnVehicle*))plugin::GetVMT(this, 1))(this);
}

int CEventLeanOnVehicle::GetEventPriority() {
    return ((int(__thiscall*)(CEventLeanOnVehicle*))plugin::GetVMT(this, 2))(this);
}

int CEventLeanOnVehicle::GetLifeTime() {
    return ((int(__thiscall*)(CEventLeanOnVehicle*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventLeanOnVehicle::Clone() {
    return ((CEvent * (__thiscall*)(CEventLeanOnVehicle*))plugin::GetVMT(this, 4))(this);
}

bool CEventLeanOnVehicle::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLeanOnVehicle*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventLeanOnVehicle::IsValid(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLeanOnVehicle*, CPed*))plugin::GetVMT(this, 14))(this, pPed);
}