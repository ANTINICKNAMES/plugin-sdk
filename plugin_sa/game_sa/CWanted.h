/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCrimeBeingQd.h"
#include "CAEPoliceScannerAudioEntity.h"
#include "eCrimeType.h"

class CPed;
class CCopPed;

enum eWantedLevel
{
    WANTED_CLEAN = 0,
    WANTED_LEVEL1,
    WANTED_LEVEL2,
    WANTED_LEVEL3,
    WANTED_LEVEL4,
    WANTED_LEVEL5,
    WANTED_LEVEL6
};

class PLUGIN_API CWanted {
public:
    int32           m_nWantedLevel; // IMPORTANT: m_nWantedLevel returns chase value from 0 to 1000, m_WantedLevel returns number of stars!!!
    int32           m_nWantedLevelBeforeParole;
    uint32          m_LastTimeWantedDecreased;
    uint32          m_LastTimeWantedLevelChanged;
    UInt32          m_TimeOfParole;
    float           m_fMultiplier; // New crimes have their wanted level contribution multiplied by this
    uint8           m_nCopsInPursuit;
    uint8           m_nMaxCopsInPursuit;
    uint8           m_nMaxCopCarsInPursuit;

    uint8           m_nCopsBeatingSuspect;
    uint16          m_nChanceOnRoadBlock;
    uint8           m_PoliceBackOff : 1;       // If this is set the police will leave player alone (for cut-scenes)
    uint8           m_PoliceBackOffGarage : 1; // If this is set the police will leave player alone (for garages)
    uint8           m_EverybodyBackOff : 1;    // If this is set then everybody (including police) will leave the player alone (for cut-scenes)
    uint8           m_swatRequired : 1;        // These three booleans are needed so that the
    uint8           m_fbiRequired : 1;         // streaming required vehicle stuff can be overrided
    uint8           m_armyRequired : 1;
private:
	char _pad1F;
public:
    uint32          current_chase_time;
    uint32          current_chase_time_counter;
    bool8           m_bTimeCounting;

    eWantedLevel    m_WantedLevel; // IMPORTANT: m_nWantedLevel returns chase value from 0 to 1000, m_WantedLevel returns number of stars!!!
    eWantedLevel    m_WantedLevelBeforeParole; // stored wanted level stars when flashing

	CCrimeBeingQd   CrimesBeingQd[16];
	CCopPed*        m_pCopsInPursuit[10];
    CAEPoliceScannerAudioEntity m_PoliceScannerAudioEntity;
    bool            m_bStoredPoliceBackOff;
private:
    char _pad299[3];
public:

    static unsigned int &MaximumWantedLevel; // default 6
    static unsigned int &nMaximumWantedLevel; // default 9200
    static bool &bUseNewsHeliInAdditionToPolice;

    static void InitialiseStaticVariables();
    void UpdateWantedLevel();
    static void SetMaximumWantedLevel(int level);
    bool AreMiamiViceRequired();
    bool AreSwatRequired();
    bool AreFbiRequired();
    bool AreArmyRequired();
    int NumOfHelisRequired();
    // dummy function
    static void ResetPolicePursuit();
    void ClearQdCrimes();
    bool AddCrimeToQ(eCrimeType crimeType, int crimeId, CVector const& posn, bool bAlreadyReported, bool bPoliceDontReallyCare);
    void ReportCrimeNow(eCrimeType crimeType, CVector const& posn, bool bPoliceDontReallyCare);
    static void RemovePursuitCop(CCopPed* cop, CCopPed** copsArray, unsigned char& copsCounter);
    bool IsInPursuit(CCopPed* cop);
    static void UpdateEachFrame();
    void Initialise();
    void Reset();
    void RegisterCrime(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare);
    void RegisterCrime_Immediately(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare);
    void SetWantedLevel(int level);
    void CheatWantedLevel(int level);
    void SetWantedLevelNoDrop(int level);
    void ClearWantedLevelAndGoOnParole();
    static int WorkOutPolicePresence(CVector posn, float radius);
    void UpdateCrimesQ();
    bool IsClosestCop(CPed* ped, int numCopsToCheck);
    static CCopPed* ComputePursuitCopToDisplace(CCopPed* cop, CCopPed** copsArray);
    void RemovePursuitCop(CCopPed* cop);
    void RemoveExcessPursuitCops();
    void Update();
    static bool CanCopJoinPursuit(CCopPed* cop, unsigned char maxCopsCount, CCopPed** copsArray, unsigned char& copsCounter);
    bool CanCopJoinPursuit(CCopPed* cop);
    bool SetPursuitCop(CCopPed* cop);

    int32 GetWantedLevel() { return m_WantedLevel; }
    bool PoliceBackOff() const { return m_PoliceBackOff || m_PoliceBackOffGarage || m_EverybodyBackOff; };
};

VALIDATE_SIZE(CWanted, 0x29C);