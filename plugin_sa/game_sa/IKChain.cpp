/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "IKChain.h"

IKChainManager_c* g_ikChainMan = (IKChainManager_c*)0xC15448;

// 0x617850
IKChain_c::IKChain_c()
{
    plugin::CallMethod<0x617850, IKChain_c*>(this);
}

// 0x618170
IKChain_c::~IKChain_c()
{
    plugin::CallMethod<0x618170, IKChain_c*>(this);
}

// 0x6180A0
bool IKChain_c::Init(char* idString, int32 slotId, CPed* pPed, int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, CEntity* pEntity,
    int32 offsetBoneTag, RwV3d offsetPos, float speed, int32 priority)
{
    return plugin::CallMethodAndReturn<bool, 0x6180A0, IKChain_c*, char*, int32, CPed*, int32, RwV3d, int32, CEntity*, int32, RwV3d, float, int32>
        (this, idString, slotId, pPed, effectorBoneTag, effectorVec, pivotBoneTag, pEntity, offsetBoneTag, offsetPos, speed, priority);
}

// 0x617870
void IKChain_c::Exit()
{
    plugin::CallMethod<0x617870, IKChain_c*>(this);
}

// 0x6186D0
void IKChain_c::Update(float deltaTime)
{
    plugin::CallMethod<0x6186D0, IKChain_c*, float>(this, deltaTime);
}

// 0x617C10
void IKChain_c::SetBlend(float blend)
{
    plugin::CallMethod<0x617C10, IKChain_c*, float>(this, blend);
}

// 0x617C20
void IKChain_c::SetOffsetBoneTag(int32 offsetBoneTag)
{
    plugin::CallMethod<0x617C20, IKChain_c*, int32>(this, offsetBoneTag);
}

// 0x617C30
void IKChain_c::SetOffsetPos(RwV3d offsetPos)
{
    plugin::CallMethod<0x617C30, IKChain_c*, RwV3d>(this, offsetPos);
}

// 0x618520
void IKChain_c::ClampLimits(int32 boneTag, bool xAxis, bool yAxis, bool zAxis, int32 current)
{
    plugin::CallMethod<0x618520, IKChain_c*, int32, bool, bool, bool, int32>(this, boneTag, xAxis, yAxis, zAxis, current);
}

// 0x618584
void IKChain_c::GetLimits(int32 boneTag, int32 axis, float* min, float* max)
{
    plugin::CallMethod<0x618584, IKChain_c*, int32, int32, float*, float*>(this, boneTag, axis, min, max);
}

// 0x6185E0
void IKChain_c::SetLimits(int32 boneTag, int32 axis, float min, float max)
{
    plugin::CallMethod<0x6185E0, IKChain_c*, int32, int32, float, float>(this, boneTag, axis, min, max);
}

// 0x618630
float IKChain_c::GetBoneSpeed(int32 boneTag)
{
    return plugin::CallMethodAndReturn<float, 0x618630, IKChain_c*, int32>(this, boneTag);
}

// 0x618680
void IKChain_c::SetBoneSpeed(int32 boneTag, float speed)
{
    plugin::CallMethod<0x618680, IKChain_c*, int32, float>(this, boneTag, speed);
}

// 0x617C50
int32 IKChain_c::GetPriority()
{
    return plugin::CallMethodAndReturn<int32, 0x617C50, IKChain_c*>(this);
}

// 0x617E00
void IKChain_c::UpdateEntity(CEntity* pEntity)
{
    plugin::CallMethod<0x617E00, IKChain_c*, CEntity*>(this, pEntity);
}

// 0x617E20
void IKChain_c::UpdateOffset(int32 offsetBoneTag, RwV3d offsetPos)
{
    plugin::CallMethod<0x617E20, IKChain_c*, int32, RwV3d>(this, offsetBoneTag, offsetPos);
}

// 0x617E50
void IKChain_c::UpdateTarget(bool update)
{
    plugin::CallMethod<0x617E50, IKChain_c*, bool>(this, update);
}

// 0x617E60
bool IKChain_c::IsFacingTarget()
{
    return plugin::CallMethodAndReturn<bool, 0x617E60, IKChain_c*>(this);
}

// 0x617F21
bool IKChain_c::IsAtTarget(float range, float* dist)
{
    return plugin::CallMethodAndReturn<bool, 0x617F21, IKChain_c*, float, float*>(this, range, dist);
}

// Inlined (?)
CPed* IKChain_c::GetParentPed()
{
    return m_pPed;
}

// 0x617C95
void IKChain_c::SetupBones(int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, AnimBlendFrameData* frameData)
{
    plugin::CallMethod<0x617C95, IKChain_c*, int32, RwV3d, int32, AnimBlendFrameData*>(this, effectorBoneTag, effectorVec, pivotBoneTag, frameData);
}

// 0x6178B0
void IKChain_c::MoveBonesToTarget()
{
    plugin::CallMethod<0x6178B0, IKChain_c*>(this);
}

// 0x617C60
BoneNode_c* IKChain_c::GetBoneNodeFromTag(int32 boneTag)
{
    return plugin::CallMethodAndReturn<BoneNode_c*, 0x617C60, IKChain_c*, int32>(this, boneTag);
}


// 0x617FC0
IKChainManager_c::IKChainManager_c()
{
    plugin::CallMethod<0x617FC0, IKChainManager_c*>(this);
}

