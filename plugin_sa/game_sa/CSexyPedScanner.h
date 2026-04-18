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

class PLUGIN_API CSexyPedScanner
{

public:
	/*
	static const int32 ms_fSexyPedRange;
	static const int32 ms_iScanPeriod;
	static const int32 ms_iSexyPedLatencyPeriod;

	CSexyPedScanner();
	~CSexyPedScanner();

	void ScanForSexyPedEvents(const CPed& ped, CEntity** ppNearbyPeds, const int iMaxNumPeds);
	CTaskTimer* GetTimer();*/


//private:
public:
	//bool IsScanPermitted(const CPed& ped) const;

	CTaskTimer m_timer;
};