/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPlayerCommandToGroup.h"

// 0x4B23D0
CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(const int iType, CPed* pPed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B23D0, CEventPlayerCommandToGroup*, const int, CPed*>(this, iType, pPed);
}

int CEventPlayerCommandToGroup::GetLifeTime() {
    return ((int(__thiscall*)(CEventPlayerCommandToGroup*))plugin::GetVMT(this, 3))(this);
}

bool CEventPlayerCommandToGroup::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPlayerCommandToGroup*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventPlayerCommandToGroup::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventPlayerCommandToGroup*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

CEntity* CEventPlayerCommandToGroup::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventPlayerCommandToGroup*))plugin::GetVMT(this, 10))(this);
}

bool CEventPlayerCommandToGroup::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventPlayerCommandToGroup*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}