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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2889307043.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Antialiasing
struct  Antialiasing_t259580628  : public PostEffectsBase_t2786816979
{
public:
	// UnityStandardAssets.ImageEffects.AAMode UnityStandardAssets.ImageEffects.Antialiasing::mode
	int32_t ___mode_5;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::showGeneratedNormals
	bool ___showGeneratedNormals_6;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::offsetScale
	float ___offsetScale_7;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::blurRadius
	float ___blurRadius_8;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThresholdMin
	float ___edgeThresholdMin_9;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThreshold
	float ___edgeThreshold_10;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeSharpness
	float ___edgeSharpness_11;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::dlaaSharp
	bool ___dlaaSharp_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::ssaaShader
	Shader_t3998140498 * ___ssaaShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::ssaa
	Material_t1886596500 * ___ssaa_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::dlaaShader
	Shader_t3998140498 * ___dlaaShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::dlaa
	Material_t1886596500 * ___dlaa_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::nfaaShader
	Shader_t3998140498 * ___nfaaShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::nfaa
	Material_t1886596500 * ___nfaa_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset2
	Shader_t3998140498 * ___shaderFXAAPreset2_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset2
	Material_t1886596500 * ___materialFXAAPreset2_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset3
	Shader_t3998140498 * ___shaderFXAAPreset3_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset3
	Material_t1886596500 * ___materialFXAAPreset3_22;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAII
	Shader_t3998140498 * ___shaderFXAAII_23;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAII
	Material_t1886596500 * ___materialFXAAII_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAIII
	Shader_t3998140498 * ___shaderFXAAIII_25;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAIII
	Material_t1886596500 * ___materialFXAAIII_26;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_showGeneratedNormals_6() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___showGeneratedNormals_6)); }
	inline bool get_showGeneratedNormals_6() const { return ___showGeneratedNormals_6; }
	inline bool* get_address_of_showGeneratedNormals_6() { return &___showGeneratedNormals_6; }
	inline void set_showGeneratedNormals_6(bool value)
	{
		___showGeneratedNormals_6 = value;
	}

	inline static int32_t get_offset_of_offsetScale_7() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___offsetScale_7)); }
	inline float get_offsetScale_7() const { return ___offsetScale_7; }
	inline float* get_address_of_offsetScale_7() { return &___offsetScale_7; }
	inline void set_offsetScale_7(float value)
	{
		___offsetScale_7 = value;
	}

	inline static int32_t get_offset_of_blurRadius_8() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___blurRadius_8)); }
	inline float get_blurRadius_8() const { return ___blurRadius_8; }
	inline float* get_address_of_blurRadius_8() { return &___blurRadius_8; }
	inline void set_blurRadius_8(float value)
	{
		___blurRadius_8 = value;
	}

	inline static int32_t get_offset_of_edgeThresholdMin_9() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___edgeThresholdMin_9)); }
	inline float get_edgeThresholdMin_9() const { return ___edgeThresholdMin_9; }
	inline float* get_address_of_edgeThresholdMin_9() { return &___edgeThresholdMin_9; }
	inline void set_edgeThresholdMin_9(float value)
	{
		___edgeThresholdMin_9 = value;
	}

	inline static int32_t get_offset_of_edgeThreshold_10() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___edgeThreshold_10)); }
	inline float get_edgeThreshold_10() const { return ___edgeThreshold_10; }
	inline float* get_address_of_edgeThreshold_10() { return &___edgeThreshold_10; }
	inline void set_edgeThreshold_10(float value)
	{
		___edgeThreshold_10 = value;
	}

	inline static int32_t get_offset_of_edgeSharpness_11() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___edgeSharpness_11)); }
	inline float get_edgeSharpness_11() const { return ___edgeSharpness_11; }
	inline float* get_address_of_edgeSharpness_11() { return &___edgeSharpness_11; }
	inline void set_edgeSharpness_11(float value)
	{
		___edgeSharpness_11 = value;
	}

	inline static int32_t get_offset_of_dlaaSharp_12() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___dlaaSharp_12)); }
	inline bool get_dlaaSharp_12() const { return ___dlaaSharp_12; }
	inline bool* get_address_of_dlaaSharp_12() { return &___dlaaSharp_12; }
	inline void set_dlaaSharp_12(bool value)
	{
		___dlaaSharp_12 = value;
	}

	inline static int32_t get_offset_of_ssaaShader_13() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___ssaaShader_13)); }
	inline Shader_t3998140498 * get_ssaaShader_13() const { return ___ssaaShader_13; }
	inline Shader_t3998140498 ** get_address_of_ssaaShader_13() { return &___ssaaShader_13; }
	inline void set_ssaaShader_13(Shader_t3998140498 * value)
	{
		___ssaaShader_13 = value;
		Il2CppCodeGenWriteBarrier(&___ssaaShader_13, value);
	}

	inline static int32_t get_offset_of_ssaa_14() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___ssaa_14)); }
	inline Material_t1886596500 * get_ssaa_14() const { return ___ssaa_14; }
	inline Material_t1886596500 ** get_address_of_ssaa_14() { return &___ssaa_14; }
	inline void set_ssaa_14(Material_t1886596500 * value)
	{
		___ssaa_14 = value;
		Il2CppCodeGenWriteBarrier(&___ssaa_14, value);
	}

	inline static int32_t get_offset_of_dlaaShader_15() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___dlaaShader_15)); }
	inline Shader_t3998140498 * get_dlaaShader_15() const { return ___dlaaShader_15; }
	inline Shader_t3998140498 ** get_address_of_dlaaShader_15() { return &___dlaaShader_15; }
	inline void set_dlaaShader_15(Shader_t3998140498 * value)
	{
		___dlaaShader_15 = value;
		Il2CppCodeGenWriteBarrier(&___dlaaShader_15, value);
	}

	inline static int32_t get_offset_of_dlaa_16() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___dlaa_16)); }
	inline Material_t1886596500 * get_dlaa_16() const { return ___dlaa_16; }
	inline Material_t1886596500 ** get_address_of_dlaa_16() { return &___dlaa_16; }
	inline void set_dlaa_16(Material_t1886596500 * value)
	{
		___dlaa_16 = value;
		Il2CppCodeGenWriteBarrier(&___dlaa_16, value);
	}

	inline static int32_t get_offset_of_nfaaShader_17() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___nfaaShader_17)); }
	inline Shader_t3998140498 * get_nfaaShader_17() const { return ___nfaaShader_17; }
	inline Shader_t3998140498 ** get_address_of_nfaaShader_17() { return &___nfaaShader_17; }
	inline void set_nfaaShader_17(Shader_t3998140498 * value)
	{
		___nfaaShader_17 = value;
		Il2CppCodeGenWriteBarrier(&___nfaaShader_17, value);
	}

	inline static int32_t get_offset_of_nfaa_18() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___nfaa_18)); }
	inline Material_t1886596500 * get_nfaa_18() const { return ___nfaa_18; }
	inline Material_t1886596500 ** get_address_of_nfaa_18() { return &___nfaa_18; }
	inline void set_nfaa_18(Material_t1886596500 * value)
	{
		___nfaa_18 = value;
		Il2CppCodeGenWriteBarrier(&___nfaa_18, value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset2_19() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___shaderFXAAPreset2_19)); }
	inline Shader_t3998140498 * get_shaderFXAAPreset2_19() const { return ___shaderFXAAPreset2_19; }
	inline Shader_t3998140498 ** get_address_of_shaderFXAAPreset2_19() { return &___shaderFXAAPreset2_19; }
	inline void set_shaderFXAAPreset2_19(Shader_t3998140498 * value)
	{
		___shaderFXAAPreset2_19 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAPreset2_19, value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset2_20() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___materialFXAAPreset2_20)); }
	inline Material_t1886596500 * get_materialFXAAPreset2_20() const { return ___materialFXAAPreset2_20; }
	inline Material_t1886596500 ** get_address_of_materialFXAAPreset2_20() { return &___materialFXAAPreset2_20; }
	inline void set_materialFXAAPreset2_20(Material_t1886596500 * value)
	{
		___materialFXAAPreset2_20 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAPreset2_20, value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset3_21() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___shaderFXAAPreset3_21)); }
	inline Shader_t3998140498 * get_shaderFXAAPreset3_21() const { return ___shaderFXAAPreset3_21; }
	inline Shader_t3998140498 ** get_address_of_shaderFXAAPreset3_21() { return &___shaderFXAAPreset3_21; }
	inline void set_shaderFXAAPreset3_21(Shader_t3998140498 * value)
	{
		___shaderFXAAPreset3_21 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAPreset3_21, value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset3_22() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___materialFXAAPreset3_22)); }
	inline Material_t1886596500 * get_materialFXAAPreset3_22() const { return ___materialFXAAPreset3_22; }
	inline Material_t1886596500 ** get_address_of_materialFXAAPreset3_22() { return &___materialFXAAPreset3_22; }
	inline void set_materialFXAAPreset3_22(Material_t1886596500 * value)
	{
		___materialFXAAPreset3_22 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAPreset3_22, value);
	}

	inline static int32_t get_offset_of_shaderFXAAII_23() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___shaderFXAAII_23)); }
	inline Shader_t3998140498 * get_shaderFXAAII_23() const { return ___shaderFXAAII_23; }
	inline Shader_t3998140498 ** get_address_of_shaderFXAAII_23() { return &___shaderFXAAII_23; }
	inline void set_shaderFXAAII_23(Shader_t3998140498 * value)
	{
		___shaderFXAAII_23 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAII_23, value);
	}

	inline static int32_t get_offset_of_materialFXAAII_24() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___materialFXAAII_24)); }
	inline Material_t1886596500 * get_materialFXAAII_24() const { return ___materialFXAAII_24; }
	inline Material_t1886596500 ** get_address_of_materialFXAAII_24() { return &___materialFXAAII_24; }
	inline void set_materialFXAAII_24(Material_t1886596500 * value)
	{
		___materialFXAAII_24 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAII_24, value);
	}

	inline static int32_t get_offset_of_shaderFXAAIII_25() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___shaderFXAAIII_25)); }
	inline Shader_t3998140498 * get_shaderFXAAIII_25() const { return ___shaderFXAAIII_25; }
	inline Shader_t3998140498 ** get_address_of_shaderFXAAIII_25() { return &___shaderFXAAIII_25; }
	inline void set_shaderFXAAIII_25(Shader_t3998140498 * value)
	{
		___shaderFXAAIII_25 = value;
		Il2CppCodeGenWriteBarrier(&___shaderFXAAIII_25, value);
	}

	inline static int32_t get_offset_of_materialFXAAIII_26() { return static_cast<int32_t>(offsetof(Antialiasing_t259580628, ___materialFXAAIII_26)); }
	inline Material_t1886596500 * get_materialFXAAIII_26() const { return ___materialFXAAIII_26; }
	inline Material_t1886596500 ** get_address_of_materialFXAAIII_26() { return &___materialFXAAIII_26; }
	inline void set_materialFXAAIII_26(Material_t1886596500 * value)
	{
		___materialFXAAIII_26 = value;
		Il2CppCodeGenWriteBarrier(&___materialFXAAIII_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
