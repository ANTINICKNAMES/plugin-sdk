/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSexyVehicle.h"

// 0x4AF010
CEventSexyVehicle::CEventSexyVehicle(CVehicle* pSexyVehicle) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AF010, CEventSexyVehicle*, CVehicle*>(this, pSexyVehicle);
}

eEventType CEventSexyVehicle::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSexyVehicle*))plugin::GetVMT(this, 1))(this);
}

int CEventSexyVehicle::GetEventPriority() {
    return ((int(__thiscall*)(CEventSexyVehicle*))plugin::GetVMT(this, 2))(this);
}

int CEventSexyVehicle::GetLifeTime() {
    return ((int(__thiscall*)(CEventSexyVehicle*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventSexyVehicle::Clone() {
    return ((CEvent * (__thiscall*)(CEventSexyVehicle*))plugin::GetVMT(this, 4))(this);
}

bool CEventSexyVehicle::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSexyVehicle*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}