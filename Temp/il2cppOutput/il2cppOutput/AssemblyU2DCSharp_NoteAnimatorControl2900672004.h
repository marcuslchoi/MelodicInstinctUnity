#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.RuntimeAnimatorController[]
struct RuntimeAnimatorControllerU5BU5D_t971953881;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NoteAnimatorControl
struct  NoteAnimatorControl_t2900672004  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator NoteAnimatorControl::chrAnimator
	Animator_t792326996 * ___chrAnimator_2;
	// UnityEngine.RuntimeAnimatorController[] NoteAnimatorControl::chrAnimatorController
	RuntimeAnimatorControllerU5BU5D_t971953881* ___chrAnimatorController_3;
	// UnityEngine.CharacterController NoteAnimatorControl::chrController
	CharacterController_t2029520850 * ___chrController_4;
	// UnityEngine.GameObject[] NoteAnimatorControl::meshData
	GameObjectU5BU5D_t3499186955* ___meshData_5;
	// System.Single NoteAnimatorControl::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single NoteAnimatorControl::jumpInput
	float ___jumpInput_7;
	// System.Single NoteAnimatorControl::runParam
	float ___runParam_8;
	// UnityEngine.Vector3 NoteAnimatorControl::moveDirection
	Vector3_t3525329789  ___moveDirection_9;
	// System.Single NoteAnimatorControl::gravity
	float ___gravity_10;
	// UnityEngine.AnimatorStateInfo NoteAnimatorControl::stateInfo
	AnimatorStateInfo_t4162640357  ___stateInfo_11;

public:
	inline static int32_t get_offset_of_chrAnimator_2() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___chrAnimator_2)); }
	inline Animator_t792326996 * get_chrAnimator_2() const { return ___chrAnimator_2; }
	inline Animator_t792326996 ** get_address_of_chrAnimator_2() { return &___chrAnimator_2; }
	inline void set_chrAnimator_2(Animator_t792326996 * value)
	{
		___chrAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___chrAnimator_2, value);
	}

	inline static int32_t get_offset_of_chrAnimatorController_3() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___chrAnimatorController_3)); }
	inline RuntimeAnimatorControllerU5BU5D_t971953881* get_chrAnimatorController_3() const { return ___chrAnimatorController_3; }
	inline RuntimeAnimatorControllerU5BU5D_t971953881** get_address_of_chrAnimatorController_3() { return &___chrAnimatorController_3; }
	inline void set_chrAnimatorController_3(RuntimeAnimatorControllerU5BU5D_t971953881* value)
	{
		___chrAnimatorController_3 = value;
		Il2CppCodeGenWriteBarrier(&___chrAnimatorController_3, value);
	}

	inline static int32_t get_offset_of_chrController_4() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___chrController_4)); }
	inline CharacterController_t2029520850 * get_chrController_4() const { return ___chrController_4; }
	inline CharacterController_t2029520850 ** get_address_of_chrController_4() { return &___chrController_4; }
	inline void set_chrController_4(CharacterController_t2029520850 * value)
	{
		___chrController_4 = value;
		Il2CppCodeGenWriteBarrier(&___chrController_4, value);
	}

	inline static int32_t get_offset_of_meshData_5() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___meshData_5)); }
	inline GameObjectU5BU5D_t3499186955* get_meshData_5() const { return ___meshData_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_meshData_5() { return &___meshData_5; }
	inline void set_meshData_5(GameObjectU5BU5D_t3499186955* value)
	{
		___meshData_5 = value;
		Il2CppCodeGenWriteBarrier(&___meshData_5, value);
	}

	inline static int32_t get_offset_of_jumpSpeed_6() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___jumpSpeed_6)); }
	inline float get_jumpSpeed_6() const { return ___jumpSpeed_6; }
	inline float* get_address_of_jumpSpeed_6() { return &___jumpSpeed_6; }
	inline void set_jumpSpeed_6(float value)
	{
		___jumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_jumpInput_7() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___jumpInput_7)); }
	inline float get_jumpInput_7() const { return ___jumpInput_7; }
	inline float* get_address_of_jumpInput_7() { return &___jumpInput_7; }
	inline void set_jumpInput_7(float value)
	{
		___jumpInput_7 = value;
	}

	inline static int32_t get_offset_of_runParam_8() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___runParam_8)); }
	inline float get_runParam_8() const { return ___runParam_8; }
	inline float* get_address_of_runParam_8() { return &___runParam_8; }
	inline void set_runParam_8(float value)
	{
		___runParam_8 = value;
	}

	inline static int32_t get_offset_of_moveDirection_9() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___moveDirection_9)); }
	inline Vector3_t3525329789  get_moveDirection_9() const { return ___moveDirection_9; }
	inline Vector3_t3525329789 * get_address_of_moveDirection_9() { return &___moveDirection_9; }
	inline void set_moveDirection_9(Vector3_t3525329789  value)
	{
		___moveDirection_9 = value;
	}

	inline static int32_t get_offset_of_gravity_10() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___gravity_10)); }
	inline float get_gravity_10() const { return ___gravity_10; }
	inline float* get_address_of_gravity_10() { return &___gravity_10; }
	inline void set_gravity_10(float value)
	{
		___gravity_10 = value;
	}

	inline static int32_t get_offset_of_stateInfo_11() { return static_cast<int32_t>(offsetof(NoteAnimatorControl_t2900672004, ___stateInfo_11)); }
	inline AnimatorStateInfo_t4162640357  get_stateInfo_11() const { return ___stateInfo_11; }
	inline AnimatorStateInfo_t4162640357 * get_address_of_stateInfo_11() { return &___stateInfo_11; }
	inline void set_stateInfo_11(AnimatorStateInfo_t4162640357  value)
	{
		___stateInfo_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
