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

class PLUGIN_API CEventDanger : public CEventEditableResponse
{
public:
	CEventDanger(CEntity* pDangerousEntity, float dangerRadius);
	virtual ~CEventDanger() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual CEntity* GetSourceEntity();


	CEntity* GetDangerousEntity() { return m_pDangerousEntity; }


private:
	CEntity* m_pDangerousEntity;
	float m_dangerRadius;
};