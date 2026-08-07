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

class PLUGIN_API CTaskSimpleThrowProjectile : public CTaskSimple {
protected:
    CTaskSimpleThrowProjectile(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bStartThrowFinished;
    bool m_bButtonReleased;

private:
    char pad;

public:
    CAnimBlendAssociation* m_pAnim;

    CEntity* m_pTargetEntity;
    CVector m_vecTargetPos;
    int32 m_nButtonCounter;

    CTaskSimpleThrowProjectile(CEntity* pTargetEntity, CVector vecTargetPos);

    bool ControlThrow(bool bButtonReleased, CEntity* pEntity, CVector* pVecCoords);

    static void FinishAnimThrowProjectileCB(CAnimBlendAssociation* pAnim, void* pData);

    void StartAnim(CPed* pPed);
};

VALIDATE_SIZE(CTaskSimpleThrowProjectile, 0x24);