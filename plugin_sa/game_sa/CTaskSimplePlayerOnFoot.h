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

extern int32& timeLastIdlePlayed;
extern int32& lastIdlePlayed;
extern float& TEST_PLAYER_BLEND_RUN_FROM_DUCK_SPEED;
extern bool& FORCE_CROUCH_RELOAD_ANIMS;

class PLUGIN_API CTaskSimplePlayerOnFoot : public CTaskSimple {
protected:
    CTaskSimplePlayerOnFoot(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    int32 m_nPlayerIdlesAnimBlock;
    uint32 m_nLastFrameProcessed;
    uint32 m_nFightIdleMoveCount;
    float m_fControlSprint; // always 0

    CEntity* m_lastLookAtEntity; // always 0

    CTaskSimplePlayerOnFoot();

    void ProcessPlayerWeapon(CPlayerPed* pPlayerPed);

    void PlayIdleAnimations(CPlayerPed* pPlayerPed);
    void PlayerControlZelda(CPlayerPed* pPlayerPed, const bool bMoveOnly);
    void PlayerControlZeldaWeapon(CPlayerPed* pPlayerPed);
    void PlayerControlFighter(CPlayerPed* pPlayerPed);
    void PlayerControlDucked(CPlayerPed* pPlayerPed);
};

VALIDATE_SIZE(CTaskSimplePlayerOnFoot, 0x1C);
