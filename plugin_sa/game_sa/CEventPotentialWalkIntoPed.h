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

class PLUGIN_API CEventPotentialWalkIntoPed : public CEventEditableResponse
{
public:
	CEventPotentialWalkIntoPed(CPed* pOtherPed, const CVector& vTarget, const int iMoveState);
	virtual ~CEventPotentialWalkIntoPed() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual CEntity* GetSourceEntity();
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	CPed* GetOtherPed() { return m_pOtherPed; }
	const CVector& GetTarget() { return m_vTarget; }
	const int GetMoveState() { return m_iMoveState; }


//protected:
public:
	CVector m_vTarget;
	CPed* m_pOtherPed;
	int m_iMoveState;
};