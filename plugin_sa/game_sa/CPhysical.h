/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntity.h"
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

    int field_38;
    unsigned int m_nLastCollisionTime;

    CPhysical::CPhysicalFlags m_nPhysicalFlags;

    CVector          m_vecMoveSpeed;
    CVector          m_vecTurnSpeed;
    CVector          m_vecFrictionMoveSpeed;
    CVector          m_vecFrictionTurnSpeed;
    CVector          m_vecForce;
    CVector          m_vecTorque;
    float            m_fMass;
    float            m_fTurnMass;
    float            m_fVelocityFrequency;
    float            m_fAirResistance;
    float            m_fElasticity;
    float            m_fBuoyancyConstant;
    CVector          m_vecCentreOfMass;
    void*            m_pCollisionList;
    void*            m_pMovingList;
    char             m_nFakePhysics;
    unsigned char    m_nNumEntitiesCollided;
    unsigned char    m_nContactSurface;
    char field_BB;   // padding
    CEntity*         m_apCollidedEntities[6];
    float            m_fMovingSpeed; // ref @ CTheScripts::IsVehicleStopped
    float            m_fDamageIntensity;
    CEntity*         m_pDamageEntity;
    CVector          m_vecLastCollisionImpactVelocity;
    CVector          m_vecLastCollisionPosn;
    unsigned short   m_nPieceType;
    short field_FA;  // padding
    class CPhysical* m_pAttachedTo;
    CVector          m_vecAttachOffset;
    CVector          m_vecAttachedEntityPosn;
    CQuaternion      m_qAttachedEntityRotation;
    CEntity*         m_pEntityIgnoredCollision;
    float            m_fContactSurfaceBrightness;
    float            m_fDynamicLighting;
    CRealTimeShadow* m_pShadowData;
    
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
	
    float ApplyScriptCollision(CVector arg0, float arg1, float arg2, CVector* arg3);
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
};

VALIDATE_SIZE(CPhysical, 0x138);
