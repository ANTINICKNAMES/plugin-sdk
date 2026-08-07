/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CWanted.h"
#include "CPedClothesDesc.h"
#include "CVector.h"
#include "CVector2D.h"

class CEntity;
class CPed;
class CCopPed;

class PLUGIN_API CPlayerPedData {
public:
    CWanted* m_Wanted;
    CPedClothesDesc* m_pClothes;

    CCopPed* m_ArrestingOfficer;

    CVector2D m_vecFightMovement;
    float m_moveBlendRatio;
    float m_fSprintEnergy;
    float m_fSprintControlCounter;

    int8 m_nChosenWeapon;
    uint8 m_nCarDangerCounter;

private:
    char _pad0[2];

public:
    int32 m_nStandStillTimer;
    uint32 m_nHitAnimDelayTimer;
    float m_fAttackButtonCounter;
    CAutomobile* m_pDangerCar;

    /*
    unsigned int m_bStoppedMoving : 1;
    unsigned int m_bAdrenaline : 1;
    unsigned int m_bHaveTargetSelected : 1;             // Needed to work out whether we lost target this frame
    unsigned int m_bFreeAiming : 1;
    unsigned int m_bCanBeDamaged : 1;
    unsigned int m_bAllMeleeAttackPtsBlocked : 1;       // if all of m_pMeleeAttackers[] is blocked by collision, just attack straight ahead
    unsigned int m_bJustBeenSnacking : 1;               // If this bit is true we have just bought something from a vending machine
    unsigned int m_bRequireHandleBreath : 1;
    unsigned int m_bGroupStuffDisabled : 1;             // if this is true the player can't recrout or give his group commands.
    unsigned int m_bGroupAlwaysFollow : 1;              // The group is told to always follow the player (used for girlfriend missions)
    unsigned int m_bGroupNeverFollow : 1;               // The group is told to always follow the player (used for girlfriend missions)
    unsigned int m_bInVehicleDontAllowWeaponChange : 1; // stop weapon change once driveby weapon has been given
    unsigned int m_bRenderWeapon : 1;                   // set to false during cutscenes so that knuckledusters are not rendered
    */
    
    uint32 m_bStoppedMoving : 1;
    uint32 m_bAdrenaline : 1;
    uint32 m_bHaveTargetSelected : 1;
    uint32 m_bFreeAiming : 1;
    uint32 bCanBeDamaged : 1;
    uint32 bAllMeleeAttackPtsBlocked : 1;
    uint32 m_JustBeenSnacking : 1;
    uint32 m_bRequireHandleBreath : 1;


    uint32 m_GroupStuffDisabled : 1;
    uint32 m_GroupAlwaysFollow : 1;
    uint32 m_GroupNeverFollow : 1;
    uint32 m_bInVehicleDontAllowWeaponChange : 1;
    uint32 m_bRenderWeapon : 1;
    
    Int32 m_PlayerGroup;

    UInt32 m_AdrenalineEndTime;
    UInt8 m_nDrunkenness;
    Bool8 m_bFadeDrunkenness;
    UInt8 m_nDrugLevel;
    UInt8 m_nScriptLimitToGangSize;

    float m_fBreath;


    AssocGroupId m_MeleeWeaponAnimReferenced;

    AssocGroupId m_MeleeWeaponAnimReferencedExtra;

    float m_fFPSMoveHeading;
    float m_fLookPitch;
    float m_fSkateBoardSpeed;
    float m_fSkateBoardLean;

    RpAtomic* m_pSpecialAtomic;
    float m_fGunSpinSpeed;
    float m_fGunSpinAngle;

    UInt32 m_LastTimeFiring;
    uint32 m_nTargetBone;
    CVector m_vecTargetBoneOffset;

    UInt32 m_busFaresCollected;
    bool m_bPlayerSprintDisabled;
    bool m_bDontAllowWeaponChange;
    bool m_bForceInteriorLighting;

private:
    char _pad1;

public:
    UInt16 m_DPadDownPressedInMilliseconds;
    UInt16 m_DPadUpPressedInMilliseconds;

    int8 m_wetness;
    bool8 m_playersGangActive;
    uint8 m_waterCoverPerc;

private:
    char _pad2;

public:
    float m_waterHeight;

    uint32 m_FireHSMissilePressedTime;
    CEntity* m_LastHSMissileTarget;

    Int32 m_nModelIndexOfLastBuildingShot;

    uint32 m_LastHSMissileLOSTime : 31;
    uint32 m_bLastHSMissileLOS : 1;

    CPed* m_pCurrentProstitutePed;
    CPed* m_pLastProstituteShagged;
};

VALIDATE_SIZE(CPlayerPedData, 0xAC);
