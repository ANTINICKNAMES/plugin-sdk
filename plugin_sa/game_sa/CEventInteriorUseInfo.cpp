/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventInteriorUseInfo.h"

// 0x674EA0
CEventInteriorUseInfo::CEventInteriorUseInfo(void* pInteriorInfo, void* pInterior, int32_t duration, bool doInstantly) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x674EA0, CEventInteriorUseInfo*, void*, void*, int32_t, bool>(this, pInteriorInfo, pInterior, duration, doInstantly);
}

eEventType CEventInteriorUseInfo::GetEventType() {
    return ((eEventType(__thiscall*)(CEventInteriorUseInfo*))plugin::GetVMT(this, 1))(this);
}

int CEventInteriorUseInfo::GetEventPriority() {
    return ((int(__thiscall*)(CEventInteriorUseInfo*))plugin::GetVMT(this, 2))(this);
}

int CEventInteriorUseInfo::GetLifeTime() {
    return ((int(__thiscall*)(CEventInteriorUseInfo*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventInteriorUseInfo::Clone() {
    return ((CEvent * (__thiscall*)(CEventInteriorUseInfo*))plugin::GetVMT(this, 4))(this);
}

bool CEventInteriorUseInfo::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventInteriorUseInfo*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventInteriorUseInfo::IsValid(CPed* pPed) {
    return ((bool(__thiscall*)(CEventInteriorUseInfo*, CPed*))plugin::GetVMT(this, 14))(this, pPed);
}