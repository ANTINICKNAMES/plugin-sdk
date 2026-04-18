/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePedDislike.h"

// 0x4B33B0
CEventAcquaintancePedDislike::CEventAcquaintancePedDislike(CPed* pAcquaintancePed) : CEventAcquaintancePed(pAcquaintancePed) {
    plugin::CallMethod<0x4B33B0, CEventAcquaintancePedDislike*, CPed*>(this, pAcquaintancePed);
}

eEventType CEventAcquaintancePedDislike::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePedDislike*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePedDislike::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePedDislike*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventAcquaintancePedDislike::CloneEditable() {
    return ((CEvent*(__thiscall*)(CEventAcquaintancePedDislike*))plugin::GetVMT(this, 16))(this);
}