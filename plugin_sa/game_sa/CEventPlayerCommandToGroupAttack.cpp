/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPlayerCommandToGroupAttack.h"

// 0x5F6340
CEventPlayerCommandToGroupAttack::CEventPlayerCommandToGroupAttack(CPed* pPed) : CEventPlayerCommandToGroup(CEventPlayerCommandToGroup::GROUP_COMMAND_ATTACK, pPed) {
    plugin::CallMethod<0x5F6340, CEventPlayerCommandToGroupAttack*, CPed*>(this, pPed);
}

eEventType CEventPlayerCommandToGroupAttack::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPlayerCommandToGroupAttack*))plugin::GetVMT(this, 1))(this);
}

int CEventPlayerCommandToGroupAttack::GetEventPriority() {
    return ((int(__thiscall*)(CEventPlayerCommandToGroupAttack*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventPlayerCommandToGroupAttack::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPlayerCommandToGroupAttack*))plugin::GetVMT(this, 16))(this);
}

bool CEventPlayerCommandToGroupAttack::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventPlayerCommandToGroupAttack*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}