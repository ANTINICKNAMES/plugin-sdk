/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventRevived.h"

// 0x4AEC50
CEventRevived::CEventRevived() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AEC50, CEventRevived*>(this);
}

eEventType CEventRevived::GetEventType() {
    return ((eEventType(__thiscall*)(CEventRevived*))plugin::GetVMT(this, 1))(this);
}

int CEventRevived::GetEventPriority() {
    return ((int(__thiscall*)(CEventRevived*))plugin::GetVMT(this, 2))(this);
}

int CEventRevived::GetLifeTime() {
    return ((int(__thiscall*)(CEventRevived*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventRevived::Clone() {
    return ((CEvent * (__thiscall*)(CEventRevived*))plugin::GetVMT(this, 4))(this);
}

bool CEventRevived::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventRevived*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}