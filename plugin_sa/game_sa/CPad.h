/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rw/skeleton.h"

enum
{
    PAD_PHASE_START = 0,
    PAD_PHASE_GET_INFO,
    PAD_PHASE_LOCK_ANALOGUE_BUTTON,
    PAD_PHASE_LOCK_ANALOGUE_BUTTON_CHECK,
    PAD_PHASE_LOCK_ANALOGUE_BUTTON_2ND_PASS,
    PAD_PHASE_LOCK_ANALOGUE_BUTTON_CHECK_2ND_PASS,
    PAD_PHASE_FIND_DUALSHOCK_2,
    PAD_PHASE_SET_PRESSURE_SENSITIVE,
    PAD_PHASE_SET_PRESSURE_SENSITIVE_CHECK,
    PAD_PHASE_SET_VIBRATION,
    PAD_PHASE_GET_FINAL_STATE,
    PAD_PHASE_END
};

// Set values to 128 unless otherwise specified
class CControllerState {
public:
    int16 LeftStickX; // move/steer left (-128?)/right (+128)
    int16 LeftStickY; // move back(+128)/forwards(-128?)
    int16 RightStickX; // numpad 6(+128)/numpad 4(-128?)
    int16 RightStickY;
    
    int16 LeftShoulder1;
    int16 LeftShoulder2;
    int16 RightShoulder1; // target / hand brake
    int16 RightShoulder2; 
    
    int16 DPadUp; // radio change up           Next radio station / Call gang forward/Recruit gang member
    int16 DPadDown; // radio change down       Previous radio station / Gang stay back/Release gang (hold)
    int16 DPadLeft; //                         Skip trip/Action / Negative talk reply
    int16 DPadRight; //                        Next user MP3 track / Positive talk reply
    
    int16 Start;                             //Pause
    int16 Select;                            //Camera modes
    
    int16 ButtonSquare; // jump / reverse      Break/Reverse / Jump/Climb
    int16 ButtonTriangle; // get in/out        Exit vehicle / Enter veihcle
    int16 ButtonCross; // sprint / accelerate  Accelerate / Sprint/Swim
    int16 ButtonCircle; // fire                Fire weapon
    
    int16 ShockButtonL;
    int16 ShockButtonR; // look behind
    
    int16 m_bChatIndicated;
    int16 m_bPedWalk;
    int16 m_bVehicleMouseLook;
    int16 m_bRadioTrackSkip;

    void Clear();
    bool CheckForInput();
};


VALIDATE_SIZE(CControllerState, 0x30);


class CMouseControllerState {
public:
    /*
    unsigned char lmb;
    unsigned char rmb;
    unsigned char mmb;
    unsigned char wheelUp;
    unsigned char wheelDown;
    unsigned char bmx1;
    unsigned char bmx2;
    char __align;
    float z;
    float x;
    float y;
    */

    bool8 m_bLeftButton;
    bool8 m_bRightButton;
    bool8 m_bMiddleButton;
    bool8 m_bWheelMovedUp;
    bool8 m_bWheelMovedDown;
    bool8 m_bMsFirstXButton;
    bool8 m_bMsSecondXButton;

private:
    char __align;

public:
    float m_fWheelMoved;
    RwV2d m_AmountMoved;

    CMouseControllerState();
    void Clear();
    bool CheckForInput();
};

VALIDATE_SIZE(CMouseControllerState, 0x14);


class CKeyboardState {
public:
    /*
    int16 FKeys[12];
    int16 standardKeys[256];
    int16 esc;
    int16 insert;
    int16 del;
    int16 home;
    int16 end;
    int16 pgup;
    int16 pgdn;
    int16 up;
    int16 down;
    int16 left;
    int16 right;
    int16 scroll;
    int16 pause;
    int16 numlock;
    int16 div;
    int16 mul;
    int16 sub;
    int16 add;
    int16 enter;
    int16 decimal;
    int16 num1;
    int16 num2;
    int16 num3;
    int16 num4;
    int16 num5;
    int16 num6;
    int16 num7;
    int16 num8;
    int16 num9;
    int16 num0;
    int16 back;
    int16 tab;
    int16 capslock;
    int16 extenter;
    int16 lshift;
    int16 rshift;
    int16 shift;
    int16 lctrl;
    int16 rctrl;
    int16 lmenu;
    int16 rmenu;
    int16 lwin;
    int16 rwin;
    int16 apps;
    */

    int16 kFunc[12];
    int16 kAscii[256];
    int16 kESC;

