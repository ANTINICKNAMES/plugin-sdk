/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGarages.h"

char *CGarages::MessageIDString = (char *)0x96C014;
Int32& CGarages::MessageNumberInString = *(Int32*)0x96C010;
Int32& CGarages::MessageNumberInString2 = *(Int32*)0x96C00C;

// 0x449FF0
void CGarage::FindDoorsWithGarage(CObject** ppDoor1, CObject** ppDoor2)
{
    plugin::CallMethod<0x449FF0, CGarage*, CObject**, CObject**>(this, ppDoor1, ppDoor2);
}

// 0x449BA0
bool CGarages::IsPointInAGarageCameraZone(CVector Coors)
{
    return plugin::CallAndReturn<bool, 0x449BA0, CVector>(Coors);
}

bool CGarages::CameraShouldBeOutside()
{
    return plugin::CallAndReturn<bool, 0x448650>();
}

bool CGarages::Save() {
    return plugin::CallAndReturn<bool, 0x5D3270>();
}

bool CGarages::Load() {
    return plugin::CallAndReturn<bool, 0x5D3270>();
}