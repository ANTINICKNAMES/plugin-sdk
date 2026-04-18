/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventPotentialGetRunOver.h"

// 0x4AE1A0
CEventPotentialGetRunOver::CEventPotentialGetRunOver(CVehicle* pThreatVehicle) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4AE1A0, CEventPotentialGetRunOver*, CVehicle*>(this, pThreatVehicle);
}

eEventType CEventPotentialGetRunOver::GetEventType() {
    return ((eEventType(__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 1))(this);
}

int CEventPotentialGetRunOver::GetEventPriority() {
    return ((int(__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 2))(this);
}

int CEventPotentialGetRunOver::GetLifeTime() {
    return ((int(__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventPotentialGetRunOver::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 16))(this);
}

bool CEventPotentialGetRunOver::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventPotentialGetRunOver*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

CEntity* CEventPotentialGetRunOver::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 10))(this);
}

float CEventPotentialGetRunOver::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventPotentialGetRunOver*))plugin::GetVMT(this, 12))(this);
}