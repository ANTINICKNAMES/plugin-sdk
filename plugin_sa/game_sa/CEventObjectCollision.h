/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventObjectCollision : public CEvent
{
protected:
	CEventObjectCollision(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventObjectCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CObject* pObject, const CVector& vNormal, const CVector& vPos, const int iMoveState);
	virtual ~CEventObjectCollision() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);

	CObject* GetObject_() { return m_pObject; } // 'GetObject' originally
	const CVector& GetNormal() { return m_vNormal; }
	const int GetMoveState() { return m_iMoveState; }

	// unknown address
	//bool IsHeadOnCollision(const CPed& ped);


	//static const float ms_fStraightAheadDotProduct;


//private:
public:
	uint16_t m_iPieceType;
	int16_t m_iMoveState;
	float m_fImpulseMagnitude;
	CObject* m_pObject;
	CVector m_vNormal;
	CVector m_vPos;
};