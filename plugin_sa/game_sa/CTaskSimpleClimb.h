/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

enum eClimbHeights : char
{
    CLIMB_NOT_READY = 0,
    CLIMB_GRAB,
    CLIMB_PULLUP,
    CLIMB_STANDUP,
    CLIMB_FINISHED,
    CLIMB_VAULT,
    CLIMB_FINISHED_V
};

class PLUGIN_API CTaskSimpleClimb : public CTaskSimple {
protected:
    CTaskSimpleClimb(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bChangeAnimation;
    bool m_bChangePosition;
    bool m_bForceClimb;
    bool m_bInvalidClimb;
    int8 m_nHeightForAnim;
    int8 m_nHeightForPos;
    uint8 m_nSurfaceType;
    int8 m_nFallAfterVault;
    float m_fHandholdHeading;
    CVector m_vecHandholdPos;
    CEntity* m_pClimbEnt;

    int16 m_nGetToPosCounter;
    CAnimBlendAssociation* m_pAnim;

    CTaskSimpleClimb(CEntity* pClimbEnt, const CVector& vecTarget, float fHeading, uint8 nSurfaceType, int8 nHeight, const bool bForceClimb);

    void GetCameraTargetPos(CPed* pPed, CVector& vecTarget);

    static CEntity* TestForClimb(CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType, bool bLaunch);

    static CEntity* ScanToGrab(CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType, bool bLaunch, 
        bool bTestStandup, bool bTestDropOtherSide, CVector* pAbsPos);
    static CEntity* ScanToGrabSectorList(CPtrList& list, CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType, 
        bool bLaunch, bool bTestStandup, bool bTestDropOtherSide);
};

VALIDATE_SIZE(CTaskSimpleClimb, 0x30);
