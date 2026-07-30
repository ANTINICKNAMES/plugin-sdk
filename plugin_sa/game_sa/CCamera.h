/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CQueuedMode.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CCamPathSplines.h"
#include "CMatrix.h"
#include "CVehicle.h"
#include "CRect.h"
#include "CPed.h"

class CEntity;
class CGarage;
class CPed;
class CVehicle;

enum
{
    SCRIPT_ZOOM_ONE = 0,
    SCRIPT_ZOOM_TWO,
    SCRIPT_ZOOM_THREE
};

enum
{
    LOOKING_BEHIND = 0,
    LOOKING_LEFT,
    LOOKING_RIGHT,
    LOOKING_FORWARD
};


enum
{
    FADING_OUT = 0,
    FADING_IN,
    NOT_FADING
};

enum
{
    CLEAR_SCREEN = 0,
    IN_MIDDLE_OF_FADING,
    DARK_SCREEN
};

enum
{
    NO_ONE = 0,
    SCRIPT_CAM_CONTROL,
    OBBE_CAM_CONTROL
};

enum CarZoomLevel
{
    ZOOM_ZERO = 0,
    ZOOM_ONE,
    ZOOM_TWO,
    ZOOM_THREE,
    ZOOM_FOUR,
    ZOOM_FIVE
};

enum
{
    MOVIECAM0 = 0,
    MOVIECAM1,
    MOVIECAM2,
    MOVIECAM3,
    MOVIECAM4,
    MOVIECAM5,
    MOVIECAM6,
    MOVIECAM7,
    MOVIECAM8,
    MOVIECAM9,
    MOVIECAM10,
    MOVIECAM11,
    MOVIECAM12,
    MOVIECAM13,
    MOVIECAM14,
    MOVIECAM15,
    MOVIECAM16,
    MOVIECAM17,
    MOVIECAM18,
    MOVIECAM19,
    MOVIECAM20,
    MOVIECAM21,
    MOVIECAM22,
    MOVIECAM23,
    MOVIECAM24,
    MOVIECAM25,
    MOVIECAMPLANE1,
    MOVIECAMPLANE2,
    MOVIECAMPLANE3,
    CAM_ON_A_STRING_LAST_RESORT,
    NOT_IN_OBBE_MODE_YET
};

enum eSwitchType : unsigned short
{
    SWITCHTYPE_NONE,
    SWITCHTYPE_INTERPOLATION,
    SWITCHTYPE_JUMPCUT
};

//
// CCamPathSplines
//

class PLUGIN_API CCamPathSplines
{
public:
    float* m_arr_PathData;
    CCamPathSplines();
    ~CCamPathSplines();
};

VALIDATE_SIZE(CCamPathSplines, 4);


//
// CCam
// 

class PLUGIN_API CCam {
public:
    enum PLUGIN_API : unsigned short {
        MODE_NONE = 0,
        MODE_TOPDOWN = 1,
        MODE_GTACLASSIC = 2,
        MODE_BEHINDCAR = 3,
        MODE_FOLLOWPED = 4,
        MODE_AIMING = 5,
        MODE_DEBUG = 6,
        MODE_SNIPER = 7,
        MODE_ROCKETLAUNCHER = 8,
        MODE_MODELVIEW = 9,
        MODE_BILL = 10,
        MODE_SYPHON = 11,
        MODE_CIRCLE = 12,
        MODE_CHEESYZOOM = 13,
        MODE_WHEELCAM = 14,
        MODE_FIXED = 15,
        MODE_1STPERSON = 16,
        MODE_FLYBY = 17,
        MODE_CAM_ON_A_STRING = 18,
        MODE_REACTION = 19,
        MODE_FOLLOW_PED_WITH_BIND = 20,
        MODE_CHRIS = 21,
        MODE_BEHINDBOAT = 22,
        MODE_PLAYER_FALLEN_WATER = 23,
        MODE_CAM_ON_TRAIN_ROOF = 24,
        MODE_CAM_RUNNING_SIDE_TRAIN = 25,
        MODE_BLOOD_ON_THE_TRACKS = 26,
        MODE_IM_THE_PASSENGER_WOOWOO = 27,
        MODE_SYPHON_CRIM_IN_FRONT = 28,
        MODE_PED_DEAD_BABY = 29,
        MODE_PILLOWS_PAPS = 30,
        MODE_LOOK_AT_CARS = 31,
        MODE_ARRESTCAM_ONE = 32,
        MODE_ARRESTCAM_TWO = 33,
        MODE_M16_1STPERSON = 34,
        MODE_SPECIAL_FIXED_FOR_SYPHON = 35,
        MODE_FIGHT_CAM = 36,
        MODE_TOP_DOWN_PED = 37,
        MODE_LIGHTHOUSE = 38,
        MODE_SNIPER_RUNABOUT = 39,
        MODE_ROCKETLAUNCHER_RUNABOUT = 40,
        MODE_1STPERSON_RUNABOUT = 41,
        MODE_M16_1STPERSON_RUNABOUT = 42,
        MODE_FIGHT_CAM_RUNABOUT = 43,
        MODE_EDITOR = 44,
        MODE_HELICANNON_1STPERSON = 45,
        MODE_CAMERA = 46,
        MODE_ATTACHCAM = 47,
        MODE_TWOPLAYER = 48,
        MODE_TWOPLAYER_IN_CAR_AND_SHOOTING = 49,
        MODE_TWOPLAYER_SEPARATE_CARS = 50,
        MODE_ROCKETLAUNCHER_HS = 51,
        MODE_ROCKETLAUNCHER_RUNABOUT_HS = 52,
        MODE_AIMWEAPON = 53,
        MODE_TWOPLAYER_SEPARATE_CARS_TOPDOWN = 54,
        MODE_AIMWEAPON_FROMCAR = 55,
        MODE_DW_HELI_CHASE = 56,
        MODE_DW_CAM_MAN = 57,
        MODE_DW_BIRDY = 58,
        MODE_DW_PLANE_SPOTTER = 59,
        MODE_DW_DOG_FIGHT = 60,
        MODE_DW_FISH = 61,
        MODE_DW_PLANECAM1 = 62,
        MODE_DW_PLANECAM2 = 63,
        MODE_DW_PLANECAM3 = 64,
        MODE_AIMWEAPON_ATTACHED = 65
    };
public:
    bool          bBelowMinDist;
    bool          bBehindPlayerDesired;
    bool          m_bCamLookingAtVector;
    bool          m_bCollisionChecksOn;
    bool          m_bFixingBeta;
    bool          m_bTheHeightFixerVehicleIsATrain;
    bool          LookBehindCamWasInFront;
    bool          LookingBehind;
    bool          LookingLeft;
    bool          LookingRight;
    bool          ResetStatics;
    bool          Rotating;
    Int16         Mode;
private:
    char _pad[2];
public:
    UInt32 m_uiFinishTime;

