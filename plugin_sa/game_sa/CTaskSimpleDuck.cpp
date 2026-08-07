/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleDuck.h"

CTaskSimpleDuck::CTaskSimpleDuck(uint8 nDuckControl, uint16 nLengthOfDuck, int16 nUseShotsWhizzingEvents)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x691FC0, CTaskSimpleDuck*, uint8, uint16, int16>(this, nDuckControl, nLengthOfDuck, nUseShotsWhizzingEvents);
}

// 0x692390
CTask* CTaskSimpleDuck::RestartTask(CPed* pPed)
{
    return plugin::CallMethodAndReturn<CTask*, 0x692390, CTaskSimpleDuck*, CPed*>(this, pPed);
}

// 0x692340
bool CTaskSimpleDuck::AbortBecauseOfOtherDuck(CPed* pPed)
{
    return plugin::CallMethodAndReturn<bool, 0x692340, CTaskSimpleDuck*, CPed*>(this, pPed);
}

// 0x6923F0
bool CTaskSimpleDuck::ControlDuckMove(CVector2D vecMove)
{
    return plugin::CallMethodAndReturn<bool, 0x6923F0, CTaskSimpleDuck*, CVector2D>(this, vecMove);
}

// inlined (can't reverse this tho, so possible reimplementation) - 0x62CE65
void CTaskSimpleDuck::PassiveControlDuck()
{
    m_bIsInControl = true;
}

// 0x6924B0
void CTaskSimpleDuck::ForceStopMove()
{
    plugin::CallMethod<0x6924B0, CTaskSimpleDuck*>(this);
}

// unknown (inlined?)
float CTaskSimpleDuck::GetMoveFwdDirection()
{
    plugin::Error("CTaskSimpleDuck::GetMoveFwdDirection - Unknown");
    return 0.0f;
}

// 0x61C3D0
bool CTaskSimpleDuck::StopAimGun() // also known as 'IsTaskInUseByOtherTasks'
{
    return plugin::CallMethodAndReturn<bool, 0x61C3D0, CTaskSimpleDuck*>(this);
}

// 0x61C420
bool CTaskSimpleDuck::StopFireGun()
{
    return plugin::CallMethodAndReturn<bool, 0x61C420, CTaskSimpleDuck*>(this);
}

// 0x6924C0 (unused)
void CTaskSimpleDuck::StartCountDown(uint8 nNumIdleFrames, bool bMax)
{
    plugin::CallMethod<0x6924C0, CTaskSimpleDuck*, uint8, bool>(this, nNumIdleFrames, bMax);
}

// 0x6924F0
bool CTaskSimpleDuck::SetControlType(uint8 nType)
{
    return plugin::CallMethodAndReturn<bool, 0x6924F0, CTaskSimpleDuck*, uint8>(this, nType);
}

// 0x692530
void CTaskSimpleDuck::SetDuckTimer(uint16 nLengthOfDuck)
{
    plugin::CallMethod<0x692530, CTaskSimpleDuck*, uint16>(this, nLengthOfDuck);
}

// 0x692610
bool CTaskSimpleDuck::CanPedDuck(CPed* pPed)
{
    return plugin::CallAndReturn<bool, 0x692610>(pPed);
}

// 0x692550
void CTaskSimpleDuck::DeleteDuckAnimCB(CAnimBlendAssociation* pAnim, void* pData)
{
    plugin::Call<0x692550, CAnimBlendAssociation*, void*>(pAnim, pData);
}

// 0x6939F0
void CTaskSimpleDuck::SetMoveAnim(CPed* pPed)
{
    plugin::CallMethod<0x6939F0, CTaskSimpleDuck*, CPed*>(this, pPed);
}