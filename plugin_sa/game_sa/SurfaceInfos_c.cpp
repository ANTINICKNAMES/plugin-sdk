/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "SurfaceInfos_c.h"

// 0x55D220
uint32 SurfaceInfos_c::GetSurfaceIdFromName(const char* cName) {
    return plugin::CallAndReturn<uint32, 0x55D220, const char*>(cName);
}

// 0x55D0E0
void SurfaceInfos_c::LoadAdhesiveLimits() {
    plugin::CallMethod<0x55D0E0, SurfaceInfos_c*>(this);
}

// 0x55EB90
void SurfaceInfos_c::LoadSurfaceInfos() {
    plugin::CallMethod<0x55EB90, SurfaceInfos_c*>(this);
}

// 0x55F2B0
void SurfaceInfos_c::LoadSurfaceAudioInfos() {
    plugin::CallMethod<0x55F2B0, SurfaceInfos_c*>(this);
}

// 0x55F420
void SurfaceInfos_c::Init() {
    plugin::CallMethod<0x55F420, SurfaceInfos_c*>(this);
}

// 0x55E5C0
eAdhesionGroup SurfaceInfos_c::GetAdhesionGroup(uint32 id) {
    return plugin::CallMethodAndReturn<eAdhesionGroup, 0x55E5C0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E5E0
float SurfaceInfos_c::GetTyreGrip(uint32 id) {
    return plugin::CallMethodAndReturn<float, 0x55E5E0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E600
float SurfaceInfos_c::GetWetMultiplier(uint32 id) {
    return plugin::CallMethodAndReturn<float, 0x55E600, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E630
uint32_t SurfaceInfos_c::GetSkidmarkType(uint32 id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E630, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E650
eFrictionEffect SurfaceInfos_c::GetFrictionEffect(uint32 id) {
    return plugin::CallMethodAndReturn<eFrictionEffect, 0x55E650, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E670
uint32_t SurfaceInfos_c::GetBulletFx(uint32 id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E670, SurfaceInfos_c*>(this, id);
}

// 0x55E690
bool SurfaceInfos_c::IsSoftLanding(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E690, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E6B0
bool SurfaceInfos_c::IsSeeThrough(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6B0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E6D0
bool SurfaceInfos_c::IsShootThrough(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6D0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E6F0
bool SurfaceInfos_c::IsSand(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6F0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E710
bool SurfaceInfos_c::IsWater(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E710, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E730
bool SurfaceInfos_c::IsShallowWater(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E730, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E750
bool SurfaceInfos_c::IsBeach(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E750, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E770
bool SurfaceInfos_c::IsSteepSlope(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E770, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E790
bool SurfaceInfos_c::IsGlass(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E790, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E7B0
bool SurfaceInfos_c::IsStairs(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7B0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E7D0
bool SurfaceInfos_c::IsSkateable(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7D0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E7F0
bool SurfaceInfos_c::IsPavement(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7F0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E810
uint32_t SurfaceInfos_c::GetRoughness(uint32 id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E810, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E830
uint32_t SurfaceInfos_c::GetFlammability(uint32 id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E830, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E850
bool SurfaceInfos_c::CreatesSparks(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E850, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E870
bool SurfaceInfos_c::CantSprintOn(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E870, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E890
bool SurfaceInfos_c::LeavesFootsteps(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E890, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E8B0
bool SurfaceInfos_c::ProducesFootDust(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8B0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E8D0
bool SurfaceInfos_c::MakesCarDirty(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8D0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E8F0
bool SurfaceInfos_c::MakesCarClean(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8F0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E910
bool SurfaceInfos_c::CreatesWheelGrass(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E910, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E930
bool SurfaceInfos_c::CreatesWheelGravel(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E930, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E950
bool SurfaceInfos_c::CreatesWheelMud(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E950, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E970
bool SurfaceInfos_c::CreatesWheelDust(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E970, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E990
bool SurfaceInfos_c::CreatesWheelSand(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E990, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E9B0
bool SurfaceInfos_c::CreatesWheelSpray(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9B0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E9D0
bool SurfaceInfos_c::CreatesPlants(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9D0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55E9F0
bool SurfaceInfos_c::CreatesObjects(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9F0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EA10
bool SurfaceInfos_c::CanClimb(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA10, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EA30
bool SurfaceInfos_c::IsAudioConcrete(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA30, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EA50
bool SurfaceInfos_c::IsAudioGrass(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA50, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EA70
bool SurfaceInfos_c::IsAudioSand(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA70, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EA90
bool SurfaceInfos_c::IsAudioGravel(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA90, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EAB0
bool SurfaceInfos_c::IsAudioWood(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAB0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EAD0
bool SurfaceInfos_c::IsAudioWater(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAD0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EAF0
bool SurfaceInfos_c::IsAudioMetal(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAF0, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EB10
bool SurfaceInfos_c::IsAudioLongGrass(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EB10, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EB30
bool SurfaceInfos_c::IsAudioTile(uint32 id) {
    return plugin::CallMethodAndReturn<bool, 0x55EB30, SurfaceInfos_c*, uint32>(this, id);
}

// 0x55EB50
float SurfaceInfos_c::GetAdhesiveLimit(CColPoint* colPoint) {
    return plugin::CallMethodAndReturn<float, 0x55EB50, SurfaceInfos_c*, CColPoint*>(this, colPoint);
}