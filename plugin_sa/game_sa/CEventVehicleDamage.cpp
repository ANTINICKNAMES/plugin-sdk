/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleDamage.h"

// 0x4B18D0
CEventVehicleDamage::CEventVehicleDamage(CVehicle* pVehicle, CEntity* pInflictor, const eWeaponType weaponUsed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B18D0, CEventVehicleDamage*, CVehicle*, CEntity*, const eWeaponType>(this, pVehicle, pInflictor, weaponUsed);
}

int CEventVehicleDamage::GetEventPriority() {
    return ((eEventType(__thiscall*)(CEventVehicleDamage*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleDamage::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleDamage*))plugin::GetVMT(this, 2))(this);
}

bool CEventVehicleDamage::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleDamage*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventVehicleDamage::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventVehicleDamage*))plugin::GetVMT(this, 12))(this);
}

CEntity* CEventVehicleDamage::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventVehicleDamage*))plugin::GetVMT(this, 10))(this);
}

bool CEventVehicleDamage::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventVehicleDamage*))plugin::GetVMT(this, 7))(this);
}

void CEventVehicleDamage::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventVehicleDamage*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}