/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEvent.h"

#include "CPed.h"

class PLUGIN_API CEventEditableResponse : public CEvent
{
public:
	//CEventEditableResponse();
	//virtual ~CEventEditableResponse();

protected:
	CEventEditableResponse(plugin::dummy_func_t a) : CEvent(a) {}
public:
	CEventEditableResponse();

	virtual ~CEventEditableResponse() {};

	virtual CEvent* Clone(); //const; (4)

	//class CEventEditableResponse* p;

	virtual CEvent* CloneEditable(); //const; (16)
	virtual bool HasEditableResponse(); //const; (9)

	void ComputeResponseTaskType(CPed* pPed, const bool bUseInGroupDecisionMaker);
	bool ComputeResponseTaskOfType(CPed* pPed, const int iTaskTypeToSeek); //const;
	void ComputeResponseTaskType(CPedGroup* pPedGroup);
	bool WillRespond(); //const;

	void SetResponseTaskType(const int respTaskType) { m_iTaskType = respTaskType; }
	void SetFacialResponseTaskType(const int respTaskTypeFacial) { m_iFacialTaskType = respTaskTypeFacial; }
	int GetResponseTaskType() { return m_iTaskType; }
	int GetFacialResponseTaskType() { return m_iFacialTaskType; }

	bool InformGroup(CPed* pPed); //const;
	bool InformRespectedFriends(CPed* pPed); //const;
	bool InformVehicleOccupants(CPed* pPed); //const;
	bool TriggerLookAt(CPed* pPed); //const;

	bool m_bWitnessedFirstHand;


//protected:
public:
	int16_t m_iTaskType;
	int16_t m_iFacialTaskType;
};

VALIDATE_SIZE(CEventEditableResponse, 0x14);