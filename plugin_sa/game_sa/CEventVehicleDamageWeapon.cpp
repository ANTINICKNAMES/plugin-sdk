/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleDamageWeapon.h"

// 0x61C2E0
CEventVehicleDamageWeapon::CEventVehicleDamageWeapon(CVehicle* pVehicle, CEntity* pInflictor, const eWeaponType weaponUsed)
    : CEventVehicleDamage(pVehicle, pInflictor, weaponUsed) {
    plugin::CallMethod<0x61C2E0, CEventVehicleDamageWeapon*, CVehicle*, CEntity*, const eWeaponType>(this, pVehicle, pInflictor, weaponUsed);
}

eEventType CEventVehicleDamageWeapon::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleDamageWeapon*))plugin::GetVMT(this, 1))(this);
}

CEvent* CEventVehicleDamageWeapon::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventVehicleDamageWeapon*))plugin::GetVMT(this, 16))(this);
}