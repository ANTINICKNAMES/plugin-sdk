/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventInAir.h"

// 0x4B0CB0
CEventInAir::CEventInAir() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B0CB0, CEventInAir*>(this);
}

eEventType CEventInAir::GetEventType() {
    return ((eEventType(__thiscall*)(CEventInAir*))plugin::GetVMT(this, 1))(this);
}

int CEventInAir::GetEventPriority() {
    return ((int(__thiscall*)(CEventInAir*))plugin::GetVMT(this, 2))(this);
}

int CEventInAir::GetLifeTime() {
    return ((int(__thiscall*)(CEventInAir*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventInAir::Clone() {
    return ((CEvent * (__thiscall*)(CEventInAir*))plugin::GetVMT(this, 4))(this);
}

bool CEventInAir::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventInAir*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}