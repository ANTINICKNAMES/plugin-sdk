/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CTickCounter.h"

class CEntity;
class CPed;

static constexpr size_t MAX_NUM_ENTITIES = 16;

class PLUGIN_API CEntityScanner {
protected:
    //void *vtable;
public:
    CTickCounter m_timer;
    CEntity* m_entities[16]; // MAX_NUM_ENTITIES
    CEntity* m_pClosestEntity;

    void Clear();
    virtual void ScanForEntitiesInRange(eRepeatSectorList iScanType, CPed& ped);

    // unused
    CTickCounter* GetTimer() { return &m_timer; }
    CEntity* GetClosestEntity() { return m_pClosestEntity; }
};

VALIDATE_SIZE(CEntityScanner, 0x50);
