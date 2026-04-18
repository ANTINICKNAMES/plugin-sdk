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

class PLUGIN_API CEventAttractor : public CEventEditableResponse
{
public:
	CEventAttractor(C2dEffect* pEffect, CEntity* pEntity, bool forceUse);
	virtual ~CEventAttractor() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable();
	virtual bool AffectsPed(CPed* pPed);


	C2dEffect* GetEffect() { return m_pEffect; }
	CEntity* GetEntity() { return m_pEntity; }


	static bool IsEffectActive(const CEntity* pEntity, const C2dEffect* pEffect);

protected:
	C2dEffect* m_pEffect;
	CEntity* m_pEntity;

	bool8 m_forceUse;
};