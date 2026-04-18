/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEvent.h"

void* CEvent::operator new(size_t nSize)
{
    return ((CEvent * (__cdecl*)(size_t))0x4B5620)(nSize);
}

void CEvent::operator delete(void* pVoid)
{
    ((void(__cdecl*)(void*))0x4B5630)(pVoid);
}

eEventType CEvent::GetEventType()
{
    return ((eEventType (__thiscall*)(CEvent*))plugin::GetVMT(this, 1))(this);
}

int CEvent::GetEventPriority()
{
    return ((int (__thiscall*)(CEvent*))plugin::GetVMT(this, 2))(this);
}

int CEvent::GetLifeTime()
{
    return ((int (__thiscall*)(CEvent*))plugin::GetVMT(this, 3))(this);
}

CEvent* CEvent::Clone()
{
    return ((CEvent* (__thiscall*)(CEvent*))plugin::GetVMT(this, 4))(this);
}

bool CEvent::AffectsPed(CPed* ped)
{
    return ((bool (__thiscall*)(CEvent*, CPed*))plugin::GetVMT(this, 5))(this, ped);
}

bool CEvent::AffectsPedGroup(CPedGroup* pedGroup)
{
    return ((bool (__thiscall*)(CEvent*, CPedGroup*))plugin::GetVMT(this, 6))(this, pedGroup);
}

bool CEvent::IsCriminalEvent()
{
    return ((bool(__thiscall*)(CEvent*))plugin::GetVMT(this, 7))(this);
}

void CEvent::ReportCriminalEvent(CPed* ped)
{
    ((void(__thiscall*)(CEvent*, CPed*))plugin::GetVMT(this, 8))(this, ped);
}

bool CEvent::HasEditableResponse()
{
    return ((bool(__thiscall*)(CEvent*))plugin::GetVMT(this, 9))(this);
}

CEntity* CEvent::GetSourceEntity()
{
    return ((CEntity* (__thiscall*)(CEvent*))plugin::GetVMT(this, 10))(this);
}

bool CEvent::TakesPriorityOver(const CEvent& other)
{
    return ((bool(__thiscall*)(CEvent*, const CEvent&))plugin::GetVMT(this, 11))(this, other);
}

float CEvent::GetLocalSoundLevel()
{
    return ((float(__thiscall*)(CEvent*))plugin::GetVMT(this, 12))(this);
}

bool CEvent::DoInformVehicleOccupants(CPed* ped)
{
    return ((bool(__thiscall*)(CEvent*, CPed*))plugin::GetVMT(this, 13))(this, ped);
}

bool CEvent::IsValid(CPed* pPed)
{
    return ((bool(__thiscall*)(CEvent*, CPed*))plugin::GetVMT(this, 14))(this, pPed);
}

bool CEvent::CanBeInterruptedBySameEvent()
{
    return ((bool(__thiscall*)(CEvent*))plugin::GetVMT(this, 15))(this);
}

// 0x4B2850
float CEvent::GetSoundLevel(const CEntity* entity, const CVector& pos) {
    return plugin::CallMethodAndReturn<float, 0x4B2850, const CEntity*, const CVector&>(entity, pos);
}

// 0x4AC050
float CEvent::CalcSoundLevelIncrement(float fOrig, float fAdd) {
    return plugin::CallAndReturn<float, 0x4B2850, float, float>(fOrig, fAdd);
}