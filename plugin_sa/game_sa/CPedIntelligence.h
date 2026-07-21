/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CDecisionMakerTypes.h"
#include "CTaskManager.h"
#include "CEventHandler.h"
#include "CEventGroup.h"
#include "CEntityScanner.h"
#include "CPedScanner.h"
#include "CVehicleScanner.h"
#include "CMentalState.h"
#include "CEventScanner.h"
#include "CCollisionEventScanner.h"
#include "CPedStuckChecker.h"
#include "CTaskSimpleUseGun.h"
#include "CTaskSimpleJetpack.h"
#include "CTaskSimpleFight.h"
#include "CTaskSimpleHoldEntity.h"
#include "CTaskSimpleThrowProjectile.h"
#include "CTaskSimpleSwim.h"
#include "CTaskSimpleDuck.h"
#include "CTaskSimpleClimb.h"
#include "CTaskSimpleInAir.h"

class PLUGIN_API CPedIntelligence {
public:
    class CPed*             m_pPed;
    CTaskManager            m_taskManager;
    CEventHandler           m_eventHandler;
    CEventGroup             m_eventGroup;
    eDecisionMakerType      m_iDecisionMakerType;
    eDecisionMakerType      m_iDecisionMakerTypeInGroup;
    float                   m_fHearingRange;
    float                   m_fSeeingRange;
    int                     m_iMaxNumFriendsToInform;
    float                   m_fMaxInformFriendDistance;
    float                   m_fFollowNodeThresholdDistance;
    int8_t                  m_iNextEventResponseSequence;
    uint8_t                 m_iHighestPriorityEventType;
    uint8_t                 m_iHighestPriorityEventPriority;
    char                    field_D3;
    CVehicleScanner         m_vehicleScanner;
    CPedScanner             m_pedScanner;
    CMentalState            m_mentalState;
    char                    field_188;
    CEventScanner           m_eventScanner;
    CCollisionEventScanner  m_collisionEventScanner;
    CPedStuckChecker        m_stuckChecker;
    int                     m_iStaticCounter;
    int                     m_iNumFramesWithoutCollision;
    CVector                 m_vPedPositionAtFirstCollision;
    class CEntity*          m_pInterestingEntities[3];
    
    void SetPedDecisionMakerType(eDecisionMakerType iType);
    eDecisionMakerType GetPedDecisionMakerType() const { return m_iDecisionMakerType; }
    void SetPedDecisionMakerTypeInGroup(eDecisionMakerType iType);
    eDecisionMakerType GetPedDecisionMakerTypeInGroup() const { return m_iDecisionMakerTypeInGroup; }
    void RestorePedDecisionMakerType();

    inline CTaskManager& GetTaskManager() { return m_taskManager; }
    inline void AddTaskPhysResponse(CTask* task, bool bForce);
    inline void AddTaskEventResponseTemp(CTask* task, bool bForce);
    inline void AddTaskEventResponseNonTemp(CTask* task, bool bForce);
    // bForce is unused
    inline void AddTaskPrimary(CTask* pTask, bool bForce) { GetTaskManager().SetTask(pTask, TASK_PRIORITY_PRIMARY, bForce); }
    // bForce is unused
    inline void AddTaskDefault(CTask* pTask, bool bForce) { GetTaskManager().SetTask(pTask, TASK_PRIORITY_DEFAULT, bForce); }
    inline void AddTaskPrimaryMaybeInGroup(CTask* task, bool bAcceptWhenDead);

    inline void ClearTaskEventResponse();

