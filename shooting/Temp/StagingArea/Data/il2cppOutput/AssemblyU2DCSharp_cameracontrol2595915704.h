﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameracontrol
struct  cameracontrol_t2595915704  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject cameracontrol::player
	GameObject_t1366199518 * ___player_2;
	// UnityEngine.Vector3 cameracontrol::offset
	Vector3_t465617797  ___offset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(cameracontrol_t2595915704, ___player_2)); }
	inline GameObject_t1366199518 * get_player_2() const { return ___player_2; }
	inline GameObject_t1366199518 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1366199518 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(cameracontrol_t2595915704, ___offset_3)); }
	inline Vector3_t465617797  get_offset_3() const { return ___offset_3; }
	inline Vector3_t465617797 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t465617797  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
