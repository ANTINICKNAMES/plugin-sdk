/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eSurfaceType.h"

class CColPoint;

enum SurfaceId
{
	SURFACE_TYPE_DEFAULT = 0,
	SURFACE_TYPE_TARMAC,
	SURFACE_TYPE_TARMAC_FUCKED,
	SURFACE_TYPE_TARMAC_REALLYFUCKED,
	SURFACE_TYPE_PAVEMENT,
	SURFACE_TYPE_PAVEMENT_FUCKED,
	SURFACE_TYPE_GRAVEL,
	SURFACE_TYPE_FUCKED_CONCRETE,
	SURFACE_TYPE_PAINTED_GROUND,
	SURFACE_TYPE_GRASS_SHORT_LUSH,
	SURFACE_TYPE_GRASS_MEDIUM_LUSH,
	SURFACE_TYPE_GRASS_LONG_LUSH,
	SURFACE_TYPE_GRASS_SHORT_DRY,
	SURFACE_TYPE_GRASS_MEDIUM_DRY,
	SURFACE_TYPE_GRASS_LONG_DRY,
	SURFACE_TYPE_GOLFGRASS_ROUGH,
	SURFACE_TYPE_GOLFGRASS_SMOOTH,
	SURFACE_TYPE_STEEP_SLIDYGRASS,
	SURFACE_TYPE_STEEP_CLIFF,
	SURFACE_TYPE_FLOWERBED,
	SURFACE_TYPE_MEADOW,
	SURFACE_TYPE_WASTEGROUND,
	SURFACE_TYPE_WOODLANDGROUND,
	SURFACE_TYPE_VEGETATION,
	SURFACE_TYPE_MUD_WET,
	SURFACE_TYPE_MUD_DRY,
	SURFACE_TYPE_DIRT,
	SURFACE_TYPE_DIRTTRACK,
	SURFACE_TYPE_SAND_DEEP,
	SURFACE_TYPE_SAND_MEDIUM,
	SURFACE_TYPE_SAND_COMPACT,
	SURFACE_TYPE_SAND_ARID,
	SURFACE_TYPE_SAND_MORE,
	SURFACE_TYPE_SAND_BEACH,
	SURFACE_TYPE_CONCRETE_BEACH,
	SURFACE_TYPE_ROCK_DRY,
	SURFACE_TYPE_ROCK_WET,
	SURFACE_TYPE_ROCK_CLIFF,
	SURFACE_TYPE_WATER_RIVERBED,
	SURFACE_TYPE_WATER_SHALLOW,
	SURFACE_TYPE_CORNFIELD,
	SURFACE_TYPE_HEDGE,
	SURFACE_TYPE_WOOD_CRATES,
	SURFACE_TYPE_WOOD_SOLID,
	SURFACE_TYPE_WOOD_THIN,
	SURFACE_TYPE_GLASS,
	SURFACE_TYPE_GLASS_WINDOWS_LARGE,
	SURFACE_TYPE_GLASS_WINDOWS_SMALL,
	SURFACE_TYPE_EMPTY1,
	SURFACE_TYPE_EMPTY2,
	SURFACE_TYPE_GARAGE_DOOR,
	SURFACE_TYPE_THICK_METAL_PLATE,
	SURFACE_TYPE_SCAFFOLD_POLE,
	SURFACE_TYPE_LAMP_POST,
	SURFACE_TYPE_METAL_GATE,
	SURFACE_TYPE_METAL_CHAIN_FENCE,
	SURFACE_TYPE_GIRDER,
	SURFACE_TYPE_FIRE_HYDRANT,
	SURFACE_TYPE_CONTAINER,
	SURFACE_TYPE_NEWS_VENDOR,
	SURFACE_TYPE_WHEELBASE,
	SURFACE_TYPE_CARDBOARDBOX,
	SURFACE_TYPE_PED,
	SURFACE_TYPE_CAR,
	SURFACE_TYPE_CAR_PANEL,
	SURFACE_TYPE_CAR_MOVINGCOMPONENT,
	SURFACE_TYPE_TRANSPARENT_CLOTH,
	SURFACE_TYPE_RUBBER,
	SURFACE_TYPE_PLASTIC,
	SURFACE_TYPE_TRANSPARENT_STONE,
	SURFACE_TYPE_WOOD_BENCH,
	SURFACE_TYPE_CARPET,
	SURFACE_TYPE_FLOORBOARD,
	SURFACE_TYPE_STAIRSWOOD,
	SURFACE_TYPE_P_SAND,
	SURFACE_TYPE_P_SAND_DENSE,
	SURFACE_TYPE_P_SAND_ARID,
	SURFACE_TYPE_P_SAND_COMPACT,
	SURFACE_TYPE_P_SAND_ROCKY,
	SURFACE_TYPE_P_SANDBEACH,
	SURFACE_TYPE_P_GRASS_SHORT,
	SURFACE_TYPE_P_GRASS_MEADOW,
	SURFACE_TYPE_P_GRASS_DRY,
	SURFACE_TYPE_P_WOODLAND,
	SURFACE_TYPE_P_WOODDENSE,
	SURFACE_TYPE_P_ROADSIDE,
	SURFACE_TYPE_P_ROADSIDEDES,
	SURFACE_TYPE_P_FLOWERBED,
	SURFACE_TYPE_P_WASTEGROUND,
	SURFACE_TYPE_P_CONCRETE,
	SURFACE_TYPE_P_OFFICEDESK,
	SURFACE_TYPE_P_711SHELF1,
	SURFACE_TYPE_P_711SHELF2,
	SURFACE_TYPE_P_711SHELF3,
	SURFACE_TYPE_P_RESTUARANTTABLE,
	SURFACE_TYPE_P_BARTABLE,
	SURFACE_TYPE_P_UNDERWATERLUSH,
	SURFACE_TYPE_P_UNDERWATERBARREN,
	SURFACE_TYPE_P_UNDERWATERCORAL,
	SURFACE_TYPE_P_UNDERWATERDEEP,
	SURFACE_TYPE_P_RIVERBED,
	SURFACE_TYPE_P_RUBBLE,
	SURFACE_TYPE_P_BEDROOMFLOOR,
	SURFACE_TYPE_P_KIRCHENFLOOR,
	SURFACE_TYPE_P_LIVINGRMFLOOR,
	SURFACE_TYPE_P_CORRIDORFLOOR,
	SURFACE_TYPE_P_711FLOOR,
	SURFACE_TYPE_P_FASTFOODFLOOR,
	SURFACE_TYPE_P_SKANKYFLOOR,
	SURFACE_TYPE_P_MOUNTAIN,
	SURFACE_TYPE_P_MARSH,
	SURFACE_TYPE_P_BUSHY,
	SURFACE_TYPE_P_BUSHYMIX,
	SURFACE_TYPE_P_BUSHYDRY,
	SURFACE_TYPE_P_BUSHYMID,
	SURFACE_TYPE_P_GRASSWEEFLOWERS,
	SURFACE_TYPE_P_GRASSDRYTALL,
	SURFACE_TYPE_P_GRASSLUSHTALL,
	SURFACE_TYPE_P_GRASSGRNMIX,
	SURFACE_TYPE_P_GRASSBRNMIX,
	SURFACE_TYPE_P_GRASSLOW,
	SURFACE_TYPE_P_GRASSROCKY,
	SURFACE_TYPE_P_GRASSSMALLTREES,
	SURFACE_TYPE_P_DIRTROCKY,
	SURFACE_TYPE_P_DIRTWEEDS,
	SURFACE_TYPE_P_GRASSWEEDS,
	SURFACE_TYPE_P_RIVEREDGE,
	SURFACE_TYPE_P_POOLSIDE,
	SURFACE_TYPE_P_FORESTSTUMPS,
	SURFACE_TYPE_P_FORESTSTICKS,
	SURFACE_TYPE_P_FORRESTLEAVES,
	SURFACE_TYPE_P_DESERTROCKS,
	SURFACE_TYPE_P_FORRESTDRY,
	SURFACE_TYPE_P_SPARSEFLOWERS,
	SURFACE_TYPE_P_BUILDINGSITE,
	SURFACE_TYPE_P_DOCKLANDS,
	SURFACE_TYPE_P_INDUSTRIAL,
	SURFACE_TYPE_P_INDUSTJETTY,
	SURFACE_TYPE_P_CONCRETELITTER,
	SURFACE_TYPE_P_ALLEYRUBISH,
	SURFACE_TYPE_P_JUNKYARDPILES,
	SURFACE_TYPE_P_JUNKYARDGRND,
	SURFACE_TYPE_P_DUMP,
	SURFACE_TYPE_P_CACTUSDENSE,
	SURFACE_TYPE_P_AIRPORTGRND,
	SURFACE_TYPE_P_CORNFIELD,
	SURFACE_TYPE_P_GRASSLIGHT,
	SURFACE_TYPE_P_GRASSLIGHTER,
	SURFACE_TYPE_P_GRASSLIGHTER2,
	SURFACE_TYPE_P_GRASSMID1,
	SURFACE_TYPE_P_GRASSMID2,
	SURFACE_TYPE_P_GRASSDARK,
	SURFACE_TYPE_P_GRASSDARK2,
	SURFACE_TYPE_P_GRASSDIRTMIX,
	SURFACE_TYPE_P_RIVERBEDSTONE,
	SURFACE_TYPE_P_RIVERBEDSHALLOW,
	SURFACE_TYPE_P_RIVERBEDWEEDS,
	SURFACE_TYPE_P_SEAWEED,
	SURFACE_TYPE_DOOR,
	SURFACE_TYPE_PLASTICBARRIER,
	SURFACE_TYPE_PARKGRASS,
	SURFACE_TYPE_STAIRSSTONE,
	SURFACE_TYPE_STAIRSMETAL,
	SURFACE_TYPE_STAIRSCARPET,
	SURFACE_TYPE_FLOORMETAL,
	SURFACE_TYPE_FLOORCONCRETE,
	SURFACE_TYPE_BIN_BAG,
	SURFACE_TYPE_THIN_METAL_SHEET,
	SURFACE_TYPE_METAL_BARREL,
	SURFACE_TYPE_PLASTIC_CONE,
	SURFACE_TYPE_PLASTIC_DUMPSTER,
	SURFACE_TYPE_METAL_DUMPSTER,
	SURFACE_TYPE_WOOD_PICKET_FENCE,
	SURFACE_TYPE_WOOD_SLATTED_FENCE,
	SURFACE_TYPE_WOOD_RANCH_FENCE,
	SURFACE_TYPE_UNBREAKABLE_GLASS,
	SURFACE_TYPE_HAY_BALE,
	SURFACE_TYPE_GORE,
	SURFACE_TYPE_RAILTRACK,
	NUM_SURFACE_TYPES
};

