/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventInWater.h"

// 0x4B1370
CEventInWater::CEventInWater(float fBuoyancyFraction) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B1370, CEventInWater*, float>(this, fBuoyancyFraction);
}

eEventType CEventInWater::GetEventType() {
    return ((eEventType(__thiscall*)(CEventInWater*))plugin::GetVMT(this, 1))(this);
}

int CEventInWater::GetEventPriority() {
    return ((int(__thiscall*)(CEventInWater*))plugin::GetVMT(this, 2))(this);
}

int CEventInWater::GetLifeTime() {
    return ((int(__thiscall*)(CEventInWater*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventInWater::Clone() {
    return ((CEvent * (__thiscall*)(CEventInWater*))plugin::GetVMT(this, 4))(this);
}

bool CEventInWater::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventInWater*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventInWater::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventInWater*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}