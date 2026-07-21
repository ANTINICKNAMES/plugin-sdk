/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API tTransmissionGear
{
    float fMaxVelocity;
    float fChangeUpVelocity;
    float fChangeDownVelocity;
};

VALIDATE_SIZE(tTransmissionGear, 0xC);