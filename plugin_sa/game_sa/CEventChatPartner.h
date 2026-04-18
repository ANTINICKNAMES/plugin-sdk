/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventChatPartner : public CEvent
{
protected:
	CEventChatPartner(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventChatPartner(const bool bIsLeader, CPed* pOtherPed);
	virtual ~CEventChatPartner() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	const bool IsLeader() { return m_bIsLeader; }
	CPed* GetOtherPed() { return m_pOtherPed; }


//private:
public:
	bool m_bIsLeader;
	CPed* m_pOtherPed;
};