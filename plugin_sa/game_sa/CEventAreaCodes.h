/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventAreaCodes : public CEvent
{
protected:
	CEventAreaCodes(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventAreaCodes(CPed* pTargetPed);
	virtual ~CEventAreaCodes() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	CPed* GetTargetPed() { return m_pTargetPed; }


	CPed* m_pTargetPed;
};