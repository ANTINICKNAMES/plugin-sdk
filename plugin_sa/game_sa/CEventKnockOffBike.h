/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventKnockOffBike : public CEvent
{
protected:
	CEventKnockOffBike(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventKnockOffBike();
	CEventKnockOffBike(CVehicle* pVehicle, const CVector& vecSpeed, const CVector& vecNorm, float fImpulse, float fPedDamage, eWeaponType nWeaponType, 
		int8_t nDirn, const int nDownTime, CPed* pDraggingPed, const bool bWasDriver, const bool bForce);
	CEventKnockOffBike(const CEventKnockOffBike& src);
	virtual ~CEventKnockOffBike() {}

	CEventKnockOffBike& operator=(const CEventKnockOffBike& src);

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual float GetLocalSoundLevel();
	virtual bool IsCriminalEvent();
	virtual void ReportCriminalEvent(CPed* pPed);


	const CVehicle* GetVehicle() { return m_pVehicle; }
	int GetDownTime() { return m_nDownTime; }

	void SetPedOutCar(CPed* pPed);
	AnimationId CalcForcesAndAnims(CPed* pPed);
	bool SetPedSafePosition(CPed* pPed);

	CPed* GetDraggingPed() { return m_pDraggingPed; }
	bool GetWasDriver() { return m_bWasDriver; }

	void ForceKnockOffBike() { m_bForce = true; }

	eWeaponType GetWeaponUsed() { return (eWeaponType)m_eWeaponUsed; }

	CVector m_vecColSpeed;
	CVector m_vecColNormal;
	float m_fCollisionImpulse;
	float m_fPedDamage;
	int m_nDownTime;
	CPed* m_pDraggingPed;
	int8_t m_nDirn;


	bool m_bWasDriver : 1;
	bool m_bForce : 1;


//private:
public:
	int8_t m_eWeaponUsed;
	int8_t m_nExitDoor;
	CVehicle* m_pVehicle;

	void From(const CEventKnockOffBike& src);
};