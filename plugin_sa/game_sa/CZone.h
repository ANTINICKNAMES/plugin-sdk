/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rw/rwplcore.h"     // for RwRGBA stuct
#include "CZoneInfo.h"
#include "CGame.h"

enum eZoneType {
	ZONE_TYPE_NAVI = 0,		// controls text s
	ZONE_TYPE_MAP = 3
};

class CZone {
public:
    char          m_szLabel[8];
	char          m_szTextKey[8];
	short         m_fX1;
	short         m_fY1;
	short         m_fZ1;
	short         m_fX2;
	short         m_fY2;
	short         m_fZ2;
	CZoneInfo     m_nZoneExtraIndexInfo;
	unsigned char m_nType; // see eZoneType
    unsigned char m_nLevel; // see eLevelName

	// Returns pointer to GXT name string.
	const char* GetTranslatedName();
};

VALIDATE_SIZE(CZone, 0x30);
