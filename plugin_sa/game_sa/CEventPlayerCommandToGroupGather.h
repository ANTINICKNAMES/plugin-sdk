/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventPlayerCommandToGroup.h"

class PLUGIN_API CEventPlayerCommandToGroupGather : public CEventPlayerCommandToGroup
{
public:
	CEventPlayerCommandToGroupGather(CPed* pPed);


	virtual ~CEventPlayerCommandToGroupGather() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual CEvent* CloneEditable();
};