/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CVehicle;

class PLUGIN_API CBouncingPanel {
public:
    int16 m_nComponentIndex;
    int16 m_nBounceAxis;

    float m_fBounceApplyMult;
    CVector m_vecBounceAngle;
    CVector m_vecBounceTurnSpeed;

    static float &BOUNCE_SPRING_DAMP_MULT; // 0.95
    static float &BOUNCE_SPRING_RETURN_MULT; // 0.1
    static float &BOUNCE_VEL_CHANGE_LIMIT; // 0.1
    static float &BOUNCE_HANGING_DAMP_MULT; // 0.98
    static float &BOUNCE_HANGING_RETURN_MULT; // 0.02

    void ResetPanel();
    void SetPanel(short frameId, short axis, float angleLimit);
    void ProcessPanel(CVehicle* vehicle, RwFrame* frame, CVector arg2, CVector arg3, float arg4, float arg5);
};

VALIDATE_SIZE(CBouncingPanel, 0x20);