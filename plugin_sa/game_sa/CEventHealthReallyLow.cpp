/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHealthReallyLow.h"

// 0x5FF500
CEventHealthReallyLow::CEventHealthReallyLow() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x5FF500, CEventHealthReallyLow*>(this);
}

eEventType CEventHealthReallyLow::GetEventType() {
    return ((eEventType(__thiscall*)(CEventHealthReallyLow*))plugin::GetVMT(this, 1))(this);
}

int CEventHealthReallyLow::GetEventPriority() {
    return ((int(__thiscall*)(CEventHealthReallyLow*))plugin::GetVMT(this, 2))(this);
}

int CEventHealthReallyLow::GetLifeTime() {
    return ((int(__thiscall*)(CEventHealthReallyLow*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventHealthReallyLow::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventHealthReallyLow*))plugin::GetVMT(this, 16))(this);
}

bool CEventHealthReallyLow::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventHealthReallyLow*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}