/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CDecision.h"
#include "CDecisionMaker.h"
#include "eEventType.h"
#include "eTaskType.h"

class CPed;
class CPedGroup;

enum class PLUGIN_API eDecisionMakerType : int {
    UNKNOWN = -1,

    DECISION_MAKER_PED_GROUPMEMBER = 0,
    DECISION_MAKER_PED_COP,
    DECISION_MAKER_PED_RANDOM1,
    DECISION_MAKER_PED_RANDOM2,
    DECISION_MAKER_PED_RANDOM3,
    DECISION_MAKER_PED_FIREMAN,
    DECISION_MAKER_PED_EMPTY,
    DECISION_MAKER_PED_INDOORS,

    DECISION_MAKER_GROUP_RANDOM_AGGRESSIVE,
    DECISION_MAKER_GROUP_RANDOM_PASSIVE,

    DECISION_MAKER_MISSION0,
    DECISION_MAKER_MISSION1,
    DECISION_MAKER_MISSION2,
    DECISION_MAKER_MISSION3,
    DECISION_MAKER_MISSION4,
    DECISION_MAKER_MISSION5,
    DECISION_MAKER_MISSION6,
    DECISION_MAKER_MISSION7,
    DECISION_MAKER_MISSION8,
    DECISION_MAKER_MISSION9,

    MAX_NUM_DECISION_MAKER_TYPES,
    COUNT_GAME_DM = DECISION_MAKER_MISSION0, // Number of built-in decision makers
};

enum {
    DEFAULT_DECISION_MAKER = -1,
    PLAYER_DECISION_MAKER = -2
};

class CDecisionMakerTypes {
public:
    static constexpr auto NUM_TYPES = 20u;

    static inline auto& ScriptReferenceIndex = *(std::array<unsigned short, NUM_TYPES>*)0xC0AFF4;
    static inline auto& m_IsActive           = *(std::array<bool, NUM_TYPES>*)0xC0B01C;

    static CDecisionMakerTypes* GetInstance(); // get global Decision Maker manager

    eDecisionMakerType AddDecisionMaker(CDecisionMaker* templateDm, eDecisionMakerType dm = eDecisionMakerType::UNKNOWN, bool bDecisionMakerForMission = false);
    void RemoveDecisionMaker(eDecisionMakerType dm);

    void AddEventResponse(eDecisionMakerType dm, eEventType eventType, eTaskType taskId, DecisionChances chances, DecisionContext context);
    void FlushDecisionMakerEventResponse(eDecisionMakerType dm, eEventType eventId);

    eTaskType MakeDecision(CPedGroup* pedGroup, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskId1, eTaskType taskId2, eTaskType taskId3, eTaskType taskId4);
    void MakeDecision(CPed* ped, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskTypeToAvoid1, eTaskType taskTypeToAvoid2, eTaskType taskTypeToAvoid3, eTaskType taskTypeToSeek, bool bUseInGroupDecisionMaker, short& taskType, short& facialTaskType);
    
    void LoadEventIndices();

public:
    int            m_NoOfDecisionMakers;
    CDecisionMaker m_DecisionMakers[(size_t)eDecisionMakerType::MAX_NUM_DECISION_MAKER_TYPES];
    int            m_EventIndices[(size_t)eEventType::MAX_NUM_EVENT_TYPES];
    CDecisionMaker m_DefaultRandomPedDecisionMaker;
    CDecisionMaker m_DefaultMissionPedDecisionMaker;
    CDecisionMaker m_DefaultPlayerPedDecisionMaker;
    CDecisionMaker m_DefaultRandomPedGroupDecisionMaker;
    CDecisionMaker m_DefaultMissionPedGroupDecisionMaker;
};
