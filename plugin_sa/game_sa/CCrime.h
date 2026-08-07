/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "eCrimeType.h"


class PLUGIN_API CCrime
{
public:
	static void ReportCrime(eCrimeType CrimeType, CEntity* pVictim, CPed* pCommitedby);

	static float FindImmediateDetectionRange(eCrimeType CrimeType);
};