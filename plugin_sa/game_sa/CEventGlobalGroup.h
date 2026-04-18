/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventGroup.h"

class PLUGIN_API CEventGlobalGroup : public CEventGroup
{


public:
	//virtual ~CEventGlobalGroup();

	void AddEventsToPed(CPed* pPed);
	void AddEventsToGroup(CPedGroup* pPedGroup);

	float GetSoundLevel(CEntity* pCause, CVector& vecPos);


	//CEventGlobalGroup();
};

CEventGlobalGroup* GetEventGlobalGroup();