/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntity.h"
#include "CEntryInfo.h"
#include "CColPoint.h"
#include "CVector.h"
#include "CQuaternion.h"
#include "CRealTimeShadow.h"
#include "CRepeatSector.h"
#include "eWeaponType.h"

class CPhysical : public CEntity {
protected:
    CPhysical(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:

    struct CPhysicalFlags
    {
        bool bExtraHeavy : 1;
        bool bDoGravity : 1;
        bool bInfiniteMass : 1;
        bool bInfiniteMassFixed : 1;
        bool bPedPhysics : 1;
        bool bDoorPhysics : 1;
        bool bHangingPhysics : 1;
        bool bPoolBallPhysics : 1;
        bool bIsInWater : 1;
        bool bCollidedThisFrame : 1;

        bool bUnFreezable : 1;
        bool bTrainForceCol : 1;
        bool bSkipLineCol : 1;
        bool bCoorsFrozenByScript : 1;
        bool bDontLoadCollision : 1;
        bool bHalfSpeedCollision : 1;
        bool bForceHitReturnFalse : 1;
        bool bDontProcessCollisionOurSelves : 1;
        bool bNotDamagedByBullets : 1;
        bool bNotDamagedByFlames : 1;
        bool bNotDamagedByCollisions : 1;
        bool bNotDamagedByMelee : 1;
        bool bOnlyDamagedByPlayer : 1;
        bool bIgnoresExplosions : 1;
        bool bFlyer : 1;
        bool bNeverGoStatic : 1;
        bool bUsingSpecialColModel : 1;
        bool bForceFullWaterCheck : 1;
        bool bUsesCollisionRecords : 1;
        bool bRenderScorched : 1;
        bool bDoorHitEndStop : 1;
        bool bCarriedByRope : 1;
    };

    float            m_fPrevDistFromCam;

    UInt32           m_LastCollisionTime;

    CPhysical::CPhysicalFlags m_nPhysicalFlags;

    CVector m_vecMoveSpeed;
    CVector m_vecTurnSpeed;

    CVector m_vecMoveFriction;
    CVector m_vecTurnFriction;

    CVector m_vecAverageMoveSpeed;
    CVector m_vecAverageTurnSpeed;
    
    float m_fMass;
    float m_fTurnMass;
    float m_fMassMultiplier;
    float m_fAirResistance;
    float m_fElasticity;
    float m_fBuoyancyConstant;
    CVector m_vecCOM; // CenterOfMass

    CEntryInfoList m_listEntryInfo;
    CPtrNodeDoubleLink* m_pMovingListNode;

    uint8 m_nNoOfStaticFrames;
    uint8 m_nNoOfCollisionRecords;
    UInt8 m_LastMaterialToHaveBeenStandingOn;

    char field_BB;   // padding


    CEntity* m_aCollisionRecordPtrs[6];

    float m_fTrueDistanceTravelled;
    float m_fDamageImpulseMagnitude;
    CEntity* m_pDamageEntity;
    CVector m_vecDamageNormal;
    CVector m_vecDamagePos;
    uint16 m_nDamagedPieceType;

    short field_FA;  // padding

    CEntity* m_pAttachToEntity;
    CVector m_vecAttachPosnOffset;
    CVector m_vecAttachTiltOffset;
    RtQuat m_AttachQuat;

    CEntity* m_pNOCollisionVehicle;


    float m_lightingFromCollision;
    float m_lightingFromPointLights;

    CRealTimeShadow* m_pRealTimeShadow;
    
    // originally virtual functions
    void ProcessEntityCollision(CEntity *entity, CColPoint *point);
    
    // functions
    void RemoveAndAdd();
    void AddToMovingList();
    void RemoveFromMovingList();
    void SetDamagedPieceRecord(float damageIntensity, CEntity* damagingEntity, CColPoint& colPoint, float distanceMult);
	
    void ApplyMoveForce(CVector force);
    void ApplyTurnForce(CVector dir, CVector velocity);
    void ApplyForce(CVector dir, CVector velocity, bool bUpdateTurnSpeed);
	
    CVector GetSpeed(CVector direction);
    void ApplyMoveSpeed();
    void ApplyTurnSpeed();
    void ApplyGravity();
    void ApplyFrictionMoveForce(CVector moveForce);
    void ApplyFrictionTurnForce(CVector posn, CVector velocity);
    void ApplyFrictionForce(CVector posn, CVector velocity);
	
    void SkipPhysics();
    void AddCollisionRecord(CEntity* collidedEntity);
    bool GetHasCollidedWith(CEntity* entity);
    bool GetHasCollidedWithAnyObject();
	
    bool ApplyCollision(CEntity* entity, CColPoint& colPoint, float& outDamageIntensity);
    bool ApplySoftCollision(CEntity* entity, CColPoint& colPoint, float& outDamageIntensity);
    bool ApplySpringCollision(float fSuspensionForceLevel, CVector& direction, CVector& collisionPoint, float fSpringLength, float fSuspensionBias, float& fSpringForceDampingLimit);
    bool ApplySpringCollisionAlt(float fSuspensionForceLevel, CVector& direction, CVector& collisionPoint, float fSpringLength, float fSuspensionBias, CVector& normal, float& fSpringForceDampingLimit);
    bool ApplySpringDampening(float fDampingForce, float fSpringForceDampingLimit, CVector& direction, CVector& collisionPoint, CVector& collisionPos);
    bool ApplySpringDampeningOld(float arg0, float arg1, CVector& arg2, CVector& arg3, CVector& arg4);
	
    void RemoveRefsToEntity(CEntity* entity);
    void DettachEntityFromEntity(float x, float y, float z, bool useCollision);
    void DettachAutoAttachedEntity();
    float GetLightingFromCol(bool flag);
    float GetLightingTotal();
    bool CanPhysicalBeDamaged(eWeaponType weapon, bool* bDamagedDueToFireOrExplosionOrBullet);
	
    void ApplyAirResistance();
    bool ApplyCollisionAlt(CPhysical* entity, CColPoint& colPoint, float& damageIntensity, CVector& outVecMoveSpeed, CVector& outVecTurnSpeed);
    bool ApplyFriction(float friction, CColPoint& colPoint);
    bool ApplyFriction(CPhysical* physical, float friction, CColPoint& colPoint);
	
    bool ProcessShiftSectorList(int sectorX, int sectorY);
    static void PlacePhysicalRelativeToOtherPhysical(CPhysical* physical1, CPhysical* physical2, CVector offset);
	
    float ApplyScriptCollision(CVector vecColNormal, float fElasticity, float fAdhesiveLimit, CVector* pVecColPos);
    void PositionAttachedEntity();
    void ApplySpeed();
    void UnsetIsInSafePosition();
    void ApplyFriction();
    bool ApplyCollision(CPhysical* physical, CColPoint& colPoint, float& arg2, float& arg3);
    bool ApplySoftCollision(CPhysical* physical, CColPoint& colPoint, float& arg2, float& arg3);
	
    bool ProcessCollisionSectorList(int sectorX, int sectorY);
    bool ProcessCollisionSectorList_SimpleCar(CRepeatSector* sector);
    void AttachEntityToEntity(CEntity* entity, CVector offset, CVector rotation);
    void AttachEntityToEntity(CEntity* entity, CVector* offset, RtQuat* rotation);
    bool CheckCollision();
    bool CheckCollision_SimpleCar();

    // inlines
    void SetMoveSpeed(float x, float y, float z)    { m_vecMoveSpeed.x = x; m_vecMoveSpeed.y = y; m_vecMoveSpeed.z = z; }
    void SetMoveSpeed(const CVector& fMoveSpeed)    { m_vecMoveSpeed = fMoveSpeed; }
    const CVector& GetMoveSpeed()                   { return m_vecMoveSpeed; }

    void SetTurnSpeed(float x, float y, float z)    { m_vecTurnSpeed.x = x; m_vecTurnSpeed.y = y; m_vecTurnSpeed.z = z; }
    void SetTurnSpeed(const CVector& fTurnSpeed)    { m_vecTurnSpeed = fTurnSpeed; }
    const CVector& GetTurnSpeed()                   const { return m_vecTurnSpeed; }

    void SetMass(float fMass)                           { m_fMass = fMass; }
    float GetMass()                                     { return m_fMass; }
    void SetTurnMass(float fTurnMass)                   { m_fTurnMass = fTurnMass; }
    float GetTurnMass()                                 { return m_fTurnMass; }
    void SetAirResistance(float fAirResistance)         { m_fAirResistance = fAirResistance; }
    float GetAirResistance()                            { return m_fAirResistance; }
    void SetElasticity(float fElasticity)               { m_fElasticity = fElasticity; }
    float GetElasticity()                               { return m_fElasticity; }
    void SetBuoyancyConstant(float fBuoyancy)           { m_fBuoyancyConstant = fBuoyancy; }
    float GetBuoyancyConstant()                         { return m_fBuoyancyConstant; }
    void SetCentreOfMass(float x, float y, float z)     { m_vecCOM.x = x; m_vecCOM.y = y; m_vecCOM.z = z; }
    void SetCentreOfMass(const CVector& pCenterOfMass)  { m_vecCOM = pCenterOfMass; }

    void SetIgnoresExplosions(bool b)       { m_nPhysicalFlags.bIgnoresExplosions = b; }
    bool GetIgnoresExplosions() const       { return m_nPhysicalFlags.bIgnoresExplosions; }
    void SetNeverGoStatic(bool b)           { m_nPhysicalFlags.bNeverGoStatic = b; }
    bool GetNeverGoStatic() const           { return m_nPhysicalFlags.bNeverGoStatic; }
    void SetUsesCollisionRecords(bool b)    { m_nPhysicalFlags.bUsesCollisionRecords = b; }
    bool GetUsesCollisionRecords() const    { return m_nPhysicalFlags.bUsesCollisionRecords; }

    CVector GetSpeed(float x, float y, float z) { return GetSpeed(CVector(x, y, z)); }

    float GetDistanceTravelled() { return m_fTrueDistanceTravelled; }

    uint16 GetDamagedPieceType() const { return m_nDamagedPieceType; }
    float GetDamageImpulseMagnitude() const { return m_fDamageImpulseMagnitude; }
    CEntity* GetDamageEntity() const { return m_pDamageEntity; }
};

VALIDATE_SIZE(CPhysical, 0x138);
