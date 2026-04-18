/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#include "CEventVehicleDamage.h"

class PLUGIN_API CEventVehicleDamageWeapon : public CEventVehicleDamage
{

public:
    CEventVehicleDamageWeapon(CVehicle* pVehicle, CEntity* pInflictor, const eWeaponType weaponUsed);


    virtual ~CEventVehicleDamageWeapon() {}

    virtual eEventType GetEventType();
    virtual CEvent* CloneEditable();
};