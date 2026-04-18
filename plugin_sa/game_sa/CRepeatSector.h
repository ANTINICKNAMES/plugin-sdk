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
};

VALIDATE_SIZE(CRepeatSector, 0xC);