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

class PLUGIN_API CObjectPotentialCollisionScanner {
public:
    /*
	static const float ms_fObjectAvoidDistance;
	static const float ms_fMinIntersectionLength;
	static const int ms_iPeriod;
	
	CObjectPotentialCollisionScanner();
	~CObjectPotentialCollisionScanner();
	
	void ScanForObjectPotentialCollisionEvents(const CPed& ped);
	
	CTaskTimer* GetTimer() { return m_timer; };
	*/

    CTaskTimer m_timer;
};

VALIDATE_SIZE(CObjectPotentialCollisionScanner, 0xC);