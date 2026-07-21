/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBike.h"
#include "CAnimBlendAssociation.h"

class CBmx : public CBike {
protected:
    CBmx(plugin::dummy_func_t) : CBike(plugin::dummy) {}
public:
    float m_fBunnyHopCharge;
    float field_818;
    float m_fSprintLeanAngle;
    float field_820;
    float m_fPedalAngleL;
    float m_fPedalAngleR;
    float m_fDistanceBetweenWheels;
    float m_fWheelsBalance;
    unsigned char field_834;
    char _pad[3];

    //funcs

    CBmx(int modelIndex, unsigned char createdBy);
 
    void GetFrameOffset(float& arg0, float& arg1);
    void ProcessBunnyHop();

    static void LaunchBunnyHopCB(CAnimBlendAssociation* blendAssoc, void* data); // data is a ptr to CBmx
};

VALIDATE_SIZE(CBmx, 0x838);
