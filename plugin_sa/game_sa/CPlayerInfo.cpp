/*
Plugin-SDK (Grand Theft Auto San Andreas) Source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"

// inline
void CPlayerCrossHair::SwitchCrossHairOn()
{
    bActivated = true;
}

// inline
void CPlayerCrossHair::SwitchCrossHairOff()
{
    bActivated = false;
}

void CPlayerCrossHair::Update(Int32 PlayerIndex, CPad* pPad)
{
    plugin::CallMethod<0x56EC80, CPlayerCrossHair*, Int32, CPad*>(this, PlayerIndex, pPad);
}

void CPlayerCrossHair::Render(Int32 PlayerIndex)
{
    plugin::CallMethod<0x56EF90, CPlayerCrossHair*, Int32>(this, PlayerIndex);
}

CPlayerInfo::CPlayerInfo()
{
    plugin::CallMethod<0x571920, CPlayerInfo*>(this);
}

void CPlayerInfo::Clear()
{
    plugin::CallMethod<0x56F330, CPlayerInfo*>(this);
}

void CPlayerInfo::Process(Int32 PlayerNumber)
{
    plugin::CallMethod<0x56F8D0, CPlayerInfo*, Int32>(this, PlayerNumber);
}

bool CPlayerInfo::IsPlayerInRemoteMode()
{
    return plugin::CallMethodAndReturn<bool, 0x56DAB0, CPlayerInfo*>(this);
}

void CPlayerInfo::FindClosestCarSectorList(CPtrList& list, CPed* pPed, float MinX, float MinY, float MaxX, float MaxY, float* pCloseness, CVehicle** ppClosestVehicle)
{
    plugin::CallMethod<0x56F4E0, CPlayerInfo*, CPtrList&, CPed*, float, float, float, float, float*, CVehicle**>(this, list, pPed, MinX, MinY, MaxX, MaxY, pCloseness, ppClosestVehicle);
}

void CPlayerInfo::EvaluateCarPosition(CEntity* pEntity, CPed* pPed, float Distance, float* pCloseness, CVehicle** ppClosestVehicle)
{
    plugin::CallMethod<0x56DAD0, CPlayerInfo*, CEntity*, CPed*, float, float*, CVehicle**>(this, pEntity, pPed, Distance, pCloseness, ppClosestVehicle);
}

CObject* CPlayerInfo::FindObjectToSteal(CPed* pPed)
{
    return plugin::CallMethodAndReturn<CObject*, 0x56DBD0, CPlayerInfo*, CPed*>(this, pPed);
}

CVector CPlayerInfo::GetSpeed()
{
    return plugin::CallMethodAndReturn<CVector, 0x56DF50, CPlayerInfo*>(this);
}

CVector CPlayerInfo::GetPos()
{
    return plugin::CallMethodAndReturn<CVector, 0x56DFB0, CPlayerInfo*>(this);
}

Bool8 CPlayerInfo::IsRestartingAfterDeath()
{
    return plugin::CallMethodAndReturn<Bool8, 0x56E550, CPlayerInfo*>(this);
}

Bool8 CPlayerInfo::IsRestartingAfterArrest()
{
    return plugin::CallMethodAndReturn<Bool8, 0x56E560, CPlayerInfo*>(this);
}

Bool8 CPlayerInfo::IsRestartingAfterMissionFailed()
{
    return plugin::CallMethodAndReturn<Bool8, 0x56E570, CPlayerInfo*>(this);
}

// 0x5D3B00
bool CPlayerInfo::Load() {
    return plugin::CallAndReturn<bool, 0x5D3B00>();
}

// 0x5D3AC0
bool CPlayerInfo::Save() {
    return plugin::CallAndReturn<bool, 0x5D3AC0>();
}

void CPlayerInfo::KillPlayer()
{
    plugin::CallMethod<0x56E580, CPlayerInfo*>(this);
}

void CPlayerInfo::ArrestPlayer()
{
    plugin::CallMethod<0x56E5D0, CPlayerInfo*>(this);
}

void CPlayerInfo::WorkOutEnergyFromHunger()
{
    plugin::CallMethod<0x56E610, CPlayerInfo*>(this);
}

void CPlayerInfo::PlayerFailedCriticalMission()
{
    plugin::CallMethod<0x56E830, CPlayerInfo*>(this);
}

void CPlayerInfo::CancelPlayerEnteringCars(CVehicle* pSpecificCar)
{
    plugin::CallMethod<0x56E860, CPlayerInfo*, CVehicle*>(this, pSpecificCar);
}

void CPlayerInfo::MakePlayerSafe(bool bSafeState, float ExtinguishRange)
{
    plugin::CallMethod<0x56E870, CPlayerInfo*, bool, float>(this, bSafeState, ExtinguishRange);
}

void CPlayerInfo::BlowUpRCBuggy(bool bCauseExplosion)
{
    plugin::CallMethod<0x56EA30, CPlayerInfo*, bool>(this, bCauseExplosion);
}

void CPlayerInfo::SetPlayerSkin(const char* pSkinName)
{
    plugin::CallMethod<0x5717F0, CPlayerInfo*, const char*>(this, pSkinName);
}

void CPlayerInfo::LoadPlayerSkin()
{
    plugin::CallMethod<0x56F7D0, CPlayerInfo*>(this);
}

void CPlayerInfo::DeletePlayerSkin()
{
    plugin::CallMethod<0x56EA80, CPlayerInfo*>(this);
}

void CPlayerInfo::AddHealth(Int32 Amount)
{
    plugin::CallMethod<0x56EAB0, CPlayerInfo*, Int32>(this, Amount);
}

void CPlayerInfo::SetLastTargetVehicle(CVehicle* pTargetVehicle)
{
    plugin::CallMethod<0x56DA80, CPlayerInfo*, CVehicle*>(this, pTargetVehicle);
}

//CVehicle* GetLastTargetVehicle(); //const;

void CPlayerInfo::StreamParachuteWeapon(bool bAllowParachute)
{
    plugin::CallMethod<0x56EB30, CPlayerInfo*, bool>(this, bAllowParachute);
}

void CPlayerInfo::GivePlayerParachute()
{
    plugin::CallMethod<0x56EC40, CPlayerInfo*>(this);
}