/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
//#include "CGame.h"
#include "CPlaceable.h"
#include "CReference.h"
//#include "eEntityType.h"
//#include "eEntityStatus.h"
#include "CRect.h"
#include "CColModel.h"
#include "C2dEffect.h"
#include "CColModel.h"
#include "CModelInfo.h"

enum
{
    STATUS_PLAYER = 0,
    STATUS_PLAYER_PLAYBACKFROMBUFFER,
    STATUS_SIMPLE,
    STATUS_PHYSICS,
    STATUS_ABANDONED,
    STATUS_WRECKED,
    STATUS_TRAIN_MOVING,
    STATUS_TRAIN_NOT_MOVING,
    STATUS_PLAYER_REMOTE,
    STATUS_PLAYER_DISABLED,
    STATUS_TRAILER,
    STATUS_SIMPLE_TRAILER,
    STATUS_GHOST
};

enum
{
    ENTITY_TYPE_NOTHING = 0,
    ENTITY_TYPE_BUILDING,
    ENTITY_TYPE_VEHICLE,
    ENTITY_TYPE_PED,
    ENTITY_TYPE_OBJECT,
    ENTITY_TYPE_DUMMY,
    ENTITY_TYPE_NOTINPOOLS
};

class PLUGIN_API CEntity : public CPlaceable {
protected:
    CEntity(plugin::dummy_func_t) : CPlaceable(plugin::dummy) {}
public:

    struct CEntityInfo
    {
        uint8 nType : 3;
        uint8 nStatus : 5;
    };

    struct CFlags
    {
        uint32 bUsesCollision : 1;
        uint32 bCollisionProcessed : 1;
        uint32 bIsStatic : 1;
        uint32 bHasContacted : 1;
        uint32 bIsStuck : 1;
        uint32 bIsInSafePosition : 1;
        uint32 bWasPostponed : 1;
        uint32 bIsVisible : 1;
        uint32 bIsBIGBuilding : 1;
        uint32 bRenderDamaged : 1;
        uint32 bStreamingDontDelete : 1;
        uint32 bRemoveFromWorld : 1;
        uint32 bHasHitWall : 1;
        uint32 bImBeingRendered : 1;
        uint32 bDrawLast : 1;
        uint32 bDistanceFade : 1;
        uint32 bDontCastShadowsOn : 1;
        uint32 bOffscreen : 1;
        uint32 bIsStaticWaitingForCollision : 1;
        uint32 bDontStream : 1;
        uint32 bUnderwater : 1;
        uint32 bHasPreRenderEffects : 1;
        uint32 bIsTempBuilding : 1;
        uint32 bDontUpdateHierarchy : 1;
        uint32 bHasRoadsignText : 1;
        uint32 bDisplayedSuperLowLOD : 1;
        uint32 bIsProcObject : 1;
        uint32 bBackfaceCulled : 1;
        uint32 bLightObject : 1;
        uint32 bUnimportantStream : 1;
        uint32 bTunnel : 1;
        uint32 bTunnelTransition : 1;


        //uint32 bdummy;
    };

    union {
        struct RwObject *m_pRwObject;
        struct RpClump *m_pRwClump;
        struct RpAtomic *m_pRwAtomic;
    };

    /* https://code.google.com/p/mtasa-blue/source/browse/trunk/MTA10/game_sa/CEntitySA.h */
    /*
    bool bUsesCollision : 1;       // does entity use collision
    bool bCollisionProcessed : 1;  // has object been processed by a ProcessEntityCollision function
    bool bIsStatic : 1;            // is entity static
    bool bHasContacted : 1;        // has entity processed some contact forces
    bool bIsStuck : 1;             // is entity stuck
    bool bIsInSafePosition : 1;    // is entity in a collision free safe position
    bool bWasPostponed : 1;        // was entity control processing postponed
    bool bIsVisible : 1;           // is the entity visible
    
    bool bIsBIGBuilding : 1;       // Set if this entity is a big building
    bool bRenderDamaged : 1;       // use damaged LOD models for objects with applicable damage
    bool bStreamingDontDelete : 1; // don't let the streaming remove this 
    bool bRemoveFromWorld : 1;     // remove this entity next time it should be processed
    bool bHasHitWall : 1;          // has collided with a building (changes subsequent collisions)
    bool bImBeingRendered : 1;     // don't delete me because I'm being rendered
    bool bDrawLast :1;             // draw object last
    bool bDistanceFade :1;         // fade entity because it is far away
    
    bool bDontCastShadowsOn : 1;   // dont cast shadows on this object
    bool bOffscreen : 1;           // offscreen flag. This can only be trusted when it is set to true
    bool bIsStaticWaitingForCollision : 1; // this is used by script created entities - they are static until the collision is loaded below them
    bool bDontStream : 1;          // tell the streaming not to stream me
    bool bUnderwater : 1;          // this object is underwater change drawing order
    bool bHasPreRenderEffects : 1; // object has a prerender effects attached to it
    bool bIsTempBuilding : 1;      // whether or not the building is temporary (i.e. can be created and deleted more than once)
    bool bDontUpdateHierarchy : 1; // don't update the aniamtion hierarchy this frame
    
    bool bHasRoadsignText : 1;     // entity is roadsign and has some 2deffect text stuff to be rendered
    bool bDisplayedSuperLowLOD : 1;
    bool bIsProcObject : 1;        // set object has been generate by procedural object generator
    bool bBackfaceCulled : 1;      // has backface culling on
    bool bLightObject : 1;         // light object with directional lights
    bool bUnimportantStream : 1;   // set that this object is unimportant, if streaming is having problems
    bool bTunnel : 1;              // is this model part of a tunnel
    bool bTunnelTransition : 1;    // this model should be rendered from within and outside of the tunnel
    */

