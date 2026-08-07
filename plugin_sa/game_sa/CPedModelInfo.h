/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CClumpModelInfo.h"

enum ePedPieceTypes
{
    PED_COL_SPHERE_LEG = 0,
    PED_COL_SPHERE_MID,
    PED_COL_SPHERE_HEAD,

    PED_SPHERE_CHEST,
    PED_SPHERE_MIDSECTION,
    PED_SPHERE_UPPERARM_L,
    PED_SPHERE_UPPERARM_R,
    PED_SPHERE_LEG_L,
    PED_SPHERE_LEG_R,
    PED_SPHERE_HEAD
};

class PLUGIN_API CPedModelInfo : public CClumpModelInfo {
public:
    int m_nAnimType;
    unsigned int m_nPedType;
    unsigned int m_nStatType;
    unsigned short m_nCarsCanDriveMask;
    unsigned short m_nPedFlags;
    CColModel *m_pHitColModel;
    unsigned char m_nRadio1;
    unsigned char m_nRadio2;
    unsigned char m_nRace;
private:
    char __pad;
public:
    short m_nPedAudioType;
    short m_nVoice1;
    short m_nVoice2;
    short m_nVoiceId;

public:
    void CreateHitColModelSkinned(RpClump* pClump);
    CColModel* AnimatePedColModelSkinned(RpClump* pClump);
    CColModel* AnimatePedColModelSkinnedWorld(RpClump* pClump);
};

VALIDATE_SIZE(CPedModelInfo, 0x44);