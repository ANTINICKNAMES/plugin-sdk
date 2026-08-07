/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAESound.h"

typedef int tAudioEvent;
typedef short tSoundReference;

class CEntity;

enum
{
	AE_CAR = 0,
	AE_BIKE,
	AE_BMX,
	AE_BOAT,
	AE_AIRCRAFT_HELICOPTOR,
	AE_AIRCRAFT_PLANE,
	AE_AIRCRAFT_SEAPLANE,
	AE_ONE_GEAR,
	AE_TRAIN,
	AE_SPECIAL,
	AE_NO_VEHICLE
};

enum
{
	AE_VAT_OFFROAD = 0,
	AE_VAT_TWO_DOOR,
	AE_VAT_SPORTS_CAR,
	AE_VAT_RIG,
	AE_VAT_STATION_WAGON,
	AE_VAT_SEDAN,
	AE_VAT_TRUCK,
	AE_VAT_FIRETRUCK,
	AE_VAT_GARBAGE_TRUCK,
	AE_VAT_STRETCH,
	AE_VAT_LOWRIDER,
	AE_VAT_VAN,
	AE_VAT_AMBULANCE,
	AE_VAT_HELICOPTER,
	AE_VAT_TAXI,
	AE_VAT_PICK_UP,
	AE_VAT_ICE_CREAM_VAN,
	AE_VAT_BUGGY,
	AE_VAT_POLICE_VAN,
	AE_VAT_BOAT,
	AE_VAT_COACH,
	AE_VAT_TANK,
	AE_VAT_CONVERTIBLE,
	AE_VAT_HEARSE,
	AE_VAT_MONSTER_TRUCK,
	AE_VAT_MOPED,
	AE_VAT_TRAM,
	AE_VAT_GOLF_CART,
	AE_VAT_PLANE,
	AE_VAT_BIKE,
	AE_VAT_QUADBIKE,
	AE_VAT_COUPE,
	AE_VAT_BULLDOZER,
	AE_VAT_FORKLIFT,
	AE_VAT_TRACTOR,
	AE_VAT_COMBINE_HARVESTER,
	AE_VAT_KART,
	AE_VAT_MOWER,
	AE_VAT_POLICE_CAR,
	AE_VAT_TRAIN,
	AE_VAT_HOVERCRAFT,
	AE_VAT_BICYCLE,
	AE_VAT_SEA_PLANE,
	AE_VAT_DINGHY,
	AE_VAT_CAMPER_VAN,
	AE_VAT_FOUR_DOOR,
	AE_VAT_END
};

class PLUGIN_API CAEAudioEntity {
protected:
    void **vtable;          // TODO take care of this vtable
public:
    CEntity *m_pEntity;
    CAESound m_tempSound;

    // vtable
    void UpdateParameters(CAESound *sound, short arg2);
};

VALIDATE_SIZE(CAEAudioEntity, 0x7C);
