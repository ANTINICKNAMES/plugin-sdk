/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventPedCollisionWithPed.h"

class PLUGIN_API CEventPlayerCollisionWithPed : public CEventPedCollisionWithPed
{
public:
	CEventPlayerCollisionWithPed(const uint16_t nPieceType, const float fImpulseMagnitude, const CPed* pPed, const CVector& vNormal, const CVector& vPos,
		const int iPedMoveState, const int iOtherPedMoveState);

	virtual ~CEventPlayerCollisionWithPed() {}

	virtual eEventType GetEventType();
	virtual CEvent* Clone();
};