/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventVehicleCollision.h"

// 0x4AC840
CEventVehicleCollision::CEventVehicleCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CVehicle* pVehicle, const CVector& vNormal, const CVector& vPos, 
    const int iMoveState, uint16_t nForceReaction) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AC840, CEventVehicleCollision*, const uint16_t, const float, const CVehicle*, const CVector&, const CVector&, const int, uint16_t>
        (this, nPieceType, fImpulseMagnitude, pVehicle, vNormal, vPos, iMoveState, nForceReaction);
}

eEventType CEventVehicleCollision::GetEventType() {
    return ((eEventType(__thiscall*)(CEventVehicleCollision*))plugin::GetVMT(this, 1))(this);
}

int CEventVehicleCollision::GetEventPriority() {
    return ((int(__thiscall*)(CEventVehicleCollision*))plugin::GetVMT(this, 2))(this);
}

int CEventVehicleCollision::GetLifeTime() {
    return ((int(__thiscall*)(CEventVehicleCollision*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventVehicleCollision::Clone() {
    return ((CEvent * (__thiscall*)(CEventVehicleCollision*))plugin::GetVMT(this, 4))(this);
}

bool CEventVehicleCollision::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventVehicleCollision*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventVehicleCollision::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventVehicleCollision*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}