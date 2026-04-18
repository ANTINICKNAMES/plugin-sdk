/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSpecial.h"

// 0x4B1AE0
// Have no idea what this event used for...
CEventSpecial::CEventSpecial() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B1AE0, CEventSpecial*>(this);
}

eEventType CEventSpecial::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSpecial*))plugin::GetVMT(this, 1))(this);
}

int CEventSpecial::GetEventPriority() {
    return ((int(__thiscall*)(CEventSpecial*))plugin::GetVMT(this, 2))(this);
}

int CEventSpecial::GetLifeTime() {
    return ((int(__thiscall*)(CEventSpecial*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventSpecial::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventSpecial*))plugin::GetVMT(this, 16))(this);
}

bool CEventSpecial::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSpecial*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}