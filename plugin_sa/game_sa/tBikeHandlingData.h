/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API tBikeHandlingData {
	tVehicleType nVehicleID;

	float fLeanFwdCOMMult;
	float fLeanFwdForceMult;
	float fLeanBakCOMMult;
	float fLeanBakForceMult;
	float fMaxBankAngle;
	float fFullAnimAngle;

	float fDesLeanReturnFrac;
	float fSpeedSteerFrac;
	float fSlippySpeedSteerMult;

	float fNoRiderCOMz;
	float fWheelieBalancePoint;
	float fStoppieBalancePoint;
	float fWheelieSteerMult;
	float fRearBalanceMult;
	float fFrontBalanceMult;
};

VALIDATE_SIZE(tBikeHandlingData, 0x40);
