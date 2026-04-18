/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedScanner.h"

// 0x5FFEF0 (UNUSED?)
void CPedScanner::ScanForPedsInRange(CPed& ped) {
    plugin::CallMethod<0x5FFEF0, CPedScanner*, CPed&>(this, ped);
}

// 0x5FFF20
CPed* CPedScanner::GetClosestPedInRange() {
    return plugin::CallMethodAndReturn<CPed*, 0x5FFF20, CPedScanner*>(this);
}