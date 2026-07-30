/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CDraw {
public:
    static float &ms_fFOV; // default 45.0
    static float &ms_fLODDistance;
    static float &ms_fFarClipZ;
    static float &ms_fNearClipZ;
    static float &ms_fAspectRatio;
    static UInt8 &FadeRed, &FadeGreen, &FadeBlue;
    static UInt8 &FadeValue;

    //static void SetFOV(float fovValue);
    //static float CalculateAspectRatio();

    static void SetNearClipZ(float f) { ms_fNearClipZ = f; }
    static float GetNearClipZ() { return ms_fNearClipZ; }
    static void SetFarClipZ(float f) { ms_fFarClipZ = f; }
    static float GetFarClipZ() { return ms_fFarClipZ; }
    static void SetLODDistance(float f) { ms_fLODDistance = f; }
    static float GetLODDistance() { return ms_fLODDistance; }
    static void SetFOV(float fFOV);
    static float GetFOV() { return ms_fFOV; }
    static float CalculateAspectRatio();
    static float GetAspectRatio() { return ms_fAspectRatio; }

    //static void InitialiseFog();
};