    int16 kINS;
    int16 kDEL;
    int16 kHOME;
    int16 kEND;
    int16 kPGUP;
    int16 kPGDN;
    int16 kUP;
    int16 kDOWN;
    int16 kLEFT;
    int16 kRIGHT;
    int16 kSCROLL_LOCK;
    int16 kPAUSE_BREAK;



    int16 kNUMPAD_NUMLOCK;
    int16 kNUMPAD_DIVIDE;
    int16 kNUMPAD_TIMES;
    int16 kNUMPAD_MINUS;
    int16 kNUMPAD_PLUS;
    int16 kNUMPAD_ENTER;
    int16 kNUMPAD_DOT;
    int16 kNUMPAD_ONE;
    int16 kNUMPAD_TWO;
    int16 kNUMPAD_THREE;
    int16 kNUMPAD_FOUR;
    int16 kNUMPAD_FIVE;
    int16 kNUMPAD_SIX;
    int16 kNUMPAD_SEVEN;
    int16 kNUMPAD_EIGHT;
    int16 kNUMPAD_NINE;
    int16 kNUMPAD_ZERO;

    int16 kBACKSP;
    int16 kTAB;
    int16 kCAPSLK;
    int16 kENTER;
    int16 kLSHIFT;
    int16 kRSHIFT;
    int16 k98_SHIFT;
    int16 kLCTRL;
    int16 kRCTRL;
    int16 kLALT;
    int16 kRALT;
    int16 kLEFT_WINDOW_KEY;
    int16 kRIGHT_WINDOW_KEY;
    int16 kWINDOW_RIGHT_CLICK_KEY;

    void Clear();
};

VALIDATE_SIZE(CKeyboardState, 0x270);


class CPed;


class CPad {
public:
    CControllerState NewState;
    CControllerState OldState;


    int16 SteeringLeftRightBuffer[10];
    Int32 DrunkDrivingBufferUsed;


    CControllerState PCTempKeyState;
    CControllerState PCTempJoyState;
    CControllerState PCTempMouseState;


    UInt8 Phase;

private:
    char _pad109;

public:
    short Mode;
    Int16 ShakeDur;

    union
    {
        struct
        {
            UInt16 unk1 : 1; // eCamMode::MODE_1STPERSON leftover?
            UInt16 unk2 : 1; // unused
            UInt16 bPlayerAwaitsInGarage : 1;
            UInt16 bPlayerOnInteriorTransition : 1;
            UInt16 unk3 : 1; // unused
            UInt16 bPlayerSafe : 1;
            UInt16 bPlayerTalksOnPhone : 1; // bPlayerSafeForPhoneCall?
            UInt16 bPlayerSafeForCutscene : 1;
            UInt16 bPlayerSkipsToDestination : 1; // bPlayerSafeForDestination?
        };
        UInt16 DisablePlayerControls;
    };
    UInt8 ShakeFreq;


    char bHornHistory[5];
    char iCurrHornHistory;
    char JustOutOfFrontEnd;
    Bool8 bApplyBrakes;
    Bool8 bDisablePlayerEnterCar;
    Bool8 bDisablePlayerDuck;
    Bool8 bDisablePlayerFireWeapon;
    Bool8 bDisablePlayerFireWeaponWithL1;
    Bool8 bDisablePlayerCycleWeapon;
    Bool8 bDisablePlayerJump;
    Bool8 bDisablePlayerDisplayVitalStats;
    UInt32 LastTimeTouched;

    int32 AverageWeapon;
    int32 AverageEntries;

    UInt32 NoShakeBeforeThis;
    UInt8 NoShakeFreq;

private:
    char _pad131[3];

public:
    // Static variables

    // mouse states
    static CMouseControllerState &PCTempMouseControllerState;
    static CMouseControllerState &NewMouseControllerState;
    static CMouseControllerState &OldMouseControllerState;
    static CKeyboardState &NewKeyState;
    static CKeyboardState& OldKeyState;
    // Functions list : Not finished

    CPad();
    void UpdateMouse();
    void ReconcileTwoControllersInput(CControllerState const& controllerA, CControllerState const& controllerB);
    void SetDrunkInputDelay(int delay);
    void StartShake(short time, unsigned char frequency, unsigned int arg2 = 0);
    void StartShake_Distance(short time, unsigned char frequency, float x, float y, float z);
    void StartShake_Train(float x, float y);
    // dummy function
    void ProcessPCSpecificStuff();
    void StopShaking(short arg0);
    static CPad* GetPad(int padNumber);
    short GetSteeringLeftRight();
    short GetSteeringUpDown();
    short GetPedWalkLeftRight();
    short GetPedWalkUpDown();
    bool GetLookLeft();
    bool GetLookRight();
    bool GetLookBehindForCar();
    bool GetLookBehindForPed();
    bool GetHorn();
    bool HornJustDown();
    bool GetHydraulicJump();
    int16 GetCarGunFired();
    int16 CarGunJustDown();
    int16 GetHandBrake();
    int16 GetBrake();
    bool GetExitVehicle();
    bool ExitVehicleJustDown();

