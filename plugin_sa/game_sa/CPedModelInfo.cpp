/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedModelInfo.h"

// 0x4C6D90
void CPedModelInfo::CreateHitColModelSkinned(RpClump* pClump)
{
    plugin::CallMethod<0x4C6D90, CPedModelInfo*, RpClump*>(this, pClump);
}

// 0x4C6F70
CColModel* CPedModelInfo::AnimatePedColModelSkinned(RpClump* pClump)
{
    return plugin::CallMethodAndReturn<CColModel*, 0x4C6F70, CPedModelInfo*, RpClump*>(this, pClump);
}

// 0x4C7170
CColModel* CPedModelInfo::AnimatePedColModelSkinnedWorld(RpClump* pClump)
{
    return plugin::CallMethodAndReturn<CColModel*, 0x4C7170, CPedModelInfo*, RpClump*>(this, pClump);
}