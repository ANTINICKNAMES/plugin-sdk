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

class PLUGIN_API CEventSoundQuiet : public CEventEditableResponse
{

public:
	CEventSoundQuiet(CEntity* pEntityMakingSound, float Volume, const int iTimeHeard, const CVector& vTargetPosAtHeardTime);


	virtual ~CEventSoundQuiet() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();


	virtual bool CanBeInterruptedBySameEvent();

	float GetVolume() { return m_Volume; }

	int GetTimeHeard() { return m_iTimeHeard; }
	const CVector& GetTargetPosAtHeardTime() { return m_vTargetPosAtHeardTime; }


//private:
public:
	CEntity* m_pEntityMakingSound;
	float m_Volume;
	int m_iTimeHeard;
	CVector m_vTargetPosAtHeardTime;
};