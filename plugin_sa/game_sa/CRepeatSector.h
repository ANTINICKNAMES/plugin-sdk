/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPtrListDoubleLink.h"

enum eRepeatSectorList {
    VEHICLE_SCAN = 0,
    PED_SCAN = 1,
    OBJECT_SCAN = 2
};

class PLUGIN_API CRepeatSector {
public:
    CPtrListDoubleLink m_lists[3];

    CPtrListDoubleLink* GetPtrListArray() { return m_lists; }
    CPtrListDoubleLink& GetOverlapVehiclePtrList() { return m_lists[VEHICLE_SCAN]; }
    CPtrListDoubleLink& GetOverlapPedPtrList() { return m_lists[PED_SCAN]; }
    CPtrListDoubleLink& GetOverlapObjectPtrList() { return m_lists[OBJECT_SCAN]; }
};

VALIDATE_SIZE(CRepeatSector, 0xC);