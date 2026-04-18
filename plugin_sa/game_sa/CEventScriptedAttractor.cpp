/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventScriptedAttractor.h"

// 0x5FEF40
CEventScriptedAttractor::CEventScriptedAttractor(C2dEffect* pEffect, CEntity* pEntity) : CEventAttractor(pEffect, pEntity, false) {
    plugin::CallMethod<0x5FEF40, CEventScriptedAttractor*, C2dEffect*, CEntity*>(this, pEffect, pEntity);
}

eEventType CEventScriptedAttractor::GetEventType() {
    return ((eEventType(__thiscall*)(CEventScriptedAttractor*))plugin::GetVMT(this, 1))(this);
}

CEvent* CEventScriptedAttractor::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventScriptedAttractor*))plugin::GetVMT(this, 16))(this);
}