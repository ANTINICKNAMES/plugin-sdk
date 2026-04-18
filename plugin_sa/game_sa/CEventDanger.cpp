/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventDanger.h"

// 0x4B2600
CEventDanger::CEventDanger(CEntity* pDangerousEntity, float dangerRadius) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B2600, CEventDanger*, CEntity*, float>(this, pDangerousEntity, dangerRadius);
}

eEventType CEventDanger::GetEventType() {
    return ((eEventType(__thiscall*)(CEventDanger*))plugin::GetVMT(this, 1))(this);
}

int CEventDanger::GetEventPriority() {
    return ((int(__thiscall*)(CEventDanger*))plugin::GetVMT(this, 2))(this);
}

int CEventDanger::GetLifeTime() {
    return ((int(__thiscall*)(CEventDanger*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventDanger::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventDanger*))plugin::GetVMT(this, 16))(this);
}

bool CEventDanger::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventDanger*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventDanger::AffectsPedGroup(CPedGroup* pPedGroup) {
    return ((bool(__thiscall*)(CEventDanger*, CPedGroup*))plugin::GetVMT(this, 6))(this, pPedGroup);
}

CEntity* CEventDanger::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventDanger*))plugin::GetVMT(this, 10))(this);
}