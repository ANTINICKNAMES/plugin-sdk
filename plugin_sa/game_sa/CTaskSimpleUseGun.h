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
#include "CVector2D.h"
#include "CWeaponInfo.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

enum eGunCommand
{
    GCOMMAND_NONE = 0,
    GCOMMAND_AIM,
    GCOMMAND_FIRE,
    GCOMMAND_FIREBURST,
    GCOMMAND_RELOAD,
    GCOMMAND_PISTOLWHIP,
    GCOMMAND_END_LEISURE,
    GCOMMAND_END_NOW
};

class CTaskSimpleUseGun : public CTaskSimple
{
protected:
    CTaskSimpleUseGun(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bIsInControl;
    bool m_bMoveControl;
    bool m_bFiredGun;
    bool m_bBlockedLOS;

    union
    {
        uint8 m_nFireGunThisFrame;
        struct
        {
            uint8 bRightHand : 1;
            uint8 bLefttHand : 1;
        };
    };

    bool m_bSkipAim;

    int8 m_nNextCommand;   // see eGunCommand
    int8 m_nLastCommand;	// see eGunCommand

private:
    char _pad[3];

public:
    CVector2D m_vecMoveCommand;

    CEntity* m_pTargetEntity;
    CVector m_vecCoords;

    CAnimBlendAssociation* m_pAnim;

    CWeaponInfo* m_pWeaponInfo;
    int16 m_nBurstLength;
    int16 m_nBurstShots;

    uint8 m_nCountDownFrames;
    bool m_armIkInUse;
    bool m_lookIkInUse;

    bool m_bAimImmediate;

    CTaskSimpleUseGun(CEntity* pTargetEntity, CVector vecTarget = {}, int8 nCommand = GCOMMAND_AIM, int16 nBurstLength = 1, bool bAimImmediate = false);

    void Reset(CPed* pPed, CEntity* pTargetEntity, CVector vecTarget, int8 nCommand, int16 nBurstLength);

    virtual bool ProcessPed(CPed* pPed);
    bool ControlGun(CPed* pPed, CEntity* pTargetEntity, int8 nCommand);
    bool PlayerPassiveControlGun();
    bool ControlGunMove(CVector2D* pMoveVec);

    virtual bool SetPedPosition(CPed* pPed);

    void StartCountDown(uint8 nNumIdleFrames, bool bMax);
    void ClearAnim(CPed* pPed);

    static bool RequirePistolWhip(CPed* pPed, CEntity* pTargetEnt);

    void AbortIK(CPed* pPed);
    static void FinishGunAnimCB(CAnimBlendAssociation* pAnim, void* pData);

    void StartAnim(CPed* pPed);
    void SetMoveAnim(CPed* pPed);
    void RemoveStanceAnims(CPed* pPed, float fBlendDelta);

    void FireGun(CPed* pPed, bool bLHand);
    void AimGun(CPed* pPed);

    // inlines

    CEntity* GetTargetEntity() const    { return m_pTargetEntity; }
    CWeaponInfo* GetWeaponInfo()        { return m_pWeaponInfo; }
    int8 GetCurrentCommand() const      { return m_nLastCommand; }
    bool GetDoneFiring() const          { return m_bFiredGun; }
    bool GetIsFiring() const            { return m_nLastCommand == GCOMMAND_FIRE || m_nLastCommand == GCOMMAND_FIREBURST; }
    bool GetIsAiming() const            { return m_nLastCommand == GCOMMAND_AIM; }
    bool GetIsReloading() const         { return m_nLastCommand == GCOMMAND_RELOAD; }
    bool GetIsFinished() const          { return m_bIsFinished; }
    bool GetSkipAim() const             { return m_bSkipAim; }
    bool IsLineOfSightBlocked()         { return m_bBlockedLOS; }
    void SetLineOfSightBlocked(bool b)  { m_bBlockedLOS = b; }

    void SetBurstLength(int16 length)   { m_nBurstLength = length; }

    CAnimBlendAssociation* GetAnim()    { return m_pAnim; }
};

VALIDATE_SIZE(CTaskSimpleUseGun, 0x3C);

