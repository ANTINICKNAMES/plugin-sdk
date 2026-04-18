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

class PLUGIN_API CEventPlayerCommandToGroup : public CEventEditableResponse
{
public:
	enum
	{
		GROUP_COMMAND_ATTACK = 0,
		GROUP_COMMAND_RETREAT,
		GROUP_COMMAND_GATHER
	};
public:
	CEventPlayerCommandToGroup(const int iType, CPed* pPed);
	virtual ~CEventPlayerCommandToGroup() {}

	virtual int GetLifeTime();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual CEntity* GetSourceEntity();
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	int GetCommandType() { return m_iType; }
	CPed* GetSourcePed() { return m_pPed; }


//protected:
public:
	int m_iType;
	CPed* m_pPed;
};