/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGroupEvent.h"

// 0x4ADFD0
CEventGroupEvent::CEventGroupEvent(CPed* pDistressedPed, CEvent* pEvent) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4ADFD0, CEventGroupEvent*, CPed*, CEvent*>(this, pDistressedPed, pEvent);
}

eEventType CEventGroupEvent::GetEventType() {
    return ((eEventType(__thiscall*)(CEventGroupEvent*))plugin::GetVMT(this, 1))(this);
}

int CEventGroupEvent::GetEventPriority() {
    return ((int(__thiscall*)(CEventGroupEvent*))plugin::GetVMT(this, 2))(this);
}

int CEventGroupEvent::GetLifeTime() {
    return ((int(__thiscall*)(CEventGroupEvent*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventGroupEvent::Clone() {
    return ((CEvent * (__thiscall*)(CEventGroupEvent*))plugin::GetVMT(this, 4))(this);
}

bool CEventGroupEvent::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventGroupEvent*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventGroupEvent::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventGroupEvent*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

float CEventGroupEvent::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventGroupEvent*))plugin::GetVMT(this, 12))(this);
}

// 0x4AE100
bool CEventGroupEvent::BaseEventTakesPriorityOverBaseEvent(const CEventGroupEvent& other) {
    return plugin::CallMethodAndReturn<bool, 0x4AE100, CEventGroupEvent*, const CEventGroupEvent&>(this, other);
}