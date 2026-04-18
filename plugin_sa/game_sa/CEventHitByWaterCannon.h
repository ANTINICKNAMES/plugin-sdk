/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventHitByWaterCannon : public CEvent
{
protected:
	CEventHitByWaterCannon(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventHitByWaterCannon(const CVector& vPos, const CVector& vVel);
	virtual ~CEventHitByWaterCannon() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual float GetLocalSoundLevel();


	const CVector& GetPosition() { return m_vPos; }
	const CVector& GetVelocity() { return m_vVel; }


//private:
public:
	CVector m_vPos;
	CVector m_vVel;
};