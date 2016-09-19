#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player2
struct  Player2_t1171085649  : public MonoBehaviour_t667441552
{
public:
	// System.Single Player2::speed
	float ___speed_2;
	// System.Single Player2::jumpForce
	float ___jumpForce_3;
	// System.Single Player2::jumpCooldown
	float ___jumpCooldown_4;
	// UnityEngine.UI.Text Player2::winText
	Text_t9039225 * ___winText_5;
	// UnityEngine.UI.Text Player2::countText
	Text_t9039225 * ___countText_6;
	// UnityEngine.UI.Text Player2::notifications
	Text_t9039225 * ___notifications_7;
	// UnityEngine.Rigidbody Player2::rb
	Rigidbody_t3346577219 * ___rb_8;
	// System.Int32 Player2::count
	int32_t ___count_9;
	// System.Int32 Player2::score
	int32_t ___score_10;
	// System.Boolean Player2::isJumping
	bool ___isJumping_11;
	// System.Single Player2::jumpTimer
	float ___jumpTimer_12;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_jumpForce_3() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___jumpForce_3)); }
	inline float get_jumpForce_3() const { return ___jumpForce_3; }
	inline float* get_address_of_jumpForce_3() { return &___jumpForce_3; }
	inline void set_jumpForce_3(float value)
	{
		___jumpForce_3 = value;
	}

	inline static int32_t get_offset_of_jumpCooldown_4() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___jumpCooldown_4)); }
	inline float get_jumpCooldown_4() const { return ___jumpCooldown_4; }
	inline float* get_address_of_jumpCooldown_4() { return &___jumpCooldown_4; }
	inline void set_jumpCooldown_4(float value)
	{
		___jumpCooldown_4 = value;
	}

	inline static int32_t get_offset_of_winText_5() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___winText_5)); }
	inline Text_t9039225 * get_winText_5() const { return ___winText_5; }
	inline Text_t9039225 ** get_address_of_winText_5() { return &___winText_5; }
	inline void set_winText_5(Text_t9039225 * value)
	{
		___winText_5 = value;
		Il2CppCodeGenWriteBarrier(&___winText_5, value);
	}

	inline static int32_t get_offset_of_countText_6() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___countText_6)); }
	inline Text_t9039225 * get_countText_6() const { return ___countText_6; }
	inline Text_t9039225 ** get_address_of_countText_6() { return &___countText_6; }
	inline void set_countText_6(Text_t9039225 * value)
	{
		___countText_6 = value;
		Il2CppCodeGenWriteBarrier(&___countText_6, value);
	}

	inline static int32_t get_offset_of_notifications_7() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___notifications_7)); }
	inline Text_t9039225 * get_notifications_7() const { return ___notifications_7; }
	inline Text_t9039225 ** get_address_of_notifications_7() { return &___notifications_7; }
	inline void set_notifications_7(Text_t9039225 * value)
	{
		___notifications_7 = value;
		Il2CppCodeGenWriteBarrier(&___notifications_7, value);
	}

	inline static int32_t get_offset_of_rb_8() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___rb_8)); }
	inline Rigidbody_t3346577219 * get_rb_8() const { return ___rb_8; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_8() { return &___rb_8; }
	inline void set_rb_8(Rigidbody_t3346577219 * value)
	{
		___rb_8 = value;
		Il2CppCodeGenWriteBarrier(&___rb_8, value);
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_score_10() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___score_10)); }
	inline int32_t get_score_10() const { return ___score_10; }
	inline int32_t* get_address_of_score_10() { return &___score_10; }
	inline void set_score_10(int32_t value)
	{
		___score_10 = value;
	}

	inline static int32_t get_offset_of_isJumping_11() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___isJumping_11)); }
	inline bool get_isJumping_11() const { return ___isJumping_11; }
	inline bool* get_address_of_isJumping_11() { return &___isJumping_11; }
	inline void set_isJumping_11(bool value)
	{
		___isJumping_11 = value;
	}

	inline static int32_t get_offset_of_jumpTimer_12() { return static_cast<int32_t>(offsetof(Player2_t1171085649, ___jumpTimer_12)); }
	inline float get_jumpTimer_12() const { return ___jumpTimer_12; }
	inline float* get_address_of_jumpTimer_12() { return &___jumpTimer_12; }
	inline void set_jumpTimer_12(float value)
	{
		___jumpTimer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
