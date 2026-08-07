/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "ePedType.h"
#include "GlobalSpeechContexts.h"
#include "CPhysical.h"
#include "CAEPedAudioEntity.h"
#include "CAEPedSpeechAudioEntity.h"
#include "CAEWeaponAudioEntity.h"
#include "CPedIntelligence.h"
#include "CPlayerData.h"
#include "AnimBlendFrameData.h"
#include "CPedAcquaintance.h"
#include "CPedIK.h"
//#include "CPedSaveStructure.h"
#include "CWeapon.h"
#include "CVector2D.h"
#include "CPedType.h"
#include "eWeaponType.h"
#include "CAnimBlendAssociation.h"
#include "CFire.h"

enum ePedState
{
    PED_NONE = 0,
    PED_IDLE,
    PED_LOOK_ENTITY,
    PED_LOOK_HEADING,
    PED_WANDER_RANGE,
    PED_WANDER_PATH,
    PED_SEEK_POSITION,
    PED_SEEK_ENTITY,
    PED_FLEE_POSITION,
    PED_FLEE_ENTITY,
    PED_PURSUE,
    PED_FOLLOW_PATH,
    PED_SNIPER_MODE,
    PED_ROCKETLAUNCHER_MODE,
    PED_DUMMY,
    PED_PAUSE,
    PED_ATTACK,
    PED_FIGHT,
    PED_FACE_PHONE,
    PED_MAKE_PHONECALL,
    PED_CHAT,
    PED_MUG,
    PED_AIMGUN,
    PED_AI_CONTROL,
    PED_SEEK_CAR,
    PED_SEEK_BOAT_POSITION,
    PED_FOLLOW_ROUTE,
    PED_CPR,
    PED_SOLICIT,
    PED_BUY_ICE_CREAM,
    PED_INVESTIGATE_EVENT,
    PED_EVADE_STEP,
    PED_ON_FIRE,
    PED_SUNBATHE,
    PED_FLASH,
    PED_JOG,
    PED_ANSWER_MOBILE,
    PED_HANG_OUT,
    PED_STATES_NO_AI,
    PED_ABSEIL_FROM_HELI,
    PED_SIT,
    PED_JUMP,
    PED_FALL,
    PED_GETUP,
    PED_STAGGER,
    PED_EVADE_DIVE,
    PED_STATES_CAN_SHOOT,
    PED_ENTER_TRAIN,
    PED_EXIT_TRAIN,
    PED_ARREST_PLAYER,
    PED_DRIVING,
    PED_PASSENGER,
    PED_TAXI_PASSENGER,
    PED_OPEN_DOOR,
    PED_DIE,
    PED_DEAD,
    PED_DIE_BY_STEALTH,
    PED_CARJACK,
    PED_DRAGGED_FROM_CAR,
    PED_ENTER_CAR,
    PED_STEAL_CAR,
    PED_EXIT_CAR,
    PED_HANDS_UP,
    PED_ARRESTED,
    PED_DEPLOY_STINGER,
    PED_NUM_STATES
};

enum PLUGIN_API eMoveState {
    PEDMOVE_NONE = 0,
    PEDMOVE_STILL,
    PEDMOVE_TURN_L,
    PEDMOVE_TURN_R,
    PEDMOVE_WALK,
    PEDMOVE_JOG,
    PEDMOVE_RUN,
    PEDMOVE_SPRINT
};

enum PLUGIN_API eFightingStyle : char
{
    STYLE_STANDARD = 4,
    STYLE_BOXING,
    STYLE_KUNG_FU,
    STYLE_KNEE_HEAD,
    STYLE_MELEE,
    STYLE_KNIFE,
    STYLE_BAT,
    STYLE_KATANA_CANE,
    STYLE_CHAINSAW,
    STYLE_DILDO,
    STYLE_FLOWER,
    STYLE_GRAB_KICK,
    STYLE_ELBOWS
};

