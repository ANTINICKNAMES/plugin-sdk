/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CEntity;
class CRect;

class CTagManager {
public:
    struct TagDesc {
        CEntity* m_pEntity;
        uint8    m_nAlpha;
    };
public:
    static constexpr uint32_t MAX_TAGS = 150;

    static CTagManager::TagDesc (&ms_tagDesc)[MAX_TAGS];
    static int32_t& ms_numTags;
    static int32_t& ms_numTagged;
    static RxPipeline*& ms_pPipeline;

    static void UpdateNumTagged();

    static void     Save();
    static void     Load();
};