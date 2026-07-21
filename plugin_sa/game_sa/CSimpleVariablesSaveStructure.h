/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CGame.h"
#include "CWanted.h"

class CSimpleVariablesSaveStructure
{
public:
	uint32 m_VersionNumber;
	GxtChar m_MissionName[100];
	uint8 m_MissionPackGame;
	eLevelName m_CurrLevel;
	CVector m_CameraPosition;
	UInt32 m_MillisecondsPerGameMinute;
	UInt32 m_LastClockTick;
	UInt8 m_GameClockMonths;
	UInt8 m_GameClockDays;
	UInt8 m_GameClockHours;
	UInt8 m_GameClockMinutes;
	UInt8 m_CurrentDay;
	UInt8 m_StoredGameClockMonths;
	UInt8 m_StoredGameClockDays;
	UInt8 m_StoredGameClockHours;
	UInt8 m_StoredGameClockMinutes;
	UInt8 m_ClockStored;
	UInt16 m_PadMode;
	bool m_bHasPlayerCheated;
	UInt32 m_TimeInMilliseconds;
	float m_TimeScale;
	float m_TimeStep;
	float m_TimeStepNonClipped;
	UInt32 m_FrameCounter;
	UInt16 m_OldWeatherType;
	UInt16 m_NewWeatherType;
	UInt16 m_ForcedWeatherType;
	float m_InterpolationValue;
	Int32 m_WeatherTypeInList;
	float m_Rain;
	Int32 m_CarZoom;
	Int32 m_PedZoom;
	eVisibleArea m_CurrArea;
	bool m_InvertLook4Pad;
	Int32 m_ExtraColour;
	bool m_ExtraColourOn;
	float m_ExtraColourInter;
	Int32 m_ExtraColourWeatherType;
	Int32 m_WaterConfiguration;
	bool m_bLARiots;
	bool m_bLARiots_NoPoliceCars;

	eWantedLevel m_MaximumWantedLevel;
	int32 m_nMaximumWantedLevel;

	bool8 m_frenchGame;
	bool8 m_germanGame;
	bool8 m_nastyGame;

	UInt32 m_SavedRadioPosition[11];
	int8 m_bCineyCamMessageDisplayed;




	bool m_BlurOn;
	Int8 m_PrefsMusicVolume;
	Int8 m_PrefsSfxVolume;
	bool8 m_PrefsUseVibration;
	Int8 m_PrefsRadioStation;
	bool8 m_PrefsShowSubtitles;
	int8 m_PrefsLanguage;
	bool8 m_PrefsUseWideScreen;
	int32 m_ScreenXOffset;
	int32 m_ScreenYOffset;
	bool8 m_PrefsDisplayHud;
	Int32 m_PrefsRadarMode;
	bool8 m_PrefsUseBass;
	bool8 m_PrefsAutoRetune;
	Int8 m_PrefsAudioOutputMode;

	int32 m_waypoint_blip;

	bool m_bHasDisplayedPlayerQuitEnterCarHelpText;
	bool m_bTaxiNitroCheat;
	bool m_bPimpCheat;

	int m_CPIndex;

	void Construct();
	void Extract(uint32& versionNum);
};