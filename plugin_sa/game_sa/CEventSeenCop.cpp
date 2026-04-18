/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSeenCop.h"

// 0x5FF380
CEventSeenCop::CEventSeenCop(CPed* pPed) : CEventAcquaintancePed(pPed) {
    plugin::CallMethod<0x5FF380, CEventSeenCop*, CPed*>(this, pPed);
}

bool CEventSeenCop::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSeenCop*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

eEventType CEventSeenCop::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSeenCop*))plugin::GetVMT(this, 1))(this);
}

int CEventSeenCop::GetEventPriority() {
    return ((int(__thiscall*)(CEventSeenCop*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventSeenCop::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventSeenCop*))plugin::GetVMT(this, 16))(this);
}