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

// System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,ScaleDegree>
struct Transform_1_t1687003650;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ScaleDegree404253846.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,ScaleDegree>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4067953747_gshared (Transform_1_t1687003650 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4067953747(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1687003650 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4067953747_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,ScaleDegree>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m2950349897_gshared (Transform_1_t1687003650 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2950349897(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t1687003650 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2950349897_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,ScaleDegree>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m530653352_gshared (Transform_1_t1687003650 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m530653352(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1687003650 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m530653352_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,ScaleDegree>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m47547553_gshared (Transform_1_t1687003650 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m47547553(__this, ___result0, method) ((  int32_t (*) (Transform_1_t1687003650 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m47547553_gshared)(__this, ___result0, method)