    CEntity::CFlags m_nFlags;
    
    uint16 m_nRandomSeed;

    int16 m_nModelIndex;

    CReference* pReferences;

    CLink<CEntity*>* m_pLastRenderedLink; //void *m_pStreamingLink;

    uint16 m_nScanCode;
    uint8 m_iplIndex;
    uint8 m_areaCode;

    /*
    unsigned char m_nAreaCode;
    union {
        int m_nLodIndex; // -1 - without LOD model
        CEntity *m_pLod;
    };
    */

    CEntity* m_pLod;

    uint8 numLodChildren;

    int8 numLodChildrenRendered;

    //eEntityType m_nType : 3;
    //eEntityStatus m_nStatus : 5;

    CEntity::CEntityInfo m_info;
    
    // originally virtual functions
    void Add(CRect &rect);
    void Add(); // similar to previous, but with entity bound rect
    void Remove();
    void SetIsStatic(bool isStatic);
    void SetModelIndex(uint32 index);
    void SetModelIndexNoCreate(uint32 index);
    void CreateRwObject();
    void DeleteRwObject();
    CRect GetBoundRect();
    void ProcessControl();
    void ProcessCollision();
    void ProcessShift();
    bool TestCollision();
    void Teleport(CVector destination, bool resetRotation = false);
    void SpecialEntityPreCollisionStuff(class CEntity *colEntity, bool unk1, unsigned char *unk2, unsigned char *unk3, unsigned char *unk4, unsigned char *unk5);
    void SpecialEntityCalcCollisionSteps(unsigned char *unk1, unsigned char *unk2);
    void PreRender();
    virtual void Render_VMT();
    void Render();
    bool SetupLighting();
    void RemoveLighting();
    void FlagToDestroyWhenNextProcessed();
    
    // funcs
    void UpdateRwFrame();
    void UpdateRwMatrix();
    void UpdateRpHAnim();
    bool HasPreRenderEffects();
    bool DoesNotCollideWithFlyers();
    void ModifyMatrixForPoleInWind();
    bool LivesInThisNonOverlapSector(int sectorX, int sectorY);
    void SetupBigBuilding();
    void ModifyMatrixForCrane();
    void PreRenderForGlassWindow();
    void SetRwObjectAlpha(int alpha);
    CVector FindTriggerPointCoors(int triggerIndex);
    C2dEffect* GetRandom2dEffect(int effectType, unsigned char arg1);
    CVector TransformFromObjectSpace(CVector const& offset);
    void TransformFromObjectSpace(CVector& outPosn, CVector const& offset);
    void CreateEffects();
    void DestroyEffects();
    void AttachToRwObject(RwObject* object, bool updateEntityMatrix);
    void DetachFromRwObject();
    CVector GetBoundCentre();
    void GetBoundCentre(CVector& outCentre);
    void RenderEffects();
    // is entity touching entity
    bool GetIsTouching(CEntity* entity);
    // is entity touching sphere
    bool GetIsTouching(CVector const& , float radius);
    bool GetIsOnScreen();
    bool GetIsBoundingBoxOnScreen();
    void ModifyMatrixForTreeInWind();
    void ModifyMatrixForBannerInWind();
    CColModel* GetColModel();
    void CalculateBBProjection(CVector* arg0, CVector* arg1, CVector* arg2, CVector* arg3);
    void UpdateAnim();
    bool IsVisible();
    float GetDistanceFromCentreOfMassToBaseOfModel();
    void CleanUpOldReference(CEntity** entity);
    void ResolveReferences();
    void PruneReferences();
    void RegisterReference(CEntity** entity);
    void ProcessLightsForEntity();
    void RemoveEscalatorsForEntity();
    bool IsEntityOccluded();