// 0x8568E0
IKChainManager_c::~IKChainManager_c()
{
    plugin::CallMethod<0x8568E0, IKChainManager_c*>(this);
}

// 0x6180A0
bool IKChainManager_c::Init()
{
    return plugin::CallMethodAndReturn<bool, 0x6180A0>(this);
}

// 0x6180D0
void IKChainManager_c::Exit()
{
    plugin::CallMethod<0x6180D0, IKChainManager_c*>(this);
}

// 0x618140
void IKChainManager_c::Reset()
{
    plugin::CallMethod<0x618140, IKChainManager_c*>(this);
}

// 0x6186D0
void IKChainManager_c::Update(float deltaTime)
{
    plugin::CallMethod<0x6186D0, IKChainManager_c*, float>(this, deltaTime);
}

// 0x618750
IKChain_c* IKChainManager_c::AddIKChain(char* idString, int32 slotId, CPed* pPed, int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, CEntity* pEntity,
    int32 offsetBoneTag, RwV3d offsetPos, float speed, int32 priority)
{
    return plugin::CallMethodAndReturn<IKChain_c*, 0x618750, IKChainManager_c*, char*, int32, CPed*, int32, RwV3d, int32, CEntity*, int32, RwV3d, float, int32>
        (this, idString, slotId, pPed, effectorBoneTag, effectorVec, pivotBoneTag, pEntity, offsetBoneTag, offsetPos, speed, priority);
}

// 0x618170
void IKChainManager_c::RemoveIKChain(IKChain_c* pIKChain)
{
    plugin::CallMethod<0x618170, IKChainManager_c*, IKChain_c*>(this, pIKChain);
}

// 0x618800
bool IKChainManager_c::CanAccept(CPed* pPed, float range)
{
    return plugin::CallMethodAndReturn<bool, 0x618800, IKChainManager_c*, CPed*, float>(this, pPed, range);
    //return plugin::CallAndReturn<bool, 0x618800, CPed*, float>(pPed, range); // really __stdcall?
}

// 0x6188B0
bool IKChainManager_c::CanAcceptLookAt(CPed* pPed)
{
    return plugin::CallMethodAndReturn<bool, 0x6188B0, IKChainManager_c*, CPed*>(this, pPed);
}

// 0x618970
void IKChainManager_c::LookAt(char* idString, CPed* pPed, CEntity* pEntity, int32 time, int32 offsetBoneTag, RwV3d* pOffsetPos, bool useTorso, float speed, int32 blendTime,
    int32 priority, bool fromScript)
{
    plugin::CallMethod<0x618970, IKChainManager_c*, char*, CPed*, CEntity*, int32, int32, RwV3d*, bool, float, int32, int32, bool>
        (this, idString, pPed, pEntity, time, offsetBoneTag, pOffsetPos, useTorso, speed, blendTime, priority, fromScript);
}

// 0x6181A0
bool IKChainManager_c::IsLooking(CPed* pPed)
{
    return plugin::CallMethodAndReturn<bool, 0x6181A0, IKChainManager_c*, CPed*>(this, pPed);
}

// 0x6181D0
CEntity* IKChainManager_c::GetLookAtEntity(CPed* pPed)
{
    return plugin::CallMethodAndReturn<CEntity*, 0x6181D0, IKChainManager_c*, CPed*>(this, pPed);
}

// 0x618210
void IKChainManager_c::GetLookAtOffset(CPed* pPed, CVector* pOffset)
{
    plugin::CallMethod<0x618210, IKChainManager_c*, CPed*, CVector*>(this, pPed, pOffset);
    //plugin::Call<0x618210, CPed*, CVector*>(pPed, pOffset); // really __stdcall?
}

// 0x618280
void IKChainManager_c::AbortLookAt(CPed* pPed, int32 blendTime)
{
    plugin::CallMethod<0x618280, IKChainManager_c*, CPed*, int32>(this, pPed, blendTime);
}

// 0x618B60
void IKChainManager_c::PointArm(char* idString, int32 armId, CPed* pPed, CEntity* pEntity, int32 offsetBoneTag, RwV3d* pOffsetPos, float speed, int32 blendTime, float cullDist)
{
    plugin::CallMethod<0x618B60, IKChainManager_c*, char*, int32, CPed*, CEntity*, int32, RwV3d*, float, int32, float>
        (this, idString, armId, pPed, pEntity, offsetBoneTag, pOffsetPos, speed, blendTime, cullDist);
}

// 0x6182B0
bool IKChainManager_c::IsArmPointing(int32 armId, CPed* pPed)
{
    return plugin::CallMethodAndReturn<bool, 0x6182B0, IKChainManager_c*, int32, CPed*>(this, armId, pPed);
}

// 0x6182F0
void IKChainManager_c::AbortPointArm(int32 armId, CPed* pPed, int32 blendTime)
{
    plugin::CallMethod<0x6182F0, IKChainManager_c*, int32, CPed*, int32>(this, armId, pPed, blendTime);
}

// 0x618330
bool IKChainManager_c::IsFacingTarget(CPed* pPed, int32 slotId)
{
    return plugin::CallMethodAndReturn<bool, 0x618330, IKChainManager_c*, CPed*, int32>(this, pPed, slotId);
}