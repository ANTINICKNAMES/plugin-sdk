/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponType.h"
#include "FxSystem_c.h"
#include "CVector2D.h"
#include "CColPoint.h"
#include "ePedPieceTypes.h"

enum eWeaponState : unsigned int
{
    WEAPONSTATE_READY,
    WEAPONSTATE_FIRING,
    WEAPONSTATE_RELOADING,
    WEAPONSTATE_OUT_OF_AMMO,
    WEAPONSTATE_MELEE_MADECONTACT
};

class CPed;
class CVehicle;
class CColModel;

class PLUGIN_API CWeapon {
public:
    eWeaponType m_eWeaponType;
    eWeaponState m_eState;
    int32 m_nAmmoInClip;
    int32 m_nAmmoTotal;
    uint32 m_nTimer;
    bool m_bFirstPersonWeaponModeSelected;
    bool m_bDontPlaceInHand;

    FxSystem_c* m_pWeaponFxSys; // flamethrower, spraycan, extinguisher particle

    static bool &ms_bPhotographHasBeenTaken; 
    static bool &ms_bTakePhoto; 
    static int &m_nTakePhotoFrames;
    static CColModel &ms_PelletTestCol;

    static float &ms_fExtinguisherAimAngle; // default -0.34907

    CWeapon(eWeaponType weaponType, int ammo);
    void Shutdown();
    void AddGunshell(CEntity* pEntity, const CVector& posGunshell, const CVector2D& dirGunshell, float fGunshellSize);
    bool LaserScopeDot(CVector* ScreenCoords, float* fScale);
    bool FireSniper(CPed* pEntity, CEntity* pTargetEnt, CVector* pTargetPosn);
    void Reload(CPed* pOwnerPed);
    bool IsTypeMelee();
    bool IsType2Handed();
    bool IsTypeProjectile();
    bool HasWeaponAmmoToBeUsed();
    void StopWeaponEffect();
    void Initialise(eWeaponType WeaponType, int32 nAmmoTotal, CPed* pOwnerPed);
    void DoBulletImpact(CEntity* pEntity, CEntity* pHitEntity, CVector* pShotOrigin, CVector* pShotTarget, CColPoint* pColPoint, int nIncrementalHit);
    bool TakePhotograph(CEntity* pEntity, CVector* cameraPos);
    void SetUpPelletCol(int nNumPellets, CEntity* pEntity, CEntity* pHitEntity, CVector& vecStart, CColPoint& colPoint, CMatrix& testMat);
    void FireInstantHitFromCar2(CVector vecShotOrigin, CVector vecShotTarget, CVehicle* pVehicle, CEntity* pShotOwner);
    void Update(CPed* pOwnerPed);
    bool CanBeUsedFor2Player();
    // outX and outY will be placed in [-1;1] ranges
    void DoWeaponEffect(CVector shotOrigin, CVector shotVector);
    bool FireAreaEffect(CEntity* pEntity, CVector* pPosn, CEntity* pTargetEnt, CVector* pTargetPosn);
    bool FireInstantHitFromCar(CVehicle* pVehicle, bool LeftIsTrue_FalseIsRight, bool RightIsTrue_ForceForBikes);
    void FireFromCar(CVehicle* pVehicle, bool LeftIsTrue_FalseIsRight, bool RightIsTrue_ForceForBikes);
    bool FireInstantHit(CEntity* pEntity, CVector* pStartPosn, CVector* pBarrelPosn, CEntity* pTargetEnt, CVector* pTargetPosn, CVector* pAltPosn, bool bCrossHairGun, bool bCreateGunFx);
    bool FireProjectile(CEntity* pEntity, CVector* pPosn, CEntity* pTargetEnt, CVector* pTargetPosn, float fThrowForce);
    bool FireM16_1stPerson(CPed* pEntity);
    bool Fire(CEntity* pEntity, CVector* pStartPosn, CVector* pBarrelPosn, CEntity* pTargetEnt, CVector* pTargetPosn, CVector* pAltPosn);

    static void InitialiseWeapons();
    static void ShutdownWeapons();
    static void UpdateWeapons();
    static void GenerateDamageEvent(CPed* pHitPed, CEntity* pEntity, eWeaponType WeaponType, Int32 WeaponDamage, ePedPieceTypes PieceType, Int32 dir);
    static bool CanBeUsedFor2Player(eWeaponType WeaponType);
    static float TargetWeaponRangeMultiplier(CEntity* pTarget, CEntity* pOwner);
    static void DoDoomAiming(CEntity* pEntity, CVector* pShotOrigin, CVector* pShotTarget);
    static void DoTankDoomAiming(CEntity* pTankEntity, CEntity* pDriverEntity, CVector* pShotOrigin, CVector* pShotTarget);
    static void DoDriveByAutoAiming(CEntity* pEntity, CVehicle* pVehicle, CVector* pShotOrigin, CVector* pShotTarget, bool bDoVehicles);
    static void FindNearestTargetEntityWithScreenCoors(float ScreenX, float ScreenY, float fRange, CVector vecSource, float* pTargetScreenX, float* pTargetScreenY);
    static float EvaluateTargetForHeatSeekingMissile(CEntity* pPotentialTarget, CVector& vOrigin, CVector& vAimingVector, float fTolerance, bool bPlanesPriority, 
        CEntity* pPreferredExistingTarget);
    static bool CheckForShootingVehicleOccupant(CEntity** ppHitEntity, CColPoint* pColPoint, eWeaponType nWeaponType, const CVector& vecShotStart, const CVector& vecShotEnd);
    static CEntity* PickTargetForHeatSeekingMissile(CVector Origin, CVector AimingVector, float Tolerance, CEntity* pException, bool bPlanesPriority, CEntity* pPreferredExistingTarget);
    static bool ProcessLineOfSight(const CVector& vecShotOrigin, const CVector& vecShotVector, CColPoint& colPoint, CEntity*& pHitEntity, eWeaponType WeaponType, 
        CEntity* pOwner, bool bCheckBuildings, bool bCheckVehicles, bool bCheckPeds, bool bCheckObjects, bool bCheckDummies, bool bSeeThroughStuff, bool bIgnoreSomeObjectsForCamera);

    // inline
    static bool WeaponGroupSharesAmmo(Int32 slot);
    
    CWeapon(plugin::dummy_func_t) {}

    // inlines
    eWeaponType GetWeaponType()                 { return m_eWeaponType; }

    void SetWeaponState(eWeaponState nState)    { m_eState = nState; }
    eWeaponState GetWeaponState()               { return m_eState; }

    void SetWeaponAmmoInClip(int32 nAmmoInClip) { m_nAmmoInClip = nAmmoInClip; }
    int32 GetWeaponAmmoInClip()                 { return m_nAmmoInClip; }

    void SetWeaponAmmoTotal(int32 nAmmoTotal)   { m_nAmmoInClip = nAmmoTotal; }
    int32 GetWeaponAmmoTotal()                  { return m_nAmmoTotal; }

    void SetTimer(uint32 nTimer)                { m_nTimer = nTimer; }
    uint32 GetTimer()                           { return m_nTimer; }

    void SetFirstPersonWeaponMode(bool b)       { m_bFirstPersonWeaponModeSelected = b; }
    bool GetFirstPersonWeaponMode()             { return m_bFirstPersonWeaponModeSelected; }
};

VALIDATE_SIZE(CWeapon, 0x1C);

extern float &fPlayerAimScale; // default 0.75
extern float &fPlayerAimScaleDist; // default 5.0
extern float &fPlayerAimRotRate; // default 0.0062832
extern float &SHOTGUN_SPREAD_RATE; // default 0.05
extern unsigned int &SHOTGUN_NUM_PELLETS; // default 15
extern unsigned int &SPAS_NUM_PELLETS; // default 4
extern float &PELLET_COL_SCALE_RATIO_MULT; // default 1.3
extern float *fReloadAnimSampleFraction; // default { 0.5, 0.7, 0.75, 0.75, 0.7 }

void FireOneInstantHitRound(CVector* startPoint, CVector* endPoint, int intensity);


// CWeaponSaveStructure

class PLUGIN_API CWeaponSaveStructure
{
public:
    eWeaponType m_eWeaponType;
    eWeaponState m_eState;
    int32_t m_nAmmoInClip;
    int32_t m_nAmmoTotal;
    int32_t m_nTimer;
    bool m_bFirstPersonWeaponModeSelected;
    bool m_bDontPlaceInHand;

    int32_t m_pWeaponFxSys;
};

VALIDATE_SIZE(CWeaponSaveStructure, 0x1C);