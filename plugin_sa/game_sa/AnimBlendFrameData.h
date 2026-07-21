/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct RpHAnimStdInterpFrame
{
    RpHAnimStdKeyFrame* keyFrame1;
    RpHAnimStdKeyFrame* keyFrame2;
    RtQuat           q;
    RwV3d            t;
};

class PLUGIN_API AnimBlendFrameData {
public:
    RwInt8 Flags;
    CVector        m_vecOffset;

    //class IFrame  *m_pIFrame;
    union {
        RwFrame* frame;
        RpHAnimStdInterpFrame* hanimFrame;
    };

    uint32 boneTag;
};

VALIDATE_SIZE(AnimBlendFrameData, 0x18);
