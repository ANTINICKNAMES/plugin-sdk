/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventChatPartner.h"

// 0x4AECD0
CEventChatPartner::CEventChatPartner(const bool bIsLeader, CPed* pOtherPed) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AECD0, CEventChatPartner*, const bool, CPed*>(this, bIsLeader, pOtherPed);
}

eEventType CEventChatPartner::GetEventType() {
    return ((eEventType(__thiscall*)(CEventChatPartner*))plugin::GetVMT(this, 1))(this);
}

int CEventChatPartner::GetEventPriority() {
    return ((int(__thiscall*)(CEventChatPartner*))plugin::GetVMT(this, 2))(this);
}

int CEventChatPartner::GetLifeTime() {
    return ((int(__thiscall*)(CEventChatPartner*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventChatPartner::Clone() {
    return ((CEvent*(__thiscall*)(CEventChatPartner*))plugin::GetVMT(this, 4))(this);
}

bool CEventChatPartner::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventChatPartner*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}