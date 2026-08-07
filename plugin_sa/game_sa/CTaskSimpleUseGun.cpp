/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleUseGun.h"

CTaskSimpleUseGun::CTaskSimpleUseGun(CEntity *pTargetEntity, CVector vecTarget, int8 nCommand, int16 nBurstLength, bool bAimImmediate)    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61DE60, CTaskSimpleUseGun*, CEntity*, CVector, int8, int16, bool>(this, pTargetEntity, vecTarget, nCommand, nBurstLength, bAimImmediate);
}

// 0x624DC0
void CTaskSimpleUseGun::Reset(CPed* pPed, CEntity* pTargetEntity, CVector vecTarget, int8 nCommand, int16 nBurstLength)
{
    plugin::CallMethod<0x624DC0, CTaskSimpleUseGun*, CPed*, CEntity*, CVector, int8, int16>(this, pPed, pTargetEntity, vecTarget, nCommand, nBurstLength);
}

bool CTaskSimpleUseGun::ProcessPed(CPed* pPed)
{
    return ((bool(__thiscall*)(CTaskSimpleUseGun*, CPed*))plugin::GetVMT(this, 7))(this, pPed);
}

// 0x61E040
bool CTaskSimpleUseGun::ControlGun(CPed* pPed, CEntity* pTargetEntity, int8 nCommand)
{
    return plugin::CallMethodAndReturn<bool, 0x61E040, CTaskSimpleUseGun*, CPed*, CEntity*, int8>(this, pPed, pTargetEntity, nCommand);
}

// 0x61E0A0
bool CTaskSimpleUseGun::PlayerPassiveControlGun()
{
    return plugin::CallMethodAndReturn<bool, 0x61E0A0, CTaskSimpleUseGun*>(this);
}

// 0x61E0C0
bool CTaskSimpleUseGun::ControlGunMove(CVector2D* pMoveVec)
{
    return plugin::CallMethodAndReturn<bool, 0x61E0C0, CTaskSimpleUseGun*, CVector2D*>(this, pMoveVec);
}

bool CTaskSimpleUseGun::SetPedPosition(CPed* pPed)
{
    return ((bool(__thiscall*)(CTaskSimpleUseGun*, CPed*))plugin::GetVMT(this, 8))(this, pPed);
}

// 0x61E160
void CTaskSimpleUseGun::StartCountDown(uint8 nNumIdleFrames, bool bMax)
{
    plugin::CallMethod<0x61E160, CTaskSimpleUseGun*, uint8, bool>(this, nNumIdleFrames, bMax);
}

// 0x61E190
void CTaskSimpleUseGun::ClearAnim(CPed* pPed)
{
    plugin::CallMethod<0x61E190, CTaskSimpleUseGun*, CPed*>(this, pPed);
}

// 0x61E200
bool CTaskSimpleUseGun::RequirePistolWhip(CPed* pPed, CEntity* pTargetEnt)
{
    return plugin::CallAndReturn<bool, 0x61E200, CPed*, CEntity*>(pPed, pTargetEnt);
}

// 0x61DFA0
void CTaskSimpleUseGun::AbortIK(CPed* pPed)
{
    plugin::CallMethod<0x61DFA0, CTaskSimpleUseGun*, CPed*>(this, pPed);
}

// 0x61F3A0
void CTaskSimpleUseGun::FinishGunAnimCB(CAnimBlendAssociation* pAnim, void* pData)
{
    plugin::Call<0x61F3A0, CAnimBlendAssociation*, void*>(pAnim, pData);
}

// 0x624F30
void CTaskSimpleUseGun::StartAnim(CPed* pPed)
{
    plugin::CallMethod<0x624F30, CTaskSimpleUseGun*, CPed*>(this, pPed);
}

// 0x61E3F0
void CTaskSimpleUseGun::SetMoveAnim(CPed* pPed)
{
    plugin::CallMethod<0x61E3F0, CTaskSimpleUseGun*, CPed*>(this, pPed);
}

// 0x61E8E0
void CTaskSimpleUseGun::RemoveStanceAnims(CPed* pPed, float fBlendDelta)
{
    plugin::CallMethod<0x61E8E0, CTaskSimpleUseGun*, CPed*, float>(this, pPed, fBlendDelta);
}

// 0x61EB10
void CTaskSimpleUseGun::FireGun(CPed* pPed, bool bLHand)
{
    plugin::CallMethod<0x61EB10, CTaskSimpleUseGun*, CPed*, bool>(this, pPed, bLHand);
}

// 0x61ED10
void CTaskSimpleUseGun::AimGun(CPed* pPed)
{
    plugin::CallMethod<0x61ED10, CTaskSimpleUseGun*, CPed*>(this, pPed);
}