    // 0x4B8600 (?)
    inline void AddTaskSecondaryDuck(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_DUCK); }

    inline void AddTaskSecondarySay(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_SAY); }
    inline void AddTaskSecondaryAttack(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_ATTACK); }

    inline void AddTaskSecondaryFacialComplex(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_FACIAL_COMPLEX); }
    inline void AddTaskSecondaryPartialAnim(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_PARTIAL_ANIM); }
    inline void AddTaskSecondaryIK(CTask* pTask) { GetTaskManager().SetTaskSecondary(pTask, TASK_SECONDARY_IK); }
    inline void AddTaskSecondary(CTask* pTask, int iType) { GetTaskManager().SetTaskSecondary(pTask, iType); }

    inline CTask* GetTaskPhysResponse() { return GetTaskManager().GetTask(TASK_PRIORITY_PHYSICAL_RESPONSE); }

    inline CTask* GetTaskEventResponse() {
        for (int i = TASK_PRIORITY_PHYSICAL_RESPONSE; i < TASK_PRIORITY_PRIMARY; i++) {
            CTask* pTask = GetTaskManager().GetTask(i);
            if (pTask != nullptr)
                return pTask;
        }

        return nullptr;
    }

    inline CTask* GetTempTaskEventResponse() { return GetTaskManager().GetTask(TASK_PRIORITY_EVENT_RESPONSE_TEMP); }

    inline CTask* GetNonTempTaskEventResponse() {
        CTask* pTask = GetTaskManager().GetTask(TASK_PRIORITY_PHYSICAL_RESPONSE);

        // didn't came up with anything good this time...

        if (pTask == nullptr)
        {
            pTask = GetTaskManager().GetTask(TASK_PRIORITY_EVENT_RESPONSE_NONTEMP);
        }

        if (pTask == nullptr)
        {
            pTask = GetTaskManager().GetTask(TASK_PRIORITY_PRIMARY);
        }

        return pTask;
    }

    inline CTask* GetTaskPrimary() { return GetTaskManager().GetTask(TASK_PRIORITY_PRIMARY); }
    inline CTask* GetTaskDefault() { return GetTaskManager().GetTask(TASK_PRIORITY_DEFAULT); }

    inline CTask* GetTaskSecondaryDuck() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_DUCK); }

    inline CTask* GetTaskSecondarySay() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_SAY); }
    inline CTask* GetTaskSecondaryAttack() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_ATTACK); }


    inline CTask* GetTaskSecondaryFacialComplex() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_FACIAL_COMPLEX); }
    inline CTask* GetTaskSecondaryPartialAnim() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_PARTIAL_ANIM); }
    inline CTask* GetTaskSecondaryIK() { return GetTaskManager().GetTaskSecondary(TASK_SECONDARY_IK); }
    inline CTask* GetTaskSecondary(int iType) { return GetTaskManager().GetTaskSecondary(iType); }

    inline CTask* GetTaskActive() { return GetTaskManager().GetActiveTask(); }
    inline CTask* GetTaskActiveSimplest() { return GetTaskManager().GetSimplestActiveTask(); }


    inline CTask* GetTaskPrimarySimplest() { return GetTaskPrimary()->GetSubTask(); }
    inline CTask* GetTaskDefaultSimplest() { return GetTaskDefault()->GetSubTask(); }

    inline CTask* FindTaskActiveByType(int iType) { return GetTaskManager().FindActiveTaskByType(iType); }

    inline CTask* FindTaskEventResponseByType(int iType) {
        // may be wrong
        for (; CTask * pTask = GetTaskEventResponse(); pTask = pTask->GetSubTask()) {
            if (pTask->GetId() == iType) {
                return pTask;
            }
        }
        return nullptr;
    }

    inline CTask* FindTaskPrimaryByType(int iType) {
        // may be wrong
        for (; CTask * pTask = GetTaskPrimary(); pTask = pTask->GetSubTask()) {
            if (pTask->GetId() == iType) {
                return pTask;
            }
        }
        return nullptr;
    }

    inline CTask* FindTaskDefaultByType(int iType) {
        // may be wrong
        for (; CTask * pTask = GetTaskDefault(); pTask = pTask->GetSubTask()) {
            if (pTask->GetId() == iType) {
                return pTask;
            }
        }
        return nullptr;
    }

    CTask* FindTaskByType(int iType);

    inline bool HasTaskSecondary(CTask* pTask) { GetTaskManager().HasTaskSecondary(pTask); }

    CTaskSimpleFight* GetTaskFighting();
    CTaskSimpleUseGun* GetTaskUseGun();
    CTaskSimpleThrowProjectile* GetTaskThrow();
    CTaskSimpleHoldEntity* GetTaskHold(bool bOnlyReturnSecondaryTask);
    CTaskSimpleSwim* GetTaskSwim();
    CTaskSimpleDuck* GetTaskDuck(bool bSecondaryVersionOnly);
    CTaskSimpleJetPack* GetTaskJetPack();
    CTaskSimpleInAir* GetTaskInAir();
    CTaskSimpleClimb* GetTaskClimb();
    bool GetUsingParachute();

    int* GetMoveStateFromGoToTask();
    
    void SetTaskDuckSecondary(uint16_t nTime);
    void ClearTaskDuckSecondary();

    void ClearTasks(bool bClearMainTask, bool bClearSecondaryTask);
    void FlushImmediately(bool bRestartDefaultTasks);

    inline CEvent* AddEvent(CEvent& rEvent, bool bForcePersistence) { return GetEventGroup().Add(rEvent, bForcePersistence); }
    inline void RemoveEvent(CEvent* pEvent) { GetEventGroup().Remove(pEvent); }
    inline bool HasEventOfType(CEvent* pEvent) { return GetEventGroup().HasEventOfType(pEvent); }
    inline CEvent* GetEventOfType(int iEventType) { return GetEventGroup().GetEventOfType(iEventType); }
    inline bool HasEvent(CEvent* pEvent) { return GetEventGroup().HasEvent(pEvent); }
    inline void TickEvents() { return GetEventGroup().TickEvents(); }
    inline void RemoveInvalidEvents(bool bEverythingButScriptEvents) { return GetEventGroup().RemoveInvalidEvents(bEverythingButScriptEvents); }
    inline void ReorganiseEvents() { return GetEventGroup().Reorganise(); }
    inline CEvent* GetHighestPriorityEvent() { return GetEventGroup().GetHighestPriorityEvent(); }
    //inline int GetCurrentEventType() { return GetEventGroup().; }
    //inline CEvent* GetCurrentEvent() { return GetEventGroup().; }

    static bool AreFriends(CPed const& ped1, CPed const& ped2);
    bool IsFriendlyWith(CPed const& ped);
    bool IsThreatenedBy(CPed const& ped);
    bool Respects(CPed const& ped);

    bool IsInACarOrEnteringOne();

    bool IsRespondingToEvent(int event);

    inline void ResetStaticCounter() { m_iStaticCounter = 0; }
    inline int GetStaticCounter() { return m_iStaticCounter; }

    inline CMentalState& GetMentalState() { return m_mentalState; }

    // todo
    CEntity** GetNearbyPeds() { return GetPedScanner().m_entities; }
    int GetMaxNumPedsInRange() const { return 16; }
    //CPed* GetClosestPedInRange() const;
    //CEntity** GetNearbyVehicles();
    //int GetMaxNumVehiclesInRange() const;
    //CVehicle* GetClosestVehicleInRange() const;

    inline CCollisionEventScanner* GetCollisionScanner() { return &m_collisionEventScanner; }
    inline CEventScanner* GetEventScanner() { return &m_eventScanner;  }

    inline void ActivateEffectScanner() { m_eventScanner.m_attractorScanner.m_bActivated = true; }
    inline void DeActivateEffectScanner() { m_eventScanner.m_attractorScanner.m_bActivated = false; }
    C2dEffect* GetEffectInUse();
    void SetEffectInUse(C2dEffect* pEffect);
    bool IsAttractorScannerActivated() { return m_eventScanner.m_attractorScanner.m_bActivated; }
    // unknown
    //void PauseEffectScanner(int32_t bPause) { m_eventScanner.m_attractorScanner }

    // unknown
    // void SetPedThreatScannerActivationState(const bool bActivatedEverywhere, const bool bActivatedInVehicle, const bool bActivatedDuringScriptCommands);

    void SetHearingRange(float fRange);
    void SetSeeingRange(float fRange);
    bool IsInHearingRange(CVector const& vTarget);
    bool IsInSeeingRange(CVector const& vTarget);
    //bool IsInSeeingRange(CEntity* entity);
    float GetSenseRange() { return m_fSeeingRange; }
    float CanSeeEntityWithLights(CEntity const* pTargetEnt, bool bHasSeenEnt);

    // unknown
    //void SetInformRespectedFriends(const float, const int);
    int GetMaxNumRespectedFriendsToInform() { return m_iMaxNumFriendsToInform; }
    float GetMaxInformRespectedFriendDistance() { return m_fMaxInformFriendDistance; }
    bool FindRespectedFriendInInformRange();

    void ProcessFirst();
    void Process();
    void ProcessAfterProcCol();
    void ProcessAfterPreRender();
    void ProcessEventHandler();

    void SetFollowNodeThresholdDistance(const float fDistance) { m_fFollowNodeThresholdDistance = fDistance; }
    float GetFollowNodeThresholdDistance() { return m_fFollowNodeThresholdDistance; }

    void SetNextEventResponseSequence(const int iNextEvent) { m_iNextEventResponseSequence = iNextEvent; }
    int GetNextEventResponseSequence() { return m_iNextEventResponseSequence; }

    bool IsPedGoingSomewhereOnFoot();
    void FlushIntelligence();
    
    bool TestForStealthKill(CPed* pTargetPed, bool bAboutToDoKill);
    
    void RecordEventForScript(int iEventType, int iEventPriority);
    uint8_t GetRecordedEventForScript() { return m_iNextEventResponseSequence; }

    void StopTimers(const CEvent* pEvent) { GetTaskManager().StopTimers(pEvent); }

    bool HasInterestingEntites();
    bool IsInterestingEntity(CEntity* pEntity);
    void LookAtInterestingEntities();
    inline void AddInterestingEntity(CEntity* pEntity);
    inline bool RemoveInterestingEntity(CEntity* pEntity);
    void RemoveAllInterestingEntities();

    // unknown
    //static void SortAndStaggerAllPedsEventScannerTimers();

    bool IsPedGoingForCarDoor();

    static void operator delete(void* pVoid);

    void ProcessStaticCounter();

    inline CEventHandler& GetEventHandler()        { return m_eventHandler; }
    inline CEventGroup& GetEventGroup()            { return m_eventGroup; }
    inline CPedScanner& GetPedScanner()            { return m_pedScanner; }
    inline CVehicleScanner& GetVehicleScanner()    { return m_vehicleScanner; }
    CEntity** GetPedEntities()                     { return m_pedScanner.m_entities; }     // 0x4893E0
    inline CEntity* GetPedEntity(uint32_t index)   { return GetPedEntities()[index]; }
    inline CEntity** GetVehicleEntities()          { return m_vehicleScanner.m_entities; }
    inline auto& GetStuckChecker(this auto&& self) { return self.m_pedStuckChecker; }

    CTask* GetActivePrimaryTask();
};

VALIDATE_SIZE(CPedIntelligence, 0x294);
