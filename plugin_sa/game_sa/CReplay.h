/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CReplay {
	enum {
		MODE_RECORD = 0,
		MODE_PLAYBACK = 1
	};

	enum {
		REPLAYCAMMODE_ASSTORED = 0,
		REPLAYCAMMODE_TOPDOWN,
		REPLAYCAMMODE_FIXED
	};

	enum {
		REPLAYPACKET_END = 0,
		REPLAYPACKET_VEHICLE,
		REPLAYPACKET_BIKE,
		REPLAYPACKET_PED_HEADER,
		REPLAYPACKET_PED_UPDATE,
		REPLAYPACKET_GENERAL,
		REPLAYPACKET_CLOCK,
		REPLAYPACKET_WEATHER,
		REPLAYPACKET_ENDOFFRAME,
		REPLAYPACKET_TIMER,
		REPLAYPACKET_BULLET_TRACES,
		REPLAYPACKET_PARTICLE,
		REPLAYPACKET_MISC
	};

	enum {
		REPLAYBUFFER_UNUSED = 0,
		REPLAYBUFFER_PLAYBACK = 1,
		REPLAYBUFFER_RECORD = 2
	};

	enum {
		NUM_REPLAYBUFFERS = 8,
		REPLAYBUFFERSIZE = 100000
	};
public:
	static char &Mode;

public:
	// inlines
	static bool ReplayGoingOn() { return Mode == MODE_PLAYBACK; }
};