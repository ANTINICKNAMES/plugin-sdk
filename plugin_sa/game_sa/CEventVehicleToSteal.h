/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventVehicleToSteal : public CEvent
{
protected:
	CEventVehicleToSteal(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventVehicleToSteal(CVehicle* pVehicle);
	virtual ~CEventVehicleToSteal() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	CVehicle* GetVehicle() { return m_pVehicle; }


	CVehicle* m_pVehicle;
};