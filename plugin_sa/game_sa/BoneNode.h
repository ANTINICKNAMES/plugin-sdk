/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plugin.h"
#include "PluginBase.h"
#include "RenderWare.h"
#include "RpHAnimBlendInterpFrame.h"

#include "List_c.h"

struct BoneInfo_t
{
	int16 boneTag;
	int16 parentBoneTag;

	float poseRots[3];
	float xLimits[2];
	float yLimits[2];
	float zLimits[2];
};

class BoneNode_c : public ListItem_c
{
public:
	BoneNode_c();
	~BoneNode_c();

	bool Init(int32 boneTag, RpHAnimBlendInterpFrame* pAnimKeyFrame);

	void AddChild(BoneNode_c* pChildBoneNode);

	void InitLimits();
	void ClampLimitsCurrent(bool xAxis, bool yAxis, bool zAxis);
	void ClampLimitsDefault(bool xAxis, bool yAxis, bool zAxis);
	void GetLimits(int32 axis, float* min, float* max);
	void SetLimits(int32 axis, float min, float max);
	void Limit(float blend);

	float GetSpeed();
	void SetSpeed(float speed);

	void CalcWldMat(RwMatrix* pParentMat);
	void BlendKeyframe(float blend);


//private:
	static void QuatToEuler(RtQuat* quat, RwV3d* euler);
	static void EulerToQuat(RwV3d* euler, RtQuat* quat);

	static int32 GetIdFromBoneTag(int32 boneTag);


	int32 m_boneTag;
	RpHAnimBlendInterpFrame* m_pAnimKeyFrame;
	RtQuat m_keyFrameQuat;
	RwV3d m_keyFrameTrans;

	BoneNode_c* m_parent;
	List_c m_childList;

	RwMatrix m_wldMat;

	RwV3d m_minLimit;
	RwV3d m_maxLimit;

	float m_speed;
};














class BoneNodeManager_c
{
public:
	BoneNodeManager_c();
	~BoneNodeManager_c();

	bool8 Init();
	void Exit();
	void Reset();

	BoneNode_c* GetBoneNode();
	void ReturnBoneNode(BoneNode_c* pBoneNode);
	int32 GetNumBoneNodesLeft();


private:
	BoneNode_c m_boneNodes[128];
	List_c m_boneNodePool;

	static BoneInfo_t ms_boneInfos[32];
};