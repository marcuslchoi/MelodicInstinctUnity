#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMovement
struct  CharacterMovement_t2528585432  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CharacterMovement::speed
	float ___speed_2;
	// System.Single CharacterMovement::gravity
	float ___gravity_3;
	// UnityEngine.CharacterController CharacterMovement::controller
	CharacterController_t2029520850 * ___controller_4;
	// UnityEngine.Vector3 CharacterMovement::moveDirection
	Vector3_t3525329789  ___moveDirection_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CharacterMovement_t2528585432, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_gravity_3() { return static_cast<int32_t>(offsetof(CharacterMovement_t2528585432, ___gravity_3)); }
	inline float get_gravity_3() const { return ___gravity_3; }
	inline float* get_address_of_gravity_3() { return &___gravity_3; }
	inline void set_gravity_3(float value)
	{
		___gravity_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CharacterMovement_t2528585432, ___controller_4)); }
	inline CharacterController_t2029520850 * get_controller_4() const { return ___controller_4; }
	inline CharacterController_t2029520850 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_t2029520850 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_moveDirection_5() { return static_cast<int32_t>(offsetof(CharacterMovement_t2528585432, ___moveDirection_5)); }
	inline Vector3_t3525329789  get_moveDirection_5() const { return ___moveDirection_5; }
	inline Vector3_t3525329789 * get_address_of_moveDirection_5() { return &___moveDirection_5; }
	inline void set_moveDirection_5(Vector3_t3525329789  value)
	{
		___moveDirection_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
