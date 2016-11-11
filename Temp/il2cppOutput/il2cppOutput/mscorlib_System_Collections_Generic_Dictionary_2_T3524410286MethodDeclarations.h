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

// System.Collections.Generic.Dictionary`2/Transform`1<ScaleType,System.Object,ScaleType>
struct Transform_1_t3524410286;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ScaleType126056324.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ScaleType,System.Object,ScaleType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3199526647_gshared (Transform_1_t3524410286 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3199526647(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3524410286 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3199526647_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleType,System.Object,ScaleType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3866609445_gshared (Transform_1_t3524410286 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3866609445(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3524410286 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3866609445_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ScaleType,System.Object,ScaleType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2369823876_gshared (Transform_1_t3524410286 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2369823876(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3524410286 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2369823876_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleType,System.Object,ScaleType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2014142533_gshared (Transform_1_t3524410286 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2014142533(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3524410286 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2014142533_gshared)(__this, ___result0, method)
