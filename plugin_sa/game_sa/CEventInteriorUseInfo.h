/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEvent.h"

class PLUGIN_API CEventInteriorUseInfo : public CEvent
{
protected:
	CEventInteriorUseInfo(plugin::dummy_func_t a) : CEvent(a) {}
public:
	//CEventInteriorUseInfo(InteriorInfo_t* pInteriorInfo, Interior_c* pInterior, int32_t duration, bool doInstantly); // need 'InteriorInfo_t' and 'Interior_c' classes!
	CEventInteriorUseInfo(void* pInteriorInfo, void* pInterior, int32_t duration, bool doInstantly);


	virtual ~CEventInteriorUseInfo() {}

	virtual eEventType GetEventType();
	virtual int GetEventPriority();
	virtual int GetLifeTime();
	virtual CEvent* Clone();
	virtual bool AffectsPed(CPed* pPed);


	virtual bool IsValid(CPed* pPed);

	// TODO:
	void* m_pInteriorInfo; //InteriorInfo_t* m_pInteriorInfo;
	void* m_pInterior; //Interior_c* m_pInterior;
	int32_t m_duration;
	bool m_doInstantly;
};