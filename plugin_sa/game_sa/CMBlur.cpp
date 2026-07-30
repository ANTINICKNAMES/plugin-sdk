/*
	Plugin-SDK (Grand Theft Auto San Andreas) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CMBlur.h"

float& CMBlur::Drunkness = *(float*)0xC73C58;

// I dunno others
//bool& CMBlur::BlurOn = *(bool*)0x0;

//bool& CMBlur::ms_bJustInitialised = *(bool*)0x0;
//int32& CMBlur::pBufVertCount = *(int32*)0x0;
//RwRaster*& CMBlur::pFrontBuffer = *(RwRaster**)0x0;

void CMBlur::MotionBlurRender(RwCamera* camera, RwUInt32 m_BlurRed, RwUInt32 m_BlurGreen, RwUInt32 m_BlurBlue, RwUInt32 alpha, int BlurType, RwUInt32 AddAlpha)
{
	plugin::Call<0x71D700, RwCamera*, RwUInt32, RwUInt32, RwUInt32, RwUInt32, int, RwUInt32>(camera, m_BlurRed, m_BlurGreen, m_BlurBlue, alpha, BlurType, AddAlpha);
}

RwBool CMBlur::MotionBlurOpen(RwCamera* camera)
{
	return plugin::CallAndReturn<RwBool, 0x71D710, RwCamera*>(camera);
}

RwBool CMBlur::MotionBlurClose()
{
	return plugin::CallAndReturn<RwBool, 0x71D720>();
}

void CMBlur::SetDrunkBlur(float value)
{
	plugin::Call<0x71D780, float>(value);
}

void CMBlur::ClearDrunkBlur()
{
	plugin::Call<0x71D730>();
}