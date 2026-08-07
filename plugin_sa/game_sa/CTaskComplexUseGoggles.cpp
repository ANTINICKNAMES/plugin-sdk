/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexUseGoggles.h"

// 0x634EF0
CTaskComplexUseGoggles::CTaskComplexUseGoggles() : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x634EF0, CTaskComplexUseGoggles*>(this);
}