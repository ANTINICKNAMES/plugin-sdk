/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CAEDoorAudioEntity.h"

class PLUGIN_API CStoredCar
{
public:
	float CoorX, CoorY, CoorZ; // why not CVector?
	UInt32 FlagsLocal;
	UInt16 Bits;
	UInt16 ModelIndex;
	int16 CarMods[15];
	UInt8 Colour1, Colour2, Colour3, Colour4;
	UInt8 RadioStation;
	Int8 Comp1, Comp2;
	Int8 BombOnBoard;
	int8 PaintJob;
	int8 m_nNitroBoosts;
	Int8 iFrontX, iFrontY, iFrontZ;

	void StoreCar(CVehicle* pCar);
	CVehicle* RestoreCar();
};
VALIDATE_SIZE(CStoredCar, 0x40);

struct CGarageFlags
{
	UInt8 bClosingEmpty : 1;
	UInt8 bDeActivated : 1;
	UInt8 bResprayHappened : 1;
	UInt8 bRotatyDoor : 1;
	UInt8 bInvertRotation : 1;
	UInt8 bLeaveCameraAlone : 1;
	UInt8 bShouldDoorsHaveCollision : 1;
	UInt8 bFreeResprays : 1;
};

class PLUGIN_API CGarage
{
public:
	enum
	{
		GARAGE_NONE = 0,
		GARAGE_MISSION,
		GARAGE_BOMBSHOP1,
		GARAGE_BOMBSHOP2,
		GARAGE_BOMBSHOP3,
		GARAGE_RESPRAY,
		GARAGE_COLLECTORSITEMS,
		GARAGE_COLLECTSPECIFICCARS,
		GARAGE_COLLECTCARS_1,
		GARAGE_COLLECTCARS_2,
		GARAGE_COLLECTCARS_3,
		GARAGE_FORCARTOCOMEOUTOF,
		GARAGE_60SECONDS,
		GARAGE_CRUSHER,
		GARAGE_MISSION_KEEPCAR,
		GARAGE_FOR_SCRIPT_TO_OPEN,
		GARAGE_HIDEOUT_ONE,
		GARAGE_HIDEOUT_TWO,
		GARAGE_HIDEOUT_THREE,
		GARAGE_FOR_SCRIPT_TO_OPEN_AND_CLOSE,
		GARAGE_KEEPS_OPENING_FOR_SPECIFIC_CAR,
		GARAGE_MISSION_KEEPCAR_REMAINCLOSED,
		GARAGE_COLLECTCARS_4,
		GARAGE_FOR_SCRIPT_TO_OPEN_CLOSE_FOR_SPECIFIED_CAR,
		GARAGE_HIDEOUT_FOUR,
		GARAGE_HIDEOUT_FIVE,
		GARAGE_HIDEOUT_SIX,
		GARAGE_HIDEOUT_SEVEN,
		GARAGE_HIDEOUT_EIGHT,
		GARAGE_HIDEOUT_NINE,
		GARAGE_HIDEOUT_TEN,
		GARAGE_HIDEOUT_ELEVEN,
		GARAGE_HIDEOUT_TWELVE,
		GARAGE_POLICE_IMPOUND_LA,
		GARAGE_POLICE_IMPOUND_SF,
		GARAGE_POLICE_IMPOUND_LV,
		GARAGE_OPEN_FOR_LOW_RIDERS,
		GARAGE_OPEN_FOR_STREET_RACERS,
		GARAGE_OPEN_FOR_NORMAL_CARS,
		GARAGE_HIDEOUT_THIRTEEN,
		GARAGE_HIDEOUT_FOURTEEN,
		GARAGE_HIDEOUT_FIFTEEN,
		GARAGE_HIDEOUT_SIXTEEN,
		GARAGE_CLOSE_WHEN_EMPTY,
		GARAGE_HIDEOUT_SEVENTEEN,
		GARAGE_HIDEOUT_EIGHTEEN
	};

	enum 
	{ 
		GSTATE_CLOSED = 0, 
		GSTATE_OPEN, 
		GSTATE_CLOSING, 
		GSTATE_OPENING, 
		GSTATE_OPENEDWAITINGTOBEREACTIVATED, 
		GSTATE_MISSIONCOMPLETED, 
		GSTATE_CRUSHING 
	};

public:
	float BaseX, BaseY, BaseZ;
	float Delta1X, Delta1Y;
	float Delta2X, Delta2Y;
	float CeilingZ;

	float Delta1Length, Delta2Length;

	float MinX, MaxX, MinY, MaxY;

	float Openness;


	UInt32 TimeOfNextEvent;

	CAutomobile* pCarToCollect;

	char Name[8];

	UInt8 Type;
	UInt8 State;
	CGarageFlags Flags;


	UInt8 OriginalType;


	CAEDoorAudioEntity m_DoorAudioEntity;


	void Update(Int32 MyIndex);
	bool RightModTypeForThisGarage(CVehicle* pVeh);
	void InitDoorsAtStart();
	bool SlideDoorOpen();
	bool SlideDoorClosed();
	bool IsStaticPlayerCarEntirelyInside();
	bool IsEntityEntirelyInside3D(CEntity* pEntity, float Margin);
	bool IsEntityEntirelyOutside(CEntity* pEntity, float Margin);
	bool IsGarageEmpty();
	bool IsPlayerOutsideGarage(float Margin);
	bool IsPlayerEntirelyInsideGarage();
	bool IsEntityTouching3D(CEntity* pEntity);
	bool EntityHasASphereWayOutsideGarage(CEntity* pEntity, float Margin);
	bool IsAnyOtherCarTouchingGarage(CVehicle* pException);
	void ThrowCarsNearDoorOutOfGarage(CVehicle* pException);
	bool IsAnyOtherPedTouchingGarage(CPed* pException);
	bool IsAnyCarBlockingDoor();
	Int32 CountCarsWithCenterPointWithinGarage(CEntity* pException);
	void RemoveCarsBlockingDoorNotInside();
	bool IsNonPlayerCarTouchingGarage();
	static void BuildRotatedDoorMatrix(CEntity* pDoor, float RotationAmount);
	void UpdateCrusherAngle();
	void UpdateCrusherShake(float, float);


