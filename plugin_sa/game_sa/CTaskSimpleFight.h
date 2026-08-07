/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

class CObject;
class CPlayerPed;

enum eMeleeCombo
{
	MCOMBO_IDLE = 0,
	MCOMBO_MOVE,
	MCOMBO_BLOCK,
	MCOMBO_END,
	MCOMBO_UNARMED_1,
	MCOMBO_UNARMED_2,
	MCOMBO_UNARMED_3,
	MCOMBO_UNARMED_4,
	MCOMBO_BBALLBAT,
	MCOMBO_KNIFE,
	MCOMBO_GOLFCLUB,
	MCOMBO_SWORD,
	MCOMBO_CHAINSAW,
	MCOMBO_DILDO,
	MCOMBO_FLOWERS,
	MCOMBO_KICK_STD,
	MCOMBO_PISTOL_WHIP,
	MCOMBO_NUM
};


enum eMeleeCommand
{
	MCOMMAND_IDLE = 0,
	MCOMMAND_END_SLOW,
	MCOMMAND_BLOCK,
	MCOMMAND_MOVE_FWD,
	MCOMMAND_MOVE_LEFT,
	MCOMMAND_MOVE_BACK,
	MCOMMAND_MOVE_RIGHT,
	MCOMMAND_SHUFFLE_FWD,
	MCOMMAND_SHUFFLE_LEFT,
	MCOMMAND_SHUFFLE_BACK,
	MCOMMAND_SHUFFLE_RIGHT,
	MCOMMAND_ATTACK_1,
	MCOMMAND_ATTACK_2,
	MCOMMAND_ATTACK_3,
	MCOMMAND_ATTACK_4,
	MCOMMAND_END_QUICK,
	MCOMMAND_END_RUNAWAY,
	MCOMMAND_END_SPRINTAWAY,
	MCOMMAND_END_DUCK,
	MCOMMAND_STEALTH_KILL
};

enum eMeleeAttacks
{
	MATTACK_1 = 0,
	MATTACK_2,
	MATTACK_3,
	MATTACK_GROUND,
	MATTACK_MOVING
};

enum eMeleeHitLevel
{
	MHIT_LEVEL_HIGH = 0,
	MHIT_LEVEL_LOW,
	MHIT_LEVEL_GROUND,
	MHIT_LEVEL_BEHIND,
	MHIT_LEVEL_HIGH_LONG,
	MHIT_LEVEL_LOW_LONG,
	MHIT_LEVEL_GROUND_LONG,
	MHIT_LEVEL_NUM
};

struct tMeleeComboSet
{
	AssocGroupId nAnimGroup;
	float fGroupRange;
	float aFireTime[5];
	float aComboTime[5];
	float aRadius[5];
	float aGroundLoopStart;
	float aBlockLoopStart;
	float aBlockLoopEnd;
	uint8 aHitLevel[5];
	uint8 aDamage[5];

	tAudioEvent aHitSound[5];
	tAudioEvent aAltHitSound[5];


	uint16 nFlags;
};

class PLUGIN_API CTaskSimpleFight : public CTaskSimple {
protected:
    CTaskSimpleFight(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:

	static tMeleeComboSet* m_aComboData; //[13];
	static CVector& m_aHitOffset; //[7];
	static CColModel& m_sStrikeColModel;
	static CCollisionData& m_sStrikeColData;
	static CColSphere* m_sStrikeSpheres; //[1];

    bool m_bIsFinished;
    bool m_bIsInControl;

    bool m_bAnimsReferenced;

private:
    char _pad;

public:
    AssocGroupId m_nRequiredAnimGroup;

    uint16 m_nIdlePeriod;
    uint16 m_nIdleCounter;
    int8 m_nContinueStrike;
    int8 m_nChainCounter;

private:
    char _pad2[2];

public:
    CEntity* m_pTargetEntity;
    CAnimBlendAssociation* m_pAnim;
    CAnimBlendAssociation* m_pIdleAnim;

    int8 m_nComboSet;
    int8 m_nCurrentMove;
    int8 m_nNextCommand;
    int8 m_nLastCommand;
    
    CTaskSimpleFight(CEntity* pTargetEntity, int nCommand, uint32 nIdlePeriod = 10000);

	bool ControlFight(CEntity* pTargetEntity, int8 nCommand);


	AssocGroupId GetAnimGroup();
	bool GetHitFallFlagSet();
	bool GetNoHitFallFlagSet();

	float GetStrikeDamage(CPed* pPed);

	bool BeHitWhileBlocking(CPed* pPed, CPed* pAttacker, int8 nAttackCombo, int8 nAttackMove);

	static float GetBaseAttackRange(); // 1.5f;
	static eMeleeCombo GetComboType(char* pComboName);

	void StartAnim(CPed* pPed, int nNewMove);
	int8 GetAvailableComboSet(CPed* pPed, int8 nNextCommand);
	void SetPlayerMoveAnim(CPlayerPed* pPlayerPed);

	CPed* FightHitPed(CPed* pPed, CPed* pHitPed, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType);
	void FightHitObj(CPed* pPed, CObject* pHitObj, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType, UInt8 nColSurfaceType);
	uint8 FightStrike(CPed* pPed, CVector& vec);

	int16 ChooseAttackPlayer(CPed* pPed);
	int16 ChooseAttackAI(CPed* pPed);
	bool FindTargetOnGround(CPed* pPed);

	static void FinishMeleeAnimCB(CAnimBlendAssociation* pAnim, void* pData);
	static void LoadMeleeData();
	static uint8 GetHitLevel(const char* pHitLevelName);


	static Int16 GetHitSound(const int32 pHitSound);

	void FightSetUpCol(float fRadius);
	void FightHitCar(CPed* pPed, CVehicle* pHitCar, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType, UInt8 nColSurfaceType);

	float GetRange(); //const;

	tMeleeComboSet& GetMeleeComboData() { return m_aComboData[m_nComboSet - MCOMBO_UNARMED_1 < 0 ? 0 : m_nComboSet - MCOMBO_UNARMED_1]; }

	CEntity* GetTargetEntity() const	{ return m_pTargetEntity; }
	int8 GetCurrentCombo() const		{ return m_nComboSet; }
	int8 GetCurrentMove() const			{ return m_nCurrentMove; }
	int8 GetCurrentCommand() const		{ return m_nLastCommand; }
	float GetAttackRange() const		{ return m_aComboData[m_nComboSet - MCOMBO_UNARMED_1 < 0 ? 0 : m_nComboSet - MCOMBO_UNARMED_1].fGroupRange; } // I don't get it

	bool GetIsFinished() const			{ return m_bIsFinished; }
};

VALIDATE_SIZE(CTaskSimpleFight, 0x28);
