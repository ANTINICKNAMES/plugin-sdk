/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CTaskComplexGoPickUpEntity.h"

CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity(CEntity* pEntity, AssocGroupId nAnimGroup) : CTaskComplex(plugin::dummy)
{
	plugin::CallMethod<0x6919C0, CTaskComplexGoPickUpEntity*, CEntity*, AssocGroupId>(this, pEntity, nAnimGroup);
}