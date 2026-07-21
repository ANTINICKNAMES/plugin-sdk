/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

enum eColPieceType
{
	COLPOINT_PIECETYPE_DEFAULT = 0,
	COLPOINT_PIECETYPE_BONNET,
	COLPOINT_PIECETYPE_TRUNK,
	COLPOINT_PIECETYPE_FRONTBUMPER,
	COLPOINT_PIECETYPE_REARBUMPER,
	COLPOINT_PIECETYPE_FRONTLEFTDOOR,
	COLPOINT_PIECETYPE_FRONTRIGHTDOOR,
	COLPOINT_PIECETYPE_REARLEFTDOOR,
	COLPOINT_PIECETYPE_REARRIGHTDOOR,
	COLPOINT_PIECETYPE_FRONTLEFTWING,
	COLPOINT_PIECETYPE_FRONTRIGHTWING,
	COLPOINT_PIECETYPE_REARLEFTWING,
	COLPOINT_PIECETYPE_REARRIGHTWING,
	COLPOINT_PIECETYPE_FRONTLEFTWHEEL,
	COLPOINT_PIECETYPE_FRONTRIGHTWHEEL,
	COLPOINT_PIECETYPE_REARLEFTWHEEL,
	COLPOINT_PIECETYPE_REARRIGHTWHEEL,
	COLPOINT_PIECETYPE_FRONTBIKEWHEEL,
	COLPOINT_PIECETYPE_REARBIKEWHEEL,
	COLPOINT_PIECETYPE_WINDSCREEN,
	COLPOINT_PIECETYPE_PED_SPHERE_LEG,
	COLPOINT_PIECETYPE_PED_SPHERE_MID,
	COLPOINT_PIECETYPE_PED_SPHERE_HEAD,
	COLPOINT_PIECETYPE_PED_ZONE_CHEST,
	COLPOINT_PIECETYPE_PED_ZONE_MIDSECTION,
	COLPOINT_PIECETYPE_PED_ZONE_UPPERARM_L,
	COLPOINT_PIECETYPE_PED_ZONE_UPPERARM_R,
	COLPOINT_PIECETYPE_PED_ZONE_LEG_L,
	COLPOINT_PIECETYPE_PED_ZONE_LEG_R,
	COLPOINT_PIECETYPE_PED_ZONE_HEAD,
	COLPOINT_PIECETYPE_LAST
};

struct PLUGIN_API tColLighting
{
    unsigned char day : 4;
    unsigned char night : 4;
};

struct {
	uint8 m_nSurfaceType;
	uint8 m_nPieceType;
	uint8 m_lighting;
} typedef ColData;

class PLUGIN_API CColPoint {
public:
	/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CColPointSA.h */

	CVector m_vecPosition;
	float pad;
	CVector       m_vecNormal;
	float pad2;
    
	// actually ColData struct
	// col shape 1 info
	/*unsigned char m_nSurfaceTypeA; // see eSurfaceType
	unsigned char m_nPieceTypeA;
    tColLighting m_nLightingA;*/

	ColData m_dataA;

private:
    char _pad;
public:
	// ColData struct 2
    // col shape 2 info
	/*unsigned char m_nSurfaceTypeB; // see eSurfaceType
	unsigned char m_nPieceTypeB;
    tColLighting m_nLightingB;*/

	ColData m_dataB;
private:
    char _pad2;
public:
    // col depth
	float         m_fDepth;

	void operator=(CColPoint const& right);

    // inlines
	void SetPosition(float x, float y, float z) { m_vecPosition.x = x; m_vecPosition.y = y; m_vecPosition.z = z; }
	void SetPosition(const CVector& pVec)		{ m_vecPosition = pVec; }
	CVector& GetPosition()						{ return m_vecPosition; }

	void SetNormal(float x, float y, float z)	{ m_vecNormal.x = x; m_vecNormal.y = y; m_vecNormal.z = z; }
	void SetNormal(const CVector& pVec) 		{ m_vecNormal = pVec; }
	CVector& GetNormal()						{ return m_vecNormal; }

	void SetDataA(const ColData& colData)		{ m_dataA = colData; }
	ColData GetDataA()							{ return m_dataA; }
	void SetSurfaceTypeA(uint8 nSurfaceType)	{ m_dataA.m_nSurfaceType = nSurfaceType; }
	uint8 GetSurfaceTypeA()						{ return m_dataA.m_nSurfaceType; }
	void SetPieceTypeA(uint8 nPieceType)		{ m_dataA.m_nPieceType = nPieceType; }
	uint8 GetPieceTypeA()						{ return m_dataA.m_nPieceType; }
	void SetLightingA(uint8 nLighting)			{ m_dataA.m_lighting = nLighting; }
	uint8 GetLightingA()						{ return m_dataA.m_lighting; }

	void SetDataB(const ColData& colData)		{ m_dataB = colData; }
	ColData GetDataB()							{ return m_dataB; }
	void SetSurfaceTypeB(uint8 nSurfaceType)	{ m_dataB.m_nSurfaceType = nSurfaceType; }
	uint8 GetSurfaceTypeB()						{ return m_dataB.m_nSurfaceType; }
	void SetPieceTypeB(uint8 nPieceType)		{ m_dataB.m_nPieceType = nPieceType; }
	uint8 GetPieceTypeB()						{ return m_dataB.m_nPieceType; }
	void SetLightingB(uint8 nLighting)			{ m_dataB.m_lighting = nLighting; }
	uint8 GetLightingB()						{ return m_dataB.m_lighting; }

	void SetDepth(float fDepth)					{ m_fDepth = fDepth; }
	float GetDepth()							{ return m_fDepth; }
};

VALIDATE_SIZE(CColPoint, 0x2C);