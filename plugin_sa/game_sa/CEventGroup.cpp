/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventGroup.h"

//CEventGroup::CEventGroup(CPed* pPed) {
//
//}

// 0x4AB420
CEvent* CEventGroup::Add(CEvent& rEvent, bool bForcePersistence) {
    return plugin::CallMethodAndReturn<CEvent*, 0x4AB420, CEventGroup*, CEvent&, const bool>(this, rEvent, bForcePersistence);
}

// 0x4AB5A0
void CEventGroup::Remove(CEvent* pEvent) {
    plugin::CallMethod<0x4AB5A0, CEventGroup*, CEvent*>(this, pEvent);
}

// 0x4AB5E0
bool CEventGroup::HasEventOfType(CEvent* pEvent) {
    return plugin::CallMethodAndReturn<bool, 0x4AB5E0, CEventGroup*, CEvent*>(this, pEvent);
}

// 0x4AB650
CEvent* CEventGroup::GetEventOfType(int iEventType) {
    return plugin::CallMethodAndReturn<CEvent*, 0x4AB650, int>(iEventType);
}

// 0x4AB6A0
bool CEventGroup::HasEvent(CEvent* pEvent) {
    return plugin::CallMethodAndReturn<bool, 0x4AB6A0, CEventGroup*, CEvent*>(this, pEvent);
}

// 0x4AB6D0
void CEventGroup::TickEvents() {
    plugin::CallMethod<0x4AB6D0, CEventGroup*>(this);
}

// 0x4AB700
void CEventGroup::Reorganise() {
    plugin::CallMethod<0x4AB700, CEventGroup*>(this);
}

// 0x4AB760
void CEventGroup::RemoveInvalidEvents(bool bEverythingButScriptEvents) {
    plugin::CallMethod<0x4AB760, CEventGroup*, bool>(this, bEverythingButScriptEvents);
}

// 0x4AB7C0
CEvent* CEventGroup::GetHighestPriorityEvent() {
    return plugin::CallMethodAndReturn<CEvent*, 0x4AB7C0, CEventGroup*>(this);
}

// inline, unknown address
int CEventGroup::GetNumEventsInQueue() {
    return m_iNoOfEvents;
}

// 0x4AB370
void CEventGroup::Flush(bool bKeepJoinGroupScriptCommands) {
    plugin::CallMethod<0x4AB370, CEventGroup*, bool>(this, bKeepJoinGroupScriptCommands);
}

// 0x4AB840
bool CEventGroup::HasScriptCommandOfTaskType(int iTaskType) {
    return plugin::CallMethodAndReturn<bool, 0x4AB840, CEventGroup*, int>(this, iTaskType);
}
