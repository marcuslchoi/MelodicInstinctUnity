#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamControl
struct  CamControl_t4093035182  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera CamControl::cam
	Camera_t3533968274 * ___cam_2;
	// UnityEngine.Transform CamControl::pivot
	Transform_t284553113 * ___pivot_3;
	// UnityEngine.Transform CamControl::target
	Transform_t284553113 * ___target_4;
	// UnityEngine.Transform CamControl::ground
	Transform_t284553113 * ___ground_5;
	// System.Single CamControl::rotateSpeed
	float ___rotateSpeed_6;
	// System.Single CamControl::tiltMax
	float ___tiltMax_7;
	// System.Single CamControl::tiltMin
	float ___tiltMin_8;
	// System.Boolean CamControl::rotateEnable
	bool ___rotateEnable_9;
	// System.Boolean CamControl::UIArea
	bool ___UIArea_10;
	// System.Boolean CamControl::AutoRotate
	bool ___AutoRotate_11;
	// UnityEngine.Vector3 CamControl::rotation
	Vector3_t3525329789  ___rotation_12;
	// System.Int32[] CamControl::zoom
	Int32U5BU5D_t1809983122* ___zoom_13;
	// System.Single CamControl::smooth
	float ___smooth_14;
	// System.Int32 CamControl::zoomIdx
	int32_t ___zoomIdx_15;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___cam_2)); }
	inline Camera_t3533968274 * get_cam_2() const { return ___cam_2; }
	inline Camera_t3533968274 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t3533968274 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___pivot_3)); }
	inline Transform_t284553113 * get_pivot_3() const { return ___pivot_3; }
	inline Transform_t284553113 ** get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(Transform_t284553113 * value)
	{
		___pivot_3 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___target_4)); }
	inline Transform_t284553113 * get_target_4() const { return ___target_4; }
	inline Transform_t284553113 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t284553113 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_ground_5() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___ground_5)); }
	inline Transform_t284553113 * get_ground_5() const { return ___ground_5; }
	inline Transform_t284553113 ** get_address_of_ground_5() { return &___ground_5; }
	inline void set_ground_5(Transform_t284553113 * value)
	{
		___ground_5 = value;
		Il2CppCodeGenWriteBarrier(&___ground_5, value);
	}

	inline static int32_t get_offset_of_rotateSpeed_6() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___rotateSpeed_6)); }
	inline float get_rotateSpeed_6() const { return ___rotateSpeed_6; }
	inline float* get_address_of_rotateSpeed_6() { return &___rotateSpeed_6; }
	inline void set_rotateSpeed_6(float value)
	{
		___rotateSpeed_6 = value;
	}

	inline static int32_t get_offset_of_tiltMax_7() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___tiltMax_7)); }
	inline float get_tiltMax_7() const { return ___tiltMax_7; }
	inline float* get_address_of_tiltMax_7() { return &___tiltMax_7; }
	inline void set_tiltMax_7(float value)
	{
		___tiltMax_7 = value;
	}

	inline static int32_t get_offset_of_tiltMin_8() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___tiltMin_8)); }
	inline float get_tiltMin_8() const { return ___tiltMin_8; }
	inline float* get_address_of_tiltMin_8() { return &___tiltMin_8; }
	inline void set_tiltMin_8(float value)
	{
		___tiltMin_8 = value;
	}

	inline static int32_t get_offset_of_rotateEnable_9() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___rotateEnable_9)); }
	inline bool get_rotateEnable_9() const { return ___rotateEnable_9; }
	inline bool* get_address_of_rotateEnable_9() { return &___rotateEnable_9; }
	inline void set_rotateEnable_9(bool value)
	{
		___rotateEnable_9 = value;
	}

	inline static int32_t get_offset_of_UIArea_10() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___UIArea_10)); }
	inline bool get_UIArea_10() const { return ___UIArea_10; }
	inline bool* get_address_of_UIArea_10() { return &___UIArea_10; }
	inline void set_UIArea_10(bool value)
	{
		___UIArea_10 = value;
	}

	inline static int32_t get_offset_of_AutoRotate_11() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___AutoRotate_11)); }
	inline bool get_AutoRotate_11() const { return ___AutoRotate_11; }
	inline bool* get_address_of_AutoRotate_11() { return &___AutoRotate_11; }
	inline void set_AutoRotate_11(bool value)
	{
		___AutoRotate_11 = value;
	}

	inline static int32_t get_offset_of_rotation_12() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___rotation_12)); }
	inline Vector3_t3525329789  get_rotation_12() const { return ___rotation_12; }
	inline Vector3_t3525329789 * get_address_of_rotation_12() { return &___rotation_12; }
	inline void set_rotation_12(Vector3_t3525329789  value)
	{
		___rotation_12 = value;
	}

	inline static int32_t get_offset_of_zoom_13() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___zoom_13)); }
	inline Int32U5BU5D_t1809983122* get_zoom_13() const { return ___zoom_13; }
	inline Int32U5BU5D_t1809983122** get_address_of_zoom_13() { return &___zoom_13; }
	inline void set_zoom_13(Int32U5BU5D_t1809983122* value)
	{
		___zoom_13 = value;
		Il2CppCodeGenWriteBarrier(&___zoom_13, value);
	}

	inline static int32_t get_offset_of_smooth_14() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___smooth_14)); }
	inline float get_smooth_14() const { return ___smooth_14; }
	inline float* get_address_of_smooth_14() { return &___smooth_14; }
	inline void set_smooth_14(float value)
	{
		___smooth_14 = value;
	}

	inline static int32_t get_offset_of_zoomIdx_15() { return static_cast<int32_t>(offsetof(CamControl_t4093035182, ___zoomIdx_15)); }
	inline int32_t get_zoomIdx_15() const { return ___zoomIdx_15; }
	inline int32_t* get_address_of_zoomIdx_15() { return &___zoomIdx_15; }
	inline void set_zoomIdx_15(int32_t value)
	{
		___zoomIdx_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
