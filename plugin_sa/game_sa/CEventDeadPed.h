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

class PLUGIN_API CEventDeadPed : public CEventEditableResponse
{
public:
	CEventDeadPed(CPed* pDeadPed, const bool bHasDrowned, const int iTimeOfDeath);
	virtual ~CEventDeadPed() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();

	CPed* GetDeadPed() { return m_pDeadPed; }
	bool HasDrowned() { return m_bHasDrowned; }
	int GetTimeOfDeath() { return m_iTimeOfDeath; }


	//static const float ms_fNoticeDeadPedRange;
	//static const float ms_fNoticeStealthDeadPedRange;


//private:
public:
	CPed* m_pDeadPed;
	bool m_bHasDrowned;
	int m_iTimeOfDeath;
};