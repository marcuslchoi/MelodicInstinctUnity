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

// MusicNote
struct MusicNote_t2393937815;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Char>>
struct Dictionary_2_t918396276;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ScaleDegree404253846.h"
#include "mscorlib_System_String968488902.h"

// System.Void MusicNote::.ctor(ScaleDegree,System.String)
extern "C"  void MusicNote__ctor_m2035887140 (MusicNote_t2393937815 * __this, int32_t ___solfege0, String_t* ___nameFlat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicNote::.ctor(System.String)
extern "C"  void MusicNote__ctor_m3317345230 (MusicNote_t2393937815 * __this, String_t* ___nameFlat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicNote::.cctor()
extern "C"  void MusicNote__cctor_m3029379705 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> MusicNote::get_FlatToSharp()
extern "C"  Dictionary_2_t2606186806 * MusicNote_get_FlatToSharp_m2722658893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Char>> MusicNote::get_TonicToKeyLayout()
extern "C"  Dictionary_2_t918396276 * MusicNote_get_TonicToKeyLayout_m3613012701 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MusicNote::get_NotesFlat()
extern "C"  StringU5BU5D_t2956870243* MusicNote_get_NotesFlat_m3979206852 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MusicNote::get_NotesSharp()
extern "C"  StringU5BU5D_t2956870243* MusicNote_get_NotesSharp_m1634467105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MusicNote::get_NameFlat()
extern "C"  String_t* MusicNote_get_NameFlat_m743001978 (MusicNote_t2393937815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicNote::set_NameFlat(System.String)
extern "C"  void MusicNote_set_NameFlat_m345212657 (MusicNote_t2393937815 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MusicNote::get_NameSharp()
extern "C"  String_t* MusicNote_get_NameSharp_m96363819 (MusicNote_t2393937815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicNote::set_NameSharp(System.String)
extern "C"  void MusicNote_set_NameSharp_m2371328942 (MusicNote_t2393937815 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScaleDegree MusicNote::get_Solfege()
extern "C"  int32_t MusicNote_get_Solfege_m48861523 (MusicNote_t2393937815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicNote::set_Solfege(ScaleDegree)
extern "C"  void MusicNote_set_Solfege_m196406330 (MusicNote_t2393937815 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
