/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "cTransmission.h"
#include "CVector.h"
#include "eVehicleHandlingModelFlags.h"
#include "eVehicleHandlingFlags.h"

enum PLUGIN_API eVehicleLightsSize : unsigned char {
    LIGHTS_LONG,
    LIGHTS_SMALL,
    LIGHTS_BIG,
    LIGHTS_TALL
};

enum
{
	VT_LANDSTAL = 0,
	VT_BRAVURA,
	VT_BUFFALO,
	VT_LINERUN,
	VT_PEREN,
	VT_SENTINEL,
	VT_DUMPER,
	VT_FIRETRUK,
	VT_TRASH,
	VT_STRETCH,
	VT_MANANA,
	VT_INFERNUS,
	VT_VOODOO,
	VT_PONY,
	VT_MULE,
	VT_CHEETAH,
	VT_AMBULAN,
	VT_MOONBEAM,
	VT_ESPERANT,
	VT_TAXI,
	VT_WASHINGTON,
	VT_BOBCAT,
	VT_MRWHOOP,
	VT_BFINJECT,
	VT_PREMIER,
	VT_ENFORCER,
	VT_SECURICA,
	VT_BANSHEE,
	VT_BUS,
	VT_RHINO,
	VT_BARRACKS,
	VT_HOTKNIFE,
	VT_ARTICT1,
	VT_PREVION,
	VT_COACH,
	VT_CABBIE,
	VT_STALLION,
	VT_RUMPO,
	VT_RCBANDIT,
	VT_ROMERO,
	VT_PACKER,
	VT_MONSTER,
	VT_ADMIRAL,
	VT_TRAM,
	VT_AIRTRAIN,
	VT_ARTICT2,
	VT_TURISMO,
	VT_FLATBED,
	VT_YANKEE,
	VT_GOLFCART,
	VT_SOLAIR,
	VT_TOPFUN,
	VT_GLENDALE,
	VT_OCEANIC,
	VT_PATRIOT,
	VT_HERMES,
	VT_SABRE,
	VT_ZR350,
	VT_WALTON,
	VT_REGINA,
	VT_COMET,
	VT_BURRITO,
	VT_CAMPER,
	VT_BAGGAGE,
	VT_DOZER,
	VT_RANCHER,
	VT_FBIRANCHER,
	VT_VIRGO,
	VT_GREENWOOD,
	VT_HOTRING,
	VT_SANDKING,
	VT_BLISTAC,
	VT_BOXVILLE,
	VT_BENSON,
	VT_MESA,
	VT_BLOODRA,
	VT_BLOODRB,
	VT_SUPERGT,
	VT_ELEGANT,
	VT_JOURNEY,
	VT_PETROL,
	VT_RDTRAIN,
	VT_NEBULA,
	VT_MAJESTIC,
	VT_BUCCANEE,
	VT_CEMENT,
	VT_TOWTRUCK,
	VT_FORTUNE,
	VT_CADRONA,
	VT_FBITRUCK,
	VT_WILLARD,
	VT_FORKLIFT,
	VT_TRACTOR,
	VT_COMBINE,
	VT_FELTZER,
	VT_REMINGTON,
	VT_SLAMVAN,
	VT_BLADE,
	VT_FREIGHT,
	VT_STREAK,
	VT_VINCENT,
	VT_BULLET,
	VT_CLOVER,
	VT_SADLER,
	VT_RANGER,
	VT_HUSTLER,
	VT_INTRUDER,
	VT_PRIMO,
	VT_TAMPA,
	VT_SUNRISE,
	VT_MERIT,
	VT_UTILITY,
	VT_YOSEMITE,
	VT_WINDSOR,
	VT_MONSTER_A,
	VT_MONSTER_B,
	VT_URANUS,
	VT_JESTER,
	VT_SULTAN,
	VT_STRATUM,
	VT_ELEGY,
	VT_TIGER,
	VT_FLASH,
	VT_TAHOMA,
	VT_SAVANNA,
	VT_BANDITO,
	VT_FREIFLAT,
	VT_STREAKC,
	VT_KART,
	VT_MOWER,
	VT_DUNE,
	VT_SWEEPER,
	VT_BROADWAY,
	VT_TORNADO,
	VT_DFT30,
	VT_HUNTLEY,
	VT_STAFFORD,
	VT_NEWSVAN,
	VT_TUG,
	VT_PETROTR,
	VT_EMPEROR,
	VT_FLOAT,
	VT_EUROS,
	VT_HOTDOG,
	VT_CLUB,
	VT_ARTICT3,
	VT_RCCAM,
	VT_POLICE_SF,
	VT_POLICE_LS,
	VT_POLICE_VG,
	VT_POLRANGER,
	VT_PICADOR,
	VT_SWATVAN,
	VT_ALPHA,
	VT_PHEONIX,
	VT_BAGBOXA,
	VT_BAGBOXB,
	VT_TUGSTAIR,
	VT_BOXBURG,
	VT_FARMTR1,
	VT_UTILTR1,
	VT_ROLLER,
	VT_BIKE,
	VT_MOPED,
	VT_DIRTBIKE,
	VT_FCR900,
	VT_NRG500,
	VT_HPV1000,
	VT_BF400,
	VT_WAYFARER,
	VT_QUADBIKE,
	VT_BMX,
	VT_CHOPPERBIKE,
	VT_MTB,
	VT_FREEWAY,
	VT_PREDATOR,
	VT_SPEEDER,
	VT_REEFER,
	VT_RIO,
	VT_SQUALO,
	VT_TROPIC,
	VT_COASTGUARD,
	VT_DINGHY,
	VT_MARQUIS,
	VT_CUPBOAT,
	VT_LAUNCH,
	VT_SEAPLANE,
	VT_VORTEX,
	VT_RUSTLER,
	VT_BEAGLE,
	VT_CROPDUST,
	VT_STUNT,
	VT_SHAMAL,
	VT_HYDRA,
	VT_NEVADA,
	VT_AT400,
	VT_ANDROM,
	VT_DODO,
	VT_SPARROW,
	VT_SEASPARROW,
	VT_MAVERICK,
	VT_COASTMAV,
	VT_POLICEMAV,
	VT_HUNTER,
	VT_LEVIATHN,
	VT_CARGOBOB,
	VT_RAINDANC,
	VT_RCBARON,
	VT_RCGOBLIN,
	VT_RCRAIDER,
	VT_MAX
} typedef tVehicleType;

