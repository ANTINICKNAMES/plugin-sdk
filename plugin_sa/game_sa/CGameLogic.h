/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CPlayerPed.h"

class PLUGIN_API CGameLogic {
public:
	static bool			&SkipToBeFinishedByScript;
	static CVehicle*	&SkipVehicle;
	static UInt32		&SkipTimer;
	static Int32		&SkipState;
	static float		&fSkipAngle;
	static bool			&bScriptCoopGameGoingOn;
	static unsigned int	&TimeOfLastEvent;
	static char			&GameState;
	static char			&bPlayersCannotTargetEachother;
	static bool			&bPlayersCanBeInSeparateCars;

	static void InitAtStartOfGame();
	static bool IsCoopGameGoingOn();
	static void Remove2ndPlayerIfPresent();
	static void SortOutStreamingAndMemory(CVector *translation, float angle);
	static void PassTime(unsigned int time);
	static void ClearSkip(char a1);
	static bool SkipCanBeActivated();
	static bool IsPointWithinLineArea(CVector* pPointArray, int32_t NumPoints, CVector TestPoint);
	static void SetPlayerWantedLevelForForbiddenTerritories(char townNumber);
	static long double CalcDistanceToForbiddenTrainCrossing(float x1, float y1, float z1, float x2, float y2, float z2, char a7, CVector* a8);
	static bool LaRiotsActiveHere();
	static signed int RestorePedsWeapons(int a1);
	static bool IsPlayerAllowedToGoInThisDirection(CPed *a1, float a2, float a3, float a4, float a5);
	static void RestorePlayerStuffDuringResurrection(CPlayerPed *player, float x, float y, float z, float fAngle);
	static void UpdateSkip();
	static void ResetStuffUponResurrection();
	static void Update();
	static void Save();
	static void Load();
};