// values for 'm_nCreatedBy'
enum { 
    UNUSED_CHAR = 0, 
    RANDOM_CHAR = 1, 
    MISSION_CHAR = 2, 
    REPLAY_CHAR = 3 
};

class CObject;
class CVehicle;

class CPedFlags
{
public:
    bool bIsStanding : 1;
    bool bWasStanding : 1;
    bool bIsLooking : 1;
    bool bIsRestoringLook : 1;
    bool bIsAimingGun : 1;
    bool bIsRestoringGun : 1;
    bool bCanPointGunAtTarget : 1;
    bool bIsTalking : 1;

    bool bInVehicle : 1;
    bool bIsInTheAir : 1;
    bool bIsLanding : 1;
    bool bHitSomethingLastFrame : 1;
    bool bIsNearCar : 1;
    bool bRenderPedInCar : 1;
    bool bUpdateAnimHeading : 1;
    bool bRemoveHead : 1;
    bool bFiringWeapon : 1;

    bool bHasACamera : 1;
    bool bPedIsBleeding : 1;
    bool bStopAndShoot : 1;
    bool bIsPedDieAnimPlaying : 1;
    bool bStayInSamePlace : 1;
    bool bKindaStayInSamePlace : 1;
    bool bBeingChasedByPolice : 1;
    bool bNotAllowedToDuck : 1;
    bool bCrouchWhenShooting : 1;

    bool bIsDucking : 1;
    bool bGetUpAnimStarted : 1;
    bool bDoBloodyFootprints : 1;

    bool bDontDragMeOutCar : 1;
    bool bStillOnValidPoly : 1;
    bool bAllowMedicsToReviveMe : 1;
    bool bResetWalkAnims : 1;

    bool bOnBoat : 1;
    bool bBusJacked : 1;
    bool bFadeOut : 1;
    bool bKnockedUpIntoAir : 1;
    bool bHitSteepSlope : 1;
    bool bCullExtraFarAway : 1;
    bool bTryingToReachDryLand : 1;
    bool bCollidedWithMyVehicle : 1;

    bool bRichFromMugging : 1;
    bool bChrisCriminal : 1;
    bool bShakeFist : 1;
    bool bNoCriticalHits : 1;
    bool bHasAlreadyBeenRecorded : 1;
    bool bUpdateMatricesRequired : 1;
    bool bFleeWhenStanding : 1;
    bool bMiamiViceCop : 1;

    bool bMoneyHasBeenGivenByScript : 1;
    bool bHasBeenPhotographed : 1;
    bool bIsDrowning : 1;
    bool bDrownsInWater : 1;
    bool bHeadStuckInCollision : 1;
    bool bDeadPedInFrontOfCar : 1;
    bool bStayInCarOnJack : 1;
    bool bDontFight : 1;

    bool bDoomAim : 1;
    bool bCanBeShotInVehicle : 1;
    bool bPushedAlongByCar : 1;
    bool bNeverEverTargetThisPed : 1;
    bool bThisPedIsATargetPriority : 1;
    bool bCrouchWhenScared : 1;
    bool bKnockedOffBike : 1;
    bool bDonePositionOutOfCollision : 1;

    bool bDontRender : 1;
    bool bHasBeenAddedToPopulation : 1;
    bool bHasJustLeftCar : 1;
    bool bIsInDisguise : 1;
    bool bDoesntListenToPlayerGroupCommands : 1;
    bool bIsBeingArrested : 1;
    bool bHasJustSoughtCover : 1;
    bool bKilledByStealth : 1;
    bool bDoesntDropWeaponsWhenDead : 1;
    bool bCalledPreRender : 1;
    bool bBloodPuddleCreated : 1;

    bool bPartOfAttackWave : 1;
    bool bClearRadarBlipOnDeath : 1;
    bool bNeverLeavesGroup : 1;

    bool bTestForBlockedPositions : 1;

