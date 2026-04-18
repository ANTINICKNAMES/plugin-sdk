/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntityScanner.h"
#include "CRepeatSector.h"

// UNTESTED!!! (TODO?)

// 0x5FF9D0
void CEntityScanner::Clear() {
    plugin::CallMethod<0x5FF9D0, CEntityScanner*>(this);
}

// 0x5FFA20
void CEntityScanner::ScanForEntitiesInRange(eRepeatSectorList iScanType, CPed& ped) {
    plugin::CallMethod<0x5FFA20, CEntityScanner*, eRepeatSectorList, CPed&>(this, iScanType, ped);
}