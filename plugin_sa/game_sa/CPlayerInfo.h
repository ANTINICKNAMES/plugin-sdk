/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CPlayerData.h"
#include "CVector.h"
#include "CPlayerPed.h"

class CPed;
class CVehicle;

class PLUGIN_API CPlayerCrossHair
{

public:
    bool bActivated; // -1 ... 1 on screen
    float TargetX, TargetY;

    void SwitchCrossHairOn();
    void SwitchCrossHairOff();
    void Update(Int32 PlayerIndex, CPad* pPad);
    void Render(Int32 PlayerIndex);
};

VALIDATE_SIZE(CPlayerCrossHair, 0xC);

class PLUGIN_API CPlayerInfo {
public:
    enum
    {
        PLAYERSTATE_PLAYING = 0,
        PLAYERSTATE_HASDIED,
        PLAYERSTATE_HASBEENARRESTED,
        PLAYERSTATE_FAILEDMISSION,
        PLAYERSTATE_LEFTGAME
    };
public:
    CPlayerPed *pPed;                           // Pointer to the player ped (should always be set)
    CPlayerPedData PlayerPedData;               // instance of player variables
    CVehicle* pRemoteVehicle;             // Pointer to vehicle player is driving remotely at the moment.(NULL if on foot)

    CVehicle* pSpecCar;                   // which car is using the special collision model

    Int32 Score;                           // Points for this player
    Int32 DisplayScore;                    // Points as they would be displayed
    Int32 CollectablesPickedUp;   // How many bags of sugar do we have
    Int32 TotalNumCollectables;   // How many bags of sugar are there to be had in the game
    
    UInt32 nLastBumpPlayerCarTimer; // Keeps track of when the last ped bumped into the player car
    
    UInt32 TaxiTimer;              // Keeps track of how long the player has been in a taxi with a passenger (in msecs)
    UInt32 vehicle_time_counter;     // keeps track of how long player has been in car for driving skill
    bool bTaxiTimerScore;                 // If TRUE then add 1 to score for each second that the player is driving a taxi
    bool m_bTryingToExitCar;                // if player holds exit car button, want to trigger getout once car slowed enough with a passenger
private:
    char _pad0[2];
public:
    CVehicle* pLastTargetVehicle;         // Last vehicle player tried to enter.

    UInt8 PlayerState;           // see ePlayerState

    bool bAfterRemoteVehicleExplosion;
    bool bCreateRemoteVehicleExplosion;
    bool bFadeAfterRemoteVehicleExplosion;
    UInt32 TimeOfRemoteVehicleExplosion;
    
    UInt32 LastTimeEnergyLost;      // To make numbers flash on the HUD;
    UInt32 LastTimeArmourLost;
    
    UInt32 LastTimeBigGunFired;    // Tank guns etc
    UInt32 TimesUpsideDownInARow;  // Make car blow up if car upside down
    UInt32 TimesStuckInARow;       // Make car blow up if player cannot get out.
    
    UInt32 nCarTwoWheelCounter;     // how long has player's car been on two wheels
    float fCarTwoWheelDist;               // Make car blow up if player cannot get out.
    UInt32 nCarLess3WheelCounter;   // how long has player's car been on less than 3 wheels
    UInt32 nBikeRearWheelCounter;   // how long has player's bike been on rear wheel only
    float fBikeRearWheelDist;
    UInt32 nBikeFrontWheelCounter;  // how long has player's bike been on front wheel only
    float fBikeFrontWheelDist;
    UInt32 nTempBufferCounter;      // so wheels can leave the ground for a few frames without stopping above counters
    
    UInt32 nBestCarTwoWheelsTimeMs;
    float fBestCarTwoWheelsDistM;
    UInt32 nBestBikeWheelieTimeMs;
    float fBestBikeWheelieDistM;
    UInt32 nBestBikeStoppieTimeMs;
    float fBestBikeStoppieDistM;
    UInt16 CarDensityForCurrentZone;
private:
    char _pad1[2];
public:
    float RoadDensityAroundPlayer;       // 1.0f for an average city.

    UInt32 TimeOfLastCarExplosionCaused;
    Int32 ExplosionMultiplier;
    Int32 HavocCaused;            // A counter going up when the player does bad stuff.
    Int16 TimeLastEaten;
private:
    char _pad2[2];
public:
    float CurrentChaseValue;             // How 'ill' is the chase at the moment

    bool DoesNotGetTired;
    bool FastReload;
    bool FireProof;
    UInt8 MaxHealth;
    UInt8 MaxArmour;

    bool bGetOutOfJailFree;               // Player doesn't lose money/weapons next time arrested
    bool bFreeHealthCare;           // Player doesn't lose money next time patched up at hospital

    bool bCanDoDriveBy;
    UInt8 m_nBustedAudioStatus;

private:
    char _pad3;
public:
    UInt16 m_nLastBustMessageNumber;
    
    CPlayerCrossHair CrossHair;

    char m_skinName[32];
    RwTexture* m_pSkinTexture;

    bool m_bParachuteReferenced;
private:
    char _pad4[3];
public:
    uint32 m_nRequireParachuteTimer;

public:
    CPlayerInfo();

    void Clear();

    void Process(Int32 PlayerNumber);

    bool IsPlayerInRemoteMode();

    void FindClosestCarSectorList(CPtrList& list, CPed* pPed, float MinX, float MinY, float MaxX, float MaxY, float* pCloseness, CVehicle** ppClosestVehicle);

    void EvaluateCarPosition(CEntity* pEntity, CPed* pPed, float Distance, float* pCloseness, CVehicle** ppClosestVehicle);

    CObject* FindObjectToSteal(CPed* pPed);

    CVector GetSpeed();
    CVector GetPos();

    Bool8 IsRestartingAfterDeath();
    Bool8 IsRestartingAfterArrest();
    Bool8 IsRestartingAfterMissionFailed();

    bool Load();
    bool Save();

    void KillPlayer();
    void ArrestPlayer();
    void WorkOutEnergyFromHunger();
    void PlayerFailedCriticalMission();
    void CancelPlayerEnteringCars(CVehicle* pSpecificCar);
    void MakePlayerSafe(bool bSafeState, float ExtinguishRange);

    void BlowUpRCBuggy(bool bCauseExplosion);
    void SetPlayerSkin(const char* pSkinName);
    void LoadPlayerSkin();
    void DeletePlayerSkin();

    void AddHealth(Int32 Amount);

    void SetLastTargetVehicle(CVehicle* pTargetVehicle);
    CVehicle* GetLastTargetVehicle() const { return pLastTargetVehicle; }

    void StreamParachuteWeapon(bool bAllowParachute);
    void GivePlayerParachute();
};

VALIDATE_SIZE(CPlayerInfo, 0x190);
