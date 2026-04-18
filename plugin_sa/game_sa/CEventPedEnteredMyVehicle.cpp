/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPedEnteredMyVehicle.h"

// 0x4AEAC0
CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(const CPed* pPedThatEnteredVehicle, const CVehicle* pVehicle, const int iTargetDoor) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AEAC0, CEventPedEnteredMyVehicle*, const CPed*, const CVehicle*, const int>(this, pPedThatEnteredVehicle, pVehicle, iTargetDoor);
}

eEventType CEventPedEnteredMyVehicle::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 1))(this);
}

int CEventPedEnteredMyVehicle::GetEventPriority() {
    return ((int(__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 2))(this);
}

int CEventPedEnteredMyVehicle::GetLifeTime() {
    return ((int(__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPedEnteredMyVehicle::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 16))(this);
}

bool CEventPedEnteredMyVehicle::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPedEnteredMyVehicle*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventPedEnteredMyVehicle::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 10))(this);
}

float CEventPedEnteredMyVehicle::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventPedEnteredMyVehicle*))plugin::GetVMT(this, 12))(this);
}