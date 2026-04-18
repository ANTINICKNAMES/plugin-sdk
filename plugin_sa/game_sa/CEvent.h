/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CPed.h"
#include "eEventType.h"

// TODO / cpp

class PLUGIN_API CEvent {
private:
	CEvent() = delete;
protected:
	CEvent(plugin::dummy_func_t) {}
public:
	void* operator new(size_t nSize);
	void operator delete(void* pVoid);

	virtual ~CEvent() {};

	virtual eEventType GetEventType(); // const; // purecall
	virtual int GetEventPriority(); //const; // purecall
	virtual int GetLifeTime(); // const; // purecall
	virtual CEvent* Clone(); //const; // purecall
	virtual bool AffectsPed(CPed* ped); //const;
	virtual bool AffectsPedGroup(CPedGroup* pedGroup); //const;
	virtual bool IsCriminalEvent(); //const;
	virtual void ReportCriminalEvent(CPed* ped); //const;
	virtual bool HasEditableResponse(); //const;
	virtual CEntity* GetSourceEntity(); //const;
	virtual bool TakesPriorityOver(const CEvent& other); //const;
	virtual float GetLocalSoundLevel(); //const;
	virtual bool DoInformVehicleOccupants(CPed* ped); //const;

	float GetSoundLevel(const CEntity*, const CVector&);
	static float CalcSoundLevelIncrement(float fOrig, float fAdd);

	virtual bool IsValid(CPed* pPed); //const;
	virtual bool CanBeInterruptedBySameEvent(); // const;

//private:
public:
	int m_iAccumulatedTime;
	bool m_bIsPersistent;
};