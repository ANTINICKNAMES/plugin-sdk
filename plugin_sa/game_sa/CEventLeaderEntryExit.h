/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventAreaCodes.h"

class PLUGIN_API CEventLeaderEntryExit : public CEventAreaCodes
{

public:
	CEventLeaderEntryExit(CPed* pPed);


	virtual ~CEventLeaderEntryExit() {}


	virtual eEventType GetEventType();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);
	virtual bool CanBeInterruptedBySameEvent();
};