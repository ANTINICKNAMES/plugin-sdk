/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "BoneNode.h"

// 0x616B30
BoneNode_c::BoneNode_c()
{
    plugin::CallMethod<0x616B30, BoneNode_c*>(this);
}

// 0x616B80
BoneNode_c::~BoneNode_c()
{
    plugin::CallMethod<0x616B80, BoneNode_c*>(this);
}

// 0x6177B0
bool BoneNode_c::Init(int32 boneTag, RpHAnimBlendInterpFrame* pAnimKeyFrame)
{
    return plugin::CallMethodAndReturn<bool, 0x6177B0, BoneNode_c*, int32, RpHAnimBlendInterpFrame*>(this, boneTag, pAnimKeyFrame);
}

// 0x616BD0
void BoneNode_c::AddChild(BoneNode_c* pChildBoneNode)
{
    plugin::CallMethod<0x616BD0, BoneNode_c*, BoneNode_c*>(this, pChildBoneNode);
}

// 0x617490
void BoneNode_c::InitLimits()
{
    plugin::CallMethod<0x617490, BoneNode_c*>(this);
}

// 0x6175D0
void BoneNode_c::ClampLimitsCurrent(bool xAxis, bool yAxis, bool zAxis)
{
    plugin::CallMethod<0x6175D0, BoneNode_c*, bool, bool, bool>(this, xAxis, yAxis, zAxis);
}

// 0x617530
void BoneNode_c::ClampLimitsDefault(bool xAxis, bool yAxis, bool zAxis)
{
    plugin::CallMethod<0x617530, BoneNode_c*, bool, bool, bool>(this, xAxis, yAxis, zAxis);
}

// 0x616BF0
void BoneNode_c::GetLimits(int32 axis, float* min, float* max)
{
    plugin::CallMethod<0x616BF0, BoneNode_c*, int32, float*, float*>(this, axis, min, max);
}

// 0x616C50
void BoneNode_c::SetLimits(int32 axis, float min, float max)
{
    plugin::CallMethod<0x616C50, BoneNode_c*, int32, float, float>(this, axis, min, max);
}

// 0x617650
void BoneNode_c::Limit(float blend)
{
    plugin::CallMethod<0x617650, BoneNode_c*, float>(this, blend);
}

// 0x616CB0
float BoneNode_c::GetSpeed()
{
    return plugin::CallMethodAndReturn<float, 0x616CB0, BoneNode_c*>(this);
}

// 0x616CC0
void BoneNode_c::SetSpeed(float speed)
{
    plugin::CallMethod<0x616CC0, BoneNode_c*, float>(this, speed);
}

// 0x616CD0
void BoneNode_c::CalcWldMat(RwMatrix* pParentMat)
{
    plugin::CallMethod<0x616CD0, BoneNode_c*, RwMatrix*>(this, pParentMat);
}

// 0x616E30
void BoneNode_c::BlendKeyframe(float blend)
{
    plugin::CallMethod<0x616E30, BoneNode_c*, float>(this, blend);
}

// 0x617080
void BoneNode_c::QuatToEuler(RtQuat* quat, RwV3d* euler)
{
    plugin::Call<0x617080, RtQuat*, RwV3d*>(quat, euler);
}

// 0x6171F0
void BoneNode_c::EulerToQuat(RwV3d* euler, RtQuat* quat)
{
    plugin::Call<0x6171F0, RwV3d*, RtQuat*>(euler, quat);
}

// 0x617050
int32 BoneNode_c::GetIdFromBoneTag(int32 boneTag)
{
    return plugin::CallAndReturn<int32, 0x617050, int32>(boneTag);
}