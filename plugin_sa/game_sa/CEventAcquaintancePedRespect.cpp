/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePedRespect.h"

// 0x5FF010
CEventAcquaintancePedRespect::CEventAcquaintancePedRespect(CPed* pAcquaintancePed) : CEventAcquaintancePed(pAcquaintancePed) {
    plugin::CallMethod<0x5FF010, CEventAcquaintancePedRespect*, CPed*>(this, pAcquaintancePed);
}

eEventType CEventAcquaintancePedRespect::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePedRespect*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePedRespect::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePedRespect*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventAcquaintancePedRespect::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventAcquaintancePedRespect*))plugin::GetVMT(this, 16))(this);
}