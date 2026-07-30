#pragma once

// wrapper around float versions of functions
// in gta they are in CMaths but that makes the code rather noisy

#include "PluginBase.h"
#include "Other.h"

#define ABS(a) (CMaths::Abs((a)))
#define MIN(a, b) (CMaths::Min((a), (b))) // (std::min((a), (b)))
#define MAX(a, b) (CMaths::Max((a), (b))) // (std::max((a), (b)))

class PLUGIN_API CMaths
{
	static float* ms_SinTable; //[256];


public:
	static void InitMathsTables() { plugin::Call<0x59AC90>(); }


	static float Sin(float f)				{ return plugin::CallAndReturn<float, 0x7665C1, float>(f); }
	static float Cos(float f)				{ return plugin::CallAndReturn<float, 0x7665C1, float>(f); }
	static float Tan(float f)				{ return std::tan(f); }
	static float ASin(float f)				{ return plugin::CallAndReturn<float, 0x4207A0, float>(f); }
	static float ACos(float f)				{ return plugin::CallAndReturn<float, 0x766575, float>(f); }
	static float ATan(float f)				{ return plugin::CallAndReturn<float, 0x4207E0, float>(f); }
	static float ATan2(float f1, float f2)	{ return plugin::CallAndReturn<float, 0x4207F0, float, float>(f1, f2); }


	static float Sqr(float f)					{ return plugin::CallAndReturn<float, 0x4119B0, float>(f); }
	static float Sqrt(float f)					{ return plugin::CallAndReturn<float, 0x406D00, float>(f); }
	static float RecipSqrt(float arg)			{ return 1.f / Sqrt(arg); }
	static float RecipSqrt(float n, float d)	{ return n / Sqrt(d); }

	static float Pow(float f1, float f2)	{ return plugin::CallAndReturn<float, 0x470000, float>(f1, f2); }
	static float Log10(float f)				{ return std::log10(f); } //{ return plugin::CallAndReturn<float, 0x, float>(f); }

	static float Ceil(float f)				{ return plugin::CallAndReturn<float, 0x823820, float>(f); }
	static float Floor(float f)				{ return plugin::CallAndReturn<float, 0x406CE0, float>(f); }
	static float Abs(float f)				{ return plugin::CallAndReturn<float, 0x406D10, float>(f); }
	static float Min(float v1, float v2)	{ return plugin::CallAndReturn<float, 0x404330, float, float>(v1, v2); }
	static float Max(float v1, float v2)	{ return plugin::CallAndReturn<float, 0x420800, float, float>(v1, v2); }

	static float Clamp(float val, const float minval, const float maxval)	{ return std::clamp(val, minval, maxval); } //{ return plugin::CallAndReturn<float, 0x, float>(f); }
	static bool Eq(const float val1, const float val2, const float epsilon) { return plugin::CallAndReturn<float, 0x4EEA80, const float, const float, const float>(val1, val2, epsilon); }


	static float MultNorm(float a, float b) { return a * (1.0f - b); }
	//static float NormalizeMultErr(float f);


	static float SinTabel(float Arg) { return plugin::CallAndReturn<float, 0x4A1340, float>(Arg); }
	static float CosTabel(float Arg) { return plugin::CallAndReturn<float, 0x4A1360, float>(Arg); }
};

float* CMaths::ms_SinTable = (float*)0xBB3DFC; //[256]




/*
class PLUGIN_API CMaths
{
public:
	static float Sin(float x) { return sinf(x); }
	static float Asin(float x) { return asinf(x); }
	static float Cos(float x) { return cosf(x); }
	static float Acos(float x) { return acosf(x); }
	static float Tan(float x) { return tanf(x); }
	static float Atan(float x) { return atanf(x); }
	static float Atan2(float y, float x) { return atan2f(y, x); }
	static float Abs(float x) { return fabsf(x); }
	static float Sqrt(float x) { return sqrtf(x); }
	static float RecipSqrt(float x, float y) { return x / Sqrt(y); }
	static float RecipSqrt(float x) { return RecipSqrt(1.0f, x); }
	static float Pow(float x, float y) { return powf(x, y); }
	static float Floor(float x) { return floorf(x); }
	static float Ceil(float x) { return ceilf(x); }
};
*/