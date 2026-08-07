/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimplePlayerOnFoot.h"

int32& timeLastIdlePlayed = *(int32*)0xC19664;
int32& lastIdlePlayed = *(int32*)0x8D2FEC;
float& TEST_PLAYER_BLEND_RUN_FROM_DUCK_SPEED = *(float*)0x8D2FF0; // 4.0f
bool& FORCE_CROUCH_RELOAD_ANIMS = *(bool*)0x8D2FE8;     // default value true; also always true

CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot() : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x685750, CTaskSimplePlayerOnFoot*>(this);
}

// 0x6097F0 (empty)
void CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x6097F0, CTaskSimplePlayerOnFoot*, CPlayerPed*>(this, pPlayerPed);
}

// 0x6872C0
void CTaskSimplePlayerOnFoot::PlayIdleAnimations(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x6872C0, CTaskSimplePlayerOnFoot*, CPlayerPed*>(this, pPlayerPed);
}

// 0x6883D0
void CTaskSimplePlayerOnFoot::PlayerControlZelda(CPlayerPed* pPlayerPed, const bool bMoveOnly)
{
    plugin::CallMethod<0x6883D0, CTaskSimplePlayerOnFoot*, CPlayerPed*, const bool>(this, pPlayerPed, bMoveOnly);
}

// 0x687C20
void CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x687C20, CTaskSimplePlayerOnFoot*, CPlayerPed*>(this, pPlayerPed);
}

// 0x687530
void CTaskSimplePlayerOnFoot::PlayerControlFighter(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x687530, CTaskSimplePlayerOnFoot*, CPlayerPed*>(this, pPlayerPed);
}

// 0x687F30
void CTaskSimplePlayerOnFoot::PlayerControlDucked(CPlayerPed* pPlayerPed)
{
    plugin::CallMethod<0x687F30, CTaskSimplePlayerOnFoot*, CPlayerPed*>(this, pPlayerPed);
}