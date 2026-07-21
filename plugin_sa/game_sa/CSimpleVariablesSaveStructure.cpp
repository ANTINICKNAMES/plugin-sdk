/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSimpleVariablesSaveStructure.h"

void CSimpleVariablesSaveStructure::Construct()
{
    plugin::CallMethod<0x5D1B80, CSimpleVariablesSaveStructure*>(this);
}

void CSimpleVariablesSaveStructure::Extract(uint32& versionNum)
{
    plugin::CallMethod<0x5D1EA0, CSimpleVariablesSaveStructure*>(this);
}