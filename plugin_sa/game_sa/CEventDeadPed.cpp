/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDeadPed.h"

// 0x4ADEA0
CEventDeadPed::CEventDeadPed(CPed* pDeadPed, const bool bHasDrowned, const int iTimeOfDeath) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4ADEA0, CEventDeadPed*, CPed*, const bool, const int>(this, pDeadPed, bHasDrowned, iTimeOfDeath);
}

eEventType CEventDeadPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 1))(this);
}

int CEventDeadPed::GetEventPriority() {
    return ((int(__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 2))(this);
}

int CEventDeadPed::GetLifeTime() {
    return ((int(__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDeadPed::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 16))(this);
}

bool CEventDeadPed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDeadPed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventDeadPed::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 10))(this);
}

float CEventDeadPed::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventDeadPed*))plugin::GetVMT(this, 12))(this);
}