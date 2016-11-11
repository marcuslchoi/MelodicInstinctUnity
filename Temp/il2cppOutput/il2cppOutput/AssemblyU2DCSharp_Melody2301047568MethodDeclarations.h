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

// Melody
struct Melody_t2301047568;
// Scale
struct Scale_t79698218;
// System.Collections.Generic.List`1<MusicNote>
struct List_1_t3190896784;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1755167990;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Scale79698218.h"

// System.Void Melody::.ctor(System.Int32,Scale,System.Int32,System.Int32,System.Int32)
extern "C"  void Melody__ctor_m1405611097 (Melody_t2301047568 * __this, int32_t ___length0, Scale_t79698218 * ___scale1, int32_t ___tempoBPM2, int32_t ___measures3, int32_t ___beatsPerMeasure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::.ctor(System.Collections.Generic.List`1<MusicNote>)
extern "C"  void Melody__ctor_m3455906022 (Melody_t2301047568 * __this, List_1_t3190896784 * ___answerNotes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_BigInterval()
extern "C"  int32_t Melody_get_BigInterval_m567927767 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_BigInterval(System.Int32)
extern "C"  void Melody_set_BigInterval_m3896874498 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_SmallInterval()
extern "C"  int32_t Melody_get_SmallInterval_m1989940958 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_SmallInterval(System.Int32)
extern "C"  void Melody_set_SmallInterval_m1711540233 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_PercentBigInterval()
extern "C"  int32_t Melody_get_PercentBigInterval_m2547016208 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_PercentBigInterval(System.Int32)
extern "C"  void Melody_set_PercentBigInterval_m2212454087 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_Measures()
extern "C"  int32_t Melody_get_Measures_m3089285637 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_Measures(System.Int32)
extern "C"  void Melody_set_Measures_m2898747068 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_BeatsPerMeasure()
extern "C"  int32_t Melody_get_BeatsPerMeasure_m427363344 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_BeatsPerMeasure(System.Int32)
extern "C"  void Melody_set_BeatsPerMeasure_m2637034427 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_TempoBPM()
extern "C"  int32_t Melody_get_TempoBPM_m2568268852 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_TempoBPM(System.Int32)
extern "C"  void Melody_set_TempoBPM_m976779883 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Melody::get_Playtime()
extern "C"  float Melody_get_Playtime_m3978263663 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_Playtime(System.Single)
extern "C"  void Melody_set_Playtime_m1726999284 (Melody_t2301047568 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Melody::get_TimePerBeat()
extern "C"  float Melody_get_TimePerBeat_m572272538 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Single> Melody::get_NoteBeats()
extern "C"  List_1_t1755167990 * Melody_get_NoteBeats_m639316931 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_NoteBeats(System.Collections.Generic.List`1<System.Single>)
extern "C"  void Melody_set_NoteBeats_m2694376674 (Melody_t2301047568 * __this, List_1_t1755167990 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Melody::get_Length()
extern "C"  int32_t Melody_get_Length_m3399107990 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_Length(System.Int32)
extern "C"  void Melody_set_Length_m2398720589 (Melody_t2301047568 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MusicNote> Melody::get_Notes()
extern "C"  List_1_t3190896784 * Melody_get_Notes_m2692557225 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_Notes(System.Collections.Generic.List`1<MusicNote>)
extern "C"  void Melody_set_Notes_m2031360680 (Melody_t2301047568 * __this, List_1_t3190896784 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Scale Melody::get_AllNotesScale()
extern "C"  Scale_t79698218 * Melody_get_AllNotesScale_m4144268609 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::set_AllNotesScale(Scale)
extern "C"  void Melody_set_AllNotesScale_m1331553458 (Melody_t2301047568 * __this, Scale_t79698218 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Melody::Play()
extern "C"  Il2CppObject * Melody_Play_m1341479637 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::GenerateNoteBeats()
extern "C"  void Melody_GenerateNoteBeats_m738115551 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Melody::GenerateMusicNotes()
extern "C"  void Melody_GenerateMusicNotes_m3783400714 (Melody_t2301047568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
