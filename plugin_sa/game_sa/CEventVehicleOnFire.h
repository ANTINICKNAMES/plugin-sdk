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

class PLUGIN_API CEventVehicleOnFire : public CEventEditableResponse
{
public:
	CEventVehicleOnFire(CVehicle* pVehicleOnFire);
	virtual ~CEventVehicleOnFire() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual float GetLocalSoundLevel();


	CVehicle* GetVehicleOnFire() { return m_pVehicleOnFire; }


	CVehicle* m_pVehicleOnFire;
};