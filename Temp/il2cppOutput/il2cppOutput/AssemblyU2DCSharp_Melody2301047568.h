#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Scale
struct Scale_t79698218;
// System.Collections.Generic.List`1<MusicNote>
struct List_1_t3190896784;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1755167990;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t216530284;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Melody
struct  Melody_t2301047568  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Melody::_length
	int32_t ____length_2;
	// Scale Melody::_scale
	Scale_t79698218 * ____scale_3;
	// System.Collections.Generic.List`1<MusicNote> Melody::_notes
	List_1_t3190896784 * ____notes_4;
	// System.Collections.Generic.List`1<System.Single> Melody::_noteBeats
	List_1_t1755167990 * ____noteBeats_5;
	// System.Int32 Melody::_tempoBPM
	int32_t ____tempoBPM_6;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Melody::_toneClips
	List_1_t216530284 * ____toneClips_7;
	// System.Int32 Melody::_bigInterval
	int32_t ____bigInterval_8;
	// System.Int32 Melody::_smallInterval
	int32_t ____smallInterval_9;
	// System.Int32 Melody::_percentBigInterval
	int32_t ____percentBigInterval_10;
	// System.Collections.Generic.List`1<System.Single> Melody::POSSBEATS
	List_1_t1755167990 * ___POSSBEATS_11;
	// System.Int32 Melody::<Measures>k__BackingField
	int32_t ___U3CMeasuresU3Ek__BackingField_12;
	// System.Int32 Melody::<BeatsPerMeasure>k__BackingField
	int32_t ___U3CBeatsPerMeasureU3Ek__BackingField_13;
	// System.Single Melody::<Playtime>k__BackingField
	float ___U3CPlaytimeU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of__scale_3() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____scale_3)); }
	inline Scale_t79698218 * get__scale_3() const { return ____scale_3; }
	inline Scale_t79698218 ** get_address_of__scale_3() { return &____scale_3; }
	inline void set__scale_3(Scale_t79698218 * value)
	{
		____scale_3 = value;
		Il2CppCodeGenWriteBarrier(&____scale_3, value);
	}

	inline static int32_t get_offset_of__notes_4() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____notes_4)); }
	inline List_1_t3190896784 * get__notes_4() const { return ____notes_4; }
	inline List_1_t3190896784 ** get_address_of__notes_4() { return &____notes_4; }
	inline void set__notes_4(List_1_t3190896784 * value)
	{
		____notes_4 = value;
		Il2CppCodeGenWriteBarrier(&____notes_4, value);
	}

	inline static int32_t get_offset_of__noteBeats_5() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____noteBeats_5)); }
	inline List_1_t1755167990 * get__noteBeats_5() const { return ____noteBeats_5; }
	inline List_1_t1755167990 ** get_address_of__noteBeats_5() { return &____noteBeats_5; }
	inline void set__noteBeats_5(List_1_t1755167990 * value)
	{
		____noteBeats_5 = value;
		Il2CppCodeGenWriteBarrier(&____noteBeats_5, value);
	}

	inline static int32_t get_offset_of__tempoBPM_6() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____tempoBPM_6)); }
	inline int32_t get__tempoBPM_6() const { return ____tempoBPM_6; }
	inline int32_t* get_address_of__tempoBPM_6() { return &____tempoBPM_6; }
	inline void set__tempoBPM_6(int32_t value)
	{
		____tempoBPM_6 = value;
	}

	inline static int32_t get_offset_of__toneClips_7() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____toneClips_7)); }
	inline List_1_t216530284 * get__toneClips_7() const { return ____toneClips_7; }
	inline List_1_t216530284 ** get_address_of__toneClips_7() { return &____toneClips_7; }
	inline void set__toneClips_7(List_1_t216530284 * value)
	{
		____toneClips_7 = value;
		Il2CppCodeGenWriteBarrier(&____toneClips_7, value);
	}

	inline static int32_t get_offset_of__bigInterval_8() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____bigInterval_8)); }
	inline int32_t get__bigInterval_8() const { return ____bigInterval_8; }
	inline int32_t* get_address_of__bigInterval_8() { return &____bigInterval_8; }
	inline void set__bigInterval_8(int32_t value)
	{
		____bigInterval_8 = value;
	}

	inline static int32_t get_offset_of__smallInterval_9() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____smallInterval_9)); }
	inline int32_t get__smallInterval_9() const { return ____smallInterval_9; }
	inline int32_t* get_address_of__smallInterval_9() { return &____smallInterval_9; }
	inline void set__smallInterval_9(int32_t value)
	{
		____smallInterval_9 = value;
	}

	inline static int32_t get_offset_of__percentBigInterval_10() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ____percentBigInterval_10)); }
	inline int32_t get__percentBigInterval_10() const { return ____percentBigInterval_10; }
	inline int32_t* get_address_of__percentBigInterval_10() { return &____percentBigInterval_10; }
	inline void set__percentBigInterval_10(int32_t value)
	{
		____percentBigInterval_10 = value;
	}

	inline static int32_t get_offset_of_POSSBEATS_11() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ___POSSBEATS_11)); }
	inline List_1_t1755167990 * get_POSSBEATS_11() const { return ___POSSBEATS_11; }
	inline List_1_t1755167990 ** get_address_of_POSSBEATS_11() { return &___POSSBEATS_11; }
	inline void set_POSSBEATS_11(List_1_t1755167990 * value)
	{
		___POSSBEATS_11 = value;
		Il2CppCodeGenWriteBarrier(&___POSSBEATS_11, value);
	}

	inline static int32_t get_offset_of_U3CMeasuresU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ___U3CMeasuresU3Ek__BackingField_12)); }
	inline int32_t get_U3CMeasuresU3Ek__BackingField_12() const { return ___U3CMeasuresU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CMeasuresU3Ek__BackingField_12() { return &___U3CMeasuresU3Ek__BackingField_12; }
	inline void set_U3CMeasuresU3Ek__BackingField_12(int32_t value)
	{
		___U3CMeasuresU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CBeatsPerMeasureU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ___U3CBeatsPerMeasureU3Ek__BackingField_13)); }
	inline int32_t get_U3CBeatsPerMeasureU3Ek__BackingField_13() const { return ___U3CBeatsPerMeasureU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CBeatsPerMeasureU3Ek__BackingField_13() { return &___U3CBeatsPerMeasureU3Ek__BackingField_13; }
	inline void set_U3CBeatsPerMeasureU3Ek__BackingField_13(int32_t value)
	{
		___U3CBeatsPerMeasureU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CPlaytimeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Melody_t2301047568, ___U3CPlaytimeU3Ek__BackingField_14)); }
	inline float get_U3CPlaytimeU3Ek__BackingField_14() const { return ___U3CPlaytimeU3Ek__BackingField_14; }
	inline float* get_address_of_U3CPlaytimeU3Ek__BackingField_14() { return &___U3CPlaytimeU3Ek__BackingField_14; }
	inline void set_U3CPlaytimeU3Ek__BackingField_14(float value)
	{
		___U3CPlaytimeU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
