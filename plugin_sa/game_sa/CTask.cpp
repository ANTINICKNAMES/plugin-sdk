/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTask.h"

void *CTask::operator new(unsigned int size)
{
	return ((CTask *(__cdecl *)(unsigned int))0x61A5A0)(size);
}

void CTask::operator delete(void *object)
{
	((void (__cdecl *)(void *))0x61A5B0)(object);
}

CTask *CTask::Clone()
{
	return ((CTask *(__thiscall *)(CTask *))plugin::GetVMT(this, 1))(this);
}

CTask *CTask::GetSubTask()
{
	return ((CTask *(__thiscall *)(CTask *))plugin::GetVMT(this, 2))(this);
}

bool CTask::IsSimple()
{
	return ((bool (__thiscall *)(CTask *))plugin::GetVMT(this, 3))(this);
}

eTaskType CTask::GetId()
{
	return ((eTaskType (__thiscall *)(CTask *))plugin::GetVMT(this, 4))(this);
}

void CTask::StopTimer(CEvent* pEvent)
{
	((void (__thiscall *)(CTask *, CEvent *))plugin::GetVMT(this, 5))(this, pEvent);
}

bool CTask::MakeAbortable(class CPed *ped, eAbortPriority priority, CEvent* pEvent)
{
	return ((bool (__thiscall *)(CTask *, CPed *, int, CEvent*))plugin::GetVMT(this, 6))(this, ped, priority, pEvent);
}

// 0x61A4B0
bool CTask::IsTaskPtr(void* pData) {
	return plugin::CallAndReturn<bool, 0x61A4B0, void*>(pData);
}

// 0x61A360
bool8 CTask::IsGoToTask(CTask* pTask) {
	return plugin::CallAndReturn<bool8, 0x61A360, CTask*>(pTask);
}