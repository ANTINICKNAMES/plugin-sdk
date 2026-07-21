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

class PLUGIN_API CEventGunShot : public CEventEditableResponse
{

public:
	//static float ms_fGunShotSenseRangeForRiot2;

	CEventGunShot(CEntity* pFiringEntity, CVector ShotOrigin, CVector ShotTarget, bool bSilent);
	virtual ~CEventGunShot() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool IsCriminalEvent();
	virtual void ReportCriminalEvent(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();
	virtual bool CanBeInterruptedBySameEvent();
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	CEntity* GetFiringEntity() { return m_pFiringEntity; }
	CVector GetPos() { return m_vShotOrigin; }


//protected:
public:
	CEntity* m_pFiringEntity;
	CVector m_vShotOrigin;
	CVector m_vShotTarget;
	bool m_bSilent;
};