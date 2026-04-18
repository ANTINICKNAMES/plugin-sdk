/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CTaskTimer.h"
#include "CAttractorScanner.h"
#include "CObjectPotentialCollisionScanner.h"
#include "CVehiclePotentialCollisionScanner.h"
#include "CPedAcquaintanceScanner.h"
#include "CSexyPedScanner.h"
#include "CNearbyFireScanner.h"

// TODO / cpp

class PLUGIN_API CEventScanner {
    enum {
        VEHICLE_POTENTIAL_COLLISION_SCAN = 0,
        BUILDING_POTENTIAL_COLLISION_SCAN,
        OBJECT_POTENTIAL_COLLISION_SCAN,
        PED_POTENTIAL_COLLISION_SCAN,
        ATTRACTOR_SCAN,
        PED_ACQUAINTANCE_SCAN,
        SEXY_PED_SCAN
    };
public:
    int32_t m_startTime;

    
    CVehiclePotentialCollisionScanner m_vehicleCollisionScanner;
    CObjectPotentialCollisionScanner m_objectCollisionScanner;
	CAttractorScanner m_attractorScanner;
	CPedAcquaintanceScanner m_acquaintanceScanner;
	CSexyPedScanner m_sexyPedScanner;
	CNearbyFireScanner m_fireScanner;
};

VALIDATE_SIZE(CEventScanner, 0xD4);