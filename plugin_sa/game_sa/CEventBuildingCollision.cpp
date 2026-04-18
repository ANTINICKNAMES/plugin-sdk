/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventBuildingCollision.h"

// 0x4ACF00
CEventBuildingCollision::CEventBuildingCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CBuilding* pBuilding, 
    const CVector& vNormal, const CVector& vPos, const int iMoveState) : CEvent(plugin::dummy) 
{
    plugin::CallMethod<0x4ACF00, CEventBuildingCollision*, const uint16_t, const float, const CBuilding*, const CVector&, const CVector&, const int>
        (this, nPieceType, fImpulseMagnitude, pBuilding, vNormal, vPos, iMoveState);
}

eEventType CEventBuildingCollision::GetEventType() {
    return ((eEventType(__thiscall*)(CEventBuildingCollision*))plugin::GetVMT(this, 1))(this);
}

int CEventBuildingCollision::GetEventPriority() {
    return ((int(__thiscall*)(CEventBuildingCollision*))plugin::GetVMT(this, 2))(this);
}

int CEventBuildingCollision::GetLifeTime() {
    return ((int(__thiscall*)(CEventBuildingCollision*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventBuildingCollision::Clone() {
    return ((CEvent*(__thiscall*)(CEventBuildingCollision*))plugin::GetVMT(this, 4))(this);
}

bool CEventBuildingCollision::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventBuildingCollision*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventBuildingCollision::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventBuildingCollision*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}

bool CEventBuildingCollision::CanBeInterruptedBySameEvent() {
    return ((bool(__thiscall*)(CEventBuildingCollision*))plugin::GetVMT(this, 15))(this);
}

// 0x4B3120
bool CEventBuildingCollision::CanTreatBuildingAsObject(const CBuilding& building) {
    return plugin::CallAndReturn<bool, 0x4B3120, const CBuilding&>(building);
}

// 0x4AD1E0
bool CEventBuildingCollision::IsHeadOnCollision(const CPed& ped) {
    return plugin::CallMethodAndReturn<bool, 0x4AD1E0, CEventBuildingCollision*, const CPed&>(this, ped);
}