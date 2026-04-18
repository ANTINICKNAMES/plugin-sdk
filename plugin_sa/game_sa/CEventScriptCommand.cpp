/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventScriptCommand.h"

// 0x4B0A00
CEventScriptCommand::CEventScriptCommand(const int iTaskPriority, CTask* pTask, const bool bAcceptWhenDead) : CEvent(plugin::dummy) {
    plugin::CallMethod<0x4B0A00, CEventScriptCommand*, const int, CTask*, const bool>(this, iTaskPriority, pTask, bAcceptWhenDead);
}

eEventType CEventScriptCommand::GetEventType() {
    return ((eEventType(__thiscall*)(CEventScriptCommand*))plugin::GetVMT(this, 1))(this);
}

int CEventScriptCommand::GetEventPriority() {
    return ((int(__thiscall*)(CEventScriptCommand*))plugin::GetVMT(this, 2))(this);
}

int CEventScriptCommand::GetLifeTime() {
    return ((int(__thiscall*)(CEventScriptCommand*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEventScriptCommand::Clone() {
    return ((CEvent * (__thiscall*)(CEventScriptCommand*))plugin::GetVMT(this, 4))(this);
}

bool CEventScriptCommand::AffectsPed(CPed* pPed) {
    return ((bool(__thiscall*)(CEventScriptCommand*, CPed*))plugin::GetVMT(this, 5))(this, pPed);
}

bool CEventScriptCommand::IsValid(CPed* pPed) {
    return ((bool(__thiscall*)(CEventScriptCommand*, CPed*))plugin::GetVMT(this, 14))(this, pPed);
}

bool CEventScriptCommand::TakesPriorityOver(const CEvent& otherEvent) {
    return ((bool(__thiscall*)(CEventScriptCommand*, const CEvent&))plugin::GetVMT(this, 11))(this, otherEvent);
}

CTask* CEventScriptCommand::CloneScriptTask() {
    return ((CTask*(__thiscall*)(CEventScriptCommand*))plugin::GetVMT(this, 16))(this);
}