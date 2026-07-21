/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CDoor.h"
#include "CBouncingPanel.h"
#include "CDamageManager.h"
#include "CColPoint.h"

class CObject;

enum eSkidmarkType
{
	SKIDMARKTYPE_DEFAULT = 0,
	SKIDMARKTYPE_MUDDY,
	SKIDMARKTYPE_SANDY,
	SKIDMARKTYPE_BLOODY
};

class PLUGIN_API CAutomobile : public CVehicle
{
protected:
    CAutomobile(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    struct CAutomobileFlags
    {
        UInt8 bTaxiLight : 1;
        UInt8 bShouldNotChangeColour : 1;
        UInt8 bWaterTight : 1;
        UInt8 bDoesNotGetDamagedUpsideDown : 1;
        UInt8 bCanBeVisiblyDamaged : 1;
        UInt8 bTankExplodesCars : 1;
        UInt8 bIsBoggedDownInSand : 1;

        UInt8 bIsMonsterTruck : 1;
    };

    CDamageManager Damage;


    CDoor Door[6];
    RwFrame* m_aCarNodes[25];
    CBouncingPanel BouncingPanels[3];


    CDoor ChassisDoor;


    CColPoint m_aWheelColPoints[4];
    float m_aWheelRatios[4];
    float m_aRatioHistory[4];

    float m_aWheelCounts[4];
    float fBrakeCount;
    float m_fEngineRevs;
    float m_fEngineForce;

    eSkidmarkType aWheelSkidmarkType[4];
    bool bWheelBloody[4];
    bool bMoreSkidMarks[4];

    float m_aWheelPitchAngles[4];
    float m_aWheelSuspensionHeights[4];
    float m_aWheelAngularVelocity[4];
    float m_aWheelLongitudinalSlip[4];

    CAutomobile::CAutomobileFlags m_nAutomobileFlags;

    UInt16 nBrakesOn;
    UInt16 m_nSuspensionHydraulics;
    UInt16 m_nOldSuspensionHydraulics;
    UInt32 m_nBusDoorTimer;
    UInt32 m_nBusDoorStart;
    float m_fSuspensionLength[4];
    float m_fLineLength[4];
    float m_fHeightAboveRoad;
    float m_fRearHeightAboveRoad;
    float m_fExtraTractionMult;
    float m_fTyreTemp;

    float ZRot, ZRotSpeed;

    float fPrevSpeed;

    CVector m_vecOldMoveSpeed;
    CVector m_vecOldTurnSpeed;

    float DoorRotation[6];
    float m_BlowUpTimer;

    CPhysical* m_aGroundPhysicalPtrs[4];
    CVector m_aGroundOffsets[4];


    CEntity* pEntityThatSetUsOnFire;


    float m_fTransformPosition;
    int16 m_nTransformState;

    float m_fBasePositions[4];


    float LeftDoorOpenForDriveBys;
    float RightDoorOpenForDriveBys;

    float GunOrientation;
    float GunElevation;
    float HeliRequestedOrientation;

    float PropRotate;
    float CumulativeDamage;


    UInt8 nNoOfContactWheels;
    UInt8 m_nDriveWheelsOnGround;
    UInt8 m_nDriveWheelsOnGroundLastFrame;
    float m_fGasPedalAudioRevs;
    tWheelState m_aWheelState[4];

    FxSystem_c* m_pFxSysNitro1;
    FxSystem_c* m_pFxSysNitro2;

    UInt8 m_HarvesterTimer;
    uint8 m_statusWhenEngineBlown;
private:
    char pad_982; // padding
    char pad_984[2]; // padding
public:

    // variables
    static bool& m_sAllTaxiLights;
    static CVector& vecHunterGunPos; // { 0.0f, 4.8f, -1.3f }
    static CMatrix* matW2B;

    //vtable
    bool ProcessAI(unsigned int& arg0);
    void ResetSuspension();
    void ProcessFlyingCarStuff();
    void DoHoverSuspensionRatios();
    void ProcessSuspension();

    //funcs
    CAutomobile(int modelIndex, unsigned char createdBy, bool setupSuspensionLines);

    // Find and save components ptrs (RwFrame) to m_modelNodes array
    void SetupModelNodes();
    // Process vehicle hydraulics
    void HydraulicControl();
    // Sets the angle of a vehicles extra. Called at 08A4 opcode (CONTROL_MOVABLE_VEHICLE_PART)
    bool UpdateMovingCollision(float angle);
    // Called at 098D opcode (GET_CAR_MOVING_COMPONENT_OFFSET)
    float GetMovingCollisionOffset();
    // Makes the helicopter fly to the specified location, keeping a specific Z height/altitude. This must be called for helis only.
    void TellHeliToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Force orientation for heli to specified angle (radians)
    void SetHeliOrientation(float angle);
    // Cancel orientation forcing (m_fForcedOrientation = -1.0f)
    void ClearHeliOrientation();
    // Makes the plane fly to the specified location, keeping a specific Z height/altitude.
    void TellPlaneToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Empty function
    void HideAllComps();
    // Empty function
    void ShowAllComps();
    // Set random damage to vehicle. Called when generating a vehicle @CCarCtrl::GenerateOneRandomCar
    void SetRandomDamage(bool arg0);
    // Make a vehicle fully damaged
    void SetTotalDamage(bool arg0);
    // if(m_nHornCounter) m_nHornCounter--;
    void ReduceHornCounter();
    // Apply custom car plate texture to vehicle
    void CustomCarPlate_BeforeRenderingStart(CVehicleModelInfo* model);
    // Reset car plate texture after rendering
    void CustomCarPlate_AfterRenderingStop(CVehicleModelInfo* model);
    // Check if vehicle is in air
    bool GetAllWheelsOffGround();
    // Some debug function
    void DebugCode();
    // Repair vehicle's tyre
    void FixTyre(eWheels wheel);
    // Repair vehicle's door. "nodeIndex" is an index of component in m_modelNodes array
    void FixDoor(int nodeIndex, eDoors door);
    // Repair vehicle's panel. "nodeIndex" is an index of component in m_modelNodes array
    void FixPanel(int nodeIndex, ePanels panel);
    // Enable/disable taxi light for taxi
    void SetTaxiLight(bool enable);
    // Enable taxi light for all taxis (CAutomobile::m_sAllTaxiLights = true;)
    static void SetAllTaxiLights(bool arg0);
    // Play horn for NPC vehicle (called @CAutomobile::ProcessAI)
    void PlayHornIfNecessary();
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void ProcessAutoBusDoors();
    // Make player vehicle jumps when pressing horn
    void BoostJumpControl();
    // Creates/updates nitro particle
    void DoNitroEffect(float state);
    // Remove nitro particle
    void StopNitroEffect();
    void NitrousControl(signed char);
    void TowTruckControl();
    // Empty function
    CPed* KnockPedOutCar(eWeaponType arg0, unsigned short arg1, CPed* arg2);
    void PopBootUsingPhysics();
    // Close all doors
    void CloseAllDoors();
    void DoSoftGroundResistance(unsigned int& arg0);
    void ProcessCarWheelPair(int arg0, int arg1, float arg2, CVector* arg3, CVector* arg4, float arg5, float arg6, float arg7, bool arg8);
    float GetCarRoll();
    float GetCarPitch();
    bool IsInAir();
    // Create colliding particles
    void dmgDrawCarCollidingParticles(CVector const&, float force, eWeaponType weapon);
    void ProcessCarOnFireAndExplode(unsigned char arg0);
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void ProcessBuoyancy();
    // Process combine
    void ProcessHarvester();
    void ProcessSwingingDoor(int nodeIndex, eDoors door);
    // Returns spawned flying component?
    CObject* RemoveBonnetInPedCollision();
    void UpdateWheelMatrix(int nodeIndex, int flags);
    void PopDoor(int nodeIndex, eDoors door, bool showVisualEffect);
    void PopPanel(int nodeIndex, ePanels panel, bool showVisualEffect);
    void ScanForCrimes();
    void TankControl();
    // Makes a vehicles acts like a tank on a road - blows up collided vehicles. Must be called in a loop
    void BlowUpCarsInPath();
    void PlaceOnRoadProperly();
    void PopBoot();
    void CloseBoot();
    void DoHeliDustEffect(float arg0, float arg1);
    void SetBumperDamage(ePanels panel, bool withoutVisualEffect);
    void SetPanelDamage(ePanels panel, bool createWindowGlass);
    void SetDoorDamage(eDoors door, bool withoutVisualEffect);
    bool RcbanditCheck1CarWheels(CPtrList& ptrlist);
    bool RcbanditCheckHitWheels();
    void FireTruckControl(float arg0);
    bool HasCarStoppedBecauseOfLight();
};

VALIDATE_SIZE(CAutomobile, 0x988);

extern CColPoint *aAutomobileColPoints;

// Disable matfx (material effects) for material (callback), "data" parameter is unused
RpMaterial *DisableMatFx(RpMaterial* material, void* data);
// callback
RpAtomic* GetCurrentAtomicObjectCB(RwObject* object, void* data);

// this one is so horrible I won't touch it
/*class CAutomobile : public CVehicle {
    struct CAutomobileFlags
    {
        UInt8 bTaxiLight : 1;
        UInt8 bShouldNotChangeColour : 1;
        UInt8 bWaterTight : 1;
        UInt8 bDoesNotGetDamagedUpsideDown : 1;
        UInt8 bCanBeVisiblyDamaged : 1;
        UInt8 bTankExplodesCars : 1;
        UInt8 bIsBoggedDownInSand : 1;

        UInt8 bIsMonsterTruck : 1;
    };
protected:
    CAutomobile(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    CDamageManager Damage;

    CDoor Door[6];
    RwFrame* m_aCarNodes[CAR_NUM_NODES];
    CBouncingPanel BouncingPanels[3];

    CDoor ChassisDoor;

    CColPoint m_aWheelColPoints[4];
    float m_aWheelRatios[4];
    float m_aRatioHistory[4];

    float m_aWheelCounts[4];
    float fBrakeCount;
    float m_fEngineRevs;
    float m_fEngineForce;

    eSkidmarkType aWheelSkidmarkType[4];
    bool bWheelBloody[4];
    bool bMoreSkidMarks[4];

    float m_fWheelRotation[4];
    float field_838[4];
    float m_fWheelSpeed[4];
    int field_858[4];
    char taxiAvaliable;
    char field_869;
    char field_86A;
    char field_867;
    short m_wMiscComponentAngle;
    short m_wVoodooSuspension;
    int m_dwBusDoorTimerEnd;
    int m_dwBusDoorTimerStart;
    float field_878;
    float wheelOffsetZ[4];
    int field_88C[3];
    float m_fFrontHeightAboveRoad;
    float m_fRearHeightAboveRoad;
    float m_fCarTraction;
    float m_fNitroValue;
    int field_8A4;
    int m_fRotationBalance; // used in CHeli::TestSniperCollision
    float m_fMoveDirection;
    int field_8B4[6];
    int field_8C8[6];
    float m_fBurningTimer; // starts when vehicle health is lower than 250.0, car blows up when it hits 5000.0
    CEntity *m_pWheelCollisionEntity[4];
    CVector m_vWheelCollisionPos[4];
    char field_924;
    char field_925;
    char field_926;
    char field_927;
    char field_928;
    char field_929;
    char field_92A;
    char field_92B;
    char field_92C;
    char field_92D;
    char field_92E;
    char field_92F;
    char field_930;
    char field_931;
    char field_932;
    char field_933;
    char field_934;
    char field_935;
    char field_936;
    char field_937;
    char field_938;
    char field_939;
    char field_93A;
    char field_93B;
    char field_93C;
    char field_93D;
    char field_93E;
    char field_93F;
    int field_940;
    int field_944;
    float m_fDoomVerticalRotation;
    float m_fDoomHorizontalRotation;
    float m_fForcedOrientation;
    float m_fUpDownLightAngle[2];
    unsigned char m_nNumContactWheels;
    unsigned char m_nWheelsOnGround;
    char field_962;
    char field_963;
    float field_964;
    int field_968[4];
    void *pNitroParticle[2];
    char field_980;
    char field_981;
    short field_982;
    float field_984;

    // variables
    static bool &m_sAllTaxiLights;
    static CVector &vecHunterGunPos; // { 0.0f, 4.8f, -1.3f }
    static CMatrix *matW2B;

    //vtable
    bool ProcessAI(unsigned int& arg0);
    void ResetSuspension();
    void ProcessFlyingCarStuff();
    void DoHoverSuspensionRatios();
    void ProcessSuspension();

    //funcs
    CAutomobile(int modelIndex, unsigned char createdBy, bool setupSuspensionLines);

    // Find and save components ptrs (RwFrame) to m_modelNodes array
    void SetupModelNodes();
    // Process vehicle hydraulics
    void HydraulicControl();
    // Sets the angle of a vehicles extra. Called at 08A4 opcode (CONTROL_MOVABLE_VEHICLE_PART)
    bool UpdateMovingCollision(float angle);
    // Called at 098D opcode (GET_CAR_MOVING_COMPONENT_OFFSET)
    float GetMovingCollisionOffset();
    // Makes the helicopter fly to the specified location, keeping a specific Z height/altitude. This must be called for helis only.
    void TellHeliToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Force orientation for heli to specified angle (radians)
    void SetHeliOrientation(float angle);
    // Cancel orientation forcing (m_fForcedOrientation = -1.0f)
    void ClearHeliOrientation();
    // Makes the plane fly to the specified location, keeping a specific Z height/altitude.
    void TellPlaneToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Empty function
    void HideAllComps();
    // Empty function
    void ShowAllComps();
    // Set random damage to vehicle. Called when generating a vehicle @CCarCtrl::GenerateOneRandomCar
    void SetRandomDamage(bool arg0);
    // Make a vehicle fully damaged
    void SetTotalDamage(bool arg0);
    // if(m_nHornCounter) m_nHornCounter--;
    void ReduceHornCounter();
    // Apply custom car plate texture to vehicle
    void CustomCarPlate_BeforeRenderingStart(CVehicleModelInfo* model);
    // Reset car plate texture after rendering
    void CustomCarPlate_AfterRenderingStop(CVehicleModelInfo* model);
    // Check if vehicle is in air
    bool GetAllWheelsOffGround();
    // Some debug function
    void DebugCode();
    // Repair vehicle's tyre
    void FixTyre(eWheels wheel);
    // Repair vehicle's door. "nodeIndex" is an index of component in m_modelNodes array
    void FixDoor(int nodeIndex, eDoors door);
    // Repair vehicle's panel. "nodeIndex" is an index of component in m_modelNodes array
    void FixPanel(int nodeIndex, ePanels panel);
    // Enable/disable taxi light for taxi
    void SetTaxiLight(bool enable);
    // Enable taxi light for all taxis (CAutomobile::m_sAllTaxiLights = true;)
    static void SetAllTaxiLights(bool arg0);
    // Play horn for NPC vehicle (called @CAutomobile::ProcessAI)
    void PlayHornIfNecessary();
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void ProcessAutoBusDoors();
    // Make player vehicle jumps when pressing horn
    void BoostJumpControl();
    // Creates/updates nitro particle
    void DoNitroEffect(float state);
    // Remove nitro particle
    void StopNitroEffect();
    void NitrousControl(signed char);
    void TowTruckControl();
    // Empty function
    CPed* KnockPedOutCar(eWeaponType arg0, unsigned short arg1, CPed* arg2);
    void PopBootUsingPhysics();
    // Close all doors
    void CloseAllDoors();
    void DoSoftGroundResistance(unsigned int& arg0);
    void ProcessCarWheelPair(int arg0, int arg1, float arg2, CVector* arg3, CVector* arg4, float arg5, float arg6, float arg7, bool arg8);
    float GetCarRoll();
    float GetCarPitch();
    bool IsInAir();
    // Create colliding particles
    void dmgDrawCarCollidingParticles(CVector const&, float force, eWeaponType weapon);
    void ProcessCarOnFireAndExplode(unsigned char arg0);
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void ProcessBuoyancy();
    // Process combine
    void ProcessHarvester();
    void ProcessSwingingDoor(int nodeIndex, eDoors door);
    // Returns spawned flying component?
    CObject* RemoveBonnetInPedCollision();
    void UpdateWheelMatrix(int nodeIndex, int flags);
    void PopDoor(int nodeIndex, eDoors door, bool showVisualEffect);
    void PopPanel(int nodeIndex, ePanels panel, bool showVisualEffect);
    void ScanForCrimes();
    void TankControl();
    // Makes a vehicles acts like a tank on a road - blows up collided vehicles. Must be called in a loop
    void BlowUpCarsInPath();
    void PlaceOnRoadProperly();
    void PopBoot();
    void CloseBoot();
    void DoHeliDustEffect(float arg0, float arg1);
    void SetBumperDamage(ePanels panel, bool withoutVisualEffect);
    void SetPanelDamage(ePanels panel, bool createWindowGlass);
    void SetDoorDamage(eDoors door, bool withoutVisualEffect);
    bool RcbanditCheck1CarWheels(CPtrList& ptrlist);
    bool RcbanditCheckHitWheels();
    void FireTruckControl(float arg0);
    bool HasCarStoppedBecauseOfLight();
};

VALIDATE_SIZE(CAutomobile, 0x988);*/