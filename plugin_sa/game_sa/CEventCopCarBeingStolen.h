/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventCopCarBeingStolen : public CEvent
{
protected:
	CEventCopCarBeingStolen(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventCopCarBeingStolen(CPed* pCriminal, CVehicle* pTargetVehicle);
	virtual ~CEventCopCarBeingStolen() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	CPed* GetCriminal() { return m_pCriminal; }
	CVehicle* GetTargetVehicle() { return m_pTargetVehicle; }


//private:
public:
	CPed* m_pCriminal;
	CVehicle* m_pTargetVehicle;
};