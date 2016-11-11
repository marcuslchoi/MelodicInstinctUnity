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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t402405725  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t3998140498 * ___shader_2;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t1886596500 * ___m_Material_3;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ImageEffectBase_t402405725, ___shader_2)); }
	inline Shader_t3998140498 * get_shader_2() const { return ___shader_2; }
	inline Shader_t3998140498 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t3998140498 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier(&___shader_2, value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ImageEffectBase_t402405725, ___m_Material_3)); }
	inline Material_t1886596500 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t1886596500 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t1886596500 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