    int m_iDoCollisionChecksOnFrameNum;
    int m_iDoCollisionCheckEveryNumOfFrames;
    int m_iFrameNumWereAt;

    unsigned int  m_nRunningVectorArrayPos;
    unsigned int  m_nRunningVectorCounter;

    int DirectionWasLooking;

    float         m_fMaxRoleAngle;
    float         m_fRoll;
    float         m_fRollSpeed;
    float         m_fSyphonModeTargetZOffSet;
    float         m_fAmountFractionObscured;
    float         m_fAlphaSpeedOverOneFrame;
    float         m_fBetaSpeedOverOneFrame;
    float         m_fBufferedTargetBeta;
    float         m_fBufferedTargetOrientation;
    float         m_fBufferedTargetOrientationSpeed;
    float         m_fCamBufferedHeight;
    float         m_fCamBufferedHeightSpeed;
    float         m_fCloseInPedHeightOffset;
    float         m_fCloseInPedHeightOffsetSpeed;
    float         m_fCloseInCarHeightOffset;
    float         m_fCloseInCarHeightOffsetSpeed;
    float         m_fDimensionOfHighestNearCar;
    float         m_fDistanceBeforeChanges;
    float         m_fFovSpeedOverOneFrame;
    float         m_fMinDistAwayFromCamWhenInterPolating;
    float         m_fPedBetweenCameraHeightOffset;
    float         m_fPlayerInFrontSyphonAngleOffSet;
    float         m_fRadiusForDead;
    float         m_fRealGroundDist;
    float         m_fTargetBeta;
    float         m_fTimeElapsedFloat;
    float         m_fTilt;
    float         m_fTiltSpeed;
    float         m_fTransitionBeta;
    float         m_fTrueBeta;
    float         m_fTrueAlpha;
    float         m_fInitialPlayerOrientation;
    float         Alpha;
    float         AlphaSpeed;
    float         FOV;
    float         FOVSpeed;
    float         Beta;
    float         BetaSpeed;
    float         Distance;
    float         DistanceSpeed;
    float         CA_MIN_DISTANCE;
    float         CA_MAX_DISTANCE;
    float         SpeedVar;
    float         m_fCameraHeightMultiplier;
    float         m_fTargetZoomGroundOne;
    float         m_fTargetZoomGroundTwo;
    float         m_fTargetZoomGroundThree;
    float         m_fTargetZoomOneZExtra;
    float         m_fTargetZoomTwoZExtra;
    float         m_fTargetZoomTwoInteriorZExtra;
    float         m_fTargetZoomThreeZExtra;
    float         m_fTargetZoomZCloseIn;
    float         m_fMinRealGroundDist;
    float         m_fTargetCloseInDist;
    float         Beta_Targeting;
    float         X_Targetting;
    float         Y_Targetting;
    Int32         CarWeAreFocussingOn;
    float         CarWeAreFocussingOnI;
    float         m_fCamBumpedHorz;
    float         m_fCamBumpedVert;
    Int32         m_nCamBumpedTime;
    CVector       m_cvecSourceSpeedOverOneFrame;
    CVector       m_cvecTargetSpeedOverOneFrame;
    CVector       m_cvecUpOverOneFrame;
    CVector       m_cvecTargetCoorsForFudgeInter;
    CVector       m_cvecCamFixedModeVector;
    CVector       m_cvecCamFixedModeSource;
    CVector       m_cvecCamFixedModeUpOffSet;
    CVector       m_vecLastAboveWaterCamPosition;
    CVector       m_vecBufferedPlayerBodyOffset;
    CVector       Front;
    CVector       Source;
    CVector       SourceBeforeLookBehind;
    CVector       Up;
    CVector       m_arrPreviousVectors[2];
    CVector       m_aTargetHistoryPos[4];
    uint32        m_nTargetHistoryTime[4];
    int32         m_nCurrentHistoryPoints;
    CEntity*      CamTargetEntity;
    float         m_fCameraDistance;
    float         m_fIdealAlpha;
    float         m_fPlayerVelocity;
    CAutomobile*  m_pLastCarEntered;
    CPed*         m_pLastPedLookedAt;
    bool          m_bFirstPersonRunAboutActive;
public:
    bool Using3rdPersonMouseCam();

    bool GetWeaponFirstPersonOn(); // sub_509DC0
    bool GetBoatLook_L_R_HeightOffset(float& HeightOffset); // sub_509CA0
    
    void Init();
    void KeepTrackOfTheSpeed(const CVector& TheSource, const CVector& TheTargetToLookAt, const CVector& TheUpVector, const float& TrueAlpha, const float& TrueBeta, const float& TheFOV);
    
    void Process();

    void Process_AimWeapon(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);

    void Process_FollowPed_SA(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired, bool bScriptSetAngles = false);
    void Process_FollowCar_SA(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired, bool bScriptSetAngles = false);

