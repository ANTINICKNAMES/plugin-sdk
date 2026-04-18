/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventAttractor.h"

class PLUGIN_API CEventScriptedAttractor : public CEventAttractor
{
public:
	CEventScriptedAttractor(C2dEffect* pEffect, CEntity* pEntity);

	virtual ~CEventScriptedAttractor() {}

	virtual eEventType GetEventType();
	virtual CEvent* CloneEditable();
};