/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"
#include "CEventDamage.h"
#include "CEventHandlerHistory.h"


#include "CTaskSimple.h"

// TODO / cpp

class PLUGIN_API CEventHandler {
public:
    class CPed *m_pPed;

    CEventHandlerHistory m_history;

    CTask* m_pTaskPhysResponse;
    CTask* m_pTaskEventResponse;

    CTaskSimple* m_pTaskSecondaryAim;

    CTaskSimple* m_pTaskSecondarySay;
    CTaskSimple* m_pTaskSecondaryPartialAnim;


	int GetCurrentEventType();
	CEvent* GetCurrentEvent();

	void Flush();
	void FlushImmediately();

	void HandleEvents();

	static CTask* ComputeEventResponseTask(CPed& ped, CEvent& rEvent);

	bool IsRespondingToEvent(int iEventType);


	static bool IsTemporaryEvent(CEvent& event);

	void ResetResponse();


	//void ResetHistory();

	//int CountTasks(SArray<CTask*>&) const;
	//int CountEvents() const;

	void RecordActiveEvent(CEvent& event);
	void RecordPassiveEvent(CEvent& event);

	void ComputeEventResponseTask(CEvent* pEvent, CTask* pAbortedTaskEventResponse);
	void ComputeDraggedOutCarResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehicleCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedCollisionWithPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedCollisionWithPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePlayerCollisionWithPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeBuildingCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeObjectCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePersonalityResponseToDamage(CEventDamage* pEventDamage, CEntity* pInflictor);
	void ComputeDamageResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest, CTask* pAbortedTaskEventResponse);
	void ComputeDeathResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeDeadPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehiclePotentialCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehiclePotentialPassiveCollisionResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	//void ComputeVehicleHitAndRunResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeShotFiredResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedEnteredVehicleResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);

	void ComputeReviveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeChatPartnerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeSexyPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeSexyVehicleResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);


	void ComputePedToChaseResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedToFleeResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeAttractorResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePotentialPedCollideResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehicleToStealResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeKnockOffBikeResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeGunAimedAtResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeScriptCommandResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehicleDiedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedFriendResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedThreatResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedThreatBadlyLitResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePedSoundQuietResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeLowHealthResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeReallyLowHealthResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeLowAngerAtPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeHighAngerAtPlayerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeOnFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	//void ComputeBuildingCollisionPassiveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeWaterCannonResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeInWaterResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeInteriorUseInfoResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);

	void ComputeSignalAtPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);

	void ComputePassObjectResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);


	void ComputeCreatePartnerTaskResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePlayerWantedLevelResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehicleOnFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeCopCarBeingStolenResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeVehicleDamageResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeSpecialResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeGotKnockedOverByCarResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeObjectCollisionPassiveResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeCarUpsideDownResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputePotentialWalkIntoFireResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeShotFiredWhizzedByResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeSeenPanickedPedResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeAreaCodesResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeFireNearbyResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeSeenCopResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeOnEscalatorResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeDangerResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);
	void ComputeDontJoinGroupResponse(CEvent* pEvent, CTask* pTaskActive, CTask* pTaskActiveSimplest);

	void SetEventResponseTask(CEvent& event);

	//bool Response();

	
	static bool IsKillTaskAppropriate(CPed* pPed, CPed* pOtherPed, CEvent& event);


	static void RegisterKill(CPed* pPed, CEntity* pInflictor, eWeaponType eWeaponUsed, bool bHeadShot);
};

VALIDATE_SIZE(CEventHandler, 0x34);