    inline float GetBoundRadius()       { return CModelInfo::GetColModel(m_nModelIndex)->m_boundSphere.m_fRadius; }

    void SetTypeBuilding()              { m_info.nType = ENTITY_TYPE_BUILDING; }
    void SetTypeVehicle()               { m_info.nType = ENTITY_TYPE_VEHICLE; }
    void SetTypePed()                   { m_info.nType = ENTITY_TYPE_PED; }
    void SetTypeObject()                { m_info.nType = ENTITY_TYPE_OBJECT; }
    void SetTypeDummy()                 { m_info.nType = ENTITY_TYPE_DUMMY; }
    bool GetIsTypeBuilding() const      { return m_info.nType == ENTITY_TYPE_BUILDING; }
    bool GetIsTypeVehicle() const       { return m_info.nType == ENTITY_TYPE_VEHICLE; }
    bool GetIsTypePed() const           { return m_info.nType == ENTITY_TYPE_PED; }
    bool GetIsTypeObject() const        { return m_info.nType == ENTITY_TYPE_OBJECT; }
    bool GetIsTypeDummy() const         { return m_info.nType == ENTITY_TYPE_DUMMY; }
    bool GetIsPhysical() const          { return m_info.nType == ENTITY_TYPE_NOTINPOOLS; }

    uint8 GetType() const               { return m_info.nType; }
    void SetType(int32 nType)           { m_info.nType = nType; }

    uint8 GetStatus() const             { return m_info.nStatus; }
    void SetStatus(int32 nStatus)       { m_info.nStatus = nStatus; }
    bool TreatAsPlayerForCollisions();

    void SetUsesCollision(bool b)       { m_nFlags.bUsesCollision = b; }
    bool GetUsesCollision() const       { return m_nFlags.bUsesCollision; }
    void SetCollisionProcessed(bool b)  { m_nFlags.bCollisionProcessed = b; }
    bool GetCollisionProcessed() const  { return m_nFlags.bCollisionProcessed; }
    bool GetIsStatic() const            { return m_nFlags.bIsStatic; }
    void SetHasContacted(bool b)        { m_nFlags.bHasContacted = b; }
    bool GetHasContacted() const        { return m_nFlags.bHasContacted; }


    void SetIsStuck(bool b)             { m_nFlags.bIsStuck = b; }
    bool GetIsStuck() const             { return m_nFlags.bIsStuck; }
    void SetIsInSafePosition(bool b)    { m_nFlags.bIsInSafePosition = b; }
    bool GetIsInSafePosition() const    { return m_nFlags.bIsInSafePosition; }
    void SetWasPostponed(bool b)        { m_nFlags.bWasPostponed = b; }
    bool GetWasPostponed() const        { return m_nFlags.bWasPostponed; }
    void SetIsVisible(bool b)           { m_nFlags.bIsVisible = b; }
    bool GetIsVisible() const           { return m_nFlags.bIsVisible; }
    void SetHasHitWall(bool b)          { m_nFlags.bHasHitWall = b; }
    bool GetHasHitWall() const          { return m_nFlags.bHasHitWall; }
    void SetIsBackfaceCulled(bool b)    { m_nFlags.bBackfaceCulled = b; }
    bool GetIsBackfaceCulled() const    { return m_nFlags.bBackfaceCulled; }
    void SetIsUnimportantStream(bool b) { m_nFlags.bUnimportantStream = b; }

    void SetScanCode(uint16 ScanCode)   { m_nScanCode = ScanCode; }
    uint16 GetScanCode() const          { return m_nScanCode; }
    void SetAreaCode(uint8 AreaCode)    { m_areaCode = AreaCode; }
    uint8 GetAreaCode() const           { return m_areaCode; }
    void SetIplIndex(uint8 IplIndex)    { m_iplIndex = IplIndex; }
    uint8 GetIplIndex()                 { return m_iplIndex; }

    uint32 GetModelIndex()              { return m_nModelIndex; }
    RwObject* GetRwObject() const       { m_pRwObject; }

    RwMatrix* GetRwMatrix()             { return GetMatrix()->m_pRwMat; }

    
    bool IsInCurrentArea(); //{ return m_areaCode == CGame::currArea; }
    bool IsInArea(int32 Area) { return m_areaCode == Area; }
    //bool IsVisibleComplex() { return m_nFlags.bIsVisible; } // empty
};

VALIDATE_SIZE(CEntity, 0x38);

PLUGIN_API bool IsEntityPointerValid(CEntity* entity);
PLUGIN_API struct RpMaterial* MaterialUpdateUVAnimCB(struct RpMaterial* material, void* data);
