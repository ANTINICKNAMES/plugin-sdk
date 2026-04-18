/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPedToFlee.h"

// 0x4AF240
CEventPedToFlee::CEventPedToFlee(CPed* pPedToFlee) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AF240, CEventPedToFlee*, CPed*>(this, pPedToFlee);
}

eEventType CEventPedToFlee::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPedToFlee*))plugin::GetVMT(this, 1))(this);

}

int CEventPedToFlee::GetEventPriority() {
    return ((int(__thiscall*)(CEventPedToFlee*))plugin::GetVMT(this, 2))(this);
}

int CEventPedToFlee::GetLifeTime() {
    return ((int(__thiscall*)(CEventPedToFlee*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPedToFlee::Clone() {
    return ((CEvent * (__thiscall*)(CEventPedToFlee*))plugin::GetVMT(this, 4))(this);
}

bool CEventPedToFlee::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPedToFlee*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}