/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CPtrListDoubleLink.h"
#include "CRepeatSector.h"

class PLUGIN_API CEntryInfoNode
{
//protected:
public:
	CPtrListDoubleLink* m_pList;
	CPtrNodeDoubleLink* m_pNode;
	CRepeatSector*  m_pSector;

	CEntryInfoNode* m_pPrevious;
	CEntryInfoNode* m_pNext;

/*public:
	CEntryInfoNode();


	CEntryInfoNode(CSector*, CPtrListDoubleLink*, CPtrNodeDoubleLink*);
	CEntryInfoNode(CRepeatSector*, CPtrListDoubleLink*, CPtrNodeDoubleLink*);

	static void* operator new(size_t nSize);
	static void operator delete(void* pVoid);

	CSector* GetSectorPtr();
	CRepeatSector* GetRepeatSectorPtr();
	CPtrListDoubleLink* GetListPtr();
	CPtrNodeDoubleLink* GetNodePtr();

	void SetSectorPtr(CSector*);
	void SetSectorPtr(CRepeatSector*);
	void SetListPtr(CPtrListDoubleLink*);

	CEntryInfoNode* GetPreviousPtr();
	CEntryInfoNode* GetNextPtr();

	void Add(CEntryInfoList& list);
	void Remove(CEntryInfoList& list);*/
};

VALIDATE_SIZE(CEntryInfoNode, 0x14);



class CEntryInfoList
{
//protected:
public:
	CEntryInfoNode* m_pHead;

/*public:
	CEntryInfoList();
	~CEntryInfoList();

	void Flush();
	CEntryInfoNode* GetHeadPtr();*/
};

VALIDATE_SIZE(CEntryInfoList, 0x4);