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

class PLUGIN_API CEventPotentialWalkIntoFire : public CEventEditableResponse
{
public:
	CEventPotentialWalkIntoFire(const CVector& vFirePos, const float fStrength, const int iMoveState);
	virtual ~CEventPotentialWalkIntoFire() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);


	const CVector& GetFirePos() { return m_vFirePos; }
	float GetStrength() { return m_fStrength; }
	float GetFireRadius() { return m_fFireRadius; }
	int GetMoveState() { return m_iMoveState; }


//private:
public:
	CVector m_vFirePos;
	float m_fStrength;
	float m_fFireRadius;
	int m_iMoveState;
};