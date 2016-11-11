#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Object
struct Il2CppObject;
// Melody
struct Melody_t2301047568;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2597280572.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Melody/<Play>c__Iterator3
struct  U3CPlayU3Ec__Iterator3_t3838608624  : public Il2CppObject
{
public:
	// System.Single Melody/<Play>c__Iterator3::<previousWaitTime>__0
	float ___U3CpreviousWaitTimeU3E__0_0;
	// System.Int32 Melody/<Play>c__Iterator3::<i>__1
	int32_t ___U3CiU3E__1_1;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioClip> Melody/<Play>c__Iterator3::<$s_2>__2
	Enumerator_t2597280572  ___U3CU24s_2U3E__2_2;
	// UnityEngine.AudioClip Melody/<Play>c__Iterator3::<toneClip>__3
	AudioClip_t3714538611 * ___U3CtoneClipU3E__3_3;
	// System.Single Melody/<Play>c__Iterator3::<waitTime>__4
	float ___U3CwaitTimeU3E__4_4;
	// System.Int32 Melody/<Play>c__Iterator3::$PC
	int32_t ___U24PC_5;
	// System.Object Melody/<Play>c__Iterator3::$current
	Il2CppObject * ___U24current_6;
	// Melody Melody/<Play>c__Iterator3::<>f__this
	Melody_t2301047568 * ___U3CU3Ef__this_7;

public:
	inline static int32_t get_offset_of_U3CpreviousWaitTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CpreviousWaitTimeU3E__0_0)); }
	inline float get_U3CpreviousWaitTimeU3E__0_0() const { return ___U3CpreviousWaitTimeU3E__0_0; }
	inline float* get_address_of_U3CpreviousWaitTimeU3E__0_0() { return &___U3CpreviousWaitTimeU3E__0_0; }
	inline void set_U3CpreviousWaitTimeU3E__0_0(float value)
	{
		___U3CpreviousWaitTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_1() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CiU3E__1_1)); }
	inline int32_t get_U3CiU3E__1_1() const { return ___U3CiU3E__1_1; }
	inline int32_t* get_address_of_U3CiU3E__1_1() { return &___U3CiU3E__1_1; }
	inline void set_U3CiU3E__1_1(int32_t value)
	{
		___U3CiU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CU24s_2U3E__2_2() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CU24s_2U3E__2_2)); }
	inline Enumerator_t2597280572  get_U3CU24s_2U3E__2_2() const { return ___U3CU24s_2U3E__2_2; }
	inline Enumerator_t2597280572 * get_address_of_U3CU24s_2U3E__2_2() { return &___U3CU24s_2U3E__2_2; }
	inline void set_U3CU24s_2U3E__2_2(Enumerator_t2597280572  value)
	{
		___U3CU24s_2U3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CtoneClipU3E__3_3() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CtoneClipU3E__3_3)); }
	inline AudioClip_t3714538611 * get_U3CtoneClipU3E__3_3() const { return ___U3CtoneClipU3E__3_3; }
	inline AudioClip_t3714538611 ** get_address_of_U3CtoneClipU3E__3_3() { return &___U3CtoneClipU3E__3_3; }
	inline void set_U3CtoneClipU3E__3_3(AudioClip_t3714538611 * value)
	{
		___U3CtoneClipU3E__3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtoneClipU3E__3_3, value);
	}

	inline static int32_t get_offset_of_U3CwaitTimeU3E__4_4() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CwaitTimeU3E__4_4)); }
	inline float get_U3CwaitTimeU3E__4_4() const { return ___U3CwaitTimeU3E__4_4; }
	inline float* get_address_of_U3CwaitTimeU3E__4_4() { return &___U3CwaitTimeU3E__4_4; }
	inline void set_U3CwaitTimeU3E__4_4(float value)
	{
		___U3CwaitTimeU3E__4_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_7() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__Iterator3_t3838608624, ___U3CU3Ef__this_7)); }
	inline Melody_t2301047568 * get_U3CU3Ef__this_7() const { return ___U3CU3Ef__this_7; }
	inline Melody_t2301047568 ** get_address_of_U3CU3Ef__this_7() { return &___U3CU3Ef__this_7; }
	inline void set_U3CU3Ef__this_7(Melody_t2301047568 * value)
	{
		___U3CU3Ef__this_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
