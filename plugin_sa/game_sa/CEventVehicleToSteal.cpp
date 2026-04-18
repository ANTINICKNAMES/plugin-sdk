/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleToSteal.h"

// 0x4AF670
CEventVehicleToSteal::CEventVehicleToSteal(CVehicle* pVehicle) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AF670, CEventVehicleToSteal*, CVehicle*>(this, pVehicle);
}

eEventType CEventVehicleToSteal::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleToSteal*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleToSteal::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleToSteal*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleToSteal::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleToSteal*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleToSteal::Clone() {
    return ((CEvent * (__thiscall*)(CEventVehicleToSteal*))plugin::GetVMT(this, 4))(this);
}

bool CEventVehicleToSteal::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleToSteal*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}