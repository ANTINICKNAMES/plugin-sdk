/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCrime.h"

// 0x532010
void CCrime::ReportCrime(eCrimeType CrimeType, CEntity* pVictim, CPed* pCommitedby)
{
    plugin::Call<0x532010, eCrimeType, CEntity*, CPed*>(CrimeType, pVictim, pCommitedby);
}

// 0x531FC0
float CCrime::FindImmediateDetectionRange(eCrimeType CrimeType)
{
    return plugin::CallAndReturn<float, 0x531FC0, eCrimeType>(CrimeType);
}