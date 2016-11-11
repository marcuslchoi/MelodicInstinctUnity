#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ScaleDegree>
struct List_1_t1201212815;
// System.Collections.Generic.Dictionary`2<ScaleType,System.Collections.Generic.List`1<ScaleDegree>>
struct Dictionary_2_t3203979913;
// System.String
struct String_t;
// System.Collections.Generic.List`1<MusicNote>
struct List_1_t3190896784;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_ScaleType126056324.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scale
struct  Scale_t79698218  : public MonoBehaviour_t3012272455
{
public:
	// System.String Scale::_tonic
	String_t* ____tonic_5;
	// System.Int32 Scale::_tonicIndex
	int32_t ____tonicIndex_6;
	// System.Collections.Generic.List`1<MusicNote> Scale::<MusicNotes>k__BackingField
	List_1_t3190896784 * ___U3CMusicNotesU3Ek__BackingField_7;
	// ScaleType Scale::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__tonic_5() { return static_cast<int32_t>(offsetof(Scale_t79698218, ____tonic_5)); }
	inline String_t* get__tonic_5() const { return ____tonic_5; }
	inline String_t** get_address_of__tonic_5() { return &____tonic_5; }
	inline void set__tonic_5(String_t* value)
	{
		____tonic_5 = value;
		Il2CppCodeGenWriteBarrier(&____tonic_5, value);
	}

	inline static int32_t get_offset_of__tonicIndex_6() { return static_cast<int32_t>(offsetof(Scale_t79698218, ____tonicIndex_6)); }
	inline int32_t get__tonicIndex_6() const { return ____tonicIndex_6; }
	inline int32_t* get_address_of__tonicIndex_6() { return &____tonicIndex_6; }
	inline void set__tonicIndex_6(int32_t value)
	{
		____tonicIndex_6 = value;
	}

	inline static int32_t get_offset_of_U3CMusicNotesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Scale_t79698218, ___U3CMusicNotesU3Ek__BackingField_7)); }
	inline List_1_t3190896784 * get_U3CMusicNotesU3Ek__BackingField_7() const { return ___U3CMusicNotesU3Ek__BackingField_7; }
	inline List_1_t3190896784 ** get_address_of_U3CMusicNotesU3Ek__BackingField_7() { return &___U3CMusicNotesU3Ek__BackingField_7; }
	inline void set_U3CMusicNotesU3Ek__BackingField_7(List_1_t3190896784 * value)
	{
		___U3CMusicNotesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMusicNotesU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Scale_t79698218, ___U3CTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
	}
};

struct Scale_t79698218_StaticFields
{
public:
	// System.Collections.Generic.List`1<ScaleDegree> Scale::Major
	List_1_t1201212815 * ___Major_2;
	// System.Collections.Generic.List`1<ScaleDegree> Scale::RelativeMinor
	List_1_t1201212815 * ___RelativeMinor_3;
	// System.Collections.Generic.Dictionary`2<ScaleType,System.Collections.Generic.List`1<ScaleDegree>> Scale::TypeToDegrees
	Dictionary_2_t3203979913 * ___TypeToDegrees_4;

public:
	inline static int32_t get_offset_of_Major_2() { return static_cast<int32_t>(offsetof(Scale_t79698218_StaticFields, ___Major_2)); }
	inline List_1_t1201212815 * get_Major_2() const { return ___Major_2; }
	inline List_1_t1201212815 ** get_address_of_Major_2() { return &___Major_2; }
	inline void set_Major_2(List_1_t1201212815 * value)
	{
		___Major_2 = value;
		Il2CppCodeGenWriteBarrier(&___Major_2, value);
	}

	inline static int32_t get_offset_of_RelativeMinor_3() { return static_cast<int32_t>(offsetof(Scale_t79698218_StaticFields, ___RelativeMinor_3)); }
	inline List_1_t1201212815 * get_RelativeMinor_3() const { return ___RelativeMinor_3; }
	inline List_1_t1201212815 ** get_address_of_RelativeMinor_3() { return &___RelativeMinor_3; }
	inline void set_RelativeMinor_3(List_1_t1201212815 * value)
	{
		___RelativeMinor_3 = value;
		Il2CppCodeGenWriteBarrier(&___RelativeMinor_3, value);
	}

	inline static int32_t get_offset_of_TypeToDegrees_4() { return static_cast<int32_t>(offsetof(Scale_t79698218_StaticFields, ___TypeToDegrees_4)); }
	inline Dictionary_2_t3203979913 * get_TypeToDegrees_4() const { return ___TypeToDegrees_4; }
	inline Dictionary_2_t3203979913 ** get_address_of_TypeToDegrees_4() { return &___TypeToDegrees_4; }
	inline void set_TypeToDegrees_4(Dictionary_2_t3203979913 * value)
	{
		___TypeToDegrees_4 = value;
		Il2CppCodeGenWriteBarrier(&___TypeToDegrees_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
