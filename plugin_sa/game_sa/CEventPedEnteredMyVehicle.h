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

class PLUGIN_API CEventPedEnteredMyVehicle : public CEventEditableResponse
{
public:
	CEventPedEnteredMyVehicle(const CPed* pPedThatEnteredVehicle, const CVehicle* pVehicle, const int iTargetDoor);
	virtual ~CEventPedEnteredMyVehicle() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();


	CVehicle* GetVehicle() { return m_pVehicle; }
	CPed* GetPedThatEnteredVehicle() { return m_pPedThatEnteredVehicle; }
	int GetTargetDoor() { return m_iTargetDoor; }


	//protected:
public:
	CPed* m_pPedThatEnteredVehicle;
	CVehicle* m_pVehicle;
	int m_iTargetDoor;
};