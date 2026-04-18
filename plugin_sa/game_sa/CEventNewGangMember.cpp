/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventNewGangMember.h"

// 0x608F70
CEventNewGangMember::CEventNewGangMember(CPed* pPed) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x608F70, CEventNewGangMember*, CPed*>(this, pPed);
}

eEventType CEventNewGangMember::GetEventType() {
    return ((eEventType(__thiscall*)(CEventNewGangMember*))plugin::GetVMT(this, 1))(this);
}

int CEventNewGangMember::GetEventPriority() {
    return ((int(__thiscall*)(CEventNewGangMember*))plugin::GetVMT(this, 2))(this);
}

int CEventNewGangMember::GetLifeTime() {
    return ((int(__thiscall*)(CEventNewGangMember*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventNewGangMember::Clone() {
    return ((CEvent * (__thiscall*)(CEventNewGangMember*))plugin::GetVMT(this, 4))(this);
}

bool CEventNewGangMember::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventNewGangMember*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}