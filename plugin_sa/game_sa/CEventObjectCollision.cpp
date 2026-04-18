/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventObjectCollision.h"

// 0x4ACCF0
CEventObjectCollision::CEventObjectCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CObject* pObject,
    const CVector& vNormal, const CVector& vPos, const int iMoveState) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4ACCF0, CEventObjectCollision*, const uint16_t, const float, const CObject*, const CVector&, const CVector&, const int>
        (this, nPieceType, fImpulseMagnitude, pObject, vNormal, vPos, iMoveState);
}

eEventType CEventObjectCollision::GetEventType() {
    return ((eEventType(__thiscall*)(CEventObjectCollision*))plugin::GetVMT(this, 1))(this);
}

int CEventObjectCollision::GetEventPriority() {
    return ((int(__thiscall*)(CEventObjectCollision*))plugin::GetVMT(this, 2))(this);
}

int CEventObjectCollision::GetLifeTime() {
    return ((int(__thiscall*)(CEventObjectCollision*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventObjectCollision::Clone() {
    return ((CEvent * (__thiscall*)(CEventObjectCollision*))plugin::GetVMT(this, 4))(this);
}

bool CEventObjectCollision::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventObjectCollision*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventObjectCollision::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventObjectCollision*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}