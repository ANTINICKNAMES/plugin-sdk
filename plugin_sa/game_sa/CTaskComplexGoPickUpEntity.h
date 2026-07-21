/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plugin.h"
#include "PluginBase.h"
#include "CTaskComplex.h"

class CTaskComplexGoPickUpEntity : public CTaskComplex
{
protected:
	CTaskComplexGoPickUpEntity(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
	CTaskComplexGoPickUpEntity(CEntity* pEntity, AssocGroupId nAnimGroup);
	//virtual ~CTaskComplexGoPickUpEntity();

	//virtual CTask* Clone();
	//virtual int GetTaskType();
	
	//virtual CTask* CreateFirstSubTask(CPed* pPed);
	//virtual CTask* CreateNextSubTask(CPed* pPed);
	//virtual CTask* ControlSubTask(CPed* pPed);

	CEntity* GetEntityBeingHeld() { return m_pHoldEntity; }
	//virtual void Serialize();




	//static CTask* CreateTask();

	int entType; 
	CEntity* pTargetEntity;
	AssocGroupId m_nAnimGroup;
	CTask* task;


//private:
public:
	CEntity* m_pHoldEntity;
	CVector m_vecAttachOffset;
	CVector m_vecGoTargetOffset;

	uint32 m_nStartTime;
	//static uint32 MAX_GOTO_TIME;
	//static uint32 MAX_PICKUP_TIME;

	//AssocGroupId m_nAnimGroup;
	bool m_bAnimsReferenced;
};