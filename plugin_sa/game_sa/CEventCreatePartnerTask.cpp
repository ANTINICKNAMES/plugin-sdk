/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventCreatePartnerTask.h"

// 0x5F6190
CEventCreatePartnerTask::CEventCreatePartnerTask(int32_t type, CPed* pPartner, bool isLeader, float meetDist) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x5F6190, CEventCreatePartnerTask*, int32_t, CPed*, bool, float>(this, type, pPartner, isLeader, meetDist);
}

eEventType CEventCreatePartnerTask::GetEventType() {
    return ((eEventType(__thiscall*)(CEventCreatePartnerTask*))plugin::GetVMT(this, 1))(this);
}

int CEventCreatePartnerTask::GetEventPriority() {
    return ((int(__thiscall*)(CEventCreatePartnerTask*))plugin::GetVMT(this, 2))(this);
}

int CEventCreatePartnerTask::GetLifeTime() {
    return ((int(__thiscall*)(CEventCreatePartnerTask*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventCreatePartnerTask::Clone() {
    return ((CEvent*(__thiscall*)(CEventCreatePartnerTask*))plugin::GetVMT(this, 4))(this);
}

bool CEventCreatePartnerTask::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventCreatePartnerTask*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}