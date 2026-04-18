/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHandlerHistory.h"

// inline, unknown address
// #UNKNOWN_FUNCTIONALITY
//void CEventHandlerHistory::Flush() {
//}

// inline, unknown address
CTask* CEventHandlerHistory::GetAbortedTask() {
    return m_pAbortedTask;
}

// inline, unknown address
void CEventHandlerHistory::RecordAbortedTask(CTask* pTask) {
    m_pAbortedTask = pTask;
}

// inline, unknown address
CEvent* CEventHandlerHistory::GetCurrentEventActive() {
    return m_pCurrentEventActive;
}

// inline, unknown address
CEvent* CEventHandlerHistory::GetCurrentEventPassive() {
    return m_pCurrentEventPassive;
}

// 0x4BC4B0
void CEventHandlerHistory::RecordCurrentEvent(CPed* pPed, CEvent& rCurrentEvent) {
    plugin::CallMethod<0x4BC4B0, CEventHandlerHistory*, CPed*, CEvent&>(this, pPed, rCurrentEvent);
}

// 0x4BC550
void CEventHandlerHistory::ClearAllEvents() {
    plugin::CallMethod<0x4BC550, CEventHandlerHistory*>(this);
}

// 0x4B8C40
void CEventHandlerHistory::ClearTempEvent() {
    plugin::CallMethod<0x4B8C40, CEventHandlerHistory*>(this);
}

// 0x4B8C60
void CEventHandlerHistory::ClearNonTempEvent() {
    plugin::CallMethod<0x4B8C60, CEventHandlerHistory*>(this);
}

// 0x4B8C80
int CEventHandlerHistory::GetCurrentEventPriority() {
    return plugin::CallMethodAndReturn<int, 0x4B8C80, CEventHandlerHistory*>(this);
}

// 0x4B8CA0
CEvent* CEventHandlerHistory::GetCurrentEvent() {
    return plugin::CallMethodAndReturn<CEvent*, 0x4B8CA0, CEventHandlerHistory*>(this);
}

// 0x4B8CB0
CEvent* CEventHandlerHistory::GetStoredActiveEvent() {
    return plugin::CallMethodAndReturn<CEvent*, 0x4B8CB0, CEventHandlerHistory*>(this);
}

// 0x4B8B90
bool CEventHandlerHistory::IsRespondingToEvent(int iEventType) {
    return plugin::CallMethodAndReturn<bool, 0x4B8B90, CEventHandlerHistory*, int>(this, iEventType);
}

// 0x4B8C20
void CEventHandlerHistory::TickStoredEvent(CPed* pPed) {
    plugin::CallMethod<0x4B8C20, CEventHandlerHistory*>(this);
}

// inline, unknown address
// #UNKNOWN_FUNCTIONALITY
//int CEventHandlerHistory::CountEvents() {
//}

// 0x4BC580
bool CEventHandlerHistory::TakesPriorityOverCurrentEvent(CEvent& newEvent) {
    return plugin::CallMethodAndReturn<bool, 0x4BC580, CEventHandlerHistory*, CEvent&>(this, newEvent);
}
