/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHealthLow.h"

// 0x5FF440
CEventHealthLow::CEventHealthLow() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x5FF440, CEventHealthLow*>(this);
}

eEventType CEventHealthLow::GetEventType() {
    return ((eEventType(__thiscall*)(CEventHealthLow*))plugin::GetVMT(this, 1))(this);
}

int CEventHealthLow::GetEventPriority() {
    return ((int(__thiscall*)(CEventHealthLow*))plugin::GetVMT(this, 2))(this);
}

int CEventHealthLow::GetLifeTime() {
    return ((int(__thiscall*)(CEventHealthLow*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventHealthLow::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventHealthLow*))plugin::GetVMT(this, 16))(this);
}

bool CEventHealthLow::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventHealthLow*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}