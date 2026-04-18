/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDontJoinPlayerGroup.h"

// 0x6090E0
CEventDontJoinPlayerGroup::CEventDontJoinPlayerGroup(CPed* pPed) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x6090E0, CEventDontJoinPlayerGroup*, CPed*>(this, pPed);
}

eEventType CEventDontJoinPlayerGroup::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDontJoinPlayerGroup*))plugin::GetVMT(this, 1))(this);
}

int CEventDontJoinPlayerGroup::GetEventPriority() {
    return ((int(__thiscall*)(CEventDontJoinPlayerGroup*))plugin::GetVMT(this, 2))(this);
}

int CEventDontJoinPlayerGroup::GetLifeTime() {
    return ((int(__thiscall*)(CEventDontJoinPlayerGroup*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDontJoinPlayerGroup::Clone() {
    return ((CEvent * (__thiscall*)(CEventDontJoinPlayerGroup*))plugin::GetVMT(this, 4))(this);
}

bool CEventDontJoinPlayerGroup::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDontJoinPlayerGroup*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}