/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleThreat.h"

// 0x4AFB50
CEventVehicleThreat::CEventVehicleThreat(CVehicle* pThreatVehicle) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AFB50, CEventVehicleThreat*, CVehicle*>(this, pThreatVehicle);
}

eEventType CEventVehicleThreat::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleThreat*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleThreat::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleThreat*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleThreat::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleThreat*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleThreat::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventVehicleThreat*))plugin::GetVMT(this, 16))(this);
}

bool CEventVehicleThreat::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleThreat*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}