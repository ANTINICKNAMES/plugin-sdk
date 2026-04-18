/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDraggedOutCar.h"

// 0x4AD250
CEventDraggedOutCar::CEventDraggedOutCar(const CVehicle* pVehicle, const CPed* pDraggingPed, const bool bIsDriver) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B33B0, CEventDraggedOutCar*, const CVehicle*, const CPed*, const bool>(this, pVehicle, pDraggingPed, bIsDriver);
}

eEventType CEventDraggedOutCar::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 1))(this);
}

int CEventDraggedOutCar::GetEventPriority() {
    return ((int(__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 2))(this);
}

int CEventDraggedOutCar::GetLifeTime() {
    return ((int(__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDraggedOutCar::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 16))(this);
}

bool CEventDraggedOutCar::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDraggedOutCar*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventDraggedOutCar::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventDraggedOutCar*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

CEntity* CEventDraggedOutCar::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 10))(this);
}

float CEventDraggedOutCar::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventDraggedOutCar*))plugin::GetVMT(this, 12))(this);
}