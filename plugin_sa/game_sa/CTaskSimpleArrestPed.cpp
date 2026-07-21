/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleArrestPed.h"

CTaskSimpleArrestPed::CTaskSimpleArrestPed(CPed* pArrestedPed) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x68B620, CTaskSimpleArrestPed*, CPed*>(this, pArrestedPed);
}

void CTaskSimpleArrestPed::FinishAnimArrestPedCB(CAnimBlendAssociation* pAnim, void* pData)
{
    plugin::Call<0x68B7D0, CAnimBlendAssociation*, void*>(pAnim, pData);
}

void CTaskSimpleArrestPed::StartAnim(CPed* pPed)
{
    plugin::CallMethod<0x68B7E0, CTaskSimpleArrestPed*, CPed*>(this, pPed);
}