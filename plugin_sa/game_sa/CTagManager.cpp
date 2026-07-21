/*
Plugin-SDK (Grand Theft Auto San Andreas) Source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTagManager.h"

CTagManager::TagDesc (&CTagManager::ms_tagDesc)[CTagManager::MAX_TAGS] = *(CTagManager::TagDesc(*)[CTagManager::MAX_TAGS])0xA9A8C0;
uint32 ms_numTags = *(uint32*)0xA9AD70;
uint32 ms_numTagged = *(uint32*)0xA9AD74;

void CTagManager::UpdateNumTagged()
{
	plugin::Call<0x49CDE0>();
}

// 0x5D3D60
void CTagManager::Save() {
	plugin::Call<0x5D3D60>();
}

// 0x5D3DA0
void CTagManager::Load() {
	plugin::Call<0x5D3DA0>();
}