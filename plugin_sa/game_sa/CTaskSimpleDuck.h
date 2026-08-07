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
#include "CVector2D.h"

enum eDuckControlTypes : unsigned char
{
    DUCK_STANDALONE = 0,	// duck anim removed when task removed
    DUCK_STANDALONE_WEAPON_CROUCH,// duck anim removed when task removed
    DUCK_TASK_CONTROLLED,	// duck directly linked to a controlling task
    DUCK_ANIM_CONTROLLED,	// duck linked to duck anim (make duck partial?)
    DUCK_SCRIPT_CONTROLLED,
};

class PLUGIN_API CTaskSimpleDuck : public CTaskSimple {
protected:
    CTaskSimpleDuck(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    uint32 m_nStartTime;
    uint16 m_nLengthOfDuck;
    int16 m_nShotWhizzingCounter;
    CAnimBlendAssociation* m_pDuckAnim;
    CAnimBlendAssociation* m_pMoveAnim;

    bool m_bIsFinished;
    bool m_bIsAborting;
    bool m_bNeedToSetDuckFlag; // incase bIsDucking flag gets cleared elsewhere, so we know to stop duck task
    bool m_bIsInControl;	// if duck task is being controlled by another task then it requires continuous control

    CVector2D m_vecMoveCommand;
    uint8 m_nDuckControlType;

    uint8 m_nCountDownFrames;

    CTaskSimpleDuck(uint8 nDuckControl, uint16 nLengthOfDuck, int16 nUseShotsWhizzingEvents = -1);

    CTask* RestartTask(CPed* pPed);

    bool AbortBecauseOfOtherDuck(CPed* pPed);

    bool ControlDuckMove(CVector2D vecMove);
    void PassiveControlDuck();
    void ForceStopMove();
    float GetMoveFwdDirection();
    bool StopAimGun(); // also known as 'IsTaskInUseByOtherTasks'
    bool StopFireGun();

    void StartCountDown(uint8 nNumIdleFrames, bool bMax);
    bool SetControlType(uint8 nType);
    void SetDuckTimer(uint16 nLengthOfDuck);
    
    static bool CanPedDuck(CPed* pPed);

    static void DeleteDuckAnimCB(CAnimBlendAssociation* pAnim, void* pData);

    void SetMoveAnim(CPed* pPed);

    // inlines
    bool GetIsFinished() const      { return m_bIsFinished; }
    bool GetIsAborting() const      { return m_bIsAborting; }
    uint8 GetControlType() const    { return m_nDuckControlType; }
    bool AcceptShotsWhizzing()      { return m_nShotWhizzingCounter > -1; }
};

VALIDATE_SIZE(CTaskSimpleDuck, 0x28);
