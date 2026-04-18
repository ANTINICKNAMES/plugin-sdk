/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventCreatePartnerTask : public CEvent
{
protected:
	CEventCreatePartnerTask(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventCreatePartnerTask(int32_t type, CPed* pPartner, bool isLeader, float meetDist);


	virtual ~CEventCreatePartnerTask() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	int32_t m_type;
	CPed* m_pPartner;
	bool8 m_isLeader;
	float m_meetDist;
};