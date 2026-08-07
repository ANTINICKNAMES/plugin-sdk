/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleThrowProjectile.h"


CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile(CEntity* pTargetEntity, CVector vecTargetPos) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61F660, CTaskSimpleThrowProjectile*, CEntity*, CVector>(this, pTargetEntity, vecTargetPos);
}

// 0x61F810
bool CTaskSimpleThrowProjectile::ControlThrow(bool bButtonReleased, CEntity* pEntity, CVector* pVecCoords)
{
    return plugin::CallMethodAndReturn<bool, 0x61F810, CTaskSimpleThrowProjectile*, bool, CEntity*, CVector*>(this, bButtonReleased, pEntity, pVecCoords);
}

// 0x61F890
void CTaskSimpleThrowProjectile::FinishAnimThrowProjectileCB(CAnimBlendAssociation* pAnim, void* pData)
{
    plugin::Call<0x61F890, CAnimBlendAssociation*, void*>(pAnim, pData);
}

// 0x6259E0
void CTaskSimpleThrowProjectile::StartAnim(CPed* pPed)
{
    plugin::CallMethod<0x6259E0, CTaskSimpleThrowProjectile*, CPed*>(this, pPed);
}