    Int32 GetWeapon(CPed* pPed);

    bool WeaponJustDown(CPed* pPed);

    Int8 GetMeleeAttack(bool bCheckButtonCircleStateOnly = false);
    Int8 MeleeAttackJustDown(bool bCheckButtonCircleStateOnly = false);

    short GetAccelerate();
    bool GetAccelerateJustDown();
    bool NextStationJustUp();
    bool LastStationJustUp();
    bool CycleWeaponLeftJustDown();
    bool CycleWeaponRightJustDown();

    int GetEnterTargeting(); // GTASA-Reversed - original is TargetJustDown()
    bool GetExitTargeting();

    bool GetTarget();
    bool GetDuck();
    bool DuckJustDown();
    bool GetJump();
    bool JumpJustDown();
    bool GetSprint();
    bool SprintJustDown();
    bool ShiftTargetLeftJustDown();
    bool ShiftTargetRightJustDown();
    short GetDisplayVitalStats(class CPed* ped);
    bool CollectPickupJustDown();
    bool GetForceCameraBehindPlayer();
    bool SniperZoomIn();
    bool SniperZoomOut();
    bool GetGroupControlForward();
    bool GetGroupControlBack();
    bool ConversationYesJustDown();
    bool ConversationNoJustDown();
    bool GroupControlForwardJustDown();
    bool GroupControlBackJustDown();
    void Clear(bool enablePlayerControls, bool resetPhase);
    static void UpdatePads();
    static void ClearMouseHistory();

    Int16 LookAroundLeftRight();
    Int16 LookAroundUpDown();

    float AimWeaponLeftRight(CPed* pPed);
    Int16 AimWeaponUpDown(CPed* pPed);

    // inlines
    RwV2d GetAmountMouseMoved();
    
    bool IsDisabled();
    void DisableControlsCamera();
    void EnableControlsCamera();
    /*void DisableControlsCranes();
    void EnableControlsCranes();
    void DisableControlsGarages();
    void EnableControlsGarages();
    void DisableControlsPedCode();
    void EnableControlsPedCode();
    void DisableControlsFadeOut();
    void EnableControlsFadeOut();
    void DisableControlsScript();
    void EnableControlsScript();
    void DisableControlsPhones();
    void EnableControlsPhones();
    void DisableControlsCutscenes();
    void EnableControlsCutscenes();
    void DisableControlsShortCut();
    void EnableControlsShortCut();*/

    int16 GetLeftStickX()           { return NewState.LeftStickX; }
    int16 GetLeftStickY()           { return NewState.LeftStickY; }
    int16 GetRightStickX()          { return NewState.RightStickX; }
    int16 GetRightStickY()          { return NewState.RightStickY; }

    int16 GetLeftShoulder1()        { return NewState.LeftShoulder1; }
    int16 GetLeftShoulder2()        { return NewState.LeftShoulder2; }
    int16 GetRightShoulder1()       { return NewState.RightShoulder1; }
    int16 GetRightShoulder2()       { return NewState.RightShoulder1; }

    int32 GetDPadUp()               { return NewState.DPadUp; }
    int32 GetDPadDown()             { return NewState.DPadDown; }
    int32 GetDPadLeft()             { return NewState.DPadLeft; }
    int32 GetDPadRight()            { return NewState.DPadRight; }

    int32 GetStart()                { return NewState.Start; }
    int32 GetSelect()               { return NewState.Select; }

    int32 GetButtonSquare()         { return NewState.ButtonSquare; }
    int32 GetButtonTriangle()       { return NewState.ButtonTriangle; }
    int32 GetButtonCross()          { return NewState.ButtonCross; }
    int32 GetButtonCircle()         { return NewState.ButtonCircle; }

    int32 GetShockButtonL()         { return NewState.ShockButtonL; }
    int32 GetShockButtonR()         { return NewState.ShockButtonR; }

    bool StartButtonJustDown()      { return (NewState.Start && !OldState.Start); }
    bool StartButtonJustUp()        { return (!NewState.Start && OldState.Start); }

    /*bool LeftStickXJustActivated();
    bool LeftStickYJustActivated();
    bool RightStickXJustActivated();
    bool RightStickYJustActivated();*/

