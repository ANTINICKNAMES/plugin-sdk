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

class PLUGIN_API CEventGunAimedAt : public CEventEditableResponse
{
public:
	CEventGunAimedAt(CPed* pAggressorPed);
	virtual ~CEventGunAimedAt() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual bool IsCriminalEvent();
	virtual void ReportCriminalEvent(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	CPed* GetAggressorPed() { return m_pAggressorPed; }

	// unknown method
	//static void AddGunAimedAtEventToVehicleOccupants(const CVehicle& vehicle, CPed* pAggressorPed);


	CPed* m_pAggressorPed;
};