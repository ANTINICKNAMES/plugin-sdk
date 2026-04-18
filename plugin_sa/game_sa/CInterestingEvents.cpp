/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CInterestingEvents.h"

CInterestingEvents& g_InterestingEvents = *(CInterestingEvents*)0xC0B058;

// 0x605A30
void CInterestingEvents::ScanForNearbyEntities() {
    plugin::CallMethod<0x605A30, CInterestingEvents*>(this);
}

// 0x602960
void CInterestingEvents::InvalidateEvent(const TInterestingEvent* pInvalidEvent) {
    plugin::CallMethod<0x602960, CInterestingEvents*, const TInterestingEvent*>(this, pInvalidEvent);
}

// 0x6029C0
void CInterestingEvents::InvalidateNonVisibleEvents() {
    plugin::CallMethod<0x6029C0, CInterestingEvents*>(this);
}

// 0x602590
void CInterestingEvents::Add(CInterestingEvents::EType eType, CEntity* pEntity) {
    plugin::CallMethod<0x602590, CInterestingEvents*, CInterestingEvents::EType, CEntity*>(this, eType, pEntity);
}