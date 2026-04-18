/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"
#include "CEventEditableResponse.h"

#include "CPedDamageResponse.h"
#include "eAnimations.h"
#include "ePedPieceTypes.h"

// TODO: AnimationID & AssocGroupID stuff
typedef int AnimationId;
typedef int AssocGroupId;

class PLUGIN_API CEventDamage : public CEventEditableResponse
{
public:
	CEventDamage(CEntity* pInflictor, uint32_t nTime, eWeaponType eWeaponUsed, ePedPieceTypes eHitZone,
		uint8_t iPedHitDir, bool bJumpedOutOfMovingCar, bool bDamagedInVehicle);

	CEventDamage(const CEventDamage& src);
	virtual ~CEventDamage() {}

	//CEventDamage& operator=(const CEventDamage& src);

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* CloneEditable(); // either 4 or 16
	virtual bool AffectsPed(CPed* pPed);
	virtual bool AffectsPedGroup(CPedGroup* pPedGroup);
	virtual bool IsCriminalEvent();
	virtual void ReportCriminalEvent(CPed* pPed);


	virtual CEntity* GetSourceEntity();
	virtual float GetLocalSoundLevel();
	virtual bool DoInformVehicleOccupants(CPed* pPed);
	virtual bool TakesPriorityOver(CEvent& otherEvent);

	virtual bool CanBeInterruptedBySameEvent();
	bool IsSameEventForAI(CEventDamage* pEvent);

	bool HasKilledPed();

	void ComputeDeathAnim(CPed* pPed, bool bAtGenerateEventStage);
	void ComputeDamageAnim(CPed* pPed, bool bAtGenerateEventStage);
	void ComputeHeadShot(bool& bHeadShot);
	void ComputeBodyPartToRemove(int& iBodyPartToRemove);

	CEntity* GetInflictor();
	uint32_t GetDamageTime();
	eWeaponType GetWeaponUsed();
	float GetDamageApplied();
	ePedPieceTypes GetHitZone();
	void SetHitZone(ePedPieceTypes eHitZone);
	uint8_t GetPedHitDir();
	bool GetFallDown();

	void SetIsStealthMode(bool bStealthMode);
	bool GetIsStealthMode();

	AssocGroupId GetAnimGroup();
	AnimationId GetAnimId();
	void SetAnimId(AnimationId nAnimId);
	float GetAnimBlend();
	float GetAnimSpeed();
	bool GetAnimAdded();
	void SetAnimInfo(AssocGroupId, AnimationId, float, float);

	void SetAnimAdded();

	CPedDamageResponse& GetDamageResponseData();


	void ProcessDamage(CPed* pPed);


//private:
public:
	CEntity* m_pInflictor;
	uint32_t m_nDamageTime;
	eWeaponType m_eWeaponUsed;
	ePedPieceTypes m_eHitZone;
	uint8_t m_iPedHitDir;
	uint8_t m_bJumpedOutOfMovingCar : 1;
	uint8_t m_bFallDown : 1;
	uint8_t m_bAnimAdded : 1;
	uint8_t m_bWitnessedInVehicle : 1;
	uint8_t m_bStealthMode : 1;

	AssocGroupId m_nAnimGroup;
	AnimationId m_nAnimId;
	float m_fAnimBlendSpeed;
	float m_fAnimPlaySpeed;

	CPedDamageResponse m_pedDamageResponse;

	void From(const CEventDamage& src);
};