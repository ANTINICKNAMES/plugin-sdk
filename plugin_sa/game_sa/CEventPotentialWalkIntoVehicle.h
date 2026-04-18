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

class PLUGIN_API CEventPotentialWalkIntoVehicle : public CEventEditableResponse
{
public:
	CEventPotentialWalkIntoVehicle(CVehicle* pThreatVehicle, const int iMoveState);
	virtual ~CEventPotentialWalkIntoVehicle() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);

	CVehicle* GetThreatVehicle() { return m_pThreatVehicle; }
	const int GetMoveState() { return m_iMoveState; }


//protected:
public:
	CVehicle* m_pThreatVehicle;
	int m_iMoveState;
};