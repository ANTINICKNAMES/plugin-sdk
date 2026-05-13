/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <string>

#define PLUGIN_API

#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")

VALIDATE_SIZE(bool, 1);
VALIDATE_SIZE(char, 1);
VALIDATE_SIZE(short, 2);
VALIDATE_SIZE(int, 4);
VALIDATE_SIZE(float, 4);
VALIDATE_SIZE(long long, 8);

// Basic types for structures describing
typedef unsigned char bool8;
//typedef int bool32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef int8_t    int8;
typedef int16_t   int16;
typedef int32_t   int32;
typedef int64_t   int64;
typedef uint8_t   uint8;
typedef uint16_t  uint16;
typedef uint32_t  uint32;
typedef uint64_t  uint64;
typedef intptr_t  intptr;
typedef uintptr_t uintptr;

typedef uint8     bool8;
typedef uint16    bool16;
typedef uint32    bool32;


typedef signed char Int8;
typedef signed char int8;

typedef short Int16;
typedef short int16;
typedef unsigned short Char16;
typedef unsigned short char16;

typedef int Int32;
typedef int int32;

typedef long long int Int64;

typedef unsigned char UInt8;
typedef unsigned char uint8;
typedef unsigned char UINT8;
typedef unsigned short UInt16;
typedef unsigned short uint16;

typedef unsigned int UInt32;
typedef unsigned int uint32;

typedef long long unsigned int UInt64;
typedef long long unsigned int uint64;

typedef char Char;

typedef unsigned char Bool8;
//typedef unsigned char bool8;

typedef unsigned short Bool16;
//typedef unsigned short bool16;
typedef uint32 Bool;

typedef Char16 GxtChar;

#define _IGNORED_
#define _CAN_BE_NULL_

#define SKIP_EDX void*

#if (defined(__GNUC__) || defined(__GNUG__) || defined(__clang__))
#define PLUGIN_SOURCE_FILE
#define PLUGIN_VARIABLE
#define _NOINLINE_
#elif (defined(_MSC_VER))
#define PLUGIN_SOURCE_FILE  __pragma(init_seg(lib))
#define PLUGIN_VARIABLE
#define _NOINLINE_ __declspec(noinline)
#else
#define PLUGIN_SOURCE_FILE
#define PLUGIN_VARIABLE
#define _NOINLINE_
#endif

// III/VC char > wchar_t string conversion
#define _SWSTRING_INIT(str, id) std::wstring my_ws##id; for (size_t i = 0; i < strlen(str); i++) my_ws##id += str[i]
#define _SWSTRING(id) my_ws##id.c_str()
#define _SWSTRING_STATIC_INIT(id) static wchar_t my_ws##id[512] ; my_ws##id[0] = 0
#define _SWSTRING_STATIC(id) my_ws##id
#define _SWSTRING_STATIC_FROM(id, src) for (size_t i = 0; i < strlen(src); i++) my_ws##id[i] = src[i]
#define _SWSTRING_STATIC_TO(id, dst) for (size_t i = 0; i < wcslen(my_ws##id); i++) dst[i] = static_cast<char>(my_ws##id[i])
