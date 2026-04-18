/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"
#include "CTaskTimer.h"

// TODO / cpp

class PLUGIN_API CEventHandlerHistory {
public:
	//void Flush();


	CTask* GetAbortedTask();
	void RecordAbortedTask(CTask* pTask);



	CEvent* GetCurrentEventActive();
	CEvent* GetCurrentEventPassive();


	void RecordCurrentEvent(CPed* pPed, CEvent& rCurrentEvent);
	void ClearAllEvents();
	void ClearTempEvent();
	void ClearNonTempEvent();
	int GetCurrentEventPriority();
	CEvent* GetCurrentEvent();
	CEvent* GetStoredActiveEvent();

	bool IsRespondingToEvent(int iEventType);


	void TickStoredEvent(CPed* pPed);

	//int CountEvents();

	bool TakesPriorityOverCurrentEvent(CEvent& newEvent);
public:
    CTask* m_pAbortedTask;
    CEvent* m_pCurrentEventActive;
    CEvent* m_pCurrentEventPassive;

    CEvent* m_pStoredEventActive;
    CTaskTimer m_storeTimer;
};

VALIDATE_SIZE(CEventHandlerHistory, 0x1C);