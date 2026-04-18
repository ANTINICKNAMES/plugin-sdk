/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePedLike.h"

// 0x5FF0D0
CEventAcquaintancePedLike::CEventAcquaintancePedLike(CPed* pAcquaintancePed) : CEventAcquaintancePed(pAcquaintancePed) {
    plugin::CallMethod<0x5FF0D0, CEventAcquaintancePedLike*, CPed*>(this, pAcquaintancePed);
}

eEventType CEventAcquaintancePedLike::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePedLike*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePedLike::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePedLike*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventAcquaintancePedLike::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventAcquaintancePedLike*))plugin::GetVMT(this, 16))(this);
}