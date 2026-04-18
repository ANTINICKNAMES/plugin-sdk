/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPassObject.h"

// 0x65DC70
CEventPassObject::CEventPassObject(CPed* pPed, bool isPasser) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x65DC70, CEventPassObject*, CPed*, bool>(this, pPed, isPasser);
}

eEventType CEventPassObject::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPassObject*))plugin::GetVMT(this, 1))(this);
}

int CEventPassObject::GetEventPriority() {
    return ((int(__thiscall*)(CEventPassObject*))plugin::GetVMT(this, 2))(this);
}

int CEventPassObject::GetLifeTime() {
    return ((int(__thiscall*)(CEventPassObject*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPassObject::Clone() {
    return ((CEvent * (__thiscall*)(CEventPassObject*))plugin::GetVMT(this, 4))(this);
}

bool CEventPassObject::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPassObject*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventPassObject::IsValid(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPassObject*, CPed*))plugin::GetVMT(this, 14))(this, pPed);
}