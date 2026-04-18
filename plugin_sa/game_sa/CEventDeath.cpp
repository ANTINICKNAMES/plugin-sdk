/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDeath.h"

// 0x4ADDF0
CEventDeath::CEventDeath(const bool bHasDrowned) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4ADDF0, CEventDeath*, const bool>(this, bHasDrowned);
}

// ctor for Clone()
// 0x4ADE50
CEventDeath::CEventDeath(const bool bHasDrowned, const int iTimeOfDeath) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4ADE50, CEventDeath*, const bool, const int>(this, bHasDrowned, iTimeOfDeath);
}

eEventType CEventDeath::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDeath*))plugin::GetVMT(this, 1))(this);
}

int CEventDeath::GetEventPriority() {
    return ((int(__thiscall*)(CEventDeath*))plugin::GetVMT(this, 2))(this);
}

int CEventDeath::GetLifeTime() {
    return ((int(__thiscall*)(CEventDeath*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDeath::Clone() {
    return ((CEvent*(__thiscall*)(CEventDeath*))plugin::GetVMT(this, 4))(this);
}

bool CEventDeath::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDeath*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}