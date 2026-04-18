/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePed.h"

// 0x4AF820
CEventAcquaintancePed::CEventAcquaintancePed(CPed* pAcquaintancePed) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AF820, CEventAcquaintancePed*, CPed*>(this, pAcquaintancePed);
}

eEventType CEventAcquaintancePed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePed::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 2))(this);
}

int CEventAcquaintancePed::GetLifeTime() {
    return ((int(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventAcquaintancePed::CloneEditable() {
    return ((CEvent*(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 16))(this);
}

bool CEventAcquaintancePed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventAcquaintancePed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventAcquaintancePed::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventAcquaintancePed*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

CEntity* CEventAcquaintancePed::GetSourceEntity() {
    return ((CEntity*(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 10))(this);
}

bool CEventAcquaintancePed::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventAcquaintancePed*))plugin::GetVMT(this, 15))(this);
}

bool CEventAcquaintancePed::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventAcquaintancePed*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}