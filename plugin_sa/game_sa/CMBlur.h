/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

enum 
{ 
	MB_FX_WATERDROP_1 = 0, 
	MB_FX_WATERDROP_2, 
	MB_FX_BLOODDROP_1, 
	MB_FX_BLOODDROP_2, 
	MB_FX_HEATHAZE, 
	MB_FX_WATER_HYDRANT_1, 
	MB_FX_WATER_HYDRANT_2, 
	MB_FX_WATER_HYDRANT_3, 
	MB_FX_MAXNUM 
} typedef FxType;

class CMBlur
{
public:
	//CMBlur();
	//~CMBlur();

	//static void Initialise();
	static void MotionBlurRender(RwCamera* camera, RwUInt32 m_BlurRed, RwUInt32 m_BlurGreen, RwUInt32 m_BlurBlue, RwUInt32 alpha, int BlurType, RwUInt32 AddAlpha);
	static RwBool MotionBlurOpen(RwCamera* camera);
	static RwBool MotionBlurClose();
	//static RwBool AddRenderFx(RwCamera*, RwRect*, float, FxType);
	//static void OverlayRenderFx(RwCamera* camera, RwRaster* ras);
	static void SetDrunkBlur(float value);
	static void ClearDrunkBlur();

	//static bool& BlurOn;
	static float& Drunkness;
	//static bool& ms_bJustInitialised;
	//static int32& pBufVertCount;
	//static RwRaster*& pFrontBuffer;

	/*
//private:
public:
	static void OverlayRender(RwCamera* camera, RwRaster* ras, RwRGBA col, int Type, int ExtraAlpha);
	static void CreateImmediateModeData(RwCamera* camera, RwRect* rect);
	static void CreateImmediateModeData(RwCamera* camera, RwRect* rect, RwIm2DVertex* vertex, RwRGBA col, float du, float dv, float dU, float dV, float ZValue, RwBool Mask);
	static RwBool CheckWithinHudArea(RwRect*);
	static RwBool PosInside(RwRect*, float, float, float, float);
	*/
};