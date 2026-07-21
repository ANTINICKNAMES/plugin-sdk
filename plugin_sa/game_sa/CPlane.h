/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

class CPlane : public CAutomobile {
protected:
    CPlane(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    float field_988;
    int field_98C;
    int field_990;
    int field_994;
    float field_998;
    int field_99C;
    int field_9A0;
    int field_9A4;
    float field_9A8;
    float field_9AC;
    float field_9B0;
    float field_9B4;
    int field_9B8;
    int field_9BC;
    unsigned int m_nStartedFlyingTime;
    int field_9C4;
    float field_9C8;
    float m_fLandingGearStatus;
    int field_9D0;
    FxSystem_c **m_pGunParticles;
    unsigned char m_nFiringMultiplier;
    int field_9DC;
    int field_9E0;
    int field_9E4;
    FxSystem_c *m_apJettrusParticles[4];
    FxSystem_c *m_pSmokeParticle;
    unsigned int m_nSmokeTimer;
    bool m_bSmokeEjectorEnabled;
private:
    char _pad[3];

public:
    CPlane(int modelIndex, unsigned char createdBy);

    void IsAlreadyFlying();
    void SetGearUp();
    void SetGearDown();

    static void InitPlaneGenerationAndRemoval();
    static unsigned int CountPlanesAndHelis();
    static bool AreWeInNoPlaneZone();
    static bool AreWeInNoBigPlaneZone();
    static void SwitchAmbientPlanes(bool enable);
    static void FindPlaneCreationCoors(CVector* arg0, CVector* arg1, float* arg2, float* arg3, bool arg4);
    static void DoPlaneGenerationAndRemoval();

    static bool& GenPlane_Active;
    static int& GenPlane_ModelIndex;
    static unsigned int& GenPlane_Status;
    static unsigned int& GenPlane_LastTimeGenerated;
    static float& ANDROM_COL_ANGLE_MULT;
    static float& HARRIER_NOZZLE_ROTATE_LIMIT;
    static float& HARRIER_NOZZLE_SWITCH_LIMIT;
    static float& PLANE_MIN_PROP_SPEED;
    static float& PLANE_STD_PROP_SPEED;
    static float& PLANE_MAX_PROP_SPEED;
    static float& PLANE_ROC_PROP_SPEED;
};

VALIDATE_SIZE(CPlane, 0xA04);

extern float &HARRIER_NOZZLE_ROTATERATE;
extern float &PLANE_DAMAGE_WAVE_COUNTER_VAR;
extern float &PLANE_DAMAGE_THRESHHOLD;
extern float &PLANE_DAMAGE_SCALE_MASS;
extern float &PLANE_DAMAGE_DESTROY_THRESHHOLD;
extern CVector &vecRCBaronGunPos;