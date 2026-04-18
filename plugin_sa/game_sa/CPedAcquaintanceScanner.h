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

class CPedAcquaintanceScanner
{

public:
	/*
	static int ms_iAcquaintanceScanPeriod;
	static int ms_iAcquaintanceLatencyPeriodDefinite;
	static int ms_iAcquaintanceLatencyPeriodMaybe;
	static float ms_fThresholdDotProduct;

	CPedAcquaintanceScanner(const bool, const bool, const bool);





	~CPedAcquaintanceScanner();

	void SetActivationState(const bool, const bool, const bool);









	void ScanForPedAcquaintanceEvents(CPed& ped, CEntity** ppNearbyPeds, const int iMaxNumPeds);




	void FindClosestAcquaintance(CPed& ped, const int iAcquaintanceScanTypeExclusive, CEntity** ppNearbyPeds, const int iMaxNumPeds, CPed*& pAcquaintancePed, int& iAcquaintancePedScanType);





	void SetTimer(int32 msTime);
	CTaskTimer* GetTimer();*/


//protected:
public:
	//int ScanAcquaintanceTypes(const CPed& ped, const int iAcquaintanceScanTypeExclusive, const int iAddedType, CPed* pOtherPed, CPed*& pAcquaintancePed, int& iAcquaintancePedScanType);




	//bool AddAcquaintanceEvent(const CPed& ped, const int iAcquaintanceType, CPed* pAcquaintancePed);


	CTaskTimer m_timer;
	bool m_bActivatedEverywhere;
	bool m_bActivatedInVehicle;
	bool m_bActivatedDuringScriptCommands;
	
	//bool IsScanPermitted(const CPed& ped) const;


	
	//static bool CanJoinLARiot(const CPed& ped, const CPed& otherPed);
};

VALIDATE_SIZE(CPedAcquaintanceScanner, 0x10);