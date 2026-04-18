/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleOnFire.h"

// 0x4B10C0
CEventVehicleOnFire::CEventVehicleOnFire(CVehicle* pVehicleOnFire) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B10C0, CEventVehicleOnFire*, CVehicle*>(this, pVehicleOnFire);
}

eEventType CEventVehicleOnFire::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleOnFire*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleOnFire::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleOnFire*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleOnFire::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleOnFire*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleOnFire::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventVehicleOnFire*))plugin::GetVMT(this, 16))(this);
}

bool CEventVehicleOnFire::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleOnFire*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventVehicleOnFire::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventVehicleOnFire*))plugin::GetVMT(this, 12))(this);
}