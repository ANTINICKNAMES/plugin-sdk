/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventLeanOnVehicle : public CEvent
{
protected:
	CEventLeanOnVehicle(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventLeanOnVehicle(CVehicle* pVehicle, int32_t time);


	virtual ~CEventLeanOnVehicle() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	virtual bool IsValid(CPed* pPed);

	CVehicle* m_pVehicle;
	int32_t m_time;
};