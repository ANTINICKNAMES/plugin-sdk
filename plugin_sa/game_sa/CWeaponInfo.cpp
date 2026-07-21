/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

CWeaponInfo::CWeaponInfo()
{
	((void (__thiscall *)(CWeaponInfo *))0x743C30)(this);
}

CWeaponInfo::~CWeaponInfo()
{
	((void (__thiscall *)(CWeaponInfo *))0x743C40)(this);
}

char **CWeaponInfo::ms_aWeaponNames = (char **)0x8D6150;

void CWeaponInfo::LoadWeaponData()
{
	((void (__cdecl *)())0x5BE670)();
}

CWeaponInfo *CWeaponInfo::GetWeaponInfo(eWeaponType weaponType, unsigned char skill)
{
	return ((CWeaponInfo *(__cdecl *)(eWeaponType, unsigned char))0x743C60)(weaponType, skill);
}

eWeaponType CWeaponInfo::FindWeaponType(char *name)
{
	return ((eWeaponType (__cdecl *)(char *))0x743D10)(name);
}

eWeaponFire CWeaponInfo::FindWeaponFireType(char *name)
{
	return ((eWeaponFire (__cdecl *)(char *))0x5BCF30)(name);
}

void CWeaponInfo::Initialise()
{
	((void (__cdecl *)())0x5BF750)();
}

void CWeaponInfo::Shutdown()
{
	((void (__cdecl *)())0x743C50)();
}

int32 CWeaponInfo::GetSkillStatIndex(eWeaponType WeaponType)
{
	return plugin::CallAndReturn<int32, 0x743CD0, eWeaponType>(WeaponType);
}

float CWeaponInfo::GetTargetHeadRange()
{
	return plugin::CallMethodAndReturn<float, 0x743CD0, CWeaponInfo*>(this);
}

// 0x73A260
int32 CWeaponInfo::GetWeaponFiringRate()
{
	return plugin::CallMethodAndReturn<int32, 0x73A260, CWeaponInfo*>(this);
}

// 0x743D70
int32 CWeaponInfo::GetWeaponReloadTime()
{
	return plugin::CallMethodAndReturn<int32, 0x743D70, CWeaponInfo*>(this);
}

// 0x73A280
uint16 CWeaponInfo::GetReloadSampleTimeA(bool bDuck)
{
	return plugin::CallMethodAndReturn<uint16, 0x73A280, CWeaponInfo*, bool>(this, bDuck);
}

// 0x73A2B0
uint16 CWeaponInfo::GetReloadSampleTimeB(bool bDuck)
{
	return plugin::CallMethodAndReturn<uint16, 0x73A2B0, CWeaponInfo*, bool>(this, bDuck);
}

CWeaponInfo *aWeaponInfo = (CWeaponInfo *)0xC8AAB8;
tAnimAimOffsets *ms_aWeaponAimOffsets = (tAnimAimOffsets*)0xC8A8A8;