/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendSequence.h"

class CAnimBlendHierarchy {
public:
    uint32_t m_hashKey;
    CAnimBlendSequence *m_pSequences;
    int16_t m_NumSequences;
    bool m_bIsCompressed;
    bool m_bRunCompressed;
    int32_t m_animBlock;
    float m_fTotalTime;
    CLink<CAnimBlendHierarchy*>* m_pLink;

	//funcs

	void* AllocSequenceBlock(bool arg1);
	CAnimBlendHierarchy();
	void CalcTotalTime();
	void CalcTotalTimeCompressed();
	void RemoveAnimSequences();
	void RemoveQuaternionFlips();
	void RemoveUncompressedData();
	void SetName(char const* string);
	void Shutdown();
	void Uncompress();

};

VALIDATE_SIZE(CAnimBlendHierarchy, 0x18);