    bool LeftShoulder1Down()        { return (NewState.LeftShoulder1 && OldState.LeftShoulder1); }
    bool RightShoulder1Down()       { return (NewState.RightShoulder1 && OldState.RightShoulder1); }

    bool LeftShoulder1JustDown()    { return (NewState.LeftShoulder1 && !OldState.LeftShoulder1); }
    bool LeftShoulder1JustUp()      { return (!NewState.LeftShoulder1 && OldState.LeftShoulder1); }
    bool LeftShoulder2JustDown()    { return (NewState.LeftShoulder2 && !OldState.LeftShoulder2); }
    bool LeftShoulder2JustUp()      { return (!NewState.LeftShoulder2 && OldState.LeftShoulder2); }
    bool RightShoulder1JustDown()   { return (NewState.RightShoulder1 && !OldState.RightShoulder1); }
    bool RightShoulder1JustUp()     { return (!NewState.RightShoulder1 && OldState.RightShoulder1); }
    bool RightShoulder2JustDown()   { return (NewState.RightShoulder2 && !OldState.RightShoulder2); }
    bool RightShoulder2JustUp()     { return (!NewState.RightShoulder2 && OldState.RightShoulder2); }

    bool DPadUpJustDown()           { return (NewState.DPadUp && !OldState.DPadUp); }
    bool DPadUpJustUp()             { return (!NewState.DPadUp && OldState.DPadUp); }
    bool DPadDownJustDown()         { return (NewState.DPadDown && !OldState.DPadDown); }
    bool DPadDownJustUp()           { return (!NewState.DPadDown && OldState.DPadDown); }
    bool DPadLeftJustDown()         { return (NewState.DPadLeft && !OldState.DPadLeft); }
    bool DPadLeftJustUp()           { return (!NewState.DPadLeft && OldState.DPadLeft); }
    bool DPadRightJustDown()        { return (NewState.DPadRight && !OldState.DPadRight); }
    bool DPadRightJustUp()          { return (!NewState.DPadRight && OldState.DPadRight); }

    bool DPadUpDown()               { return (NewState.DPadUp && OldState.DPadUp); }
    bool DPadDownDown()             { return (NewState.DPadDown && OldState.DPadDown); }
    bool DPadLeftDown()             { return (NewState.DPadLeft && OldState.DPadLeft); }
    bool DPadRightDown()            { return (NewState.DPadRight && OldState.DPadRight); }


    bool StartJustDown()            { return (NewState.Start && !OldState.Start); }
    bool StartJustUp()              { return (!NewState.Start && OldState.Start); }
    bool SelectJustDown()           { return (NewState.Select && !OldState.Select); }
    bool SelectJustUp()             { return (!NewState.Select && OldState.Select); }

    bool ButtonSquareJustDown()     { return (NewState.ButtonSquare && !OldState.ButtonSquare); }
    bool ButtonSquareJustUp()       { return (!NewState.ButtonSquare && OldState.ButtonSquare); }
    bool ButtonTriangleJustDown()   { return (NewState.ButtonTriangle && !OldState.ButtonTriangle); }
    bool ButtonTriangleJustUp()     { return (!NewState.ButtonTriangle && OldState.ButtonTriangle); }
    bool ButtonCrossJustDown()      { return (NewState.ButtonCross && !OldState.ButtonCross); }
    bool ButtonCrossJustUp()        { return (!NewState.ButtonCross && OldState.ButtonCross); }
    bool ButtonCircleJustDown()     { return (NewState.ButtonCircle && !OldState.ButtonCircle); }
    bool ButtonCircleJustUp()       { return (!NewState.ButtonCircle && OldState.ButtonCircle); }

    bool ShockButtonLJustDown()     { return (NewState.ShockButtonL && !OldState.ShockButtonL); }
    bool ShockButtonLJustUp()       { return (!NewState.ShockButtonL && OldState.ShockButtonL); }

    bool ShockButtonRJustDown()     { return (NewState.ShockButtonR && !OldState.ShockButtonR); }
    bool ShockButtonRJustUp()       { return (!NewState.ShockButtonR && OldState.ShockButtonR); }


    /*bool ChatIndicatedJustUp();
    bool ChatIndicatedJustDown();

    bool GetPedWalk();
    bool PedWalkJustDown();

    bool GetRadioTrackSkip();
    bool RadioTrackSkipJustDown();

    bool GetVehicleMouseLook();
    bool VehicleMouseLookJustDown();*/

    bool TargetJustDown();
    bool CycleCameraModeJustDown();
    bool CycleCameraModeUpJustDown();
    bool CycleCameraModeDownJustDown();
};

VALIDATE_SIZE(CPad, 0x134);