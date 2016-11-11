#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.GlobalFog
struct  GlobalFog_t3357874107  : public PostEffectsBase_t2786816979
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_5;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_6;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_7;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_8;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_t3998140498 * ___fogShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t1886596500 * ___fogMaterial_12;

public:
	inline static int32_t get_offset_of_distanceFog_5() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___distanceFog_5)); }
	inline bool get_distanceFog_5() const { return ___distanceFog_5; }
	inline bool* get_address_of_distanceFog_5() { return &___distanceFog_5; }
	inline void set_distanceFog_5(bool value)
	{
		___distanceFog_5 = value;
	}

	inline static int32_t get_offset_of_useRadialDistance_6() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___useRadialDistance_6)); }
	inline bool get_useRadialDistance_6() const { return ___useRadialDistance_6; }
	inline bool* get_address_of_useRadialDistance_6() { return &___useRadialDistance_6; }
	inline void set_useRadialDistance_6(bool value)
	{
		___useRadialDistance_6 = value;
	}

	inline static int32_t get_offset_of_heightFog_7() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___heightFog_7)); }
	inline bool get_heightFog_7() const { return ___heightFog_7; }
	inline bool* get_address_of_heightFog_7() { return &___heightFog_7; }
	inline void set_heightFog_7(bool value)
	{
		___heightFog_7 = value;
	}

	inline static int32_t get_offset_of_height_8() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___height_8)); }
	inline float get_height_8() const { return ___height_8; }
	inline float* get_address_of_height_8() { return &___height_8; }
	inline void set_height_8(float value)
	{
		___height_8 = value;
	}

	inline static int32_t get_offset_of_heightDensity_9() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___heightDensity_9)); }
	inline float get_heightDensity_9() const { return ___heightDensity_9; }
	inline float* get_address_of_heightDensity_9() { return &___heightDensity_9; }
	inline void set_heightDensity_9(float value)
	{
		___heightDensity_9 = value;
	}

	inline static int32_t get_offset_of_startDistance_10() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___startDistance_10)); }
	inline float get_startDistance_10() const { return ___startDistance_10; }
	inline float* get_address_of_startDistance_10() { return &___startDistance_10; }
	inline void set_startDistance_10(float value)
	{
		___startDistance_10 = value;
	}

	inline static int32_t get_offset_of_fogShader_11() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___fogShader_11)); }
	inline Shader_t3998140498 * get_fogShader_11() const { return ___fogShader_11; }
	inline Shader_t3998140498 ** get_address_of_fogShader_11() { return &___fogShader_11; }
	inline void set_fogShader_11(Shader_t3998140498 * value)
	{
		___fogShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___fogShader_11, value);
	}

	inline static int32_t get_offset_of_fogMaterial_12() { return static_cast<int32_t>(offsetof(GlobalFog_t3357874107, ___fogMaterial_12)); }
	inline Material_t1886596500 * get_fogMaterial_12() const { return ___fogMaterial_12; }
	inline Material_t1886596500 ** get_address_of_fogMaterial_12() { return &___fogMaterial_12; }
	inline void set_fogMaterial_12(Material_t1886596500 * value)
	{
		___fogMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___fogMaterial_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
