/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventEditableResponse.h"

// 0x4AC450
CEventEditableResponse::CEventEditableResponse() : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4AC450, CEventEditableResponse*>(this);
}

CEvent* CEventEditableResponse::Clone()
{
    return ((CEvent* (__thiscall*)(CEventEditableResponse*))plugin::GetVMT(this, 4))(this);
}

CEvent* CEventEditableResponse::CloneEditable()
{
    return ((CEvent * (__thiscall*)(CEventEditableResponse*))plugin::GetVMT(this, 16))(this);
}

bool CEventEditableResponse::HasEditableResponse()
{
    return ((bool (__thiscall*)(CEventEditableResponse*))plugin::GetVMT(this, 9))(this);
}

// 0x4B56C0
void CEventEditableResponse::ComputeResponseTaskType(CPed* pPed, const bool bUseInGroupDecisionMaker) {
    plugin::CallMethod<0x4B56C0, CEventEditableResponse*, CPed*, const bool>(this, pPed, bUseInGroupDecisionMaker);
}

// 0x4B5730
bool CEventEditableResponse::ComputeResponseTaskOfType(CPed* pPed, const int iTaskTypeToSeek) {
    return plugin::CallMethodAndReturn<bool, 0x4B5730, CEventEditableResponse*, CPed*, const int>(this, pPed, iTaskTypeToSeek);
}

// 0x4B57A0
void CEventEditableResponse::ComputeResponseTaskType(CPedGroup* pPedGroup) {
    plugin::CallMethod<0x4B57A0, CEventEditableResponse*, CPedGroup*>(this, pPedGroup);
}

// 0x4AC490
bool CEventEditableResponse::WillRespond() {
    return plugin::CallMethodAndReturn<bool, 0x4AC490, CEventEditableResponse*>(this);
}

// 0x4B7DF0
bool CEventEditableResponse::InformGroup(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x4B7DF0, CEventEditableResponse*, CPed*>(this, pPed);
}

// 0x4B2B00
bool CEventEditableResponse::InformRespectedFriends(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x4B2B00, CEventEditableResponse*, CPed*>(this, pPed);
}

// 0x4AC4A0
bool CEventEditableResponse::InformVehicleOccupants(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x4AC4A0, CEventEditableResponse*, CPed*>(this, pPed);
}

// 0x4AC5A0
bool CEventEditableResponse::TriggerLookAt(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x4AC5A0, CEventEditableResponse*, CPed*>(this, pPed);
}
