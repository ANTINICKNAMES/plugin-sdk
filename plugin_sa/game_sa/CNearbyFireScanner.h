/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CTaskTimer.h"

// TODO / cpp

class PLUGIN_API CNearbyFireScanner
{

public:
	/*
	static const int ms_iLatencyPeriod;
	static const float ms_fNearbyFireRange;
	static const float ms_fPotentialWalkIntoFireRange;

	CNearbyFireScanner();
	~CNearbyFireScanner();

	void ScanForNearbyFires(const CPed& ped);
	CTaskTimer* GetTimer();
	*/


	CTaskTimer m_timer;
};