/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventDeath : public CEvent
{
protected:
	CEventDeath(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventDeath(const bool bHasDrowned);
	CEventDeath(const bool bHasDrowned, const int iTimeOfDeath);
	virtual ~CEventDeath() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);

	int GetTimeOfDeath() { return m_iTimeOfDeath; }
	bool HasDrowned() { return m_bHasDrowned; }


//private:
public:
	bool m_bHasDrowned;
	int m_iTimeOfDeath;
};