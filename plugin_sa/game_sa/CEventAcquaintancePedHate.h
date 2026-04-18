/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventAcquaintancePed.h"

class PLUGIN_API CEventAcquaintancePedHate : public CEventAcquaintancePed
{

public:
	CEventAcquaintancePedHate(CPed* pAcquaintancePed);
	virtual ~CEventAcquaintancePedHate() {}


	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual CEvent* CloneEditable();
};