/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEFrontendAudioEntity.h"
#include "CAEPedlessSpeechAudioEntity.h"
#include "CAETwinLoopSoundEntity.h"
#include "CAEScriptAudioEntity.h"
#include "CAECollisionAudioEntity.h"
#include "CAEVehicleAudioEntity.h"
#include "eAudioEvents.h"

#include "GameAudioEvents.h"

struct
{
    int Time;
    int Type;
} typedef tBeatInfoBeat;

struct
{
    tBeatInfoBeat BeatWindow[20];
    int bBeatInfoPresent;
    int BeatTypeThisFrame;
    int BeatNumber;
} typedef tBeatInfo;

class PLUGIN_API CAudioEngine {
public:
    Bool8 m_bPlayingMissionCompleteTrack, m_bStoppingMissionCompleteTrack;
    Int8 m_nActiveRadioStationBeforeCutscene;
    char field_3; // padding?
    int m_nAudioStreamClientHandle;
    tBeatInfo m_BeatInfo;
    CAEFrontendAudioEntity m_FrontendAudioEntity;
    CAETwinLoopSoundEntity field_150;
    CAETwinLoopSoundEntity field_1F8;
    CAEScriptAudioEntity m_ScriptAudioEntity;
    CAECollisionAudioEntity m_CollisionAudioEntity;
    int m_pGlobalWeaponAudioEntity; // CAEGlobalWeaponAudioEntity*
    CAEPedlessSpeechAudioEntity m_PedlessSpeechAudioEntity;
    char field_1F38[24];
    CAEDoorAudioEntity m_GlobalDoorAudioEntity;

public:
    void Initialise();
    void Restart();
    void Shutdown();
    void SetEffectsMasterVolume(char volume);
    void SetMusicMasterVolume(char volume);
    void SetBassEnhanceOnOff(bool on);
    void SetRadioAutoRetuneOnOff(bool on);
    void RetuneRadio(char stationId);
    CReference* ReportFrontendAudioEvent(int id, float volume, float speed);
    void ReportMissionAudioEvent(eAudioEvents audioEvent, CVector const* coords);
    void Service();
    void ServiceLoadingTune(float fade);
    void StartRadio(int radioStation, char arg);
    void StopRadio(tVehicleAudioSettings* settings, bool arg);
    bool IsRadioRetuneInProgress();
    bool IsLoadingTuneActive();
    bool IsRadioOn();
    bool IsAmbienceTrackActive();
    bool StartLoadingTune();
    char GetCurrentRadioStationID();
    bool IsVehicleRadioActive();
    void InitialisePostLoading();
    void SetMusicFaderScalingFactor(float value);
    void SetEffectsFaderScalingFactor(float value);
    void ReportBulletHit(CEntity* pHitEntity, UInt8 HitSurface, CVector& vPosition, float fAngleOfIncidence);
};

VALIDATE_SIZE(CAudioEngine, 0x1FD8);

extern CAudioEngine& AudioEngine;