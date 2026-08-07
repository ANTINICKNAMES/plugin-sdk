/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleFight.h"

tMeleeComboSet* CTaskSimpleFight::m_aComboData = (tMeleeComboSet*)0xC170D0; //[13];
CVector& CTaskSimpleFight::m_aHitOffset = *(CVector*)0xC177D0; //[7];
CColModel& CTaskSimpleFight::m_sStrikeColModel = *(CColModel*)0xC17824;
CCollisionData& CTaskSimpleFight::m_sStrikeColData = *(CCollisionData*)0xC17854;
CColSphere* CTaskSimpleFight::m_sStrikeSpheres = (CColSphere*)0xC17884; //[1];

CTaskSimpleFight::CTaskSimpleFight(CEntity* pTargetEntity, int nCommand, uint32 nIdlePeriod)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61C470, CTaskSimpleFight*, CEntity*, int, uint32>(this, pTargetEntity, nCommand, nIdlePeriod);
}

// 0x61C5E0
bool CTaskSimpleFight::ControlFight(CEntity* pTargetEntity, int8 nCommand)
{
    return plugin::CallMethodAndReturn<bool, 0x61C5E0, CTaskSimpleFight*, CEntity*, int8>(this, pTargetEntity, nCommand);
}

// 0x4ABDA0
AssocGroupId CTaskSimpleFight::GetAnimGroup()
{
    return plugin::CallMethodAndReturn<AssocGroupId, 0x4ABDA0, CTaskSimpleFight*>(this);
}

// 0x4ABDC0
bool CTaskSimpleFight::GetHitFallFlagSet()
{
    return plugin::CallMethodAndReturn<bool, 0x4ABDC0, CTaskSimpleFight*>(this);
}

// 0x4ABDF0
bool CTaskSimpleFight::GetNoHitFallFlagSet()
{
    return plugin::CallMethodAndReturn<bool, 0x4ABDF0, CTaskSimpleFight*>(this);
}

// 0x61C740
float CTaskSimpleFight::GetStrikeDamage(CPed* pPed)
{
    return plugin::CallMethodAndReturn<float, 0x61C740, CTaskSimpleFight*, CPed*>(this, pPed);
}

// 0x61C650
bool CTaskSimpleFight::BeHitWhileBlocking(CPed* pPed, CPed* pAttacker, int8 nAttackCombo, int8 nAttackMove)
{
    return plugin::CallMethodAndReturn<bool, 0x61C650, CTaskSimpleFight*, CPed*, CPed*, int8, int8>(this, pPed, pAttacker, nAttackCombo, nAttackMove);
}

// Unknown 
float CTaskSimpleFight::GetBaseAttackRange()
{
    return 1.5f;
}

// 0x61DB30
eMeleeCombo CTaskSimpleFight::GetComboType(char* pComboName)
{
    return plugin::CallAndReturn<eMeleeCombo, 0x61DB30, char*>(pComboName);
}


// 0x623B10
void CTaskSimpleFight::StartAnim(CPed* pPed, int nNewMove)
{
    plugin::CallMethod<0x623B10, CTaskSimpleFight*, CPed*, int>(this, pPed, nNewMove);
}

// 0x61C7F0
int8 CTaskSimpleFight::GetAvailableComboSet(CPed* pPed, int8 nNextCommand)
{
    return plugin::CallMethodAndReturn<int8, 0x61C7F0, CTaskSimpleFight*>(this);
}

// 0x61C9B0
void CTaskSimpleFight::SetPlayerMoveAnim(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x61C9B0, CTaskSimpleFight*, CPlayerPed*>(this, pPlayerPed);
}

// 0x61CBA0
CPed* CTaskSimpleFight::FightHitPed(CPed* pPed, CPed* pHitPed, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType)
{
    return plugin::CallMethodAndReturn<CPed*, 0x61CBA0, CTaskSimpleFight*, CPed*, CPed*, CVector&, CVector&, int16>(this, pPed, pHitPed, vecHitPoint, vecDelta, nColPieceType);
}

// 0x61D400
void CTaskSimpleFight::FightHitObj(CPed* pPed, CObject* pHitObj, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType, UInt8 nColSurfaceType)
{
    plugin::CallMethod<0x61D400, CTaskSimpleFight*, CPed*, CObject*, CVector&, CVector&, int16, UInt8>(this, pPed, pHitObj, vecHitPoint, vecDelta, nColPieceType, nColSurfaceType);
}

// 0x6240B0
uint8 CTaskSimpleFight::FightStrike(CPed* pPed, CVector& vec)
{
    return plugin::CallMethodAndReturn<uint8, 0x6240B0, CTaskSimpleFight*, CPed*, CVector&>(this, pPed, vec);
}

// 0x624710
int16 CTaskSimpleFight::ChooseAttackPlayer(CPed* pPed)
{
    return plugin::CallMethodAndReturn<int16, 0x624710, CTaskSimpleFight*, CPed*>(this, pPed);
}

// 0x624A40
int16 CTaskSimpleFight::ChooseAttackAI(CPed* pPed)
{
    return plugin::CallMethodAndReturn<int16, 0x624A40, CTaskSimpleFight*, CPed*>(this, pPed);
}

// 0x61D6F0
bool CTaskSimpleFight::FindTargetOnGround(CPed* pPed)
{
    return plugin::CallMethodAndReturn<bool, 0x61D6F0, CTaskSimpleFight*, CPed*>(this, pPed);
}

// 0x61DAE0
void CTaskSimpleFight::FinishMeleeAnimCB(CAnimBlendAssociation* pAnim, void* pData)
{
    plugin::Call<0x61DAE0, CAnimBlendAssociation*, void*>(pAnim, pData);
}

// 0x5BEDC0
void CTaskSimpleFight::LoadMeleeData()
{
    plugin::Call<0x5BEDC0>();
}

// 0x5BD360
uint8 CTaskSimpleFight::GetHitLevel(const char* pHitLevelName)
{
    return plugin::CallAndReturn<uint8, 0x5BD360, const char*>(pHitLevelName);
}

// 0x5BD3B0
Int16 CTaskSimpleFight::GetHitSound(const int32 pHitSound)
{
    return plugin::CallAndReturn<Int16, 0x5BD3B0, const int32>(pHitSound);
}

// 0x61D5F0
void CTaskSimpleFight::FightSetUpCol(float fRadius)
{
    plugin::Call<0x61D5F0, float>(fRadius);
}

// 0x61D0B0
void CTaskSimpleFight::FightHitCar(CPed* pPed, CVehicle* pHitCar, CVector& vecHitPoint, CVector& vecDelta, int16 nColPieceType, UInt8 nColSurfaceType)
{
    plugin::CallMethod<0x61D0B0, CTaskSimpleFight*, CPed*, CVehicle*, CVector&, CVector&, int16, UInt8>(this, pPed, pHitCar, vecHitPoint, vecDelta, nColPieceType, nColSurfaceType);
}

// 0x61C630
float CTaskSimpleFight::GetRange()
{
    return plugin::CallMethodAndReturn<float, 0x61C630, CTaskSimpleFight*>(this);
}