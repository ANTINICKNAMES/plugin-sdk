/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponEffects.h"

unsigned int MAX_NUM_WEAPON_CROSSHAIRS = 2;
CWeaponEffects *gCrossHair = (CWeaponEffects *)0xC8A838;
RwTexture *&gpCrossHairTex = *(RwTexture **)0xC8A818;
RwTexture **gpCrossHairTexFlight = (RwTexture **)0xC8A810;

// Converted from thiscall void CWeaponEffects::CWeaponEffects(void) 0x742A90
CWeaponEffects::CWeaponEffects() {
    plugin::CallMethod<0x742A90, CWeaponEffects *>(this);
}

// Converted from thiscall void CWeaponEffects::~CWeaponEffects() 0x742AA0
CWeaponEffects::~CWeaponEffects() {
    plugin::CallMethod<0x742AA0, CWeaponEffects *>(this);
}

// Converted from cdecl void CWeaponEffects::Init(void) 0x742AB0
void CWeaponEffects::Init() {
    plugin::Call<0x742AB0>();
}

// Converted from cdecl void CWeaponEffects::Shutdown(void) 0x742B80
void CWeaponEffects::Shutdown() {
    plugin::Call<0x742B80>();
}

// Converted from cdecl bool CWeaponEffects::IsLockedOn(int crosshairId) 0x742BD0
bool CWeaponEffects::IsLockedOn(Int32 Index) {
    return plugin::CallAndReturn<bool, 0x742BD0, Int32>(Index);
}

// Converted from cdecl void CWeaponEffects::MarkTarget(int crosshairId,CVector posn,uchar red,uchar green,uchar blue,uchar alpha,float size,uchar) 0x742BF0
void CWeaponEffects::MarkTarget(Int32 Index, CVector vecTargetPos, uint8 red, uint8 green, uint8 blue, uint8 alpha, float fScale, uint8 type) {
    plugin::Call<0x742BF0, Int32, CVector, uint8, uint8, uint8, uint8, float, uint8>(Index, vecTargetPos, red, green, blue, alpha, fScale, type);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHair(int crosshairId) 0x742C60
void CWeaponEffects::ClearCrossHair(Int32 Index) {
    plugin::Call<0x742C60, Int32>(Index);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHairs(void) 0x742C80
void CWeaponEffects::ClearCrossHairs() {
    plugin::Call<0x742C80>();
}

// Converted from cdecl void CWeaponEffects::ClearCrossHairImmediately(int crosshairId) 0x742CA0
void CWeaponEffects::ClearCrossHairImmediately(Int32 Index) {
    plugin::Call<0x742CA0, Int32>(Index);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHairsImmediately(void) 0x742CC0
void CWeaponEffects::ClearAllCrosshairs() {
    plugin::Call<0x742CC0>();
}

// Converted from cdecl void CWeaponEffects::Render(void) 0x742CF0
void CWeaponEffects::Render() {
    plugin::Call<0x742CF0>();
}