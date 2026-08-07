/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "BoneNode.h"
#include "CPed.h"

class IKChain_c : public ListItem_c
{
public:
	IKChain_c();
	~IKChain_c();

	bool Init(char* idString, int32 slotId, CPed* pPed, int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, CEntity* pEntity, int32 offsetBoneTag, 
		RwV3d offsetPos, float speed, int32 priority);
	void Exit();

	void Update(float deltaTime);

	void SetBlend(float blend);
	void SetOffsetBoneTag(int32 offsetBoneTag);
	void SetOffsetPos(RwV3d offsetPos);

	void ClampLimits(int32 boneTag, bool xAxis, bool yAxis, bool zAxis, int32 current);
	void GetLimits(int32 boneTag, int32 axis, float* min, float* max);
	void SetLimits(int32 boneTag, int32 axis, float min, float max);

	float GetBoneSpeed(int32 boneTag);
	void SetBoneSpeed(int32 boneTag, float speed);

	int32 GetPriority();

	void UpdateEntity(CEntity* pEntity);
	void UpdateOffset(int32 offsetBoneTag, RwV3d offsetPos);
	void UpdateTarget(bool update);


	bool IsFacingTarget();
	bool IsAtTarget(float range, float* dist);
	CPed* GetParentPed();


//private:
	void SetupBones(int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, AnimBlendFrameData* frameData);
	void MoveBonesToTarget();

	BoneNode_c* GetBoneNodeFromTag(int32 boneTag);

	
	CPed* m_pPed;

	int32 m_numBoneNodes;
	BoneNode_c** m_ppBoneNodes;

	RwMatrix* m_pPivotWldMat;

	float m_blend;

	static BoneInfo_t ms_boneInfos[32];


	int16 m_effectorBoneTag;
	RwV3d m_effectorVec;
	int16 m_pivotBoneTag;
	CEntity* m_pEntity;
	int32 m_offsetBoneTag;
	RwV3d m_offsetPos;
	float m_speed;

	RwV3d m_targetPos;
	bool m_updateTarget;
	uint8 m_slotId;
	int8 m_priority;
};


class IKChainManager_c
{
public:
	IKChainManager_c();
	~IKChainManager_c();

	bool Init();
	void Exit();
	void Reset();

	void Update(float deltaTime);

	IKChain_c* AddIKChain(char* idString, int32 slotId, CPed* pPed, int32 effectorBoneTag, RwV3d effectorVec, int32 pivotBoneTag, CEntity* pEntity, int32 offsetBoneTag, 
		RwV3d offsetPos, float speed, int32 priority);
	void RemoveIKChain(IKChain_c* pIKChain);


	bool CanAccept(CPed* pPed, float range);
	bool CanAcceptLookAt(CPed* pPed);
	void LookAt(char* idString, CPed* pPed, CEntity* pEntity, int32 time, int32 offsetBoneTag, RwV3d* pOffsetPos, bool useTorso, float speed, int32 blendTime, int32 priority, 
		bool fromScript);
	bool IsLooking(CPed* pPed);
	CEntity* GetLookAtEntity(CPed* pPed);
	void GetLookAtOffset(CPed* pPed, CVector* pOffset);
	void AbortLookAt(CPed* pPed, int32 blendTime);

	void PointArm(char* idString, int32 armId, CPed* pPed, CEntity* pEntity, int32 offsetBoneTag, RwV3d* pOffsetPos, float speed, int32 blendTime, float cullDist);
	bool IsArmPointing(int32 armId, CPed* pPed);
	void AbortPointArm(int32 armId, CPed* pPed, int32 blendTime);

	bool IsFacingTarget(CPed* pPed, int32 slotId);


//private:
	IKChain_c m_ikChains[32];


	List_c m_ikChainList;
	List_c m_ikChainPool;
};

extern IKChainManager_c* g_ikChainMan;