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

class PLUGIN_API CEventVehicleDamage : public CEventEditableResponse
{
public:
	CEventVehicleDamage(CVehicle* pVehicle, CEntity* pInflictor, const eWeaponType weaponUsed);
	virtual ~CEventVehicleDamage() {}

	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual bool AffectsPed(CPed* pPed);
	virtual float GetLocalSoundLevel();


	virtual CEntity* GetSourceEntity();

	virtual bool IsCriminalEvent();
	virtual void ReportCriminalEvent(CPed* pPed);


	CVehicle* GetVehicle() { return m_pVehicle; }
	CEntity* GetInflictor() { return m_pInflictor; }
	eWeaponType GetWeaponUsed() { return m_eWeaponUsed; }

//protected:
public:
	CVehicle* m_pVehicle;
	CEntity* m_pInflictor;
	eWeaponType m_eWeaponUsed;
};