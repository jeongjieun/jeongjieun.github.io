﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ParticleTester/FlareSystem[]
struct FlareSystemU5BU5D_t2878483230;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ParticleTester/FlareSystem>
struct  List_1_t4191754678  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FlareSystemU5BU5D_t2878483230* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4191754678, ____items_1)); }
	inline FlareSystemU5BU5D_t2878483230* get__items_1() const { return ____items_1; }
	inline FlareSystemU5BU5D_t2878483230** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FlareSystemU5BU5D_t2878483230* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4191754678, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4191754678, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4191754678_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FlareSystemU5BU5D_t2878483230* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4191754678_StaticFields, ___EmptyArray_4)); }
	inline FlareSystemU5BU5D_t2878483230* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FlareSystemU5BU5D_t2878483230** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FlareSystemU5BU5D_t2878483230* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif