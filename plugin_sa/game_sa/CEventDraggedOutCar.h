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

class PLUGIN_API CEventDraggedOutCar : public CEventEditableResponse
{
public:
	CEventDraggedOutCar(const CVehicle* pVehicle, const CPed* pDraggingPed, const bool bIsDriver);
	virtual ~CEventDraggedOutCar() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();


	CVehicle* GetVehicle() { return m_pVehicle; }
	CPed* GetDraggingPed() { return m_pDraggingPed; }
	bool GetWasDriver() { return m_bWasDriver; }


//private:
public:
	CPed* m_pDraggingPed;
	CVehicle* m_pVehicle;
	bool m_bWasDriver;
};