    bool bRightArmBlocked : 1;
    bool bLeftArmBlocked : 1;
    bool bDuckRightArmBlocked : 1;
    bool bMidriffBlockedForJump : 1;
    bool bFallenDown : 1;
    bool bUseAttractorInstantly : 1;
    bool bDontAcceptIKLookAts : 1;

    bool bHasAScriptBrain : 1;
    bool bWaitingForScriptBrainToLoad : 1;
    bool bHasGroupDriveTask : 1;
    bool bCanExitCar : 1;
    bool CantBeKnockedOffBike : 2;
    bool bHasBeenRendered : 1;
    bool bIsCached : 1;
    bool bPushOtherPeds : 1;
    bool bHasBulletProofVest : 1;

    bool bUsingMobilePhone : 1;
    bool bUpperBodyDamageAnimsOnly : 1;
    bool bStuckUnderCar : 1;
    bool bKeepTasksAfterCleanUp : 1;
    bool bIsDyingStuck : 1;
    bool bIgnoreHeightCheckOnGotoPointTask : 1;
    bool bForceDieInCar : 1;
    bool bCheckColAboveHead : 1;

    bool bIgnoreWeaponRange : 1;
    bool bDruggedUp : 1;
    bool bWantedByPolice : 1;
    bool bSignalAfterKill : 1;
    bool bCanClimbOntoBoat : 1;
    bool bPedHitWallLastFrame : 1;
    bool bIgnoreHeightDifferenceFollowingNodes : 1;
    bool bMoveAnimSpeedHasBeenSetByTask : 1;
    bool bGetOutUpsideDownCar : 1;

    bool bJustGotOffTrain : 1;
    bool bDeathPickupsPersist : 1;
    bool bTestForShotInVehicle : 1;
};

class PLUGIN_API CPed : public CPhysical {
protected:
    CPed(plugin::dummy_func_t) : CPhysical(plugin::dummy), m_WeaponSlots{ plugin::dummy, plugin::dummy, plugin::dummy,
        plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy,
        plugin::dummy, plugin::dummy, plugin::dummy } {
    }
public:
    CAEPedAudioEntity        m_PedAudioEntity;
    CAEPedSpeechAudioEntity  m_PedSpeechAudioEntity;
    CAEWeaponAudioEntity     m_PedWeaponAudioEntity;

    char field_43C[36];
    CPed* m_roadRageWith;
    char field_464[4];
    int field_468;
    /* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CPedSA.h */

    CPedFlags m_nPedFlags;

    CPedIntelligence*   m_pPedIntelligence;
    CPlayerPedData*        m_pPlayerData; // CPlayerPedData*


    uint8_t             CharCreatedBy;


    char field_485[3];  // padding


    AnimBlendFrameData* m_aPedFrames[19]; // m_apBones

    unsigned int        m_motionAnimGroup; // AssocGroupId


    CVector2D           m_extractedVelocity;

    CPedAcquaintance    m_acquaintances; // CAcquaintance, actually

    RpClump*           m_pWeaponClump;
    RwFrame*            m_pWeaponFlashFrame;
    RpClump*           m_pGogglesClump;
    bool*               m_pbGogglesEffect;
    int16_t             m_nGunFlashBlendAmount; // AKA m_nWeaponGunflashStateRightHand
    int16_t             m_nGunFlashBlendOutRate;
    int16_t             m_nGunFlashBlendAmount2; // AKA m_nWeaponGunflashStateLeftHand
    int16_t             m_nGunFlashBlendOutRate2;


    CPedIK              m_ik;


    uint32_t            m_nAntiSpazTimer;

    ePedState           m_nPedState;


    eMoveState          m_eMoveState;
    eMoveState          m_eMoveStateAnim; // m_nSwimmingMoveState; used for swimming in CTaskSimpleSwim::ProcessPed
    eMoveState          m_eStoredMoveState; // unused


    float               m_nHealth;
    float               m_nMaxHealth;
    float               m_nArmour;

    uint32_t            DontUseSmallerRemovalRange; // m_nTimeTillWeNeedThisPed


