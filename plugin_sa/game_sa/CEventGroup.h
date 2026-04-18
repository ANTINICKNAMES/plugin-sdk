/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

// TODO / cpp

class PLUGIN_API CEventGroup {
    static constexpr uint32_t MAX_NUM_EVENTS = 16;
protected:
    void *vtable;
public:
    class CPed*   m_pPed;
    int           m_iNoOfEvents;
    CEvent*       m_events[16]; // MAX_NUM_EVENTS

	CEvent* Add(CEvent& rEvent, bool bForcePersistence);
	void Remove(CEvent* pEvent);

	bool HasEventOfType(CEvent* pEvent);
	CEvent* GetEventOfType(int iEventType);
	bool HasEvent(CEvent* pEvent);

	void TickEvents();
	void Reorganise();
	void RemoveInvalidEvents(bool bEverythingButScriptEvents);

	CEvent* GetHighestPriorityEvent();
	int GetNumEventsInQueue();

	void Flush(bool bKeepJoinGroupScriptCommands);

	//int CountTasks(SArray<CTask*>&) const;
	//int CountEvents() const;

	bool HasScriptCommandOfTaskType(int iTaskType);
};

VALIDATE_SIZE(CEventGroup, 0x4C);