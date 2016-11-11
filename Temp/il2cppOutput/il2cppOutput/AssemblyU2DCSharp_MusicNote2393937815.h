#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Char>>
struct Dictionary_2_t918396276;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_ScaleDegree404253846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicNote
struct  MusicNote_t2393937815  : public MonoBehaviour_t3012272455
{
public:
	// System.String MusicNote::_nameFlat
	String_t* ____nameFlat_6;
	// System.String MusicNote::_nameSharp
	String_t* ____nameSharp_7;
	// ScaleDegree MusicNote::_solfege
	int32_t ____solfege_8;

public:
	inline static int32_t get_offset_of__nameFlat_6() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815, ____nameFlat_6)); }
	inline String_t* get__nameFlat_6() const { return ____nameFlat_6; }
	inline String_t** get_address_of__nameFlat_6() { return &____nameFlat_6; }
	inline void set__nameFlat_6(String_t* value)
	{
		____nameFlat_6 = value;
		Il2CppCodeGenWriteBarrier(&____nameFlat_6, value);
	}

	inline static int32_t get_offset_of__nameSharp_7() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815, ____nameSharp_7)); }
	inline String_t* get__nameSharp_7() const { return ____nameSharp_7; }
	inline String_t** get_address_of__nameSharp_7() { return &____nameSharp_7; }
	inline void set__nameSharp_7(String_t* value)
	{
		____nameSharp_7 = value;
		Il2CppCodeGenWriteBarrier(&____nameSharp_7, value);
	}

	inline static int32_t get_offset_of__solfege_8() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815, ____solfege_8)); }
	inline int32_t get__solfege_8() const { return ____solfege_8; }
	inline int32_t* get_address_of__solfege_8() { return &____solfege_8; }
	inline void set__solfege_8(int32_t value)
	{
		____solfege_8 = value;
	}
};

struct MusicNote_t2393937815_StaticFields
{
public:
	// System.String[] MusicNote::_notesFlat
	StringU5BU5D_t2956870243* ____notesFlat_2;
	// System.String[] MusicNote::_notesSharp
	StringU5BU5D_t2956870243* ____notesSharp_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> MusicNote::_flatToSharp
	Dictionary_2_t2606186806 * ____flatToSharp_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Char>> MusicNote::_tonicToKeyLayout
	Dictionary_2_t918396276 * ____tonicToKeyLayout_5;

public:
	inline static int32_t get_offset_of__notesFlat_2() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815_StaticFields, ____notesFlat_2)); }
	inline StringU5BU5D_t2956870243* get__notesFlat_2() const { return ____notesFlat_2; }
	inline StringU5BU5D_t2956870243** get_address_of__notesFlat_2() { return &____notesFlat_2; }
	inline void set__notesFlat_2(StringU5BU5D_t2956870243* value)
	{
		____notesFlat_2 = value;
		Il2CppCodeGenWriteBarrier(&____notesFlat_2, value);
	}

	inline static int32_t get_offset_of__notesSharp_3() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815_StaticFields, ____notesSharp_3)); }
	inline StringU5BU5D_t2956870243* get__notesSharp_3() const { return ____notesSharp_3; }
	inline StringU5BU5D_t2956870243** get_address_of__notesSharp_3() { return &____notesSharp_3; }
	inline void set__notesSharp_3(StringU5BU5D_t2956870243* value)
	{
		____notesSharp_3 = value;
		Il2CppCodeGenWriteBarrier(&____notesSharp_3, value);
	}

	inline static int32_t get_offset_of__flatToSharp_4() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815_StaticFields, ____flatToSharp_4)); }
	inline Dictionary_2_t2606186806 * get__flatToSharp_4() const { return ____flatToSharp_4; }
	inline Dictionary_2_t2606186806 ** get_address_of__flatToSharp_4() { return &____flatToSharp_4; }
	inline void set__flatToSharp_4(Dictionary_2_t2606186806 * value)
	{
		____flatToSharp_4 = value;
		Il2CppCodeGenWriteBarrier(&____flatToSharp_4, value);
	}

	inline static int32_t get_offset_of__tonicToKeyLayout_5() { return static_cast<int32_t>(offsetof(MusicNote_t2393937815_StaticFields, ____tonicToKeyLayout_5)); }
	inline Dictionary_2_t918396276 * get__tonicToKeyLayout_5() const { return ____tonicToKeyLayout_5; }
	inline Dictionary_2_t918396276 ** get_address_of__tonicToKeyLayout_5() { return &____tonicToKeyLayout_5; }
	inline void set__tonicToKeyLayout_5(Dictionary_2_t918396276 * value)
	{
		____tonicToKeyLayout_5 = value;
		Il2CppCodeGenWriteBarrier(&____tonicToKeyLayout_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
