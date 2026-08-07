/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControllerConfigManager.h"

CControllerConfigManager &ControlsManager = *(CControllerConfigManager *)0xB70198;

void CControllerConfigManager::SaveSettings(int FileHandle)
{
    plugin::CallMethod<0x52D200, CControllerConfigManager*, int>(this, FileHandle);
}

bool CControllerConfigManager::LoadSettings(int FileHandle)
{
    return plugin::CallMethodAndReturn<bool, 0x530530, CControllerConfigManager*, int>(this, FileHandle);
}

// Converted from thiscall bool CControllerConfigManager::GetIsKeyboardKeyDown(RsKeyCodes key) 0x52DDB0
bool CControllerConfigManager::GetIsKeyboardKeyDown(RsKeyCodes RwKeyCodeToCheck) 
{
    return plugin::CallMethodAndReturn<bool, 0x52DDB0, CControllerConfigManager*, RsKeyCodes>(this, RwKeyCodeToCheck);
}

// Converted from thiscall bool CControllerConfigManager::GetIsKeyboardKeyJustDown(RsKeyCodes key) 0x52E450
bool CControllerConfigManager::GetIsKeyboardKeyJustDown(RsKeyCodes RwKeyCodeToCheck)
{
    return plugin::CallMethodAndReturn<bool, 0x52E450, CControllerConfigManager *, RsKeyCodes>(this, RwKeyCodeToCheck);
}

// 0x52F5F0
void CControllerConfigManager::ResetSettingOrder(e_ControllerAction Action) 
{
    plugin::CallMethod<0x52F5F0, CControllerConfigManager*, e_ControllerAction>(this, Action);
}
