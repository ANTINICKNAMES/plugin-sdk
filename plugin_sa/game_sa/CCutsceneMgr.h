/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCutsceneObject.h"
#include "CDirectory.h"
#include "FxSystem_c.h"
#include "CAnimBlendAssocGroup.h"

enum
{
    CUTS_DOING_NOTHING = 0,
    CUTS_WANT_TO_START,
    CUTS_STARTED,
    CUTS_STARTED2,
    CUTS_START_AUDIO
};

enum
{
    CUTS_NOTLOADED = 0,
    CUTS_LOADING,
    CUTS_LOADED
};

enum
{
    CUTS_ATTACH_PARENTID = 0,
    CUTS_ATTACH_CHILDID,
    CUTS_ATTACH_BONEID
};

struct CutscenePEffect
{
    char m_cEffectName[32];
    FxSystem_c* mp_fxSystem;
    int32 m_iStartTime;
    int32 m_iDuration;
    int32 m_iObjectAttach;
    char m_cItemAttach[32];
    float m_fPosX, m_fPosY, m_fPosZ;
    float m_fDirX, m_fDirY, m_fDirZ;
    bool m_bPlaying;
    bool m_bPlayed;
private:
    char _pad6A[2];
};

/*
struct tCutsceneParticleEffect {
    char        m_szEffectName[32];
    FxSystem_c *m_pFxSystem;
    int         m_nStartTime;
    int         m_nEndTime;
    int         m_nObjectId;
    char        m_szObjectPart[32];
    CVector     m_vecPosn;
    CVector     m_vecDirection;
    bool        m_bPlaying;
    bool        m_bStopped;
private:
    char _pad6A[2];
public:
};
*/

// this is kinda bs, but I'll leave it
struct tCutsceneAttachment {
    int m_nCutscenePedObjectId;
    int m_nCutsceneAttachmentObjectId;
    int m_nBoneId;
};

struct CutsceneRemove
{
    float m_fX;
    float m_fY;
    float m_fZ;
    char m_cObjectName[32];
};

extern unsigned int MAX_NUM_CUTSCENE_OBJECTS; // default: 50
extern unsigned int MAX_NUM_CUTSCENE_PARTICLE_EFFECTS; // default: 8
extern unsigned int MAX_NUM_CUTSCENE_ITEMS_TO_HIDE; // default: 50
extern unsigned int MAX_NUM_CUTSCENE_ATTACHMENTS; // default: 50

class PLUGIN_API CCutsceneMgr {
public:
    static bool &ms_useCutsceneShadows; // always 'true', doesn't change anything
    static unsigned int &numPlayerWeaponsToRestore;
    static unsigned int *playerWeaponsToRestore_Ammo; // static unsigned int playerWeaponsToRestore_Ammo[13]
    static unsigned int *playerWeaponsToRestore_Type; // static unsigned int playerWeaponsToRestore_Type[13]
    static char (*ms_cAppendAnimName)[32]; // static char ms_cAppendAnimName[50][32]
    static char (*ms_cAppendObjectName)[32]; // static char ms_cAppendObjectName[50][32]
    static CDirectory *ms_pCutsceneDir;
    static unsigned int &ms_cutsceneLoadStatus;
    static bool &ms_animLoaded;
    static bool &ms_running;
    static bool &ms_cutsceneProcessing;
    static bool &ms_useLodMultiplier;
    static bool &ms_wasCutsceneSkipped;
    static bool &ms_hasFileInfo;
    static unsigned int &ms_numAppendObjectNames;
    static bool &restoreEverythingAfterCutscene;
    static float &m_fPrevCarDensity;
    static float &m_fPrevPedDensity;
    static CutscenePEffect* ms_pParticleEffects; //static tCutsceneParticleEffect *ms_pParticleEffects; // static tCutsceneParticleEffect ms_pParticleEffects[8]
    static CutsceneRemove *ms_crToHideItems; // static tCutsceneRemoval ms_crToHideItems[50]
    static CEntity **ms_pHiddenEntities; // static CEntity *ms_pHiddenEntities[50]
    static unsigned int &ms_numAttachObjectToBones;
    static bool *ms_bRepeatObject; // static bool ms_bRepeatObject[50]
    static tCutsceneAttachment *ms_iAttachObjectToBone; // static tCutsceneAttachment ms_iAttachObjectToBone[]
    static char (*ms_aUncompressedCutsceneAnims)[32]; // static char ms_aUncompressedCutsceneAnims[8][32]
    static int *ms_iTextDuration; // static int ms_iTextDuration[64]
    static int *ms_iTextStartTime; // static int ms_iTextStartTime[64]
    static char (*ms_cTextOutput)[8]; // static char ms_cTextOutput[40][8]
    static int *ms_iModelIndex; // static int ms_iModelIndex[50]
    static char (*ms_cLoadAnimName)[32]; // static char ms_cLoadAnimName[50][32]
    static char (*ms_cLoadObjectName)[32]; // static char ms_cLoadObjectName[50][32]
    static float &ms_cutsceneTimer;
    static char *ms_cutsceneName; // static char ms_cutsceneName[8]
    static CObject** ms_pCutsceneObjects; //static CCutsceneObject **ms_pCutsceneObjects; // static CCutsceneObject *ms_pCutsceneObject[50]
    static unsigned int &ms_cutscenePlayStatus;
    static unsigned int &ms_numCutsceneObjs;
    static unsigned int &ms_numLoadObjectNames;
    static unsigned int &ms_numTextOutput;
    static unsigned int &ms_currTextOutput;
    static unsigned int &ms_numUncompressedCutsceneAnims;
    static unsigned int &ms_iNumHiddenEntities;
    static unsigned int &ms_iNumParticleEffects;
    static unsigned int &m_PrevExtraColour;
    static bool &m_PrevExtraColourOn;
    static bool &dataFileLoaded;
    static CAnimBlendAssocGroup &ms_cutsceneAssociations;
    static CVector &ms_cutsceneOffset;

