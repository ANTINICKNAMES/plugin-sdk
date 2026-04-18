/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventVehicleCollision : public CEvent
{
protected:
	CEventVehicleCollision(plugin::dummy_func_t a) : CEvent(a) {}
public:
	//static const float ms_fDamageThresholdSpeed;
	//static const float ms_fMaxPlayerImpulse;
	//static const float ms_fHighDamageImpulseThreshold;
	//static const float ms_fLowDamageImpulseThreshold;

	CEventVehicleCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CVehicle* pVehicle, const CVector& vNormal, const CVector& vPos, const int iMoveState, 
		uint16_t nForceReaction);
	virtual ~CEventVehicleCollision() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);

	uint16_t GetForceReaction() { return m_nForceReaction; }
	float GetDamageImpulseMagnitude() { return m_fImpulseMagnitude; }
	const CVehicle* GetVehicle() { return m_pVehicle; }
	const CVector& GetNormal() { return m_vNormal; }
	const CVector& GetPos() { return m_vPos; }
	const int GetMoveState() { return m_iMoveState; }

	void SetDirectionToWalkRoundCar(int i) { m_iDirectionToWalkRoundCar = i; }
	const int GetDirectionToWalkRoundCar() { return m_iDirectionToWalkRoundCar; }


//private:
public:
	uint16_t m_iPieceType;
	uint16_t m_nForceReaction;
	float m_fImpulseMagnitude;
	CVehicle* m_pVehicle;
	CVector m_vNormal;
	CVector m_vPos;
	int8_t m_iMoveState;
	int8_t m_iDirectionToWalkRoundCar;
};