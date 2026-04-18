/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventLowAngerAtPlayer.h"

// 0x5FF5C0
CEventLowAngerAtPlayer::CEventLowAngerAtPlayer() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x5FF5C0, CEventLowAngerAtPlayer*>(this);
}

eEventType CEventLowAngerAtPlayer::GetEventType() {
    return ((eEventType(__thiscall*)(CEventLowAngerAtPlayer*))plugin::GetVMT(this, 1))(this);
}

int CEventLowAngerAtPlayer::GetEventPriority() {
    return ((int(__thiscall*)(CEventLowAngerAtPlayer*))plugin::GetVMT(this, 2))(this);
}

int CEventLowAngerAtPlayer::GetLifeTime() {
    return ((int(__thiscall*)(CEventLowAngerAtPlayer*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventLowAngerAtPlayer::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventLowAngerAtPlayer*))plugin::GetVMT(this, 16))(this);
}

bool CEventLowAngerAtPlayer::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventLowAngerAtPlayer*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}