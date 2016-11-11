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

// UnityEngine.Animator
struct Animator_t792326996;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t3860414472;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"
#include "UnityEngine_UnityEngine_RuntimeAnimatorController3860414472.h"

// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1775105839 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m436748612 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m2336836203 (Animator_t792326996 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C"  int32_t Animator_GetInteger_m2467155164 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m4253187183 (Animator_t792326996 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m4152421915 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t4162640357  Animator_GetCurrentAnimatorStateInfo_m3061859448 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C"  void Animator_CrossFade_m1472731271 (Animator_t792326996 * __this, String_t* ___stateName0, float ___transitionDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m1281797781 (Animator_t792326996 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m358767974 (Animator_t792326996 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t3860414472 * Animator_get_runtimeAnimatorController_m1822082727 (Animator_t792326996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C"  void Animator_set_runtimeAnimatorController_m3435370636 (Animator_t792326996 * __this, RuntimeAnimatorController_t3860414472 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m4020897098 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m82432478 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m275475356 (Animator_t792326996 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C"  bool Animator_GetBoolString_m1806558899 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C"  void Animator_SetIntegerString_m1111174752 (Animator_t792326996 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C"  int32_t Animator_GetIntegerString_m3084017739 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