enum eAdhesionGroup {
    ADHESION_GROUP_RUBBER = 0,
    ADHESION_GROUP_HARD,
    ADHESION_GROUP_ROAD,
    ADHESION_GROUP_LOOSE,
    ADHESION_GROUP_SAND,
    ADHESION_GROUP_WET,
    NUM_ADHESION_GROUPS
};

enum eFrictionEffect {
    FRICTION_EFFECT_NONE = 0,
    FRICTION_EFFECT_SPARKS,
    FRICTION_EFFECT_MORE
};

enum eBulletFX {
    BULLET_FX_NONE = 0,
    BULLET_FX_SPARKS,
    BULLET_FX_SAND,
    BULLET_FX_WOOD,
    BULLET_FX_DUST,
};

struct SurfaceInfo {
    char     SurfaceName[64];
    char     AdhesionGroup[32];
    float    TyreGrip;
    float    WetGrip;
    char     SkidMark[32];
    char     FrictionEffect[32];
    int32_t  SoftLand;
    int32_t  SeeThrough;
    int32_t  ShootThrough;
    int32_t  Sand;
    int32_t  Water;
    int32_t  ShallowWater;
    int32_t  Beach;
    int32_t  SteepSlope;
    int32_t  Glass;
    int32_t  Stairs;
    int32_t  Skateable;
    int32_t  Pavement;
    int32_t  Roughness;
    int32_t  Flame;
    int32_t  Sparks;
    int32_t  Sprint;
    int32_t  Footsteps;
    int32_t  FootDust;
    int32_t  CarDirt;
    int32_t  CarClean;
    int32_t  WheelGrass;
    int32_t  WheelGravel;
    int32_t  WheelMud;
    int32_t  WheelDust;
    int32_t  WheelSand;
    int32_t  WheelSpray;
    int32_t  ProcPlant;
    int32_t  ProcObj;
    int32_t  Climbable;
    char     BulletFx[32];
};

