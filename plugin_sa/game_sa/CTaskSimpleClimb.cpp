/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleClimb.h"

// int8 nHeight : eClimbHeights
CTaskSimpleClimb::CTaskSimpleClimb(CEntity* pClimbEnt, const CVector& vecTarget, float fHeading, uint8 nSurfaceType, int8 nHeight, const bool bForceClimb)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x67A110, CTaskSimpleClimb*, CEntity*, const CVector&, float, uint8, int8, const bool>
        (this, pClimbEnt, vecTarget, fHeading, nSurfaceType, nHeight, bForceClimb);
}


// 0x67A390
void CTaskSimpleClimb::GetCameraTargetPos(CPed* pPed, CVector& vecTarget)
{
    plugin::CallMethod<0x67A390, CTaskSimpleClimb*, CPed*, CVector&>(this, pPed, vecTarget);
}


// 0x6803A0
CEntity* CTaskSimpleClimb::TestForClimb(CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType, bool bLaunch)
{
    return plugin::CallAndReturn<CEntity*, 0x6803A0, CPed*, CVector&, float&, uint8&, bool>(pPed, vecTargetPos, fGrabHeading, nSurfaceType, bLaunch);
}


// 0x67FD30
CEntity* CTaskSimpleClimb::ScanToGrab(CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType, bool bLaunch,
    bool bTestStandup, bool bTestDropOtherSide, CVector* pAbsPos)
{
    return plugin::CallAndReturn<CEntity*, 0x67FD30, CPed*, CVector&, float&, uint8&, bool>
        (pPed, vecTargetPos, fGrabHeading, nSurfaceType, bLaunch, bTestStandup, bTestDropOtherSide, pAbsPos);
}


// 0x67DE10
CEntity* CTaskSimpleClimb::ScanToGrabSectorList(CPtrList& list, CPed* pPed, CVector& vecTargetPos, float& fGrabHeading, uint8& nSurfaceType,
    bool bLaunch, bool bTestStandup, bool bTestDropOtherSide)
{
    return plugin::CallAndReturn<CEntity*, 0x67DE10, CPtrList&, CPed*, CVector&, float&, uint8&, bool, bool, bool>
        (list, pPed, vecTargetPos, fGrabHeading, nSurfaceType, bLaunch, bTestStandup, bTestDropOtherSide, bTestDropOtherSide);
}