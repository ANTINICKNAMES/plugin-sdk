/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

#include "CBuilding.h"

class PLUGIN_API CEventBuildingCollision : public CEvent
{
protected:
	CEventBuildingCollision(plugin::dummy_func_t a) : CEvent(a) {}
public:
	//static const float ms_fMaxTreatBuildingAsObjectSize;
	//static const float ms_fMaxTreatBuildingAsObjectHeight;
	//static const float ms_fStraightAheadDotProduct;

	CEventBuildingCollision(const uint16_t nPieceType, const float fImpulseMagnitude, const CBuilding* pBuilding, const CVector& vNormal, const CVector& vPos, const int iMoveState);
	virtual ~CEventBuildingCollision() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);
	virtual bool CanBeInterruptedBySameEvent();

	float GetDamageImpulseMagnitude() { return m_fImpulseMagnitude; }
	CBuilding* GetBuilding() { return m_pBuilding; }
	const CVector& GetNormal() { return m_vNormal; }
	const CVector& GetPosition() { return m_vPos; }

	const int GetMoveState() { return m_iMoveState; }

	static bool CanTreatBuildingAsObject(const CBuilding& building);

	bool IsHeadOnCollision(const CPed& ped);

//protected:
public:
	uint16_t m_iPieceType;
	int16_t m_iMoveState;
	float m_fImpulseMagnitude;
	CBuilding* m_pBuilding;
	CVector m_vNormal;
	CVector m_vPos;
};