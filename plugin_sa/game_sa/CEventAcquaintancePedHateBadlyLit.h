/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventAcquaintancePed.h"

class PLUGIN_API CEventAcquaintancePedHateBadlyLit : public CEventAcquaintancePed
{

public:
	CEventAcquaintancePedHateBadlyLit(CPed* pAcquaintancePed, const int iTimeSpotted, const CVector& vTargetPosAtSpotTime);


	virtual ~CEventAcquaintancePedHateBadlyLit() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);


	virtual bool CanBeInterruptedBySameEvent();

	int GetTimeSpotted() { return m_iTimeSpotted; }
	const CVector& GetTargetPosAtSpotTime() { return m_vTargetPosAtSpotTime; }


private:
	int m_iTimeSpotted;
	CVector m_vTargetPosAtSpotTime;
};