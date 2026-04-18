/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHitByWaterCannon.h"

// 0x4B1290
CEventHitByWaterCannon::CEventHitByWaterCannon(const CVector& vPos, const CVector& vVel) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B1290, CEventHitByWaterCannon*, const CVector&, const CVector&>(this, vPos, vVel);
}

eEventType CEventHitByWaterCannon::GetEventType() {
    return ((eEventType(__thiscall*)(CEventHitByWaterCannon*))plugin::GetVMT(this, 1))(this);
}

int CEventHitByWaterCannon::GetEventPriority() {
    return ((int(__thiscall*)(CEventHitByWaterCannon*))plugin::GetVMT(this, 2))(this);
}

int CEventHitByWaterCannon::GetLifeTime() {
    return ((int(__thiscall*)(CEventHitByWaterCannon*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventHitByWaterCannon::Clone() {
    return ((CEvent * (__thiscall*)(CEventHitByWaterCannon*))plugin::GetVMT(this, 4))(this);
}

bool CEventHitByWaterCannon::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventHitByWaterCannon*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventHitByWaterCannon::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventHitByWaterCannon*))plugin::GetVMT(this, 12))(this);
}