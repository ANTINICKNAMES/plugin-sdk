/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSexyPed.h"

// 0x4AEDF0
CEventSexyPed::CEventSexyPed(CPed* pSexyPed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AEDF0, CEventSexyPed*, CPed*>(this, pSexyPed);
}

eEventType CEventSexyPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSexyPed*))plugin::GetVMT(this, 1))(this);
}

int CEventSexyPed::GetEventPriority() {
    return ((int(__thiscall*)(CEventSexyPed*))plugin::GetVMT(this, 2))(this);
}

int CEventSexyPed::GetLifeTime() {
    return ((int(__thiscall*)(CEventSexyPed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventSexyPed::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventSexyPed*))plugin::GetVMT(this, 16))(this);
}

CEntity* CEventSexyPed::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventSexyPed*))plugin::GetVMT(this, 10))(this);
}

bool CEventSexyPed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSexyPed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}