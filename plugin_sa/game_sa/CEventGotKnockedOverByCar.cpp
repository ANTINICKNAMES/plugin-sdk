/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGotKnockedOverByCar.h"

// 0x4B1B60
CEventGotKnockedOverByCar::CEventGotKnockedOverByCar(CVehicle* pVehicle) : CEventEditableResponse(plugin::dummy) {
    plugin::CallMethod<0x4B1B60, CEventGotKnockedOverByCar*, CVehicle*>(this, pVehicle);
}

eEventType CEventGotKnockedOverByCar::GetEventType() {
    return ((eEventType(__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 1))(this);
}

int CEventGotKnockedOverByCar::GetEventPriority() {
    return ((int(__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 2))(this);
}

int CEventGotKnockedOverByCar::GetLifeTime() {
    return ((int(__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventGotKnockedOverByCar::CloneEditable() {
    return ((CEvent * (__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 16))(this);
}

bool CEventGotKnockedOverByCar::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventGotKnockedOverByCar*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

float CEventGotKnockedOverByCar::GetLocalSoundLevel() {
    return ((float(__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 12))(this);
}

CEntity* CEventGotKnockedOverByCar::GetSourceEntity() {
    return ((CEntity * (__thiscall*)(CEventGotKnockedOverByCar*))plugin::GetVMT(this, 10))(this);
}