class SurfaceInfo_c {
public:
    int8_t tyreGrip; // tyre grip - will override friction values for vehicle tyres on each material
    int8_t wetGrip;  // wet multiplier on tyre grip
    union {
        struct {
            uint32_t ucAdhesionGroup : 3; // see eAdhesionGroup. Used to calculate friction between materials
            uint32_t ucSkidmarkType : 2; // see eSkidMarkType
            uint32_t ucFrictionEffect : 3; // see eFrictionEffect

            uint32_t ucBulletFX : 3;       // see eBulletFX. The effect that is played when a bullet hits this surface.
            uint32_t bIsSoftLand : 1;
            uint32_t bIsSeeThrough : 1;    // no camera collision
            uint32_t bIsShootThrough : 1;  // bullets go through
            uint32_t bIsSand : 1;          // car tyres sink in and can get bogged down
            uint32_t bIsWater : 1;

            uint32_t bIsShallowWater : 1;
            uint32_t bIsBeach : 1;
            uint32_t bIsSteepSlope : 1;   // code won't let player run or jump up slope - used to stop the player getting up a hill
            uint32_t bIsGlass : 1;        // will shatter when shot
            uint32_t bIsStairs : 1;       // don't tilt peds as if they're walking up a slope
            uint32_t bIsSkateable : 1;
            uint32_t bIsPavement : 1;     // used so peds know when it's safe to stop and chat, or when they're crossing a road
            uint32_t ucRoughness : 2;     // (0:not, 1:quite, 2:rough, 3:very) (does pad vibration)
            uint32_t ucFlammability : 2;  // (0:not, 1:flammable, 2:very)
            uint32_t bCreatesSparks : 1;  // NOT USED ANYMORE
            uint32_t bCantSprintOn : 1;
            uint32_t bLeavesFootsteps : 1;
            uint32_t bProducesFootDust : 1;
            uint32_t bMakesCarDirty : 1;

