/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGunAimedAt.h"

// 0x4B0700
CEventGunAimedAt::CEventGunAimedAt(CPed* pAggressorPed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B0700, CEventGunAimedAt*, CPed*>(this, pAggressorPed);
}

eEventType CEventGunAimedAt::GetEventType() {
    return ((eEventType(__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 1))(this);
}

int CEventGunAimedAt::GetEventPriority() {
    return ((int(__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 2))(this);
}

int CEventGunAimedAt::GetLifeTime() {
    return ((int(__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventGunAimedAt::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 16))(this);
}

bool CEventGunAimedAt::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventGunAimedAt*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventGunAimedAt::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 10))(this);
}

bool CEventGunAimedAt::IsCriminalEvent() {
    return ((bool(__thiscall*)(CEventGunAimedAt*))plugin::GetVMT(this, 7))(this);
}

void CEventGunAimedAt::ReportCriminalEvent(CPed* pPed) {
    ((void(__thiscall*)(CEventGunAimedAt*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

bool CEventGunAimedAt::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventGunAimedAt*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}