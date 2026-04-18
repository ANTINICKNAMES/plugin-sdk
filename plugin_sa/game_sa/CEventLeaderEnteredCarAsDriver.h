/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"
#include "CEventEditableResponse.h"

class PLUGIN_API CEventLeaderEnteredCarAsDriver : public CEventEditableResponse
{
public:
	CEventLeaderEnteredCarAsDriver(CVehicle* pVehicle);


	virtual ~CEventLeaderEnteredCarAsDriver() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);


	virtual bool TakesPriorityOver(const CEvent& otherEvent);
	virtual bool CanBeInterruptedBySameEvent();

	CVehicle* GetVehicle() { return m_pVehicle; }


	CVehicle* m_pVehicle;
};