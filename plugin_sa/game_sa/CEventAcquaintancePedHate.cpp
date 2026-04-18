/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventAcquaintancePedHate.h"

// 0x420E70
CEventAcquaintancePedHate::CEventAcquaintancePedHate(CPed* pAcquaintancePed) : CEventAcquaintancePed(pAcquaintancePed) {
    plugin::CallMethod<0x420E70, CEventAcquaintancePedHate*, CPed*>(this, pAcquaintancePed);
}

eEventType CEventAcquaintancePedHate::GetEventType() {
    return ((eEventType(__thiscall*)(CEventAcquaintancePedHate*))plugin::GetVMT(this, 1))(this);
}

int CEventAcquaintancePedHate::GetEventPriority() {
    return ((int(__thiscall*)(CEventAcquaintancePedHate*))plugin::GetVMT(this, 2))(this);
}

CEvent* CEventAcquaintancePedHate::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventAcquaintancePedHate*))plugin::GetVMT(this, 16))(this);
}