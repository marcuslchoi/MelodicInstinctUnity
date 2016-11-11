#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicNote
struct MusicNote_t2393937815;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayToneBtn
struct  PlayToneBtn_t4244783510  : public MonoBehaviour_t3012272455
{
public:
	// MusicNote PlayToneBtn::note
	MusicNote_t2393937815 * ___note_2;
	// UnityEngine.AudioClip PlayToneBtn::audioClip
	AudioClip_t3714538611 * ___audioClip_3;
	// UnityEngine.UI.Text PlayToneBtn::toneText
	Text_t3286458198 * ___toneText_4;
	// UnityEngine.UI.Image PlayToneBtn::keyImage
	Image_t3354615620 * ___keyImage_6;
	// UnityEngine.AudioSource PlayToneBtn::audioSource
	AudioSource_t3628549054 * ___audioSource_9;

public:
	inline static int32_t get_offset_of_note_2() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510, ___note_2)); }
	inline MusicNote_t2393937815 * get_note_2() const { return ___note_2; }
	inline MusicNote_t2393937815 ** get_address_of_note_2() { return &___note_2; }
	inline void set_note_2(MusicNote_t2393937815 * value)
	{
		___note_2 = value;
		Il2CppCodeGenWriteBarrier(&___note_2, value);
	}

	inline static int32_t get_offset_of_audioClip_3() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510, ___audioClip_3)); }
	inline AudioClip_t3714538611 * get_audioClip_3() const { return ___audioClip_3; }
	inline AudioClip_t3714538611 ** get_address_of_audioClip_3() { return &___audioClip_3; }
	inline void set_audioClip_3(AudioClip_t3714538611 * value)
	{
		___audioClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_3, value);
	}

	inline static int32_t get_offset_of_toneText_4() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510, ___toneText_4)); }
	inline Text_t3286458198 * get_toneText_4() const { return ___toneText_4; }
	inline Text_t3286458198 ** get_address_of_toneText_4() { return &___toneText_4; }
	inline void set_toneText_4(Text_t3286458198 * value)
	{
		___toneText_4 = value;
		Il2CppCodeGenWriteBarrier(&___toneText_4, value);
	}

	inline static int32_t get_offset_of_keyImage_6() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510, ___keyImage_6)); }
	inline Image_t3354615620 * get_keyImage_6() const { return ___keyImage_6; }
	inline Image_t3354615620 ** get_address_of_keyImage_6() { return &___keyImage_6; }
	inline void set_keyImage_6(Image_t3354615620 * value)
	{
		___keyImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___keyImage_6, value);
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510, ___audioSource_9)); }
	inline AudioSource_t3628549054 * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_t3628549054 * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_9, value);
	}
};

struct PlayToneBtn_t4244783510_StaticFields
{
public:
	// System.String PlayToneBtn::solfClicked
	String_t* ___solfClicked_5;
	// System.Boolean PlayToneBtn::isCorrectNote
	bool ___isCorrectNote_7;
	// System.Boolean PlayToneBtn::isCorrectBeat
	bool ___isCorrectBeat_8;

public:
	inline static int32_t get_offset_of_solfClicked_5() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510_StaticFields, ___solfClicked_5)); }
	inline String_t* get_solfClicked_5() const { return ___solfClicked_5; }
	inline String_t** get_address_of_solfClicked_5() { return &___solfClicked_5; }
	inline void set_solfClicked_5(String_t* value)
	{
		___solfClicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___solfClicked_5, value);
	}

	inline static int32_t get_offset_of_isCorrectNote_7() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510_StaticFields, ___isCorrectNote_7)); }
	inline bool get_isCorrectNote_7() const { return ___isCorrectNote_7; }
	inline bool* get_address_of_isCorrectNote_7() { return &___isCorrectNote_7; }
	inline void set_isCorrectNote_7(bool value)
	{
		___isCorrectNote_7 = value;
	}

	inline static int32_t get_offset_of_isCorrectBeat_8() { return static_cast<int32_t>(offsetof(PlayToneBtn_t4244783510_StaticFields, ___isCorrectBeat_8)); }
	inline bool get_isCorrectBeat_8() const { return ___isCorrectBeat_8; }
	inline bool* get_address_of_isCorrectBeat_8() { return &___isCorrectBeat_8; }
	inline void set_isCorrectBeat_8(bool value)
	{
		___isCorrectBeat_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
