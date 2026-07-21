/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "tHandlingData.h"
#include "CVector.h"

struct PLUGIN_API tFlyingHandlingData {
    tVehicleType nVehicleID;

    float fThrust;
    float fThrustFallOff;

    float fYawMult;
    float fYawStabilise;
    float fSideSlipMult;

    float fRollMult;
    float fRollStabilise;

    float fPitchMult;
    float fPitchStabilise;

    float fFormLiftMult;
    float fAttackLiftMult;

    float fGearUpResMult;
    float fGearDownLiftMult;
    float fWindMult;

    float fMoveRes;
    CVector vecTurnRes;

    CVector vecSpeedRes;
};

VALIDATE_SIZE(tFlyingHandlingData, 0x58);
