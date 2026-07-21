/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

enum eZoneAttributes : unsigned short {
    ATTRZONE_NONE = 0x0,
    ATTRZONE_CAMCLOSEIN = 0x1,
    ATTRZONE_STAIRS = 0x2,
    ATTRZONE_1STPERSONS = 0x4,
    ATTRZONE_NORAIN = 0x8,
    ATTRZONE_NOPOLICE = 0x10,
    ATTRZONE_DOINEEDCOLLISION = 0x40,
    ATTRZONE_POLICEABANDONCAR = 0x100,
    ATTRZONE_INROOMSFORAUDIO = 0x200,
    ATTRZONE_INROOMSFEWERPEDS = 0x400,
    ATTRZONE_MILITARYZONE = 0x1000,
    ATTRZONE_EXTRAAIRRESISTANCE = 0x4000,
    ATTRZONE_FEWERCARS = 0x8000,
};

struct CZoneDef {
    Int16 CornerX, CornerY;
    Int16 Vec1X, Vec1Y;
    Int16 Vec2X, Vec2Y;
    Int16 MinZ, MaxZ;

    void Init(const CVector& center, float _CornerX, float _CornerY, float _MinZ, float _Vec1X, float _Vec1Y, float _MaxZ) {
        CornerX = (short)(center.x - _CornerX - _Vec1X);
        CornerY = (short)(center.y - _CornerY - _Vec1Y);

        Vec1X = (short)(_CornerX + _CornerX);
        Vec1Y = (short)(_CornerY + _CornerY);

        Vec2X = (short)(_Vec1X + _Vec1X);
        Vec2Y = (short)(_Vec1Y + _Vec1Y);

        MinZ = (short)(_MinZ);
        MaxZ = (short)(_MaxZ);
    }

    bool IsPointWithin(CVector TestCoors);
    CVector FindCenter(); // 
    void FindBoundingBox(CVector* pMin, CVector* pMax);
};

VALIDATE_SIZE(CZoneDef, 0x10);



class PLUGIN_API CAttributeZone
{
public:
    CZoneDef ZoneDef;

    Int16 Flags;
};
VALIDATE_SIZE(CAttributeZone, 0x12);



struct CCullZoneReflection {
    CZoneDef zoneDef;
    float cm;
    char vx;
    char vy;
    char vz;
    unsigned char flags;
};

VALIDATE_SIZE(CCullZoneReflection, 0x18);

struct CCullZone {
    CZoneDef zoneDef;
    eZoneAttributes flags;
};

VALIDATE_SIZE(CCullZone, 0x12);

class CCullZones {
public:
    static int& NumMirrorAttributeZones;
    static CCullZoneReflection(&aMirrorAttributeZones)[72];

    static int& NumTunnelAttributeZones;
    static CCullZone(&aTunnelAttributeZones)[40];

    static int& NumAttributeZones;
    static CCullZone(&aAttributeZones)[1300];

    static int& CurrentFlags_Player;
    static int& CurrentFlags_Camera;

    static bool& bMilitaryZonesDisabled;

public:
    static void Init();
    static void Update();

    static void AddCullZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, ushort flags);
    static void AddTunnelAttributeZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, ushort flags);
    static void AddMirrorAttributeZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, eZoneAttributes flags, float cm, float vX, float vY, float vZ);

    static bool InRoomForAudio();
    static bool FewerCars();
    static bool CamNoRain();
    static bool PlayerNoRain();
    static bool FewerPeds();
    static bool NoPolice();
    static bool DoExtraAirResistanceForPlayer();

    static eZoneAttributes FindTunnelAttributesForCoors(CVector point);
    static CCullZoneReflection* FindMirrorAttributesForCoors(CVector cameraPosition);
    static CAttributeZone* FindZoneWithStairsAttributeForPlayer();
    static eZoneAttributes FindAttributesForCoors(CVector pos);

    static bool CamCloseInForPlayer() { return (CurrentFlags_Player & ATTRZONE_CAMCLOSEIN) != 0; }
    static bool CamStairsForPlayer() { return (CurrentFlags_Player & ATTRZONE_STAIRS) != 0; }
    static bool Cam1stPersonForPlayer() { return (CurrentFlags_Player & ATTRZONE_1STPERSONS) != 0; }
    static bool PoliceAbandonCars() { return (CurrentFlags_Camera & ATTRZONE_POLICEABANDONCAR) != 0; }
    static bool DoINeedToLoadCollision() { return (CurrentFlags_Player & ATTRZONE_DOINEEDCOLLISION) != 0; }
};
