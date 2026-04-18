/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventCopCarBeingStolen.h"

// 0x4B1740
CEventCopCarBeingStolen::CEventCopCarBeingStolen(CPed* pCriminal, CVehicle* pTargetVehicle) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B1740, CEventCopCarBeingStolen*, CPed*, CVehicle*>(this, pCriminal, pTargetVehicle);
}

eEventType CEventCopCarBeingStolen::GetEventType() {
    return ((eEventType(__thiscall*)(CEventCopCarBeingStolen*))plugin::GetVMT(this, 1))(this);
}

int CEventCopCarBeingStolen::GetEventPriority() {
    return ((int(__thiscall*)(CEventCopCarBeingStolen*))plugin::GetVMT(this, 2))(this);
}

int CEventCopCarBeingStolen::GetLifeTime() {
    return ((int(__thiscall*)(CEventCopCarBeingStolen*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventCopCarBeingStolen::Clone() {
    return ((CEvent*(__thiscall*)(CEventCopCarBeingStolen*))plugin::GetVMT(this, 4))(this);
}

bool CEventCopCarBeingStolen::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventCopCarBeingStolen*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}