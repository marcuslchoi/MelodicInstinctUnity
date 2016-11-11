#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t2914300976;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m348010317 (PostEffectsHelper_t2914300976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m1733071089 (PostEffectsHelper_t2914300976 * __this, RenderTexture_t12905170 * ___source0, RenderTexture_t12905170 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m3504781099 (Il2CppObject * __this /* static, unused */, float ___dist0, RenderTexture_t12905170 * ___source1, RenderTexture_t12905170 * ___dest2, Material_t1886596500 * ___material3, Camera_t3533968274 * ___cameraForProjectionMatrix4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m147599851 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___dest0, Material_t1886596500 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m392804740 (Il2CppObject * __this /* static, unused */, float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_t12905170 * ___source4, RenderTexture_t12905170 * ___dest5, Material_t1886596500 * ___material6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
