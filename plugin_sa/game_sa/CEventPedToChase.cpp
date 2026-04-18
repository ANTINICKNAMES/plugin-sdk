/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPedToChase.h"

// 0x4AF130
CEventPedToChase::CEventPedToChase(CPed* pPedToChase) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AF130, CEventPedToChase*, CPed*>(this, pPedToChase);
}

eEventType CEventPedToChase::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPedToChase*))plugin::GetVMT(this, 1))(this);

}

int CEventPedToChase::GetEventPriority() {
    return ((int(__thiscall*)(CEventPedToChase*))plugin::GetVMT(this, 2))(this);
}

int CEventPedToChase::GetLifeTime() {
    return ((int(__thiscall*)(CEventPedToChase*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPedToChase::Clone() {
    return ((CEvent * (__thiscall*)(CEventPedToChase*))plugin::GetVMT(this, 4))(this);
}

bool CEventPedToChase::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPedToChase*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}