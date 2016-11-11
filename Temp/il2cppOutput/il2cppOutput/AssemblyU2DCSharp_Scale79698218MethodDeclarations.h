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

// Scale
struct Scale_t79698218;
// System.String
struct String_t;
// System.Collections.Generic.List`1<MusicNote>
struct List_1_t3190896784;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ScaleType126056324.h"

// System.Void Scale::.ctor(System.String,ScaleType)
extern "C"  void Scale__ctor_m3947468105 (Scale_t79698218 * __this, String_t* ___tonic0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::.cctor()
extern "C"  void Scale__cctor_m2445368396 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Scale::get_Tonic()
extern "C"  String_t* Scale_get_Tonic_m2979912582 (Scale_t79698218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::set_Tonic(System.String)
extern "C"  void Scale_set_Tonic_m2969443891 (Scale_t79698218 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Scale::get_TonicIndex()
extern "C"  int32_t Scale_get_TonicIndex_m3568708995 (Scale_t79698218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::set_TonicIndex(System.Int32)
extern "C"  void Scale_set_TonicIndex_m3744619414 (Scale_t79698218 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MusicNote> Scale::get_MusicNotes()
extern "C"  List_1_t3190896784 * Scale_get_MusicNotes_m2124592240 (Scale_t79698218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::set_MusicNotes(System.Collections.Generic.List`1<MusicNote>)
extern "C"  void Scale_set_MusicNotes_m302830679 (Scale_t79698218 * __this, List_1_t3190896784 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScaleType Scale::get_Type()
extern "C"  int32_t Scale_get_Type_m1312910071 (Scale_t79698218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::set_Type(ScaleType)
extern "C"  void Scale_set_Type_m809185428 (Scale_t79698218 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scale::PopulateMusicNotes()
extern "C"  void Scale_PopulateMusicNotes_m3783969993 (Scale_t79698218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