    CVector2D           m_vecCurrentVelocity; // m_vecAnimMovingShift
    float               m_fCurrentHeading; // m_fCurrentRotation
    float               m_fDesiredHeading; // m_fAimingRotation
    float               m_fHeadingChangeRate; // m_fHeadingChangeRate
    float               m_fHeadingChangeRateAccel; // f32 m_fHeadingChangeRateAccel; // ???

    CPhysical*          m_pGroundPhysical; // CEntity*            m_standingOnEntity
    CVector             m_vecGroundOffset;
    CVector             m_vecGroundNormal;
    CEntity*            m_pEntityStandingOn;
    float               m_fHitHeadHeight;


    CVehicle*           m_pMyVehicle; // m_pVehicle;


    CVehicle*           m_pMyAccidentVehicle; // m_VehDeadInFrontOf; // set if bDeadPedInFrontOfCar
    int                 m_pAccident; // CAccident*


    int32_t             m_nPedType;
    void*               m_pPedStats; // CPedStats*


    CWeapon             m_WeaponSlots[13];

    eWeaponType         m_eStoredWeapon; // when we need to hide ped weapon, we save it temporary here
    eWeaponType         m_eDelayedWeapon; // 'delayed' weapon is like an additional weapon, f.e., simple cop has a nitestick as current and pistol as delayed weapons
    uint32_t            m_delayedAmmo;

    int8_t              m_nCurrentWeapon;
    uint8_t             m_nShootRate;
    uint8_t             m_nShootingAccuracy;

    CEntity*            m_pEntLockOnTarget; // CObject*            m_pTargetedObject; // lock-on target
    //CEntity*            m_pEntMagnetizeTarget;

    CVector             m_vecWeaponPrevPos;

    uint8_t             m_nWeaponSkill;
    eFightingStyle      m_nFightingStyle;
    uint8_t             m_nExtraMeleeComboFlags;


    uint8_t             BleedingFrames;


    CFire*              m_pFire;
    float               FireDamageMultiplier;


    CEntity*            m_pEntLookEntity;
    float               m_fLookHeading; // radians


    int32_t             WeaponModelInHand;


    uint32_t            m_nUnconsciousTimer;
    uint32_t            m_nLookTimer;
    uint32_t            m_nAttackTimer;
    uint32_t            m_nTimeOfDeath;

    int8_t              m_nLimbRemoveIndex;


    char field_755;

    uint16_t            m_MoneyCarried;

    float               m_wobble;
    float               m_wobbleSpeed;


    eWeaponType         LastDamagedWeaponType;
    CEntity*            pLastDamageEntity;
    uint32_t            LastDamagedTime;


    CVector             m_vecAttachOffset;
    uint16_t            m_nAttachLookDirn;
    float               m_fAttachHeadingLimit;
    float               m_fAttachVerticalLimit;
    int32_t             m_nOriginalWeaponAmmo;


    void*               m_pCoverPoint; // CCoverPoint*
    void*               m_pLastEntryExit; // CEntryExit*

    float               fRemoveRangeMultiplier; // 1.0 by default

    int16_t             StreamedScriptBrainToLoad;


    char field_796[2];  // padding
    int field_798; // LastTalkSfx (?)


public:
    // class virtual functions

    // Process applied anim
    void    SetMoveAnim();

    void ProcessControl();
    // virtual void PreRender();
    // virtual void Render();
    // virtual void SpecialEntityPreCollisionStuff(CPhysical* pPhysical, bool bDoingShift, bool& bSkipTestEntirely, bool& bSkipCol, bool& bForceBuildingCol, bool& bForceSoftCol);
    // virtual u8 SpecialEntityCalcCollisionSteps(bool& bDoPreCheckAtFullSpeed, bool& bDoPreCheckAtHalfSpeed);

    // virtual void Teleport(CVector NewCoors, Bool8 bClearOrientation);

    
    bool    Save();
    bool    Load();

    // class functions
    CPed(ePedType);

    static void* operator new(size_t nSize);
    static void operator delete(void* pVoid);