enum
{
	WS_ROLLING = 0,
	WS_SPINNING,
	WS_SKIDDING,
	WS_LOCKED
} typedef tWheelState;

struct PLUGIN_API tHandlingData {
    tVehicleType  nVehicleID;


    float         fMass; // 1.0 to 50000.0
    float		  fOneOverMass;
    float         fTurnMass;
    float         fDragCoeff;

    CVector       CentreOfMass; // x, y, z - 1.0 to 50000.0

	uint8		  nPercentSubmerged; // 10 to 120 (> 100% vehicle sinks)
    float         fBuoyancyConstant;


    float         fTractionMultiplier; // 0.5 to 2.0


    cTransmission Transmission;


    float         fBrakeDeceleration; // 0.1 to 10.0
    float         fBrakeBias; // 0.0 > x > 1.0
    bool          bABS; // 0/1


    char field_9D; // padding
    char field_9E; // padding
    char field_9F; // padding


    float         fSteeringLock; // 10.0 to 40.0
    float         fTractionLoss;
    float         fTractionBias;


    float         fSuspensionForce; // not [L/M/H]
    float         fSuspensionDamping; // not [L/M/H]
    float         fSuspensionHighSpdComDamp; // often zero - 200.0 or more for bouncy vehicles

    float         fSuspensionUpperLimit;
    float         fSuspensionLowerLimit;
    float         fSuspensionBias;
    float         fSuspensionAntiDive;

