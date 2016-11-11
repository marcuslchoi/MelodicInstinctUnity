#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Melody
struct Melody_t2301047568;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Answer
struct  Answer_t1966025694  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Answer::_isCorrect
	bool ____isCorrect_2;
	// Melody Answer::_quesMelody
	Melody_t2301047568 * ____quesMelody_3;
	// Melody Answer::_ansMelody
	Melody_t2301047568 * ____ansMelody_4;

public:
	inline static int32_t get_offset_of__isCorrect_2() { return static_cast<int32_t>(offsetof(Answer_t1966025694, ____isCorrect_2)); }
	inline bool get__isCorrect_2() const { return ____isCorrect_2; }
	inline bool* get_address_of__isCorrect_2() { return &____isCorrect_2; }
	inline void set__isCorrect_2(bool value)
	{
		____isCorrect_2 = value;
	}

	inline static int32_t get_offset_of__quesMelody_3() { return static_cast<int32_t>(offsetof(Answer_t1966025694, ____quesMelody_3)); }
	inline Melody_t2301047568 * get__quesMelody_3() const { return ____quesMelody_3; }
	inline Melody_t2301047568 ** get_address_of__quesMelody_3() { return &____quesMelody_3; }
	inline void set__quesMelody_3(Melody_t2301047568 * value)
	{
		____quesMelody_3 = value;
		Il2CppCodeGenWriteBarrier(&____quesMelody_3, value);
	}

	inline static int32_t get_offset_of__ansMelody_4() { return static_cast<int32_t>(offsetof(Answer_t1966025694, ____ansMelody_4)); }
	inline Melody_t2301047568 * get__ansMelody_4() const { return ____ansMelody_4; }
	inline Melody_t2301047568 ** get_address_of__ansMelody_4() { return &____ansMelody_4; }
	inline void set__ansMelody_4(Melody_t2301047568 * value)
	{
		____ansMelody_4 = value;
		Il2CppCodeGenWriteBarrier(&____ansMelody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
