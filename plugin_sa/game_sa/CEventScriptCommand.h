/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventScriptCommand : public CEvent
{
protected:
	CEventScriptCommand(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventScriptCommand(const int iTaskPriority, CTask* pTask, const bool bAcceptWhenDead);
	virtual ~CEventScriptCommand() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);
	virtual bool IsValid(CPed* pPed);
	virtual bool TakesPriorityOver(const CEvent& otherEvent);


	virtual CTask* CloneScriptTask();
	int GetTaskPriority() { return m_iTaskPriority; }
	CTask* GetTask() { return m_pTask; }


//protected:
public:
	int m_iTaskPriority;
	CTask* m_pTask;
	bool m_bAcceptWhenDead;
};