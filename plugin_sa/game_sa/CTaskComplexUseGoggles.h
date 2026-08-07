/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseGoggles : public CTaskComplex
{
protected:
	CTaskComplexUseGoggles(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
	CTaskComplexUseGoggles();

	//virtual ~CTaskComplexUseGoggles();

	/*
	virtual CTask* Clone() const;


	virtual bool MakeAbortable(CPed* pPed, const int iPriority, const CEvent* pEvent);

	virtual int GetTaskType() const;





	virtual CTask* CreateNextSubTask(CPed* pPed);
	virtual CTask* CreateFirstSubTask(CPed* pPed);
	virtual CTask* ControlSubTask(CPed* pPed);

	virtual void Serialize();


	static CTask* CreateTask();
	*/
};