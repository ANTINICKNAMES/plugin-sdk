/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedGroupMembership.h"
#include "CPedGroupIntelligence.h"
#include "CVector.h"
#include "CPed.h"
#include "CVehicle.h"

class PLUGIN_API CPedGroup {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedGroup)

public:
    enum
    {
        RANDOM_GROUP = 0,
        MISSION_GROUP
    };

    CPed* m_lastPedRespondedTo;
    bool m_followLeader;

private:
    char _pad5[3];

public:
    CPedGroupMembership m_membership;
    //float m_fSeparationRange; // what the hell is this? It's part of CPedGroupMembership!
    CPedGroupIntelligence m_intelligence;
    int8 m_iGroupCreatedBy;

    SUPPORTED_10US float FindDistanceToFurthestMember();
    SUPPORTED_10US float FindDistanceToNearestMember(CPed **ppOutNearestMember = NULL);
    SUPPORTED_10US void Flush();
    SUPPORTED_10US CPed *GetClosestGroupPed(CPed *ped, float *pOutDistance);
    SUPPORTED_10US bool IsAnyoneUsingCar(CVehicle const *vehicle);
    SUPPORTED_10US void PlayerGaveCommand_Attack(CPed *playerPed, CPed *ped);
    SUPPORTED_10US void PlayerGaveCommand_Gather(CPed *ped);
    SUPPORTED_10US void Process();
    SUPPORTED_10US void RemoveAllFollowers();
    SUPPORTED_10US void Teleport(CVector const *Pos);

    // inlines
    CPedGroupMembership* GetGroupMembership()       { return &m_membership; }
    CPedGroupIntelligence* GetGroupIntelligence()   { return &m_intelligence; }

    void SetGroupCreatedBy(const int i)             { m_iGroupCreatedBy = i; }
    int GetGroupCreatedBy() const                   { return m_iGroupCreatedBy; }
};

VALIDATE_SIZE(CPedGroup, 0x2D4);

#include "meta/meta.CPedGroup.h"