            uint32_t bMakesCarClean : 1;
            uint32_t bCreatesWheelGrass : 1;
            uint32_t bCreatesWheelGravel : 1;
            uint32_t bCreatesWheelMud : 1;
            uint32_t bCreatesWheelDust : 1;
            uint32_t bCreatesWheelSand : 1;
            uint32_t bCreatesWheelSpray : 1;
            uint32_t bCreatesPlants : 1;

            uint32_t bCreatesObjects : 1;
            uint32_t bCanClimb : 1;
            uint32_t bIsAudioConcrete : 1;
            uint32_t bIsAudioGrass : 1;
            uint32_t bIsAudioSand : 1;
            uint32_t bIsAudioGravel : 1;
            uint32_t bIsAudioWood : 1;
            uint32_t bIsAudioWater : 1;

            uint32_t bIsAudioMetal : 1;
            uint32_t bIsAudioLongGrass : 1;
            uint32_t bIsAudioTile : 1;
            uint32_t bPad : 13;
        };
        uint32_t m_nFlags1;
        uint32_t m_nFlags2;
    };
};

VALIDATE_SIZE(SurfaceInfo_c, 0xC);



class SurfaceInfos_c {
public:
    float m_adhesiveLimits[6][6];
    SurfaceInfo_c m_surfaces[TOTAL_NUM_SURFACE_TYPES];

    //static constexpr const char* cDefaultName = "DEFAULT"; // 0x85C658

public:
    uint32 GetSurfaceIdFromName(const char* cName);
    void LoadAdhesiveLimits();
    void LoadSurfaceAudioInfos();
    void LoadSurfaceInfos();
    void Init();
    eAdhesionGroup GetAdhesionGroup(uint32 id);
    float GetTyreGrip(uint32 id);
    float GetWetMultiplier(uint32 id);
    uint32_t GetSkidmarkType(uint32 id);
    eFrictionEffect GetFrictionEffect(uint32 id);
    uint32_t GetBulletFx(uint32 id);
    bool IsSoftLanding(uint32 id);
    bool IsSeeThrough(uint32 id);
    bool IsShootThrough(uint32 id);
    bool IsSand(uint32 id);
    bool IsWater(uint32 id);
    bool IsShallowWater(uint32 id);
    bool IsBeach(uint32 id);
    bool IsSteepSlope(uint32 id);
    bool IsGlass(uint32 id);
    bool IsStairs(uint32 id);
    bool IsSkateable(uint32 id);
    bool IsPavement(uint32 id);
    uint32_t GetRoughness(uint32 id);
    uint32_t GetFlammability(uint32 id);
    bool CreatesSparks(uint32 id);
    bool CantSprintOn(uint32 id);
    bool LeavesFootsteps(uint32 id);
    bool ProducesFootDust(uint32 id);
    bool MakesCarDirty(uint32 id);
    bool MakesCarClean(uint32 id);
    bool CreatesWheelGrass(uint32 id);
    bool CreatesWheelGravel(uint32 id);
    bool CreatesWheelMud(uint32 id);
    bool CreatesWheelDust(uint32 id);
    bool CreatesWheelSand(uint32 id);
    bool CreatesWheelSpray(uint32 id);
    bool CreatesPlants(uint32 id);
    bool CreatesObjects(uint32 id);
    bool CanClimb(uint32 id);
    bool IsAudioConcrete(uint32 id);
    bool IsAudioGrass(uint32 id);
    bool IsAudioSand(uint32 id);
    bool IsAudioGravel(uint32 id);
    bool IsAudioWood(uint32 id);
    bool IsAudioWater(uint32 id);
    bool IsAudioMetal(uint32 id);
    bool IsAudioLongGrass(uint32 id);
    bool IsAudioTile(uint32 id);
    float GetAdhesiveLimit(CColPoint* colPoint);
};
VALIDATE_SIZE(SurfaceInfos_c, 0x8F4);

static SurfaceInfos_c& g_surfaceInfos = *reinterpret_cast<SurfaceInfos_c*>(0xB79538);