    void    SetRadioStation();


    //1 = default, 2 = scm/mission script
    void    SetCharCreatedBy(const uint8_t a);


    bool    GetPedTalking();

    void    DisablePedSpeech(int16_t Curtail);
    void    EnablePedSpeech();
    void    DisablePedSpeechForScriptSpeech(int16_t Curtail);
    void    EnablePedSpeechForScriptSpeech();
    void    CanPedHoldConversation();
    // args: tAudioEvent ScriptID, Bool8 OverideSilence, Bool8 bForceAudible, Bool8 bFrontEnd
    void    SayScript(int ScriptID, bool OverideSilence = false, bool bForceAudible = false, bool bFrontEnd = false);
    int16_t Say(uint16_t Phrase, uint32_t StartTimeDelay = 0, float Probability = 1.f, bool bOverideSilence = false, bool bForceAudible = false, bool bFrontEnd = false);

    static void Initialise();


    void SetModelIndex(uint32_t index);
    void SetPedStats(ePedStats nIndex);
    void SetPedDefaultDecisionMaker();
    bool CanWeRunAndFireWithWeapon();
    void Update();
    float WorkOutHeadingForMovingFirstPerson(float CurrentHeading);
    bool IsPointerValid();

    bool OurPedCanSeeThisEntity(CEntity* entity, bool bForTargetingPurposes);
    void SortPeds(CPed** apPeds, int32_t nStartIndex, int32_t nEndIndex);
    // Gets point direction relatively to ped
    int GetLocalDirection(CVector2D const& dir);
    bool IsPedInControl();
    bool IsPedShootable();
    bool UseGroundColModel();
    bool CanSetPedState();
    bool CanPedReturnToState();
    bool CanBeArrested();
    bool CanStrafeOrMouseControl();
    void DoFootLanded(bool left, bool doWobble);
    void PlayFootSteps();

    void CalculateNewVelocity();
    void UpdatePosition();
    void CalculateNewOrientation();
    void ProcessBuoyancy();

    void AddWeaponModel(int32_t weaponId);
    void RemoveWeaponModel(int32_t weaponId);
    void AddGogglesModel(uint32_t weaponId, bool* pbEffectFlag);
    void RemoveGogglesModel();
    void PutOnGoggles();
    void TakeOffGoggles();
    void SetCurrentWeapon(int weaponSlot);
    void SetCurrentWeapon(eWeaponType weaponType);
    uint32_t GiveWeapon(eWeaponType weaponType, uint32_t ammoQuantity, bool GenerateOldWeaponPickup);
    void GiveDelayedWeapon(eWeaponType weaponType, uint32_t ammo);
    void RequestDelayedWeapon();
    uint32_t GetWeaponSlot(eWeaponType weaponType);
    void GrantAmmo(eWeaponType weaponType, uint32_t ammoQuantity);
    void SetAmmo(eWeaponType weaponType, uint32_t ammoQuantity);
    void ClearWeapon(eWeaponType weaponType);
    void ClearWeapons();
    bool DoWeHaveWeaponAvailable(eWeaponType weaponType);
    void RemoveWeaponWhenEnteringVehicle(uint32_t nVehicleType);
    void ReplaceWeaponWhenExitingVehicle();
    void RemoveWeaponForScriptedCutscene();
    void ReplaceWeaponForScriptedCutscene();
    bool DoGunFlash(uint32_t nDuration, bool bLHand);
    void SetGunFlashAlpha(bool bLHand);
    void ResetGunFlashAlpha();

    char GetWeaponSkill();
    char GetWeaponSkill(eWeaponType weaponType);
    void SetWeaponSkill(eWeaponType weaponType, int8_t weaponSkill);
    float GetBikeRidingSkill();

    void SetPedState(ePedState pedState);


    void SetIdle();
    void SetLook(float fLookHeading);
    void SetLook(CEntity* pLookEntity);
    void SetLookTimer(uint32_t nTime);
    void ClearLook();
    void Look();
    bool TurnBody();

