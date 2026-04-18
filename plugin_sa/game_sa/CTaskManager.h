/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"
#include "CTask.h"

enum ePrimaryTasks //array indexes
{
    TASK_PRIORITY_PHYSICAL_RESPONSE = 0,
    TASK_PRIORITY_EVENT_RESPONSE_TEMP = 1,
    TASK_PRIORITY_EVENT_RESPONSE_NONTEMP = 2,
    TASK_PRIORITY_PRIMARY = 3,
    TASK_PRIORITY_DEFAULT = 4,
    TASK_PRIORITY_MAX
};

enum eSecondaryTasks //array indexes
{
    TASK_SECONDARY_ATTACK = 0,                // want duck to be after attack
    TASK_SECONDARY_DUCK = 1,                  // because attack controls ducking movement
    TASK_SECONDARY_SAY = 2,
    TASK_SECONDARY_FACIAL_COMPLEX = 3,
    TASK_SECONDARY_PARTIAL_ANIM = 4,
    TASK_SECONDARY_IK = 5,
    TASK_SECONDARY_MAX
};

class PLUGIN_API CTaskManager {
public:
    CTask* m_tasks[5];
    CTask* m_tasksSecondary[6];

    class CPed *m_pPed;
    
    CTaskManager(CPed* ped);
    ~CTaskManager();

    void SetTask(CTask* task, int iPriority, bool bForceNewTask);

    CTask* GetTask(int iType);


    CTask* GetActiveTask();

    CTask* GetSimplestActiveTask();

    CTask* GetSimplestTask(int taskIndex);


    CTask* FindActiveTaskByType(int iTaskType);

    CTask* FindTaskByType(int iPriority, int iTaskType);

    void SetTaskSecondary(CTask* pTaskSecondary, int iType);
    CTask* GetTaskSecondary(int taskIndex);
    bool HasTaskSecondary(CTask const* task);

    void ClearTaskEventResponse();

    void ManageTasks();

    void Flush();
    void FlushImmediately();


    static CTask* GetSimplestTask(CTask* task);


    void StopTimers(const CEvent* pEvent);


    void AddSubTasks(CTask* task);

    void SetNextSubTask(CTask* task);

    void ParentsControlChildren(CTask* task);
};

VALIDATE_SIZE(CTaskManager, 0x30);