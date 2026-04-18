/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CTimer
{
public:
    // handy
    static constexpr float TIMESTEP_PER_SECOND = 50.f;                         //!< Number of steps/second
    static constexpr float TIMESTEP_LEN_IN_MS = 1000.f / TIMESTEP_PER_SECOND; //!< How long (in ms) a timestep is

    // class variables
    static bool& bSkipProcessThisFrame;
    static bool& bSlowMotionActive;
    static float& game_FPS;

    static bool& m_CodePause;
    static unsigned int& m_FrameCounter;
    static bool& m_UserPause;
    static float& ms_fTimeStepNonClipped;
    static float& ms_fTimeStep;

    static unsigned int& m_snPPPPreviousTimeInMilliseconds;
    static unsigned int& m_snPPPreviousTimeInMilliseconds;
    static unsigned int& m_snPPreviousTimeInMilliseconds;
    static unsigned int& m_snPreviousTimeInMillisecondsNonClipped;
    static float& ms_fOldTimeStep;
    static float& ms_fSlowMotionScale;

    // game speed
    static float& ms_fTimeScale;
    static unsigned int& m_snPreviousTimeInMilliseconds;
    static unsigned int& m_snTimeInMillisecondsPauseMode;
    static unsigned int& m_snTimeInMillisecondsNonClipped;
    static unsigned int& m_snTimeInMilliseconds;

    // class functions

    static void Initialise();
    static void Shutdown();
    static void UpdateVariables(float timeStep);
    static void Suspend();
    static void Resume();
    static int GetCyclesPerMillisecond();
    // cycles per ms * 20
    static int GetCyclesPerFrame();
    static unsigned int GetCurrentTimeInCycles();
    static void Stop();
    static bool GetIsSlowMotionActive();
    static void StartUserPause();
    static void EndUserPause();
    static void Update();

    static float GetTimestepPerSecond() { return TIMESTEP_PER_SECOND; }

    static float  GetTimeScale() { return ms_fTimeScale; }
    static void   SetTimeScale(float ts) { ms_fTimeScale = ts; }
    static void   ResetTimeScale() { ms_fTimeScale = 1.0f; }

    static float  GetTimeStep() { return ms_fTimeStep; }
    static void   SetTimeStep(float ts) { ms_fTimeStep = ts; }
    static void   UpdateTimeStep(float ts) { ms_fTimeStep = std::max(ts, 0.00001f); }
    static float  GetTimeStepInSeconds() { return ms_fTimeStep / TIMESTEP_PER_SECOND; }
    static float  GetTimeStepInMS() { return GetTimeStepInSeconds() * 1000.0f; } // pattern: CTimer::ms_fTimeStep * 0.02f * 1000.0f

    static float  GetTimeStepNonClipped() { return ms_fTimeStepNonClipped; }
    static float  GetTimeStepNonClippedInSeconds() { return ms_fTimeStepNonClipped / 50.0f; }
    static float  GetTimeStepNonClippedInMS() { return GetTimeStepNonClippedInSeconds() * 1000.0f; }
    static void   SetTimeStepNonClipped(float ts) { ms_fTimeStepNonClipped = ts; }

    static uint32_t GetFrameCounter() { return m_FrameCounter; }
    static void   SetFrameCounter(uint32_t fc) { m_FrameCounter = fc; }

    static uint32_t GetTimeInMS() { return m_snTimeInMilliseconds; }
    static void   SetTimeInMS(uint32_t t) { m_snTimeInMilliseconds = t; }

    static uint32_t GetTimeInMSNonClipped() { return m_snTimeInMillisecondsNonClipped; }
    static void   SetTimeInMSNonClipped(uint32_t t) { m_snTimeInMillisecondsNonClipped = t; }

    static uint32_t GetTimeInMSPauseMode() { return m_snTimeInMillisecondsPauseMode; }
    static void   SetTimeInMSPauseMode(uint32_t t) { m_snTimeInMillisecondsPauseMode = t; }

    static uint32_t GetPreviousTimeInMS() { return m_snPreviousTimeInMilliseconds; }
    static void   SetPreviousTimeInMS(uint32_t t) { m_snPreviousTimeInMilliseconds = t; }

    static bool GetIsPaused() { return m_UserPause || m_CodePause; }
    static bool GetIsUserPaused() { return m_UserPause; }
    static bool GetIsCodePaused() { return m_CodePause; }
    static void SetCodePause(bool pause) { m_CodePause = pause; }
};