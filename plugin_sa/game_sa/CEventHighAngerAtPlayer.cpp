/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHighAngerAtPlayer.h"

// 0x5FF680
CEventHighAngerAtPlayer::CEventHighAngerAtPlayer() : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x5FF680, CEventHighAngerAtPlayer*>(this);
}

eEventType CEventHighAngerAtPlayer::GetEventType() {
    return ((eEventType(__thiscall*)(CEventHighAngerAtPlayer*))plugin::GetVMT(this, 1))(this);
}

int CEventHighAngerAtPlayer::GetEventPriority() {
    return ((int(__thiscall*)(CEventHighAngerAtPlayer*))plugin::GetVMT(this, 2))(this);
}

int CEventHighAngerAtPlayer::GetLifeTime() {
    return ((int(__thiscall*)(CEventHighAngerAtPlayer*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventHighAngerAtPlayer::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventHighAngerAtPlayer*))plugin::GetVMT(this, 16))(this);
}

bool CEventHighAngerAtPlayer::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventHighAngerAtPlayer*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}