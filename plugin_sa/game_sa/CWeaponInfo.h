/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponFlags.h"
#include "eWeaponType.h"
#include "eWeaponFire.h"
#include "CVector.h"
#include "AnimManagerData.h" //#include "eAnimations.h"

#define MAX_WEAPON_INFOS 80
#define MAX_WEAPON_NAMES 50
#define MAX_WEAPONINFO_AIM_OFFSETS 21

#define WEAPONINFO_NUM_WEAPONS_WITH_SKILLS 11
#define WEAPONINFO_NUM_WEAPONS 46

enum eWeaponSlot
{
	WEAPONSLOT_TYPE_UNARMED = 0,
	WEAPONSLOT_TYPE_MELEE,
	WEAPONSLOT_TYPE_HANDGUN,
	WEAPONSLOT_TYPE_SHOTGUN,
	WEAPONSLOT_TYPE_SMG,
	WEAPONSLOT_TYPE_RIFLE,
	WEAPONSLOT_TYPE_SNIPER,
	WEAPONSLOT_TYPE_HEAVY,
	WEAPONSLOT_TYPE_THROWN,
	WEAPONSLOT_TYPE_SPECIAL,
	WEAPONSLOT_TYPE_GIFT,
	WEAPONSLOT_TYPE_PARACHUTE,
	WEAPONSLOT_TYPE_DETONATOR,
	WEAPONSLOT_MAX // NOTSA
};

enum eWeaponSkill
{
	WEAPONSKILL_POOR = 0,
	WEAPONSKILL_STD,
	WEAPONSKILL_PRO,
	WEAPONSKILL_SPECIAL,
	WEAPONSKILL_MAX_NUMBER
};

enum eFireType
{
	FIRETYPE_MELEE = 0,
	FIRETYPE_INSTANT_HIT,
	FIRETYPE_PROJECTILE,
	FIRETYPE_AREA_EFFECT,
	FIRETYPE_CAMERA,
	FIRETYPE_USE,
	FIRETYPE_LAST_FIRETYPE
};

struct
{
	float fAimFromX;
	float fAimFromZ;
	float fDuckAimX;
	float fDuckAimZ;

	uint16 nReloadSampleA;
	uint16 nReloadSampleB;
	uint16 nReloadSampleCrouchedA;
	uint16 nReloadSampleCrouchedB;
} typedef tAnimAimOffsets;

class CWeaponInfo {
public:
    /* some info here https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CWeaponInfoSA.h */
	eFireType	   m_eFireType; // see eFireType //eWeaponFire

    float          m_fTargetRange; // max targeting range (for autoaim/HUD triangle drawing)
    float          m_fWeaponRange; // absolute gun range / default melee attack range
    int            m_modelId; // modelinfo id
    int            m_modelId2; // second modelinfo id

	int32		   m_nWeaponSlot;

	union {
		struct {
			unsigned int bCanAim : 1;
			unsigned int bAimWithArm : 1;
			unsigned int b1stPerson : 1;
			unsigned int bOnlyFreeAim : 1;
			unsigned int bMoveAim : 1; // can move when aiming
			unsigned int bMoveFire : 1; // can move when firing
			unsigned int b06 : 1; // this bitfield is not used
			unsigned int b07 : 1; // this bitfield is not used
			unsigned int bThrow : 1;
			unsigned int bHeavy : 1; // can't run fast with this weapon
			unsigned int bContinuosFire : 1;
			unsigned int bTwinPistol : 1;
			unsigned int bReload : 1; // this weapon can be reloaded
			unsigned int bCrouchFire : 1; // can reload when crouching
			unsigned int bReload2Start : 1; // reload directly after firing
			unsigned int bLongReload : 1;
			unsigned int bSlowdown : 1;
			unsigned int bRandSpeed : 1;
			unsigned int bExpands : 1;
		} flags;
		int32 m_nFlags;
	};


	AssocGroupId   m_animGroup; // instead of storing pointers directly to anims, use anim association groups


	int16		   m_nAmmo; // m_nAmmoClip, ammo in one clip
	int16		   m_nDamage; // damage inflicted per hit
	CVector		   m_vecFireOffset; // offset from weapon origin to projectile starting point


	eWeaponSkill   m_SkillLevel; // what's the skill level of this weapontype
	int32		   m_nReqStatLevel; // what stat level is required for this skill level
	float          m_fAccuracy; // modify accuracy of weapon
	float          m_fMoveSpeed; // how fast can move with weapon


	float          m_animLoopStart; // start of animation loop
	float          m_animLoopEnd; // end of animation loop
	float		   m_animFireTime; // time in animation when weapon should be fired

	float		   m_anim2LoopStart; // start of animation2 loop
	float		   m_anim2LoopEnd; // end of animation2 loop
	float		   m_anim2FireTime; // time in animation2 when weapon should be fired

	float          m_animBreakoutTime; // time after which player can break out of attack and run off


	float          m_fSpeed; // speed of projectile
	float          m_fRadius; // radius affected
	float          m_fLifeSpan; // time taken for shot to dissipate
	float          m_fSpread; // angle inside which shots are created

