/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSeenPanickedPed.h"

// 0x4B2080
CEventSeenPanickedPed::CEventSeenPanickedPed(CPed* pPanickedPed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B2080, CEventSeenPanickedPed*, CPed*>(this, pPanickedPed);
}

eEventType CEventSeenPanickedPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSeenPanickedPed*))plugin::GetVMT(this, 1))(this);
}

int CEventSeenPanickedPed::GetEventPriority() {
    return ((int(__thiscall*)(CEventSeenPanickedPed*))plugin::GetVMT(this, 2))(this);
}

int CEventSeenPanickedPed::GetLifeTime() {
    return ((int(__thiscall*)(CEventSeenPanickedPed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventSeenPanickedPed::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventSeenPanickedPed*))plugin::GetVMT(this, 16))(this);
}

bool CEventSeenPanickedPed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSeenPanickedPed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventSeenPanickedPed::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventSeenPanickedPed*))plugin::GetVMT(this, 10))(this);
}