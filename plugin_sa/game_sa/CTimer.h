/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#define GAMEISNOTPAUSED (!CTimer::m_UserPause && !CTimer::m_CodePause)

class PLUGIN_API CTimer
{
public:
    // handy
    static constexpr float MS_PER_SECOND = 1000.f;
    static constexpr float TIMESTEP_PER_SECOND = 50.f;                         //!< Number of steps/second
    static constexpr float TIMESTEP_LEN_IN_MS = MS_PER_SECOND / TIMESTEP_PER_SECOND; //!< How long (in ms) a timestep is
    static constexpr float MIN_TIMESTEP = 0.02f;

    // class variables
    static bool& bSkipProcessThisFrame;
    static bool& bSlowMotionActive;
    static float& game_FPS;

    static bool& m_CodePause;
    static uint32& m_FrameCounter;
    static bool& m_UserPause;
    static float& ms_fTimeStepNonClipped;
    static float& ms_fTimeStep;

    static uint32& m_snPPPPreviousTimeInMilliseconds;
    static uint32& m_snPPPreviousTimeInMilliseconds;
    static uint32& m_snPPreviousTimeInMilliseconds;
    static uint32& m_snPreviousTimeInMillisecondsNonClipped;
    static float& ms_fOldTimeStep;
    static float& ms_fSlowMotionScale;

    // game speed
    static float& ms_fTimeScale;
    static uint32& m_snPreviousTimeInMilliseconds;
    static uint32& m_snTimeInMillisecondsPauseMode;
    static uint32& m_snTimeInMillisecondsNonClipped;
    static uint32& m_snTimeInMilliseconds;

    // class functions

    static void Initialise();
    static void Shutdown();
    static void UpdateVariables(float timeStep);
    static void Suspend();
    static void Resume();
    
    static void Stop();
    static void Update();

    static uint32_t GetTimeInMilliseconds()                     { return m_snTimeInMilliseconds; }
    static uint32_t GetTimeInMillisecondsNonClipped()           { return m_snTimeInMillisecondsNonClipped; }
    static uint32_t GetPreviousTimeInMilliseconds()             { return m_snPreviousTimeInMilliseconds; }
    static uint32 GetPPreviousTimeInMilliseconds()              { return m_snPPreviousTimeInMilliseconds; }
    static uint32 GetPPPreviousTimeInMilliseconds()             { return m_snPPPreviousTimeInMilliseconds; }
    static uint32 GetPPPPreviousTimeInMilliseconds()            { return m_snPPPPreviousTimeInMilliseconds; }
    static uint32 GetPreviousTimeInMillisecondsNonClipped()     { return m_snPreviousTimeInMillisecondsNonClipped; }
    static float  GetTimeElapsedInMilliseconds()                { return CTimer::ms_fTimeStep * MIN_TIMESTEP * MS_PER_SECOND; }

    static float GetTimeElapsedInSeconds()                      { return CTimer::ms_fTimeStep * MIN_TIMESTEP; }

    static uint32 GetTimeElapsedInMillisecondsNonClipped()      { return ms_fTimeStepNonClipped * MIN_TIMESTEP * MS_PER_SECOND; }
    static void   SetTimeScale(float fTimeScale)                { ms_fTimeScale = fTimeScale; }
    static float  GetTimeScale()                                { return ms_fTimeScale; }
    static float  GetTimeStep()                                 { return ms_fTimeStep; }
    static void   SetTimeStep(float fTimeStep)                  { ms_fTimeStep = fTimeStep; }
    static float  GetTimeStepNonClipped()                       { return ms_fTimeStepNonClipped; }
    static float  GetTimeStepInSeconds()                        { return ms_fTimeStep * MIN_TIMESTEP; }
    static float GetTimeStepInSecondsNonClipped()               { return ms_fTimeStepNonClipped * MIN_TIMESTEP; }
    static float GetOldTimeStep()                               { return ms_fOldTimeStep; }
    //static uint32 GetDebugTimer();

    static uint32 GetCyclesPerMillisecond();
	static uint32 GetCyclesPerFrame(); // cycles per ms * 20
	static uint32 GetCurrentTimeInCycles();
    static uint32 GetCurrentTimeInMilleseconds()                { return CTimer::GetCurrentTimeInCycles() / CTimer::GetCyclesPerMillisecond(); }


    static uint32 GetCurrentTimeInPauseMode()                   { return m_snTimeInMillisecondsPauseMode; }
    static bool GetIsSlowMotionActive();

    static void StartUserPause();
    static void EndUserPause();

    static float GetTimestepPerSecond()                         { return TIMESTEP_PER_SECOND; }


    
    static void   ResetTimeScale()                              { ms_fTimeScale = 1.0f; }
    static void   UpdateTimeStep(float ts)                      { ms_fTimeStep = std::max(ts, 0.00001f); }
    
    static float  GetTimeStepInMilliseconds()                   { return GetTimeStepInSeconds() * MS_PER_SECOND; }

    
    static float  GetTimeStepNonClippedInSeconds()              { return ms_fTimeStepNonClipped / GetTimestepPerSecond(); }
    static float  GetTimeStepNonClippedInMilliseconds()         { return GetTimeStepNonClippedInSeconds() * MS_PER_SECOND; }
    static void   SetTimeStepNonClipped(float ts)               { ms_fTimeStepNonClipped = ts; }
    

    static uint32_t GetFrameCounter()                           { return m_FrameCounter; }
    static void   SetFrameCounter(uint32_t fc)                  { m_FrameCounter = fc; }

    
    static void   SetTimeInMilliseconds(uint32_t t)             { m_snTimeInMilliseconds = t; }

    
    static void   SetTimeInMillisecondsNonClipped(uint32_t t)   { m_snTimeInMillisecondsNonClipped = t; }

    static uint32_t GetTimeInMillisecondsPauseMode()            { return m_snTimeInMillisecondsPauseMode; }
    static void   SetTimeInMillisecondsPauseMode(uint32_t t)    { m_snTimeInMillisecondsPauseMode = t; }

    
    static void   SetPreviousTimeInMilliseconds(uint32_t t)     { m_snPreviousTimeInMilliseconds = t; }

    static bool GetIsPaused()                                   { return m_UserPause || m_CodePause; }
    static bool GetIsUserPaused()                               { return m_UserPause; }
    static bool GetIsCodePaused()                               { return m_CodePause; }
    static void SetCodePause(bool pause)                        { m_CodePause = pause; }
};