/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAttractor.h"

// 0x4AF350
CEventAttractor::CEventAttractor(C2dEffect* pEffect, CEntity* pEntity, bool forceUse) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AF350, CEventAttractor*, C2dEffect*, CEntity*, bool>(this, pEffect, pEntity, forceUse);
}

eEventType CEventAttractor::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAttractor*))plugin::GetVMT(this, 1))(this);
}

int CEventAttractor::GetEventPriority() {
    return ((int(__thiscall*)(CEventAttractor*))plugin::GetVMT(this, 2))(this);
}

int CEventAttractor::GetLifeTime() {
    return ((int(__thiscall*)(CEventAttractor*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventAttractor::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventAttractor*))plugin::GetVMT(this, 16))(this);
}

bool CEventAttractor::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventAttractor*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

// 0x4AF460
bool CEventAttractor::IsEffectActive(const CEntity* pEntity, const C2dEffect* pEffect) {
    return plugin::CallAndReturn<bool, 0x4AF460, const CEntity*, const C2dEffect*>(pEntity, pEffect);
}