    void Process_1stPerson(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    void Process_1rstPersonPedOnPC(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);

    void Process_Editor(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    //void Process_Debug(const CVector&, float, float, float); // #Ifndef MASTER

    void Process_Fixed(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    void Process_FlyBy(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    void Process_FollowPedWithMouse(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    void Process_M16_1stPerson(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    //void Process_ModelView(const CVector&, float, float, float); #Ifndef MASTER
    //bool Process_CushyPillows_Arse(); GTAIDLECAM
    void Process_Rocket(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired, bool bHeatSeeking);

    void Process_SpecialFixedForSyphon(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);

    
    bool Process_WheelCam(const CVector& ThisCamsTarget, float TargetOrientation, float SpeedVar, float SpeedVarDesired);
    void Process_AttachedCam();
    void ProcessPedsDeadBaby();
    void Process_Cam_TwoPlayer();
    void Process_Cam_TwoPlayer_CalcSource(float Beta, CVector* pSource, CVector* pLookAt, CVector* pTarget); // sub_5132D0
    bool Process_Cam_TwoPlayer_TestLOSs(CVector TempSource); // sub_513220
    void Process_Cam_TwoPlayer_InCarAndShooting();
    void Process_Cam_TwoPlayer_Separate_Cars();
    void Process_Cam_TwoPlayer_Separate_Cars_TopDown();
    CEntity* Get_TwoPlayer_AimVector(CVector& vecFront);

    //bool IsTargetInWater(const CVector& CamPos); // dummy
    bool ProcessArrestCamOne();
    //bool ProcessArrestCamTwo(); // dummy
    bool GetLookOverShoulderPos(CEntity* pTargetEntity, CPed* pCopPed, CVector& vecTarget, CVector& vecSource); // sub_515D80
    bool GetLookAlongGroundPos(CEntity* pTargetEntity, CPed* pCopPed, CVector& vecTarget, CVector& vecSource); // sub_516010
    bool GetLookFromLampPostPos(CEntity* pTargetEntity, CPed* pCopPed, CVector& vecTarget, CVector& vecSource);
    void DoCamBump(float fBumpHorz, float fBumpVert);

    bool RotCamIfInFrontCar(const CVector& TargetCoors, float TargetOrientation);

//protected:
public:
    //inlines
    void ClipBeta();
    void ClipAlpha();

    bool LookBehind();
    bool LookRight(bool bIsRight);
    void GetVectorsReadyForRW();

public:
    void CacheLastSettingsDWCineyCam();
    void Finalise_DW_CineyCams(CVector* pSrc, CVector* pDst, float roll, float fov, float nearClip, float degreeShake);
    bool Process_DW_HeliChaseCam(bool bCheckValid);
    bool Process_DW_CamManCam(bool bCheckValid);
    bool Process_DW_BirdyCam(bool bCheckValid);
    bool Process_DW_PlaneSpotterCam(bool bCheckValid);
    //bool Process_DW_DogFightCam(bool bCheckValid);
    //bool Process_DW_FishCam(bool bCheckValid);

    bool Process_DW_PlaneCam1(bool bCheckValid);
    bool Process_DW_PlaneCam2(bool bCheckValid);
    bool Process_DW_PlaneCam3(bool bCheckValid);

    void GetCoreDataForDWCineyCamMode(CEntity** pEntity, CVehicle** pVehicle, CVector* dst, CVector* src, CVector* targetUp, CVector* targetRight, CVector* targetForward, CVector* targetMotion, float* targetVel, CVector* targetAngMotion, float* targetAngVel, CColSphere* sph);


    bool IsTimeToExitThisDWCineyCamMode(int32 camId, CVector* pSrc, CVector* pDst, float t, bool bLineOfSightCheck);
    bool ProcessDWBustedCam1(CPed* pHandyCopPointer, bool bIsFirstTime);
};

VALIDATE_SIZE(CCam, 0x238);

//
// CQueuedMode
//

class PLUGIN_API CQueuedMode
{

public:
    Int16 Mode;
    float Duration;
    Int16 MinZoom, MaxZoom;
};

VALIDATE_SIZE(CQueuedMode, 0xC);

//
// CCamera
//

class PLUGIN_API CCamera : public CPlaceable {
public:
    enum 
    { 
        FRUSTUM_LEFT = 0, 
        FRUSTUM_RIGHT, 
        FRUSTUM_BOTTOM, 
        FRUSTUM_TOP 
    };

    enum 
    { 
        TRANS_NONE = 0, 
        TRANS_INTERPOLATION, 
        TRANS_JUMP_CUT 
    };

    enum 
    { 
        FADE_OUT = 0, 
        FADE_IN 
    };
    //PLUGIN_NO_DEFAULT_CONSTRUCTION(CCamera)
public:
    bool m_bAboveGroundTrainNodesLoaded;
    bool m_bBelowGroundTrainNodesLoaded;
    bool m_bCamDirectlyBehind;
    bool m_bCamDirectlyInFront;
    bool m_bCameraJustRestored;
    bool m_bcutsceneFinished;
    bool m_bCullZoneChecksOn;
    bool m_bFirstPersonBeingUsed;
    bool m_bJustJumpedOutOf1stPersonBecauseOfTarget;
    bool m_bIdleOn;
    bool m_bInATunnelAndABigVehicle;
    bool m_bInitialNodeFound;
    bool m_bInitialNoNodeStaticsSet;
    bool m_bIgnoreFadingStuffForMusic;
    bool m_bPlayerIsInGarage;
    bool m_bPlayerWasOnBike;
    bool m_bJustCameOutOfGarage;
    bool m_bJustInitalised;
    bool m_bJust_Switched;
    bool m_bLookingAtPlayer;
    bool m_bLookingAtVector;
    bool m_bMoveCamToAvoidGeom;
    bool m_bObbeCinematicPedCamOn;
    bool m_bObbeCinematicCarCamOn;
    bool m_bRestoreByJumpCut;
    bool m_bUseNearClipScript;
    bool m_bStartInterScript;
    bool m_bStartingSpline;
    bool m_bTargetJustBeenOnTrain;
    bool m_bTargetJustCameOffTrain;
    bool m_bUseSpecialFovTrain;
    bool m_bUseTransitionBeta;
    bool m_bUseScriptZoomValuePed;
    bool m_bUseScriptZoomValueCar;
    bool m_bWaitForInterpolToFinish;
    bool m_bItsOkToLookJustAtThePlayer;
    bool m_bWantsToSwitchWidescreenOff;
    bool m_bWideScreenOn;
    bool m_b1rstPersonRunCloseToAWall;
    bool m_bHeadBob;
    bool m_bVehicleSuspenHigh;
    bool m_bEnable1rstPersonCamCntrlsScript;
    bool m_bAllow1rstPersonWeaponsCamera;
    bool m_bCooperativeCamMode;
    bool m_bAllowShootingWith2PlayersInCar;
    bool m_bDisableFirstPersonInCar;

    Int16 m_ModeForTwoPlayersSeparateCars;
    Int16 m_ModeForTwoPlayersSameCarShootingAllowed;
    Int16 m_ModeForTwoPlayersSameCarShootingNotAllowed;
    Int16 m_ModeForTwoPlayersNotBothInCar;

    bool m_bGarageFixedCamPositionSet;
    bool m_vecDoingSpecialInterPolation;
    bool m_bScriptParametersSetForInterPol;


    bool m_bFading;
    bool m_bMusicFading;
    bool m_bMusicFadedOut;

    bool m_bFailedCullZoneTestPreviously;
    bool m_bFadeTargetIsSplashScreen;
    bool m_bWorldViewerBeingUsed;

    UInt8 m_uiTransitionJUSTStarted;
    UInt8 m_uiTransitionState;
    UInt8 ActiveCam;
private:
    char _pad5A[2];
public:
    UInt32 m_uiCamShakeStart;
    UInt32 m_uiFirstPersonCamLastInputTime;
    UInt32 m_uiLongestTimeInMill;
    UInt32 m_uiNumberOfTrainCamNodes;
    UInt32 m_uiTimeLastChange;
    UInt32 m_uiTimeWeLeftIdle_StillNoInput;
    UInt32 m_uiTimeWeEnteredIdle;
    UInt32 m_uiTimeTransitionStart;
    UInt32 m_uiTransitionDuration;
    UInt32 m_uiTransitionDurationTargetCoors;
    int m_BlurBlue;
    int m_BlurGreen;
    int m_BlurRed;
    int m_BlurType;
    int m_iWorkOutSpeedThisNumFrames;
    int m_iNumFramesSoFar;
    int m_iCurrentTrainCamNode;
    int m_motionBlur;

    int m_imotionBlurAddAlpha;
    int m_iCheckCullZoneThisNumFrames;
    int m_iZoneCullFrameNumWereAt;
    int WhoIsInControlOfTheCamera;

    int32 m_nCarZoom;
    float m_fCarZoomBase;
    float m_fCarZoomTotal;
    float m_fCarZoomSmoothed;
    float m_fCarZoomValueScript;
    int32 m_nPedZoom;
    float m_fPedZoomBase;
    float m_fPedZoomTotal;
    float m_fPedZoomSmoothed;
    float m_fPedZoomValueScript;

    float CamFrontXNorm;
    float CamFrontYNorm;
    float DistanceToWater;
    float HeightOfNearestWater;
    float FOVDuringInter;
    float LODDistMultiplier;
    float GenerationDistMultiplier;

    float m_fAlphaSpeedAtStartInter;
    float m_fAlphaWhenInterPol;
    float m_fAlphaDuringInterPol;
    float m_fBetaDuringInterPol;
    float m_fBetaSpeedAtStartInter;
    float m_fBetaWhenInterPol;
    float m_fFOVWhenInterPol;
    float m_fFOVSpeedAtStartInter;
    float m_fStartingBetaForInterPol;
    float m_fStartingAlphaForInterPol;
    float m_PedOrientForBehindOrInFront;

    float m_CameraAverageSpeed;
    float m_CameraSpeedSoFar;
    float m_fCamShakeForce;
    float m_fFovForTrain;
    float m_fFOV_Wide_Screen;

    float m_fNearClipScript;
    float m_fOldBetaDiff;
    float m_fPositionAlongSpline;
    float m_ScreenReductionPercentage;
    float m_ScreenReductionSpeed;
    float m_AlphaForPlayerAnim1rstPerson;

    float Orientation;
    float PlayerExhaustion;


    float SoundDistUp;
    float SoundDistUpAsRead;
    float SoundDistUpAsReadOld;
    float m_fAvoidTheGeometryProbsTimer;
    int16 m_nAvoidTheGeometryProbsDirn;
private:
    char _pad16A[2];
public:
    float m_fWideScreenReductionAmount;
    float m_fStartingFOVForInterPol;


    CCam Cams[3];


    CGarage* pToGarageWeAreIn;
    CGarage* pToGarageWeAreInForHackAvoidFirstPerson;
    CQueuedMode m_PlayerMode;

    CQueuedMode PlayerWeaponMode;
    CVector m_PreviousCameraPosition;
    CVector m_RealPreviousCameraPosition;

    CVector m_cvecAimingTargetCoors;

    CVector m_vecFixedModeVector;
    CVector m_vecFixedModeSource;
    CVector m_vecFixedModeUpOffSet;
    CVector m_vecCutSceneOffset;
    CVector m_cvecStartingSourceForInterPol;
    CVector m_cvecStartingTargetForInterPol;
    CVector m_cvecStartingUpForInterPol;
    CVector m_cvecSourceSpeedAtStartInter;
    CVector m_cvecTargetSpeedAtStartInter;
    CVector m_cvecUpSpeedAtStartInter;
    CVector m_vecSourceWhenInterPol;
    CVector m_vecTargetWhenInterPol;
    CVector m_vecUpWhenInterPol;
    CVector m_vecClearGeometryVec;
    CVector m_vecGameCamPos;
    CVector SourceDuringInter;
    CVector TargetDuringInter;
    CVector UpDuringInter;

    CVector m_vecAttachedCamOffset;
    CVector m_vecAttachedCamLookAt;
    float m_fAttachedCamAngle;


    RwCamera* m_pRwCamera;

    CEntity* pTargetEntity;
    CEntity* pAttachedEntity;

    CCamPathSplines m_arrPathArray[4];


    bool m_bMirrorActive;
    bool m_bResetOldMatrix;
private:
    char _pad972[2];
public:
    CMatrix m_cameraMatrix;
    CMatrix m_cameraMatrixOld;
    CMatrix m_viewMatrix;
    CMatrix m_matInverse;
    CMatrix m_matMirrorInverse;
    CMatrix m_matMirror;


    CVector m_vecFrustumNormals[4];
    CVector m_vecFrustumWorldNormals[4];
    CVector m_vecFrustumWorldNormals_Mirror[4];

    float m_fFrustumPlaneOffsets[4];
    float m_fFrustumPlaneOffsets_Mirror[4];

    CVector m_vecOldSourceForInter; //!< unused?
    CVector m_vecOldFrontForInter; //!< unused?
    CVector m_vecOldUpForInter; //!< unused?

    float m_vecOldFOVForInter; //!< unused?
    float m_fFloatingFade;
    float m_fFloatingFadeMusic;
    float m_fTimeToFadeOut;
    float m_fTimeToFadeMusic;
    float m_fTimeToWaitToFadeMusic;
    float m_fFractionInterToStopMoving;
    float m_fFractionInterToStopCatchUp;
    float m_fFractionInterToStopMovingTarget;
    float m_fFractionInterToStopCatchUpTarget;

    float m_fGaitSwayBuffer;
    float m_fScriptPercentageInterToStopMoving;
    float m_fScriptPercentageInterToCatchUp;
    UInt32 m_fScriptTimeForInterPolation;
    Int16 m_iFadingDirection;
private:
    char _padC32[2];
public:
    int m_iModeObbeCamIsInForCar;
    Int16 m_iModeToGoTo;
    Int16 m_iMusicFadingDirection;
    Int16 m_iTypeOfSwitch; // eSwitchType
private:
    char _padC3E[2];
public:
    UInt32 m_uiFadeTimeStarted;
    UInt32 m_uiFadeTimeStartedMusic;
    int32 m_numExtrasEntitysToIgnore;
    CEntity* m_pExtrasEntitysToIgnore[2];
    float m_duckZMod;
    float m_duckZMod_Aim;
    float m_vectorTrackStartTime;
	float m_vectorTrackEndTime;
	CVector m_vectorTrackFrom;
	CVector m_vectorTrackTo;
	bool m_bVectorTrackSmoothEnds;
    char field_C7D; // padding
    char field_C7E; // padding
    char field_C7F; // padding
    CVector m_VectorTrackScript;
    bool m_bVectorTrackScript;
    char field_C8D; // padding
    char field_C8E; // padding
    char field_C8F; // padding
    float m_DegreeHandShake;
    float m_shakeStartTime;
    float m_shakeEndTime;
    int m_bShakeScript;
    int m_CurShakeCam;
    float m_FOVLerpStartTime;
    float m_FOVLerpEndTime;
    float m_FOVLerpStart;
    float m_FOVLerpEnd;
    bool m_bFOVLerpSmoothEnds;
    bool m_bFOVScript;
    char field_CB6; // padding
    char field_CB7; // padding
    float m_MyFOV;
    float m_vectorMoveStartTime;
    float m_vectorMoveEndTime;
    CVector m_vectorMoveFrom;
    CVector m_vectorMoveTo;
    bool m_bVectorMoveSmoothEnds;
    char field_CDD; // padding
    char field_CDE; // padding
    char field_CDF; // padding
    CVector m_VectorMoveScript;
    bool m_bVectorMoveScript;
    bool m_bPersistFOV;
    bool m_bPersistCamPos;
    bool m_bPersistCamLookAt;
    bool m_bForceCinemaCam;
    char field_CF1; // padding
    char field_CF2; // padding
    char field_CF3; // padding

    /*
    struct {
        int m_nModelIndex;
        float m_fDistance;
        float m_fAltitude;
        float m_fAngle;
    } m_aCamTweak[5];
    */

    class CVehicleCamTweak
    {
    public:
        int32 m_ModelId;
        float m_LenMod;
        float m_TargetZMod;
        float m_PitchMod;
        CVehicleCamTweak();
        ~CVehicleCamTweak();
        void Reset();
        void Set(int32 nModelId, float fLenghtModifier, float fTargetZ, float fPitchModifier);
    };

    CCamera::CVehicleCamTweak m_VehicleTweaks[5];

    bool m_bInitedVehicleCamTweaks;
private:
    char _padD45[3];
public:
    float m_VehicleTweakLenMod;
    float m_VehicleTweakTargetZMod;
    float m_VehicleTweakPitchMod;
    int32 m_VehicleTweakLastModelId;
    // the following are unused?
    float m_TimeStartFOVLO;
    float m_TimeEndFOVLO;
    float m_FOVStartFOVLO;
    CVector m_StartPositionFOVLO;
    float m_FOVTargetFOVLO;
    bool m_bSmoothLerpFOVLO;
    bool m_bInitLockOnCam;

    SUPPORTED_10US static float &m_f3rdPersonCHairMultY;
    SUPPORTED_10US static float &m_f3rdPersonCHairMultX;
    SUPPORTED_10US static float &m_fMouseAccelVertical;
    SUPPORTED_10US static float &m_fMouseAccelHorzntal;
    SUPPORTED_10US static bool &m_bUseMouse3rdPerson;
    /* virtual functions */

    // vtable function #0 (destructor)

    /* virtual functions - end */

    SUPPORTED_10US void AddShakeSimple(float duration, int type, float intensity);
    SUPPORTED_10US void AllowShootingWith2PlayersInCar(bool bAllowShootingWith2PlayersInCar);
    SUPPORTED_10US void ApplyVehicleCameraTweaks(CVehicle *vehicle);
    SUPPORTED_10US void AvoidTheGeometry(CVector const *arg2, CVector const *arg3, CVector *arg4, float FOV);
    SUPPORTED_10US void CalculateDerivedValues(bool bForMirror, bool bOriented);
    SUPPORTED_10US void CalculateFrustumPlanes(bool bForMirror);
    SUPPORTED_10US float CalculateGroundHeight(unsigned int type);
    SUPPORTED_10US void CalculateMirroredMatrix(CVector posn, float MirrorV, CMatrix *CamMat, CMatrix *MirrorMat);
    SUPPORTED_10US void CamControl();
    SUPPORTED_10US void CamShake(float arg2, float x, float y, float z);
    SUPPORTED_10US char CameraColDetAndReact(CVector *source, CVector *target);
    SUPPORTED_10US void CameraGenericModeSpecialCases(CPed *targetPed);
    SUPPORTED_10US void CameraPedAimModeSpecialCases(CPed *targPed);
    //! unused
    SUPPORTED_10US void CameraPedModeSpecialCases();
    SUPPORTED_10US void CameraVehicleModeSpecialCases(CVehicle *targVehicle);
    SUPPORTED_10US void ClearPlayerWeaponMode();
    SUPPORTED_10US bool ConeCastCollisionResolve(CVector *source, CVector *center, CVector *pVecOut, float radius, float arg5, float *pFloatOut);
    //! unused
    SUPPORTED_10US bool ConsiderPedAsDucking(CPed *ped);
    SUPPORTED_10US void CopyCameraMatrixToRWCam(bool bUpdateMatrix);
    SUPPORTED_10US void DealWithMirrorBeforeConstructRenderList(bool bActiveMirror, CVector MirrorNormal, float MirrorV, CMatrix *matMirror);
    SUPPORTED_10US void DeleteCutSceneCamDataMemory();
    SUPPORTED_10US void DrawBordersForWideScreen();
    //! unused
    SUPPORTED_10US void Enable1rstPersonCamCntrlsScript();
    //! unused
    SUPPORTED_10US void Enable1rstPersonWeaponsCamera();
    SUPPORTED_10US void Fade(float fadeDuration, short FadeInOutFlag);
    SUPPORTED_10US void Find3rdPersonCamTargetVector(float range, CVector source, CVector *pCamera, CVector *pPoint);
    SUPPORTED_10US float Find3rdPersonQuickAimPitch();
    SUPPORTED_10US float FindCamFOV();
    SUPPORTED_10US void FinishCutscene();
    SUPPORTED_10US void GetArrPosForVehicleType(int type, int *arrPos);
    SUPPORTED_10US unsigned int GetCutSceneFinishTime();
    SUPPORTED_10US bool GetFading();
    SUPPORTED_10US int GetFadingDirection();
    SUPPORTED_10US CVector *GetGameCamPosition();
    SUPPORTED_10US signed int GetLookDirection();
    SUPPORTED_10US bool GetLookingForwardFirstPerson();
    SUPPORTED_10US bool GetLookingLRBFirstPerson();
    SUPPORTED_10US float GetPositionAlongSpline();
    SUPPORTED_10US float GetRoughDistanceToGround();
    SUPPORTED_10US signed int GetScreenFadeStatus();
    SUPPORTED_10US void GetScreenRect(CRect *pRect);
    SUPPORTED_10US bool Get_Just_Switched_Status();
    //! arg5 always used as false
    SUPPORTED_10US void HandleCameraMotionForDucking(CPed *ped, CVector *source, CVector *targPosn, bool arg5);
    //! arg5 always used as false
    SUPPORTED_10US void HandleCameraMotionForDuckingDuringAim(CPed *ped, CVector *source, CVector *targPosn, bool arg5);
    SUPPORTED_10US void ImproveNearClip(CVehicle *pVehicle, CPed *pPed, CVector *source, CVector *targPosn);
    SUPPORTED_10US void Init();
    SUPPORTED_10US void InitCameraVehicleTweaks();
    SUPPORTED_10US int InitialiseScriptableComponents();
    SUPPORTED_10US bool IsExtraEntityToIgnore(CEntity *entity);
    SUPPORTED_10US bool IsItTimeForNewcam(int CamSequence, int StartTime);
    SUPPORTED_10US bool IsSphereVisible(CVector const &origin, float radius, RwMatrixTag *transformMatrix);
    SUPPORTED_10US bool IsSphereVisible(CVector const &origin, float radius);
    SUPPORTED_10US void LerpFOV(float zoomInFactor, float zoomOutFactor, float timelimit, bool bEase);
    SUPPORTED_10US void LoadPathSplines(int pFile);
    SUPPORTED_10US void Process();
    SUPPORTED_10US void ProcessFOVLerp(float ratio);
    SUPPORTED_10US void ProcessFOVLerp();
    SUPPORTED_10US void ProcessFade();
    SUPPORTED_10US void ProcessMusicFade();
    SUPPORTED_10US void ProcessObbeCinemaCameraBoat();
    SUPPORTED_10US void ProcessObbeCinemaCameraCar();
    SUPPORTED_10US void ProcessObbeCinemaCameraHeli();
    //! unused, empty
    SUPPORTED_10US unsigned int ProcessObbeCinemaCameraPed();
    SUPPORTED_10US void ProcessObbeCinemaCameraPlane();
    SUPPORTED_10US void ProcessObbeCinemaCameraTrain();
    //! unused
    SUPPORTED_10US void ProcessScriptedCommands();
    //! JiggleIntensity not used
    SUPPORTED_10US void ProcessShake(float JiggleIntensity);
    SUPPORTED_10US void ProcessShake();
    SUPPORTED_10US void ProcessVectorMoveLinear(float ratio);
    SUPPORTED_10US void ProcessVectorMoveLinear();
    SUPPORTED_10US void ProcessVectorTrackLinear(float ratio);
    SUPPORTED_10US void ProcessVectorTrackLinear();
    SUPPORTED_10US void ProcessWideScreenOn();
    SUPPORTED_10US void RenderMotionBlur();
    SUPPORTED_10US void ResetDuckingSystem(CPed *ped);
    SUPPORTED_10US void Restore();
    SUPPORTED_10US void RestoreCameraAfterMirror();
    SUPPORTED_10US void RestoreWithJumpCut();
    SUPPORTED_10US void SetCamCutSceneOffSet(CVector const *cutsceneOffset);
    SUPPORTED_10US void SetCamPositionForFixedMode(const CVector& CamPosToGoTo, const CVector& UpOffsets);
    SUPPORTED_10US void SetCameraDirectlyBehindForFollowPed_CamOnAString();
    //! unused
    SUPPORTED_10US void SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString(CPed *targetPed);
    SUPPORTED_10US void SetCameraUpForMirror();
    SUPPORTED_10US void SetFadeColour(unsigned char Red, unsigned char Green, unsigned char Blue);
    SUPPORTED_10US void SetMotionBlur(int Red, int Green, int Blue, int value, int Blurtype);
    SUPPORTED_10US void SetMotionBlurAlpha(int Alpha);
    //! unused
    SUPPORTED_10US void SetNearClipBasedOnPedCollision(float arg2);
    SUPPORTED_10US void SetNearClipScript(float NearClip);
    SUPPORTED_10US void SetNewPlayerWeaponMode(short mode, short maxZoom, short minZoom);
    SUPPORTED_10US void SetParametersForScriptInterpolation(float InterpolationToStopMoving, float InterpolationToCatchUp, unsigned int TimeForInterPolation);
    SUPPORTED_10US void SetPercentAlongCutScene(float percent);
    SUPPORTED_10US void SetRwCamera(RwCamera *rwcamera);
    SUPPORTED_10US void SetWideScreenOff();
    SUPPORTED_10US void SetWideScreenOn();
    //! zoomMode : 0- ZOOM_ONE , 1- ZOOM_TWO , 2- ZOOM_THREE
    SUPPORTED_10US void SetZoomValueCamStringScript(short zoomMode);
    //! zoomMode : value between 0 - 2
    SUPPORTED_10US void SetZoomValueFollowPedScript(short zoomMode);
    SUPPORTED_10US void StartCooperativeCamMode();
    //! currentCamMode : see eCamMode
    SUPPORTED_10US void StartTransition(short currentCamMode);
    //! unused , see eCamMode
    SUPPORTED_10US void StartTransitionWhenNotFinishedInter(short currentCamMode);
    //! unused
    SUPPORTED_10US void StopCooperativeCamMode();
    SUPPORTED_10US void StoreValuesDuringInterPol(CVector *SourceDuringInter, CVector *TargetDuringInter, CVector *UpDuringInter, float *FOVDuringInter);
    //! TypeOfSwitch : see eSwitchType
    //! ModeToGoTo : see eCamMode
    SUPPORTED_10US void TakeControl(CEntity *target, short ModeToGoTo, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlAttachToEntity(CEntity *target, CEntity *attached, CVector *AttachedCamOffset, CVector *AttachedCamLookAt, float AttachedCamAngle, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlNoEntity(CVector const *FixedModeVector, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlWithSpline(short TypeOfSwitch);
    SUPPORTED_10US bool TryToStartNewCamMode(int CamSequence);
    SUPPORTED_10US void UpdateAimingCoors(CVector const *AimingTargetCoors);
    SUPPORTED_10US void UpdateSoundDistances();
    SUPPORTED_10US void UpdateTargetEntity();
    SUPPORTED_10US bool Using1stPersonWeaponMode();
    SUPPORTED_10US void VectorMoveLinear(CVector *MoveLinearPosnEnd, CVector *MoveLinearPosnStart, float duration, bool bMoveLinearWithEase);
    SUPPORTED_10US bool VectorMoveRunning();
    SUPPORTED_10US void VectorTrackLinear(CVector *TrackLinearStartPoint, CVector *TrackLinearEndPoint, float duration, bool bEase);
    SUPPORTED_10US bool VectorTrackRunning();

    static void WellBufferMe(float TheTarget, float* TheValueToChange, float* ValueSpeedSoFar, float TopSpeed, float SpeedStep, bool IsAnAngle);

    // not part of CCamera
    static void MakeAngleLessThan180(float& AngleToChange);

    //! unused
    SUPPORTED_10US static void DontProcessObbeCinemaCamera();
    SUPPORTED_10US static void SetCamCollisionVarDataSet(int index);
    SUPPORTED_10US static void SetColVarsAimWeapon(int aimingType);
    SUPPORTED_10US static void SetColVarsPed(int pedtype, int nCamPedZoom);
    SUPPORTED_10US static void SetColVarsVehicle(int vehicletype, int CamVehicleZoom);

    // inlines
    CCam& GetActiveCamera() { return Cams[ActiveCam]; }
};

VTABLE_DESC(CCamera, 0x8630E8, 1);

VALIDATE_SIZE(CCamera, 0xD78);

SUPPORTED_10US extern CCamera &TheCamera;

#include "meta/meta.CCamera.h"

// CCamera useful global vars
SUPPORTED_10US extern bool& gbFirstPersonRunThisFrame;
SUPPORTED_10US extern bool& gPlayerPedVisible;
SUPPORTED_10US extern int8& gbCineyCamMessageDisplayed;
SUPPORTED_10US extern int32& DirectionIsLooking;
SUPPORTED_10US extern int32& gLastCamMode;
SUPPORTED_10US extern uint32& gLastTime2PlayerCameraWasOK;
SUPPORTED_10US extern uint32& gLastTime2PlayerCameraCollided;
SUPPORTED_10US extern CVector& gTargetCoordsForLookingBehind;
SUPPORTED_10US extern bool& gAllowScriptedFixedCameraCollision;
SUPPORTED_10US extern bool& bDidWeProcessAnyCinemaCam;
SUPPORTED_10US extern float& fRangePlayerRadius;
SUPPORTED_10US extern float& fCloseNearClipLimit;

SUPPORTED_10US extern float& PLAYERPED_LEVEL_SMOOTHING_CONST_INV; // 0.60f;
SUPPORTED_10US extern float& PLAYERPED_TREND_SMOOTHING_CONST_INV; // 0.80f;
SUPPORTED_10US extern float& PLAYERFIGHT_LEVEL_SMOOTHING_CONST; // 0.90f;

SUPPORTED_10US extern float& DrunkRotation;
SUPPORTED_10US extern bool& JustGoneIntoObbeCamera;

SUPPORTED_10US extern bool& gInitShakeCams;
SUPPORTED_10US extern uint32& gbCineyCamProcessedOnFrame;

SUPPORTED_10US extern float& gCurDistForCam;

SUPPORTED_10US extern int& CamModeToRestore;


//
// SCamColVars
//

enum
{
    CAM_COL_VARS_PLAYER_AIM_WEAP_ONFOOT = 0,
    CAM_COL_VARS_PLAYER_AIM_WEAP_ONBIKE,
    CAM_COL_VARS_PLAYER_AIM_WEAP_INCAR,
    CAM_COL_VARS_PLAYER_AIM_WEAP_MELEE,
    CAM_COL_VARS_PLAYER_OUTSIDE_NEAR_RANGE,
    CAM_COL_VARS_PLAYER_OUTSIDE_MED_RANGE,
    CAM_COL_VARS_PLAYER_OUTSIDE_FAR_RANGE,
    CAM_COL_VARS_PLAYER_INSIDE_NEAR_RANGE,
    CAM_COL_VARS_PLAYER_INSIDE_MED_RANGE,
    CAM_COL_VARS_PLAYER_INSIDE_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_CAR_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_CAR_MED_RANGE,
    CAM_COL_VARS_FOLLOW_CAR_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_BIKE_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_BIKE_MED_RANGE,
    CAM_COL_VARS_FOLLOW_BIKE_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_HELI_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_HELI_MED_RANGE,
    CAM_COL_VARS_FOLLOW_HELI_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_PLANE_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_PLANE_MED_RANGE,
    CAM_COL_VARS_FOLLOW_PLANE_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_RCCAR_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_RCCAR_MED_RANGE,
    CAM_COL_VARS_FOLLOW_RCCAR_FAR_RANGE,
    CAM_COL_VARS_FOLLOW_RCHELI_NEAR_RANGE,
    CAM_COL_VARS_FOLLOW_RCHELI_MED_RANGE,
    CAM_COL_VARS_FOLLOW_RCHELI_FAR_RANGE,
    CAM_COL_VARS_MAX
};



struct SCamColVars
{
    float camRad;
    float maxCamRad;
    float camMinDist;
    float distToModClipping;
    float clippingDistance;
    float speedZoomOut;
};

//
//  CHandShaker
//

class PLUGIN_API CHandShaker
{
public:
    CVector ang;
    CVector lim;
    CVector motion;
    CVector vel;
    CVector slow;
    CMatrix resultMat;

    float scaleReactionMin;
    float scaleReactionMax;
    int32 twitchFreq;
    float twitchVel;

    /*
    CHandShaker();
    ~CHandShaker();
    */

    void Reset();
    void SetDefaults();
    void Process(float degree);
};

VALIDATE_SIZE(CHandShaker, 0x94);

SUPPORTED_10US extern CHandShaker *gHandShaker;

//
// CIdleCamera
//

class PLUGIN_API CIdleCam
{
public:

    // Target Tracking
    CEntity* pTarget;

    // Slerp control
    CVector positionToSlerpFrom; // OK its not slerping because I'm not using quats, but terminology rightly or wrongly remains the same.
    float	timeSlerpStarted;
    float   slerpDuration;
    CVector lastIdlePos;		// A cached position that can be used anytime as the last position we where looking at to kick off a slerp from.
    float 	slerpTime;

    // Kick in control
    float 	timeControlsIdleForIdleToKickIn;
    float   timeIdleCamStarted;
    int32   lastFrameProcessed;

    // Target Selection
    float	timeLastTargetSelected;
    float   timeMinimumToLookAtSomething;

    // Collision
    float   timeTargetEntityWasLastVisible;
    float   timeToConsiderNonVisibleEntityAsOccluded;
    float 	distTooClose;
    float   distStartFOVZoom;
    float   distTooFar;
    int32 	targetLOSFramestoReject;
    int32 	targetLOSCounter;

    // FOV Control
    enum { ZOOMING_IN, ZOOMING_OUT, ZOOMED_IN, ZOOMED_OUT };
    int32 zoomState; // 
    float zoomFrom;
    float zoomTo;
    float timeZoomStarted;
    float zoomNearest;
    float zoomFarthest;
    float curFOV;
    float durationFOVZoom;
    bool  bForceAZoomOut; // make the camera zoom out before reaquiring another target,
    bool  bHasZoomedIn;
    float timeBeforeNewZoomIn;
    float timeLastZoomIn;
    float increaseMinimumTimeFactorforZoomedIn;

    // Shake 
    float degreeShakeIdleCam;
    float shakeBuildUpTime;

    // new timer stuff
    int32 lastTimePadTouched;
    int32 idleTickerFrames;


    // Handy camera reference 
    CCam* pCam;

    CIdleCam() { Init(); }
    ~CIdleCam() {}

    void Init();
    void Reset(bool bResetControls);
    void IdleCamGeneralProcess();
    bool Process();
    void Run();
    void ProcessTargetSelection();
    float ProcessSlerp(float* pAngX, float* pAngZ);
    void ProcessFOVZoom(float t);
    bool IsItTimeForIdleCam();
    void GetLookAtPositionOnTarget(CEntity* pEnt, CVector* pVec);
    void SetTargetPlayer();
    void SetTarget(CEntity* pEntity);
    void FinaliseIdleCamera(float curAngleX, float curAngleZ, float shakeDegree);
    void VectorToAnglesRotXRotZ(CVector* pV, float* pA, float* pB);
    bool IsTargetValid(CEntity* pTest);
    void ProcessIdleCamTicker();

};

SUPPORTED_10US extern CIdleCam& gIdleCam;

//
// CHeliCamSettings
//

class PLUGIN_API CHeliCamSettings
{
public:
    CVector heliMoveTo;
    CVector heliMoveFrom;
    float heliSpeed;// Speed of helicopter roughtly over its journey
    float behindStart;// distance behind the player to start from
    float heliHeight;// helicopter height above player
    float heliOutSideOfVehicle;// the side vector of the heli from the car
    float zoomInTime;// the time taken to do first zoom in...
    float zoomFOVStart;// FOV lerp start for first FOV zoom
    float zoomFOVEnd;// FOV lerp end for first FOV zoom
    float heliSpeedLookInFrontMul;// Heli can look in front of the vehicle
    float heliRollScale;// degree or roll in the heli over time
    float heliClip;// near clip distance for heli
    bool  gbLockDest;// are we locking where we are looking at
    int32 gLockDestTimeOut;// timeout for locked look at 
    int32 gLockDestHeliTimeoutDefault;// timeout default for locked look at
    CVector gLockedDest;// the cached destination for locked look at
    int32 numAttemptsToFindAValidOne;// iterations for search for a good camera.
    bool  gbHeliCollided;// did the simulated heli actually hit a building?
    int32 gDefaultFramesOutOfSightBeforeWeLoseTheCar; // where the car is out of sight time in frames until we give in trying to track it
    int32 gFramesBeenOutOfSight; // a frame counter
    float gHeliDistFOVZoomMore;	// distance of car to heli for starting second FOV zoom
    float gHeliDistFOVZoomMoreMax;	// distance of car to heli to end second FOV zoom lerp
    float gLessFOV;	// amount of FOV zoom in second FOV lerp
    float gLenToCarToPushCameraOut;	// min XY 2d distance to push the heli away from the car to stop 180 degree flip in camera roll
    float gRadiusOfSphereAroundHeli;	// for stopping the camera from moving into collision - takes acoount fo generous clip distance
    float gZoomOutFOV; 	// when we lose the car we zoom out the FOV
    bool  gbWeLostTheCar;
    bool  gbNoZoom;	// disabliing of zoom at start

    float gFOVZoomBackOutFrom;
    bool  gZoomBackOut;
    int32 gZoomBackOutTimeStart;
    int32 gZoomBackOutTimeEnd;
    float timeToZoomOut;
    int32 gZoomBackOutSpeed;


    CHeliCamSettings() { SetDefault(); }
    ~CHeliCamSettings() {}
    void SetDefault();
    void Reset();
    void RandomiseABit();
};