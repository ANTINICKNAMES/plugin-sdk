/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CTaskTimer.h"
#include "C2dEffect.h"

// TODO / cpp

class PLUGIN_API CAttractorScanner {
public:
    /*static const int ms_iScanPeriod;
	static const int ms_iScanLatency;
	
	CAttractorScanner();
	~CAttractorScanner();
	
	void ScanForAttractorsInRange(const CPed& ped);
	
	void Activate();
	void DeActivate();
	bool IsActivated() const;
	
	void Pause(int32);
	
	void Clear();
	
	void SetEffectInUse(C2dEffect*);
	C2dEffect* GetEffectInUse() const;
	
	static bool GetClosestAttractorOfType(const CVector& pos, const float radius, const Int32 ModelIndexToFind, const int32 queueType, const char* pTriggeredScriptName, const bool bMustBeFree, const C2dEffect* pEffectToNeglect, C2dEffect*& pClosestEffect, CEntity*& pClosestEntity);
	
	
	
	
	CTaskTimer* GetTimer();*/
public:
    bool m_bActivated;
    char _pad[3];
    CTaskTimer m_timer;
    C2dEffect* m_pPreviousEffect;
    CEntity* m_pPreviousEntity;
    CEntity* m_entities[10];
    C2dEffect* m_effects[10];
    float m_minDistanceSquared[10];
};

VALIDATE_SIZE(CAttractorScanner, 0x90);