	Int32 FindMaxNumStoredCarsForGarage();


	void OpenThisGarage();
	void CloseThisGarage();


	float CalcDistToGarageRectangleSquared(float X, float Y);

	void FindDoorsEntities();
	void FindDoorsEntitiesSectorList(CPtrList&, bool);
	void StoreAndRemoveCarsForThisHideOut(CStoredCar* aStoredCars, Int32 MaxNumStored);
	void StoreAndRemoveCarsForThisImpoundingGarage(CStoredCar* aStoredCars, Int32 MaxNumStored);
	bool RestoreCarsForThisHideOut(CStoredCar* aStoredCars);
	bool RestoreCarsForThisImpoundingGarage(CStoredCar* aStoredCars);
	void NeatlyLineUpStoredCars(CStoredCar* aStoredCars);
	void TidyUpGarage();
	void TidyUpGarageClose();
	void PlayerArrestedOrDied();
	void CenterCarInGarage(CVehicle* pVehicle);
	bool IsPointInsideGarage(CVector Point);
	bool IsPointInsideGarage(CVector Point, float Margin);
	void FindDoorsWithGarage(CObject** ppDoor1, CObject** ppDoor2);

	void SetState(UInt8 n) { State = n; }
	UInt8 GetState() { return State; }
};
VALIDATE_SIZE(CGarage, 0xD8);

class PLUGIN_API CGarages
{
public:
	// TODO mission: FIND EM ALL!!! 
	static CGarage* aGarages;//[50];
	static UInt32& NumGarages;
	static UInt32& MessageStartTime, MessageEndTime;
	static char* MessageIDString; //[8];
	static Int32& MessageNumberInString;
	static Int32& MessageNumberInString2;
	static bool& PlayerInGarage;
	static bool& BombsAreFree;
	static bool& RespraysAreFree;
	static bool& NoResprays;
	static Int32& CarsCollected;
	static Int32& BankVansCollected;
	static Int32& PoliceCarsCollected;
	static UInt32* CarTypesCollected;//[4];
	static Int32& CrushedCarId;
	static bool& bCamShouldBeOutside;
	static UInt32& LastTimeHelpMessage;
	static Int32& LastGaragePlayerWasIn;

	static bool& bDebugDisplayGarages;

	static CStoredCar *aCarsInSafeHouse;//[20];

	static void Init();
	static void Shutdown();
	static void Init_AfterRestart();
	static void Update();
	static Int16 AddOne(float BaseX, float BaseY, float BaseZ, float Point1X, float Point1Y, float Point2X, float Point2Y, float CeilingZ, UInt8 Type, UInt32 ModelIndexToBeCollected, char* pName, UInt32 FlagsFromMax);

	static Int16 FindGarageIndex(char* pName);
	static void ChangeGarageType(Int16 NumGarage, UInt8 NewType, UInt32 ModelIndexToBeCollected);
	static void PrintMessages();
	static bool IsCarSprayable(CVehicle* pCar);
	static void TriggerMessage(char* pMessageID, Int16 NumberInString, UInt16 Duration, Int16 NumberInString2);
	static void SetTargetCarForMissionGarage(Int16 NumGarage, CAutomobile* pCar);
	static bool HasCarBeenDroppedOffYet(Int16 NumGarage);
	static void DeActivateGarage(Int16 NumGarage);
	static void ActivateGarage(Int16 NumGarage);
	static Int32 QueryCarsCollected(Int16);
	static bool HasImportExportGarageCollectedThisCar(Int16, Int32);
	static bool IsGarageOpen(Int16 NumGarage);
	static bool IsGarageClosed(Int16 NumGarage);
	static bool HasThisCarBeenCollected(Int16, Int32);
	static bool HasResprayHappened(Int16 NumGarage);
	static bool IsThisCarWithinGarageArea(Int16 NumGarage, CEntity* pEntity);
	static bool HasCarBeenCrushed(Int32);
	static bool IsPointInAGarageCameraZone(CVector Coors);
	static bool CameraShouldBeOutside();
	static void GivePlayerDetonator();
	static float FindDoorHeightForMI(UInt32 MI);
	static void PlayerArrestedOrDied();
	static bool IsModelIndexADoor(Int32 MI);
	static void CloseHideOutGaragesBeforeSave();
	static Int32 CountCarsInHideoutGarage(UInt8 Type);
	static void StopCarFromBlowingUp(CAutomobile* pCar);
	static bool IsPointWithinHideOutGarage(CVector& Point);
	static bool IsPointWithinAnyGarage(CVector& Point);
	static Int32 FindSafeHouseIndexForGarageType(Int32 GarageType);
	static Int32 FindGarageForObject(CObject* pObject);
	static void StoreCarInNearestImpoundingGarage(CVehicle* pVeh);
	static bool Save();
	static bool Load();
	static void AllRespraysCloseOrOpen(bool bOpen);
};