    // dummy function
    static int AddCutsceneHead(CObject* pPed, int32 headId);
    static void AppendToNextCutscene(const char* pModelName, const char* pAnimName);
    static void AttachObjectToBone(CObject* pObject, CObject* pParent, int32 boneId);
    static void AttachObjectToFrame(CObject* pObject, CEntity* pParent, const char* pName);
    static void AttachObjectToParent(CObject* pObject, CEntity* pParent);
    static void BuildCutscenePlayer();
    static CCutsceneObject* CreateCutsceneObject(int32 id);
    static void DeleteCutsceneData();
    static void DeleteCutsceneData_overlay();
    static void FinishCutscene();
    static uint32 GetCutsceneTimeInMilleseconds();
    static bool HasCutsceneFinished();
    static void HideRequestedObjects();
    static void Initialise();
    static void IsCutsceneSkipButtonBeingPressed();
    static void LoadAnimationUncompressed(const char* pAnimName);
    static void LoadCutsceneData(const char* pName);
    static void LoadCutsceneData_loading();
    static void LoadCutsceneData_overlay(const char* pName);
    static void LoadCutsceneData_postload();
    static void LoadCutsceneData_preload();
    static void LoadEverythingBecauseCutsceneDeletedAllOfIt();
    static void RemoveCutscenePlayer();
    static void RemoveEverythingBecauseCutsceneDoesntFitInMemory();
    static void SetCutsceneAnim(const char* pName, CObject* pObject);
    static void SetCutsceneAnimToLoop(const char* pName);
    static void SetCutsceneOffset(const CVector& pOffset);
    // dummy function
    static void SetHeadAnim(const char* pName, CObject* pObject);
    static void SetupCutsceneToStart();
    static void Shutdown();
    static void SkipCutscene();
    static void StartCutscene();
    static void Update();
    static void Update_overlay();

    // getters
    static bool IsCutsceneLoaded()              { return ms_cutsceneLoadStatus == CUTS_LOADED; }
    static bool IsCutsceneRunning()             { return ms_running; }
    static void SetProcessingCutscene()         { ms_cutsceneProcessing = true; }
    static bool IsCutsceneProcessing()          { return ms_cutsceneProcessing; }
    static bool WasCutsceneSkipped()            { return ms_wasCutsceneSkipped; }
    static CVector& GetCutsceneOffset()         { return ms_cutsceneOffset; }
    static CObject* GetCutsceneObject(int32 id) { return ms_pCutsceneObjects[id]; }
    static bool UsesLodMultiplier()             { return ms_useLodMultiplier; }

};

short FindCutsceneAudioTrackId(char const* cutsceneName);
void UpdateCutsceneObjectBoundingBox(RpClump* clump, int modelId);