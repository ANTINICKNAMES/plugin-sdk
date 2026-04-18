/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventOnFire.h"

// 0x5FF740
CEventOnFire::CEventOnFire() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x5FF740, CEventOnFire*>(this);
}

eEventType CEventOnFire::GetEventType() {
    return ((eEventType(__thiscall*)(CEventOnFire*))plugin::GetVMT(this, 1))(this);
}

int CEventOnFire::GetEventPriority() {
    return ((int(__thiscall*)(CEventOnFire*))plugin::GetVMT(this, 2))(this);
}

int CEventOnFire::GetLifeTime() {
    return ((int(__thiscall*)(CEventOnFire*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventOnFire::Clone() {
    return ((CEvent * (__thiscall*)(CEventOnFire*))plugin::GetVMT(this, 4))(this);
}

bool CEventOnFire::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventOnFire*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventOnFire::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventOnFire*))plugin::GetVMT(this, 12))(this);
}