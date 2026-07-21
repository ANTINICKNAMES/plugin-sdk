/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"
#include "CRideAnimData.h"

class CQuadBike : public CAutomobile {
protected:
    CQuadBike(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    void          *m_pHandling;
    CRideAnimData  m_rideAnimData;
    float field_9A8;
    int field_9AC;
    int field_9B0;
    int field_9B4;
    unsigned char  m_nQuadFlags;
private:
    char _pad1[3];
public:

    CQuadBike(int modelIndex, unsigned char createdBy);
};

VALIDATE_SIZE(CQuadBike, 0x9BC);

extern bool& bDoQuadDamping; // true
extern float& QUAD_HBSTEER_ANIM_MULT; // -0.4
extern CVector& vecQuadResistance; // { 0.995, 0.995, 1.0 }