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

class PLUGIN_API CEventAcquaintancePed : public CEventEditableResponse
{

public:
	CEventAcquaintancePed(CPed* pAcquaintancePed);
	virtual ~CEventAcquaintancePed() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);

	virtual CEntity* GetSourceEntity();
	virtual bool CanBeInterruptedBySameEvent();
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	// unknown address
	CPed* GetAcquaintancePed() { return m_pAcquaintancePed; }


	CPed* m_pAcquaintancePed;
};