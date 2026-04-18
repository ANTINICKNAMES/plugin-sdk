/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventPedCollisionWithPed : public CEvent
{
protected:
	CEventPedCollisionWithPed(plugin::dummy_func_t a) : CEvent(a) {}
public:
	//static const float ms_fPedBrushKnockdown;

	CEventPedCollisionWithPed(const uint16_t nPieceType, const float fImpulseMagnitude, const CPed* pPed, const CVector& vNormal, const CVector& vPos, 
		const int iPedMoveState, const int iOtherPedMoveState);
	virtual ~CEventPedCollisionWithPed() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);

	const CVector& GetNormal() { return m_vNormal; }

	const int GetPedMoveState() { return m_iPedMoveState; }

	CPed* GetOtherPed() { return m_pOtherPed; }
	const int GetOtherPedMoveState() { return m_iOtherPedMoveState; }


//protected:
public:
	uint16_t m_iPieceType;
	float m_fImpulseMagnitude;
	CPed* m_pOtherPed;
	CVector m_vNormal;
	CVector m_vPos;
	int16_t m_iPedMoveState;
	int16_t m_iOtherPedMoveState;
};