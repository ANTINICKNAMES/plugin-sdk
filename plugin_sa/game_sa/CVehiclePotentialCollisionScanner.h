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

class PLUGIN_API CVehiclePotentialCollisionScanner {
public:
	/*static const float ms_fVehiclePotentialRunOverDistance;
	static const float ms_fVehicleThreatMultiplier;
	static const float ms_fMinAvoidSpeed;
	static const float ms_fMinAvoidScaredSpeed;
	static const float ms_fSlowDiveDist;
	static const float ms_fFastDiveDist;

	static const float ms_fVehicleAvoidDistance;
	static const float ms_fMinIntersectionLength;

	static const int ms_iPeriod;

	CVehiclePotentialCollisionScanner();
	~CVehiclePotentialCollisionScanner();

	void ScanForVehiclePotentialCollisionEvents(const CPed& ped, CEntity** ppNearbyVehicles, const int iMaxNumVehicles);

	void ResetTimer();







	CTaskTimer* GetTimer() { return m_timer; };*/



	CTaskTimer m_timer;
};