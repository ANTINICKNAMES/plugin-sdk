/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAreaCodes.h"

// 0x4B2190
CEventAreaCodes::CEventAreaCodes(CPed* pTargetPed) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B2190, CEventAreaCodes*>(this);
}

eEventType CEventAreaCodes::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAreaCodes*))plugin::GetVMT(this, 1))(this);
}

int CEventAreaCodes::GetEventPriority() {
    return ((int(__thiscall*)(CEventAreaCodes*))plugin::GetVMT(this, 2))(this);
}

int CEventAreaCodes::GetLifeTime() {
    return ((int(__thiscall*)(CEventAreaCodes*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventAreaCodes::Clone() {
    return ((CEvent*(__thiscall*)(CEventAreaCodes*))plugin::GetVMT(this, 4))(this);
}

bool CEventAreaCodes::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventAreaCodes*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventAreaCodes::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventAreaCodes*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}