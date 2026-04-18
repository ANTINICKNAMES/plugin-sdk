/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPlayerCollisionWithPed.h"

// 0x5FEE40
CEventPlayerCollisionWithPed::CEventPlayerCollisionWithPed(const uint16_t nPieceType, const float fImpulseMagnitude, const CPed* pPed, const CVector& vNormal, const CVector& vPos,
    const int iPedMoveState, const int iOtherPedMoveState) : CEventPedCollisionWithPed(nPieceType, fImpulseMagnitude, pPed, vNormal, vPos, iPedMoveState, iOtherPedMoveState) {
    plugin::CallMethod<0x5FEE40, CEventPlayerCollisionWithPed*, const uint16_t, const float, const CPed*, const CVector&, const CVector&, const int, const int>
        (this, nPieceType, fImpulseMagnitude, pPed, vNormal, vPos, iPedMoveState, iOtherPedMoveState);
}

eEventType CEventPlayerCollisionWithPed::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPlayerCollisionWithPed*))plugin::GetVMT(this, 1))(this);
}

CEvent* CEventPlayerCollisionWithPed::Clone() {
    return ((CEvent * (__thiscall*)(CEventPlayerCollisionWithPed*))plugin::GetVMT(this, 4))(this);
}