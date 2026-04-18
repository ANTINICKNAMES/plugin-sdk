/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventSoundQuiet.h"

// 0x5E05B0
CEventSoundQuiet::CEventSoundQuiet(CEntity* pEntityMakingSound, float Volume, const int iTimeHeard, const CVector& vTargetPosAtHeardTime) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x5E05B0, CEventSoundQuiet*, CEntity*, float, const int, const CVector&>(this, pEntityMakingSound, Volume, iTimeHeard, vTargetPosAtHeardTime);
}

eEventType CEventSoundQuiet::GetEventType() {
    return ((eEventType(__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 1))(this);
}

int CEventSoundQuiet::GetEventPriority() {
    return ((int(__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 2))(this);
}

int CEventSoundQuiet::GetLifeTime() {
    return ((int(__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventSoundQuiet::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 16))(this);
}

bool CEventSoundQuiet::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventSoundQuiet*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventSoundQuiet::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 10))(this);
}

float CEventSoundQuiet::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 12))(this);
}

bool CEventSoundQuiet::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventSoundQuiet*))plugin::GetVMT(this, 15))(this);
}