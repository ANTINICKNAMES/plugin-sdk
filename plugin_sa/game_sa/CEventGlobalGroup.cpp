/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGlobalGroup.h"

CEventGlobalGroup* GetEventGlobalGroup() {
    return plugin::CallAndReturn<CEventGlobalGroup*, 0x4ABA50>();
}

// 0x4AB9C0
void CEventGlobalGroup::AddEventsToPed(CPed* pPed) {
    plugin::CallMethod<0x4AB9C0, CEventGlobalGroup*, CPed*>(this, pPed);
}

// 0x4AB8A0
void CEventGlobalGroup::AddEventsToGroup(CPedGroup* pPedGroup) {
    plugin::CallMethod<0x4AB8A0, CEventGlobalGroup*, CPedGroup*>(this, pPedGroup);
}

// 0x4AB900
float CEventGlobalGroup::GetSoundLevel(CEntity* pCause, CVector& vecPos) {
    return plugin::CallMethodAndReturn<float, 0x4AB900, CEventGlobalGroup*, CEntity*, CVector&>(this, pCause, vecPos);
}