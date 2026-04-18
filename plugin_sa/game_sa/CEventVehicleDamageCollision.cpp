/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleDamageCollision.h"

// 0x6A0620
CEventVehicleDamageCollision::CEventVehicleDamageCollision(CVehicle* pVehicle, CEntity* pInflictor, const eWeaponType weaponUsed) 
    : CEventVehicleDamage(pVehicle, pInflictor, weaponUsed) {
    plugin::CallMethod<0x6A0620, CEventVehicleDamageCollision*, CVehicle*, CEntity*, const eWeaponType>(this, pVehicle, pInflictor, weaponUsed);
}

eEventType CEventVehicleDamageCollision::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleDamageCollision*))plugin::GetVMT(this, 1))(this);
}

CEvent* CEventVehicleDamageCollision::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventVehicleDamageCollision*))plugin::GetVMT(this, 16))(this);
}