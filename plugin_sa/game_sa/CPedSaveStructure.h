/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CPed.h"
#include "CPhysical.h"
#include "CWeapon.h"

class PLUGIN_API CPedSaveStructure
{

public:
	CVector m_Position;
	float m_heading;
	float m_nHealth;
	float m_nArmour;
	CWeaponSaveStructure m_WeaponSlots[13];
	uint8_t m_CharCreatedBy;
	uint8_t m_nCurrentWeapon;
	uint8_t m_nAreaCode;
	int32_t m_lastEntryExit;
	uint8_t m_nExtraMeleeCombo;
	uint8_t m_nExtraMeleeComboFlags;
	CPedFlags m_nPedFlags;
	CPhysical::CPhysicalFlags m_nPhysicalFlags;
};

VALIDATE_SIZE(CPedSaveStructure, 0x1A4);