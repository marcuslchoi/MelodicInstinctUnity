#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Material
struct Material_t1886596500;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t3645233297;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.PlanarReflection
struct  PlanarReflection_t991663  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.LayerMask UnityStandardAssets.Water.PlanarReflection::reflectionMask
	LayerMask_t1862190090  ___reflectionMask_2;
	// System.Boolean UnityStandardAssets.Water.PlanarReflection::reflectSkybox
	bool ___reflectSkybox_3;
	// UnityEngine.Color UnityStandardAssets.Water.PlanarReflection::clearColor
	Color_t1588175760  ___clearColor_4;
	// System.String UnityStandardAssets.Water.PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_5;
	// System.Single UnityStandardAssets.Water.PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_6;
	// UnityEngine.Vector3 UnityStandardAssets.Water.PlanarReflection::m_Oldpos
	Vector3_t3525329789  ___m_Oldpos_7;
	// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::m_ReflectionCamera
	Camera_t3533968274 * ___m_ReflectionCamera_8;
	// UnityEngine.Material UnityStandardAssets.Water.PlanarReflection::m_SharedMaterial
	Material_t1886596500 * ___m_SharedMaterial_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> UnityStandardAssets.Water.PlanarReflection::m_HelperCameras
	Dictionary_2_t3645233297 * ___m_HelperCameras_10;

public:
	inline static int32_t get_offset_of_reflectionMask_2() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___reflectionMask_2)); }
	inline LayerMask_t1862190090  get_reflectionMask_2() const { return ___reflectionMask_2; }
	inline LayerMask_t1862190090 * get_address_of_reflectionMask_2() { return &___reflectionMask_2; }
	inline void set_reflectionMask_2(LayerMask_t1862190090  value)
	{
		___reflectionMask_2 = value;
	}

	inline static int32_t get_offset_of_reflectSkybox_3() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___reflectSkybox_3)); }
	inline bool get_reflectSkybox_3() const { return ___reflectSkybox_3; }
	inline bool* get_address_of_reflectSkybox_3() { return &___reflectSkybox_3; }
	inline void set_reflectSkybox_3(bool value)
	{
		___reflectSkybox_3 = value;
	}

	inline static int32_t get_offset_of_clearColor_4() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___clearColor_4)); }
	inline Color_t1588175760  get_clearColor_4() const { return ___clearColor_4; }
	inline Color_t1588175760 * get_address_of_clearColor_4() { return &___clearColor_4; }
	inline void set_clearColor_4(Color_t1588175760  value)
	{
		___clearColor_4 = value;
	}

	inline static int32_t get_offset_of_reflectionSampler_5() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___reflectionSampler_5)); }
	inline String_t* get_reflectionSampler_5() const { return ___reflectionSampler_5; }
	inline String_t** get_address_of_reflectionSampler_5() { return &___reflectionSampler_5; }
	inline void set_reflectionSampler_5(String_t* value)
	{
		___reflectionSampler_5 = value;
		Il2CppCodeGenWriteBarrier(&___reflectionSampler_5, value);
	}

	inline static int32_t get_offset_of_clipPlaneOffset_6() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___clipPlaneOffset_6)); }
	inline float get_clipPlaneOffset_6() const { return ___clipPlaneOffset_6; }
	inline float* get_address_of_clipPlaneOffset_6() { return &___clipPlaneOffset_6; }
	inline void set_clipPlaneOffset_6(float value)
	{
		___clipPlaneOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Oldpos_7() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___m_Oldpos_7)); }
	inline Vector3_t3525329789  get_m_Oldpos_7() const { return ___m_Oldpos_7; }
	inline Vector3_t3525329789 * get_address_of_m_Oldpos_7() { return &___m_Oldpos_7; }
	inline void set_m_Oldpos_7(Vector3_t3525329789  value)
	{
		___m_Oldpos_7 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCamera_8() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___m_ReflectionCamera_8)); }
	inline Camera_t3533968274 * get_m_ReflectionCamera_8() const { return ___m_ReflectionCamera_8; }
	inline Camera_t3533968274 ** get_address_of_m_ReflectionCamera_8() { return &___m_ReflectionCamera_8; }
	inline void set_m_ReflectionCamera_8(Camera_t3533968274 * value)
	{
		___m_ReflectionCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionCamera_8, value);
	}

	inline static int32_t get_offset_of_m_SharedMaterial_9() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___m_SharedMaterial_9)); }
	inline Material_t1886596500 * get_m_SharedMaterial_9() const { return ___m_SharedMaterial_9; }
	inline Material_t1886596500 ** get_address_of_m_SharedMaterial_9() { return &___m_SharedMaterial_9; }
	inline void set_m_SharedMaterial_9(Material_t1886596500 * value)
	{
		___m_SharedMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedMaterial_9, value);
	}

	inline static int32_t get_offset_of_m_HelperCameras_10() { return static_cast<int32_t>(offsetof(PlanarReflection_t991663, ___m_HelperCameras_10)); }
	inline Dictionary_2_t3645233297 * get_m_HelperCameras_10() const { return ___m_HelperCameras_10; }
	inline Dictionary_2_t3645233297 ** get_address_of_m_HelperCameras_10() { return &___m_HelperCameras_10; }
	inline void set_m_HelperCameras_10(Dictionary_2_t3645233297 * value)
	{
		___m_HelperCameras_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_HelperCameras_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
