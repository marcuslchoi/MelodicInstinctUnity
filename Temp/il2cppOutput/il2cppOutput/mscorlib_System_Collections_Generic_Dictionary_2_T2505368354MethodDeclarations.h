﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,System.Collections.Generic.KeyValuePair`2<ScaleDegree,System.Object>>
struct Transform_1_t2505368354;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21222618550.h"
#include "AssemblyU2DCSharp_ScaleDegree404253846.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,System.Collections.Generic.KeyValuePair`2<ScaleDegree,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3763239244_gshared (Transform_1_t2505368354 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3763239244(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2505368354 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3763239244_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,System.Collections.Generic.KeyValuePair`2<ScaleDegree,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1222618550  Transform_1_Invoke_m3021784748_gshared (Transform_1_t2505368354 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3021784748(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1222618550  (*) (Transform_1_t2505368354 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3021784748_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,System.Collections.Generic.KeyValuePair`2<ScaleDegree,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2846844759_gshared (Transform_1_t2505368354 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2846844759(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2505368354 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2846844759_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ScaleDegree,System.Object,System.Collections.Generic.KeyValuePair`2<ScaleDegree,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1222618550  Transform_1_EndInvoke_m2119251550_gshared (Transform_1_t2505368354 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2119251550(__this, ___result0, method) ((  KeyValuePair_2_t1222618550  (*) (Transform_1_t2505368354 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2119251550_gshared)(__this, ___result0, method)
