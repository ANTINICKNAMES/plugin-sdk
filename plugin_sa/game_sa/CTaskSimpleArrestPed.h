/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"

class PLUGIN_API CTaskSimpleArrestPed : public CTaskSimple
{
protected:
	CTaskSimpleArrestPed(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskSimpleArrestPed(CPed* pArrestedPed);
	//virtual ~CTaskSimpleArrestPed();

	//virtual CTask* Clone() const;

	//virtual int GetTaskType() const;
	//virtual bool MakeAbortable(CPed* pPed, const int iPriority, const CEvent* pEvent);

	//virtual bool ProcessPed(CPed* pPed);

	static void FinishAnimArrestPedCB(CAnimBlendAssociation* pAnim, void* pData);

	const CPed* GetTargetPed() { return m_pArrestedPed; } //const;


//private:
public:
	CPed* m_pArrestedPed;
	bool m_bIsFinished;
	CAnimBlendAssociation* m_pAnim;

	void StartAnim(CPed* pPed);
};