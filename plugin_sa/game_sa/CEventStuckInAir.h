/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventStuckInAir : public CEvent
{
protected:
	CEventStuckInAir(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventStuckInAir(CPed* pPed);
	virtual ~CEventStuckInAir() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);
	virtual bool CanBeInterruptedBySameEvent();


	CPed* m_pPed;
};