    float         fCollisionDamageMultiplier; // 0.2 to 5.0

    union {
		// Vehicle model flags
        eVehicleHandlingModelFlags mFlags;
        struct {
            unsigned int m_bIsVan : 1;
            unsigned int m_bIsBus : 1;
            unsigned int m_bIsLow : 1;
            unsigned int m_bIsBig : 1;
            unsigned int m_bReverseBonnet : 1;
            unsigned int m_bHangingBoot : 1;
            unsigned int m_bTailgateBoot : 1;
            unsigned int m_bNoswingBoot : 1;
            unsigned int m_bNoDoors : 1;
            unsigned int m_bTandemSeats : 1;
            unsigned int m_bSitInBoat : 1;
            unsigned int m_bConvertible : 1;
            unsigned int m_bNoExhaust : 1;
            unsigned int m_bDoubleExhaust : 1;
            unsigned int m_bNo1fpsLookBehind : 1;
            unsigned int m_bForceDoorCheck : 1;
            unsigned int m_bAxleFNotlit : 1;
            unsigned int m_bAxleFSolid : 1;
            unsigned int m_bAxleFMcpherson : 1;
            unsigned int m_bAxleFReverse : 1;
            unsigned int m_bAxleRNotlit : 1;
            unsigned int m_bAxleRSolid : 1;
            unsigned int m_bAxleRMcpherson : 1;
            unsigned int m_bAxleRReverse : 1;
            unsigned int m_bIsBike : 1;
            unsigned int m_bIsHeli : 1;
            unsigned int m_bIsPlane : 1;
            unsigned int m_bIsBoat : 1;
            unsigned int m_bBouncePanels : 1;
            unsigned int m_bDoubleRwheels : 1;
            unsigned int m_bForceGroundClearance : 1;
            unsigned int m_bIsHatchback : 1;
        };
    };
    union {
		// vehicle handling flags
        eVehicleHandlingFlags hFlags;
        struct {
            unsigned int m_b1gBoost : 1;
            unsigned int m_b2gBoost : 1;
            unsigned int m_bNpcAntiRoll : 1;
            unsigned int m_bNpcNeutralHandl : 1;
            unsigned int m_bNoHandbrake : 1;
            unsigned int m_bSteerRearwheels : 1;
            unsigned int m_bHbRearwheelSteer : 1;
            unsigned int m_bAltSteerOpt : 1;
            unsigned int m_bWheelFNarrow2 : 1;
            unsigned int m_bWheelFNarrow : 1;
            unsigned int m_bWheelFWide : 1;
            unsigned int m_bWheelFWide2 : 1;
            unsigned int m_bWheelRNarrow2 : 1;
            unsigned int m_bWheelRNarrow : 1;
            unsigned int m_bWheelRWide : 1;
            unsigned int m_bWheelRWide2 : 1;
            unsigned int m_bHydraulicGeom : 1;
            unsigned int m_bHydraulicInst : 1;
            unsigned int m_bHydraulicNone : 1;
            unsigned int m_bNosInst : 1;
            unsigned int m_bOffroadAbility : 1;
            unsigned int m_bOffroadAbility2 : 1;
            unsigned int m_bHalogenLights : 1;
            unsigned int m_bProcRearwheelFirst : 1;
            unsigned int m_bUseMaxspLimit : 1;
            unsigned int m_bLowRider : 1;
            unsigned int m_bStreetRacer : 1;
            unsigned int m_bUnused1 : 1;
            unsigned int m_bSwingingChassis : 1;
        };
    };
    float              fSeatOffsetDist; // // ped seat position offset towards centre of car
	uint32			   nMonetaryValue; // 1 to 100000
    eVehicleLightsSize HeadLightType;
    eVehicleLightsSize RearLightType;
    UInt8			   AnimGroup;
};

VALIDATE_SIZE(tHandlingData, 0xE0);