/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPedCollisionWithPed.h"

// 0x4AC990
CEventPedCollisionWithPed::CEventPedCollisionWithPed(const uint16_t nPieceType, const float fImpulseMagnitude, const CPed* pPed, const CVector& vNormal, const CVector& vPos,
    const int iPedMoveState, const int iOtherPedMoveState) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AC990, CEventPedCollisionWithPed*, const uint16_t, const float, const CPed*, const CVector&, const CVector&, const int, const int>
        (this, nPieceType, fImpulseMagnitude, pPed, vNormal, vPos, iPedMoveState, iOtherPedMoveState);
}

eEventType CEventPedCollisionWithPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPedCollisionWithPed*))plugin::GetVMT(this, 1))(this);
}

int CEventPedCollisionWithPed::GetEventPriority() {
    return ((int(__thiscall*)(CEventPedCollisionWithPed*))plugin::GetVMT(this, 2))(this);
}

int CEventPedCollisionWithPed::GetLifeTime() {
    return ((int(__thiscall*)(CEventPedCollisionWithPed*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPedCollisionWithPed::Clone() {
    return ((CEvent * (__thiscall*)(CEventPedCollisionWithPed*))plugin::GetVMT(this, 4))(this);
}

bool CEventPedCollisionWithPed::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPedCollisionWithPed*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventPedCollisionWithPed::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventPedCollisionWithPed*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}