#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicPlayer
struct MusicPlayer_t2820681030;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPlayer
struct  MusicPlayer_t2820681030  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct MusicPlayer_t2820681030_StaticFields
{
public:
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t2820681030 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030_StaticFields, ___instance_2)); }
	inline MusicPlayer_t2820681030 * get_instance_2() const { return ___instance_2; }
	inline MusicPlayer_t2820681030 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MusicPlayer_t2820681030 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
