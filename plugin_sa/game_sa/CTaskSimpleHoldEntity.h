/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlock.h"
#include "AnimManagerData.h" //#include "eAnimations.h"

class PLUGIN_API CTaskSimpleHoldEntity : public CTaskSimple {
protected:
    CTaskSimpleHoldEntity(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CTaskSimpleHoldEntity(CEntity* pEntity, const CVector* pVecOffset, uint8 nBone, uint8 nOrientateFlags, AnimationId nAnimId, AssocGroupId nAnimGroup, bool bDontDropWhenAnimDone);
    CTaskSimpleHoldEntity(CEntity* pEntity, const CVector* pVecOffset, uint8 nBone, uint8 nOrientateFlags, const char* pAnimName, const char* pAnimGroupName, int32 nFlags);
    CTaskSimpleHoldEntity(CEntity* pEntity, const CVector* pVecOffset, uint8 nBone, uint8 nOrientateFlags, CAnimBlock* pAnimBlock, CAnimBlendHierarchy* pAnimHierarchy, int32 nFlags);

    virtual CTask* Clone();

    //CTaskSimpleHoldEntity* pClone;

    virtual int GetTaskType();
    virtual bool MakeAbortable(CPed* pPed, const int iPriority, const CEvent* pEvent);


    virtual bool ProcessPed(CPed* pPed);

    virtual bool SetPedPosition(CPed* pPed);

    void ReleaseEntity();
    void DropEntity(CPed* pPed, bool bAtSpeed);
    void PlayAnim(AnimationId nAnimId, AssocGroupId nAnimGroup);
    static void FinishAnimHoldEntityCB(CAnimBlendAssociation* pAnim, void* pData);
    CEntity* GetEntityBeingHeld() { return m_pHoldEntity; }
    bool GetIsAnimPlaying();
    bool GetIsFinished();
    bool CanThrowEntity();
    uint8 GetBoneId();
    void ChoosePutDownHeight(CPed* pPed);
public:
    CEntity*               m_pHoldEntity;
    CVector                m_vecAttachOffset;

    uint8                  m_nBoneId; // see ePedNode
    uint8                  m_nOrientateFlags;   // See eHoldEntityBoneFlags

    bool                   field_1A[2];

    float                  m_fHeadingOffset;

    AnimationId            m_nAnimId;
    AssocGroupId           m_nAnimGroup;

    int32                  m_nAnimFlags; // see eAnimationFlags
    CAnimBlock*            m_pAnimBlock;
    CAnimBlendHierarchy*   m_pAnimHierarchy; // If set, m_animID and m_groupID are ignored in StartAnim method

    bool                   m_bIsFinished;
    bool                   m_bIsFirstTime;
    bool                   m_bDontDropWhenAnimDone;

    bool                   field_37;

    CAnimBlendAssociation* m_pAnim;
};

VALIDATE_SIZE(CTaskSimpleHoldEntity, 0x3C);
