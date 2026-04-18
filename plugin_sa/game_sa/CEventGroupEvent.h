/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventGroupEvent : public CEvent
{
protected:
	CEventGroupEvent(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventGroupEvent(CPed* pDistressedPed, CEvent* pEvent);
	virtual ~CEventGroupEvent() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual float GetLocalSoundLevel();


	CPed* GetDistressedPed() { return m_pDistressedPed; }
	CEvent* GetBaseEvent() { return m_pEvent; }
	int GetBaseEventPriority() { return m_pEvent->GetEventPriority(); }
	int GetBaseEventType() { return m_pEvent->GetEventType(); }

	bool BaseEventTakesPriorityOverBaseEvent(const CEventGroupEvent& other);


	//private:
public:
	CPed* m_pDistressedPed;
	CEvent* m_pEvent;
};