	int16		   m_nAimOffsetIndex; // index into array of aiming offsets


	int8		   m_defaultCombo; // base combo for this melee weapon
	int8		   m_nCombosAvailable; // how many further combos are available


	// functions
	CWeaponInfo();
	~CWeaponInfo();

	// static variables

	// weapon names array. Count: MAX_WEAPON_NAMES(50)
	static char **ms_aWeaponNames;

	// list of aimoffsets. Count: MAX_WEAPONINFO_AIM_OFFSETS (21) 
	static tAnimAimOffsets* ms_aWeaponAimOffsets;

	// static functions

	// load weapon data file
	static void LoadWeaponData();
	// get weapon info for this type and with this skill
	static CWeaponInfo *GetWeaponInfo(eWeaponType weaponType, unsigned char skill = 0);
	// get weapon type by name
	static eWeaponType FindWeaponType(char *name);
	// get weapon fire type by name
	static eWeaponFire FindWeaponFireType(char *name);
	// initialisation
	static void Initialise();
	// closing
	static void Shutdown();

	//0x743CD0
	int32 GetSkillStatIndex(eWeaponType WeaponType);
	float GetTargetHeadRange();

	int32 GetWeaponFiringRate(); // { return (m_animLoopEnd - m_animLoopStart) * 900.f; }
	int32 GetWeaponReloadTime();

	// inlines
	int32 GetRequiredSkillStat(eWeaponType WeaponType, int8 Skill)	{ GetWeaponInfo(WeaponType, Skill)->m_nReqStatLevel; }

	eFireType GetWeaponFireType()	{ return m_eFireType; }
	float GetTargetRange()			{ return m_fTargetRange; }
	float GetWeaponRange()			{ return m_fWeaponRange; }

	int32 GetModelId()	{ return m_modelId; }
	int32 GetModelId2()	{ return m_modelId2; }

	int32 GetWeaponFlags()			{ return m_nFlags; }
	bool IsWeaponFlagSet(uint32 flag)	{ return (m_nFlags & flag) != 0; }


	AssocGroupId GetAnimGroup()	{ return m_animGroup; }

	int16 GetWeaponAmmo()			{ return m_nAmmo; }
	int16 GetWeaponDamage()			{ return m_nDamage; }
	CVector GetWeaponFireOffset()	{ return m_vecFireOffset; }

	eWeaponSkill GetSkillLevel()	{ return m_SkillLevel; }
	float GetAccuracy()				{ return m_fAccuracy; }
	float GetMoveSpeed()			{ return m_fMoveSpeed; }


	float GetAnimLoopStart(bool bDuck)	{ if (bDuck) return GetAnim2LoopStart(); else return m_animLoopStart; }
	float GetAnimLoopEnd(bool bDuck)	{ if (bDuck) return GetAnim2LoopEnd(); else return m_animLoopEnd; }
	float GetAnimFireTime(bool bDuck)	{ if (bDuck) return GetAnim2FireTime(); else return m_animFireTime; }

	float GetAnim2LoopStart()	{ return m_anim2LoopStart; }
	float GetAnim2LoopEnd()		{ return m_anim2LoopEnd; }
	float GetAnim2FireTime()	{ return m_anim2FireTime; }

	float GetAnimBreakoutTime() { return m_animBreakoutTime; }


	float GetWeaponSpeed()		{ return m_fSpeed; }
	float GetWeaponRadius()		{ return m_fRadius; }
	float GetWeaponLifeSpan()	{ return m_fLifeSpan; }
	float GetWeaponSpread()		{ return m_fSpread; }

	//AnimationId GetAnimation() { return; }
	//AnimationId GetReloadAnim()			{ return ; }
	//AnimationId GetCrouchFireAnim()		{ return ; }
	AnimationId GetCrouchReloadAnim();

	/*bool IsThrowWeapon()							{ return ; }
	static bool IsWeaponAGift(eWeaponType Weapon)	{ return ; }*/

	float GetAimOffsetX(bool bDuck) 
	{ 
		if (bDuck)
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].fDuckAimX;
		else
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].fAimFromX;
	}

	float GetAimOffsetZ(bool bDuck)
	{ 
		if (bDuck)
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].fDuckAimZ;
		else
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].fAimFromZ;
	}

	uint16 GetReloadSampleTimeA(bool bDuck);
	/*{
		if (bDuck) 
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].nReloadSampleCrouchedA; 
		else 
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].nReloadSampleA; 
	}*/

	uint16 GetReloadSampleTimeB(bool bDuck);
	/*{
		if (bDuck) 
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].nReloadSampleCrouchedB; 
		else 
			return ms_aWeaponAimOffsets[m_nAimOffsetIndex].nReloadSampleB; 
	}*/
};

VALIDATE_SIZE(CWeaponInfo, 0x70);

// list of weapon infos. Count: MAX_WEAPON_INFOS (80)
extern CWeaponInfo *aWeaponInfo;

// list of aimoffsets. Count: MAX_WEAPONINFO_AIM_OFFSETS (21)
//extern tAnimAimOffsets *ms_aWeaponAimOffsets;