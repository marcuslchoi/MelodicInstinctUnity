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
// UnityEngine.Texture3D
struct Texture3D_t2509538553;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct  ColorCorrectionLookup_t376209819  : public PostEffectsBase_t2786816979
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_t3998140498 * ___shader_5;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t1886596500 * ___material_6;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_t2509538553 * ___converted3DLut_7;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_8;

public:
	inline static int32_t get_offset_of_shader_5() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t376209819, ___shader_5)); }
	inline Shader_t3998140498 * get_shader_5() const { return ___shader_5; }
	inline Shader_t3998140498 ** get_address_of_shader_5() { return &___shader_5; }
	inline void set_shader_5(Shader_t3998140498 * value)
	{
		___shader_5 = value;
		Il2CppCodeGenWriteBarrier(&___shader_5, value);
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t376209819, ___material_6)); }
	inline Material_t1886596500 * get_material_6() const { return ___material_6; }
	inline Material_t1886596500 ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t1886596500 * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier(&___material_6, value);
	}

	inline static int32_t get_offset_of_converted3DLut_7() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t376209819, ___converted3DLut_7)); }
	inline Texture3D_t2509538553 * get_converted3DLut_7() const { return ___converted3DLut_7; }
	inline Texture3D_t2509538553 ** get_address_of_converted3DLut_7() { return &___converted3DLut_7; }
	inline void set_converted3DLut_7(Texture3D_t2509538553 * value)
	{
		___converted3DLut_7 = value;
		Il2CppCodeGenWriteBarrier(&___converted3DLut_7, value);
	}

	inline static int32_t get_offset_of_basedOnTempTex_8() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t376209819, ___basedOnTempTex_8)); }
	inline String_t* get_basedOnTempTex_8() const { return ___basedOnTempTex_8; }
	inline String_t** get_address_of_basedOnTempTex_8() { return &___basedOnTempTex_8; }
	inline void set_basedOnTempTex_8(String_t* value)
	{
		___basedOnTempTex_8 = value;
		Il2CppCodeGenWriteBarrier(&___basedOnTempTex_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
