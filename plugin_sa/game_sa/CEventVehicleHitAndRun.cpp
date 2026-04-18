/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleHitAndRun.h"

// 0x4AE990
CEventVehicleHitAndRun::CEventVehicleHitAndRun(CPed* pKnockedDownPed, CVehicle* pInflictor) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AE990, CEventVehicleHitAndRun*, CPed*, CVehicle*>(this, pKnockedDownPed, pInflictor);
}

eEventType CEventVehicleHitAndRun::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleHitAndRun::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleHitAndRun::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleHitAndRun::Clone() {
    return ((CEvent*(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 4))(this);
}

bool CEventVehicleHitAndRun::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleHitAndRun*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventVehicleHitAndRun::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 7))(this);
}

void CEventVehicleHitAndRun::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventVehicleHitAndRun*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

float CEventVehicleHitAndRun::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventVehicleHitAndRun*))plugin::GetVMT(this, 12))(this);
}