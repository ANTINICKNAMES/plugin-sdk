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

class PLUGIN_API CEventPotentialWalkIntoObject : public CEventEditableResponse
{
public:
	CEventPotentialWalkIntoObject(CObject* pObject, const int iMoveState);
	virtual ~CEventPotentialWalkIntoObject() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);

	CObject* GetObject_() { return m_pObject; } // 'GetObject' originally
	const int GetMoveState() { return m_iMoveState; }


//protected:
public:
	CObject* m_pObject;
	int m_iMoveState;
};