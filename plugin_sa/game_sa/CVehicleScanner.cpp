/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleScanner.h"

// 0x5FFE60
void CVehicleScanner::ScanForVehiclesInRange(CPed& ped) {
    plugin::CallMethod<0x5FFE60, CVehicleScanner*, CPed&>(this, ped);
}

// 0x5FFEE0
CVehicle* CVehicleScanner::GetClosestVehicleInRange() {
    return plugin::CallMethodAndReturn<CVehicle*, 0x5FFEE0, CVehicleScanner*>(this);
}