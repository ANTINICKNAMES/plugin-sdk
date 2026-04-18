/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEntity.h"

struct TInterestingEvent
{
	uint32_t m_eType;
	uint32_t m_iStartTime;
	CEntity* m_pEntity;
};




class PLUGIN_API CInterestingEvents
{

public:
	//CInterestingEvents();
	//~CInterestingEvents();


	enum EType
	{
		ENone = 0,
		EPedsChatting,
		EPedSunbathing,
		EPedUsingAttractor,
		EProzzyNearby,
		ECopNearby,
		ECriminalNearby,
		EGangMemberNearby,
		ESexyCar,
		ESexyPed,
		EPlaneFlyby,
		EPedRevived,
		EEmergencyServicesArrived,
		EPanickedPed,
		EMadDriver,
		EPedRunOver,
		EPedKnockedOffBike,
		ECarCrash,
		ERoadRage,
		EFistFight,
		ECarJacking,
		EHelicopterOverhead,
		EGunshotFired,
		EGangAttackingPed,
		EGangFight,
		ECopKillingCriminal,
		ESwatTeamAbseiling,
		EExplosion,
		EPedGotKilled,
		ENumCategories
	};



	void ScanForNearbyEntities();

	// unknown address
	//const TInterestingEvent* GetInterestingEvent() {}

	void InvalidateEvent(const TInterestingEvent* pInvalidEvent);

	void InvalidateNonVisibleEvents();


	inline bool IsActive() { return m_bIsActive; }
	inline void SetActive(bool b) { m_bIsActive = b; }


	inline bool GetIgnoreEventsBehindPlayer() { return m_bIgnoreEventsBehindPlayer; }
	inline void SetIgnoreEventsBehindPlayer(bool b) { m_bIgnoreEventsBehindPlayer = b; }


	inline float GetEventRadius() { return m_fEventRadius; }
	inline void SetEventRadius(float r) { m_fEventRadius = r; }


	void Add(CInterestingEvents::EType eType, CEntity* pEntity);



//private:
public:
	TInterestingEvent m_Events[8];

	uint8_t m_EventPriorities[29];

	uint16_t m_EventDurations[29];

	uint32_t m_NextTimeToAcceptEvents[29];


	bool m_bIsActive : 1;
	bool m_bIgnoreEventsBehindPlayer : 1;
	bool m_bWaitForEventDurationToComplete : 1;
	bool m_bUseTimeDelayBeforeAddingSimilarEvent : 1;

	uint32_t m_iCurrentFrameCounter;
	uint32_t m_iLastScanTime;

	// actually useless
	//static const uint32_t ms_iScanFrequency;


	float m_fEventRadius;
	CVector m_ScanOrigin;
	CVector m_ViewVec;


	int8_t m_iLookingAtEvent;
};

extern CInterestingEvents& g_InterestingEvents;