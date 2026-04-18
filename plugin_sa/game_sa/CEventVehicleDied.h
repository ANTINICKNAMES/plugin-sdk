/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventVehicleDied : public CEvent
{
protected:
	CEventVehicleDied(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventVehicleDied(CVehicle* pDeadVehicle);
	virtual ~CEventVehicleDied() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	CVehicle* GetDeadVehicle() { return m_pDeadVehicle; }


//private:
public:
	CVehicle* m_pDeadVehicle;
	bool m_bLeavingVehicle;
};