    void SetAimFlag(float fLookHeading);
    void SetAimFlag(CEntity* pLookEntity);
    void ClearAimFlag();
    bool CanUseTorsoWhenLooking();

    void SetLookFlag(float fLookHeading, bool isPersistant, bool bOverride = false);
    void SetLookFlag(CEntity* pLookEntity, bool bIsPersistant, bool bOverride);
    void ClearLookFlag();

    void ClearAll();

    void SetMoveState(eMoveState MoveState);
    void SetMoveAnimSpeed(CAnimBlendAssociation* pAnim);
    void StopNonPartialAnims();
    void RestartNonPartialAnims();

    void PreRenderAfterTest();

    bool CanBeDeleted();
    bool CanBeDeletedEvenInVehicle();

    void KillPedWithCar(CVehicle* pVehicle, float fImpulse, bool bAddAnims);
    // limitAngle in radians
    bool CanSeeEntity(CEntity* pEntity, float viewAngle);
    bool IsPlayer();

    void CreateDeadPedWeaponPickups();
    void CreateDeadPedPickupCoors(float* pX, float* pY, float* pZ);
    void SetPedPositionInCar();

    void RemoveBodyPart(int32_t index, int8_t dirn);
    void SpawnFlyingComponent(int32_t index, int8_t dirn);
    bool DoesLOSBulletHitPed(CColPoint& colPoint);
    bool IsPedHeadAbovePos(float fTestHeight);


    void RestoreHeadingRate();
    static void RestoreHeadingRateCB(CAnimBlendAssociation* pAnim, void* pData);
    void CreateDeadPedMoney();

    void DeadPedMakesTyresBloody();
    void MakeTyresMuddySectorList(CPtrList& list);
    // virtual void FlagToDestroyWhenNextProcessed();

    void RemoveWeaponAnims(int32_t nWeaponType, float fBlendDelta);
    bool PositionPedOutOfCollision(int nDoor, CVehicle* pVehicle, bool bUseNodes);
    bool PositionAnyPedOutOfCollision();


    CEntity* AttachPedToEntity(CEntity* pEnt, CVector vecPos, uint16_t nHeading, float fHeadingLimit, eWeaponType nWeaponType);
    CEntity* AttachPedToBike(CEntity* pEnt, CVector vecPos, uint16_t nHeading, float fHeadingLimit, float fVerticalLimit, eWeaponType nWeaponType);
    void DettachPedFromEntity();
    void PositionAttachedPed();

    void Undress(char* ModelFilename);
    void Dress();

    // dummy function
    void UpdateStatEnteringVehicle();
    // dummy function
    void UpdateStatLeavingVehicle();

    CTask* GetHoldingTask(); // CTaskSimpleHoldEntity*
    CEntity* GetEntityThatThisPedIsHolding();
    void DropEntityThatThisPedIsHolding(bool deleteObj);
    bool CanThrowEntityThatThisPedIsHolding();

    bool PedIsInvolvedInConversation();
    bool PedIsReadyForConversation(bool arg0);
    bool PedCanPickUpPickUp();

    static void ShoulderBoneRotation(RpClump* clump);

    bool IsAlive();

    void GetBonePosition(RwV3d& posn, uint32_t boneTag, bool bCalledFromCamera);
    void GetTransformedBonePosition(RwV3d& posn, uint32_t boneTag, bool bCalledFromCamera);

    void ReleaseCoverPoint();

    CEntity* GiveObjectToPedToHold(int32_t modelIndex, bool dropCurrentObj);
    void GiveWeaponAtStartOfFight();
    void GiveWeaponWhenJoiningGang();

    bool IsPlayingHandSignal();
    void StopPlayingHandSignal();

    float GetWalkAnimSpeed();

    // virtual int32_t ProcessEntityCollision(CEntity* pEntity, CColPoint* aColPoints);

public:
    inline uint8_t GetCharCreatedBy() { return CharCreatedBy; }
    inline CWeapon* GetWeapon() { return &m_WeaponSlots[m_nCurrentWeapon]; }

