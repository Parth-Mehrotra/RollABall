#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CameraController::player1
	GameObject_t3674682005 * ___player1_2;
	// UnityEngine.GameObject CameraController::player2
	GameObject_t3674682005 * ___player2_3;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t4282066566  ___offset_4;

public:
	inline static int32_t get_offset_of_player1_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___player1_2)); }
	inline GameObject_t3674682005 * get_player1_2() const { return ___player1_2; }
	inline GameObject_t3674682005 ** get_address_of_player1_2() { return &___player1_2; }
	inline void set_player1_2(GameObject_t3674682005 * value)
	{
		___player1_2 = value;
		Il2CppCodeGenWriteBarrier(&___player1_2, value);
	}

	inline static int32_t get_offset_of_player2_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___player2_3)); }
	inline GameObject_t3674682005 * get_player2_3() const { return ___player2_3; }
	inline GameObject_t3674682005 ** get_address_of_player2_3() { return &___player2_3; }
	inline void set_player2_3(GameObject_t3674682005 * value)
	{
		___player2_3 = value;
		Il2CppCodeGenWriteBarrier(&___player2_3, value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___offset_4)); }
	inline Vector3_t4282066566  get_offset_4() const { return ___offset_4; }
	inline Vector3_t4282066566 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector3_t4282066566  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
