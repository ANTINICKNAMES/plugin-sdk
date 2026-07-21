/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "tBikeHandlingData.h"

enum eBikeNodes {
    BIKE_NODE_NONE = 0,
    BIKE_CHASSIS = 1,
    BIKE_FORKS_FRONT = 2,
    BIKE_FORKS_REAR = 3,
    BIKE_WHEEL_FRONT = 4,
    BIKE_WHEEL_REAR = 5,
    BIKE_MUDGUARD = 6,
    BIKE_HANDLEBARS = 7,
    BIKE_MISC_A = 8,
    BIKE_MISC_B = 9,
    BIKE_NUM_NODES
};

class CBike : public CVehicle {
    struct CBikeFlags
    {
        UInt8 bShouldNotChangeColour : 1;
        UInt8 bPanelsAreThougher : 1;
        UInt8 bWaterTight : 1;
        UInt8 bGettingPickedUp : 1;
        UInt8 bOnSideStand : 1;
        UInt8 bPlayerBoost : 1;
        UInt8 bEngineOnFire : 1;
        UInt8 bWheelieForCamera : 1;
    };
protected:
    CBike(plugin::dummy_func_t) : CVehicle(plugin::dummy), m_LeanMatrix(plugin::dummy) {}
public:
    RwFrame*       m_aBikeNodes[BIKE_NUM_NODES];


    bool           m_bLeanMatrix;
    char _pad0[3]; // padding
    CMatrix        m_LeanMatrix;

    //unsigned char  m_nDamageFlags;
    //char field_615[27];
    //CVector field_630;
    
    CBike::CBikeFlags m_nBikeFlags;

    CVector m_vecAveGroundNormal;
    CVector m_vecGroundRight;
    CVector m_vecOldSpeedForPlayback;
    
    tBikeHandlingData*  pBikeHandling;
    CRideAnimData       m_rideAnimData;

    uint8 m_nWheelStatus[2];

    char field_65E; // padding
    char field_65F; // padding

    CColPoint m_aWheelColPoints[4];
    float m_aWheelRatios[4];
    float m_aRatioHistory[4];

    float m_aWheelCounts[4];
    float fBrakeCount;

    eSkidmarkType aWheelSkidmarkType[2];
    bool bWheelBloody[2];
    bool bMoreSkidMarks[2];

    float m_aWheelPitchAngles[2];
    float m_aWheelAngularVelocity[2];

    float m_aWheelSuspensionHeights[2];
    float m_aWheelOrigHeights[2];

    float m_fSuspensionLength[4];
    float m_fLineLength[4];
    float m_fHeightAboveRoad;
    float m_fExtraTractionMult;
    float m_fSwingArmLength;
    float m_fForkYOffset;
    float m_fForkZOffset;
    float m_fSteerAngleTan;

    UInt16 nBrakesOn;
    float m_fTyreTemp;
    float m_fBrakingSlide;

    uint8 m_nFixLeftHand;
    uint8 m_nFixRightHand;
    uint8 m_nTestPedCollision;

    float fPrevSpeed;

    float m_BlowUpTimer; // starts when vehicle health is lower than 250.0, bike blows up when it hits 5000.0

    CPhysical* m_aGroundPhysicalPtrs[4];
    CVector m_aGroundOffsets[4];

    CEntity* pEntityThatSetUsOnFire;

    UInt8 nNoOfContactWheels;
    UInt8 m_nDriveWheelsOnGround;
    UInt8 m_nDriveWheelsOnGroundLastFrame;
    float m_fGasPedalAudioRevs;
    tWheelState m_aWheelState[2]; // enum tWheelState

    //vtable

    void ProcessAI(unsigned int& arg0);

    //funcs

    CBike(int modelIndex, unsigned char createdBy);

    void SetupModelNodes();
    void dmgDrawCarCollidingParticles(CVector const& position, float power, eWeaponType weaponType); // dummy function
    static bool DamageKnockOffRider(CVehicle* arg0, float arg1, unsigned short arg2, CEntity* arg3, CVector& arg4, CVector& arg5);
    CPed* KnockOffRider(eWeaponType arg0, unsigned char arg1, CPed* arg2, bool arg3); // dummy function
    void SetRemoveAnimFlags(CPed* ped);
    void ReduceHornCounter();
    void ProcessBuoyancy();
    void ResetSuspension();
    bool GetAllWheelsOffGround();
    void DebugCode(); // dummy function
    void DoSoftGroundResistance(unsigned int& arg0);
    void PlayHornIfNecessary();
    void CalculateLeanMatrix();
    static void ProcessRiderAnims(CPed* rider, CVehicle* vehicle, CRideAnimData* rideData, tBikeHandlingData* handling);
    void FixHandsToBars(CPed* rider);
    void PlaceOnRoadProperly();
    void GetCorrectedWorldDoorPosition(CVector& out, CVector arg1, CVector arg2);
};

VALIDATE_SIZE(CBike, 0x814);