    inline CWeapon& GetWeapon(uint8_t slot) { return m_WeaponSlots[slot]; }

    inline void SetShootingAccuracy(uint8_t nShootingAccuracy) { m_nShootingAccuracy = nShootingAccuracy; }

    inline void SetWeaponLockOnTarget(CEntity* pEntLockOnTarget) { m_pEntLockOnTarget = pEntLockOnTarget; }

    inline CEntity* GetWeaponLockOnTarget() {
        return m_pEntLockOnTarget;
    }

    inline int32_t GetPedState() {
        return m_nPedState;
    }

    inline bool IsWearingGoggles() {
        if (m_pGogglesClump)
            return true;

        return false;
    }

    inline eMoveState GetMoveState() {
        return m_eMoveState;
    }

    void SetPedType(int32_t iPedType) {
        m_nPedType = iPedType;
    }

    inline ePedType GetPedType() {
        return (ePedType)m_nPedType;
    }

    inline void SetIsStanding(bool IsStanding) {
        m_nPedFlags.bIsStanding = IsStanding;
    }

    inline bool GetIsStanding() {
        return m_nPedFlags.bIsStanding;
    }

    inline void SetWasStanding(bool WasStanding) {
        m_nPedFlags.bWasStanding = WasStanding;
    }

    inline bool GetWasStanding() {
        return m_nPedFlags.bWasStanding;
    }

    inline void SetStayInSamePlaceFlag(bool bStay) {
        m_nPedFlags.bStayInSamePlace = bStay;
    }

    inline void SetKindaStayInSamePlaceFlag(bool bKindaStay) {
        m_nPedFlags.bKindaStayInSamePlace = bKindaStay;
    }

    /*inline void SetHeadingRate(float fHeadingRate) {
        m_fHeadingChangeRate = fHeadingRate;
    }*/

    inline bool DoesRenderAndPreRenderThroughVehicle() {
        return GetPedState() != PED_DRIVING;
    }

public:
    inline CPlayerPedData* GetPlayerData() {
        return m_pPlayerData;
    }

    inline CWanted* GetPlayerWanted() {
        return GetPlayerData()->m_Wanted;
    }

    inline CPedIntelligence* GetPedIntelligence() {
        return m_pPedIntelligence;
    }

    inline void SetDesiredHeading(const float fDesiredHeading) {
        m_fDesiredHeading = fDesiredHeading;
    }

    inline float GetDesireadHeading() {
        return m_fDesiredHeading;
    }

    inline void SetCurrentHeading(const float fCurrentHeading) {
        m_fCurrentHeading = fCurrentHeading;
    }

    inline float GetCurrentHeading() {
        return m_fCurrentHeading;
    }

    // I don't get hit... 
    inline void SetHeadingChangeRate(const float fHeadingChangeRate) {
        m_fHeadingChangeRate = fHeadingChangeRate;
    }

    inline float GetHeadingChangeRate() {
        return m_fHeadingChangeRate;
    }

    inline void SetHealth(const float fHealth) {
        m_nHealth = fHealth;
    }

    inline float GetHealth() {
        return m_nHealth;
    }

    inline void SetArmour(const float fArmour) {
        m_nArmour = fArmour;
    }

    inline float GetArmour() {
        return m_nArmour;
    }

    CWeapon& GetWeaponInSlot(uint8 slot)        { return m_WeaponSlots[slot]; }
    CWeapon& GetActiveWeapon()                  { return GetWeaponInSlot(m_nCurrentWeapon); }
    CWeapon& GetWeapon(eWeaponType WeaponType)  { return GetWeaponInSlot(GetWeaponSlot(WeaponType)); }
};

VALIDATE_SIZE(CPed, 0x79C);

bool IsPedPointerValid(CPed* ped);
RwObject* SetPedAtomicVisibilityCB(RwObject* rwObject, void* data);
