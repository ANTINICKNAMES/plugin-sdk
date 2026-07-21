/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVector.h"
#include "FxSystem_c.h"

enum eSwimState : unsigned short
{
    SWIM_TREAD,
    SWIM_SPRINT,
    SWIM_SPRINTING,
    SWIM_DIVE_UNDERWATER,
    SWIM_UNDERWATER_SPRINTING,
    SWIM_BACK_TO_SURFACE
};

class CPed;

class PLUGIN_API CTaskSimpleSwim : public CTaskSimple {
protected:
    CTaskSimpleSwim(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bAddedIdleAnim;
    bool m_bAnimsReferenced;

    int16 m_nSwimState;
    AnimationId m_nSwimAnim;
    float m_fControlSpeed;
    CVector m_vecTargetPos;
    CPed* m_pTargetPed;

    float m_fDiveAngle;
    float m_fRollAngle;

    float m_fPitchTorso;
    float m_fRollTorso;

    float m_fDiveSurfaceSpeed;

    CEntity* m_pClimbEnt;
    CVector m_vecEdge;
    float m_fEdgeHeading;
    uint8 m_nEdgeSurfaceType;

private:
    char _pad[3];
public:
    float fDistanceOffset; // initialized with 0.0f
    
    float m_fStopTimer; // and used  for internal calculations
    uint32 m_nSwimTimer;

    FxSystem_c* m_pFxSys;
    bool8 m_playedDiveSplash;
    
    char pad2[3];
    
    CTaskSimpleSwim(CVector const* pPosn, CPed* pPed);
};

VALIDATE_SIZE(CTaskSimpleSwim, 0x64);
