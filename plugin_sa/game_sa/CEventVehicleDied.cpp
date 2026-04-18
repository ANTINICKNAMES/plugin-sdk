/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleDied.h"

// 0x4B0D10
CEventVehicleDied::CEventVehicleDied(CVehicle* pDeadVehicle) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B0D10, CEventVehicleDied*, CVehicle*>(this, pDeadVehicle);
}

eEventType CEventVehicleDied::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleDied*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleDied::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleDied*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleDied::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleDied*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleDied::Clone() {
    return ((CEvent * (__thiscall*)(CEventVehicleDied*))plugin::GetVMT(this, 4))(this);
}

bool CEventVehicleDied::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleDied*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}