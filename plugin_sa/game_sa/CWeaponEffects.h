/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CRGBA.h"

enum eWeaponEffectsLockTexture {
    TARGET_STANDARD = 0,
    TARGET_FLIGHT = 1
};

class PLUGIN_API CWeaponEffects {
public:
    bool    m_bRender;
private:
    char _pad01[3];
public:
    uint32 clearTargetTimer; // -1 default
    CVector m_vecTargetPos;
    
    //CRGBA   m_color;
    uint8 m_red, m_green, m_blue, m_alpha;

    float m_fScale;
    int m_fRotate;
    int m_fRadius;
    float m_bLockedOn; // why the hell m_b marked as float???
    uint8 m_type;
private:
    char _pad29[3];
public:

    CWeaponEffects();
    ~CWeaponEffects();
    static void Init();
    static void Shutdown();
    static bool IsLockedOn(int crosshairId);
    static void MarkTarget(int crosshairId, CVector posn, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float size, unsigned char arg7);
    static void ClearCrossHair(int crosshairId);
    static void ClearCrossHairs();
    static void ClearCrossHairImmediately(int crosshairId);
    static void ClearCrossHairsImmediately();
    static void Render();
};

VALIDATE_SIZE(CWeaponEffects, 0x2C);

extern unsigned int MAX_NUM_WEAPON_CROSSHAIRS; // default 2
extern CWeaponEffects *gCrossHair; // CWeaponEffects gCrossHair[MAX_NUM_WEAPON_CROSSHAIRS]
extern RwTexture *&gpCrossHairTex;
extern RwTexture **gpCrossHairTexFlight; // RwTexture *gpCrossHairTexFlight[2];