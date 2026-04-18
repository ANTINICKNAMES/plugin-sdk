/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventCarUpsideDown.h"

// 0x4B1CC0
CEventCarUpsideDown::CEventCarUpsideDown(CVehicle* pVehicle) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AC450, CEventCarUpsideDown*, CVehicle*>(this, pVehicle);
}

eEventType CEventCarUpsideDown::GetEventType() {
    return ((eEventType(__thiscall*)(CEventCarUpsideDown*))plugin::GetVMT(this, 1))(this);
}

int CEventCarUpsideDown::GetEventPriority() {
    return ((int(__thiscall*)(CEventCarUpsideDown*))plugin::GetVMT(this, 2))(this);
}

int CEventCarUpsideDown::GetLifeTime() {
    return ((int(__thiscall*)(CEventCarUpsideDown*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventCarUpsideDown::Clone() {
    return ((CEvent*(__thiscall*)(CEventCarUpsideDown*))plugin::GetVMT(this, 4))(this);
}

bool CEventCarUpsideDown::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventCarUpsideDown*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}
