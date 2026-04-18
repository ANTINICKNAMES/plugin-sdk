/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventGunShot.h"

class PLUGIN_API CEventGunShotWhizzedBy : public CEventGunShot
{
public:
	//static float ms_fThresholdDist;

	CEventGunShotWhizzedBy(CEntity* pFiringEntity, const CVector& vShotOrigin, const CVector& vShotTarget, const bool bIsSilent);
	virtual ~CEventGunShotWhizzedBy() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);


	virtual bool CanBeInterruptedBySameEvent();
};