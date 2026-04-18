/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPlayerCommandToGroupGather.h"

// 0x609250
CEventPlayerCommandToGroupGather::CEventPlayerCommandToGroupGather(CPed* pPed) : CEventPlayerCommandToGroup(CEventPlayerCommandToGroup::GROUP_COMMAND_GATHER, pPed) {
    plugin::CallMethod<0x609250, CEventPlayerCommandToGroupGather*, CPed*>(this, pPed);
}

eEventType CEventPlayerCommandToGroupGather::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPlayerCommandToGroupGather*))plugin::GetVMT(this, 1))(this);
}

int CEventPlayerCommandToGroupGather::GetEventPriority() {
    return ((int(__thiscall*)(CEventPlayerCommandToGroupGather*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventPlayerCommandToGroupGather::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPlayerCommandToGroupGather*))plugin::GetVMT(this, 16))(this);
}