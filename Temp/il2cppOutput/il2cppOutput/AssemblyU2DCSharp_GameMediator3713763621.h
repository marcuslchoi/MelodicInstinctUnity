#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// MusicNote
struct MusicNote_t2393937815;
// Melody
struct Melody_t2301047568;
// Scale
struct Scale_t79698218;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t1786993236;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1355425710;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameMediator
struct  GameMediator_t3713763621  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Button GameMediator::PlayButton
	Button_t990034267 * ___PlayButton_2;
	// UnityEngine.Camera GameMediator::CameraCanvas
	Camera_t3533968274 * ___CameraCanvas_3;
	// UnityEngine.GameObject GameMediator::Solfege3D
	GameObject_t4012695102 * ___Solfege3D_4;
	// MusicNote GameMediator::currentNote
	MusicNote_t2393937815 * ___currentNote_5;
	// Scale GameMediator::myScale
	Scale_t79698218 * ___myScale_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameMediator::Solfege3Ds
	List_1_t514686775 * ___Solfege3Ds_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> GameMediator::ToneButtons
	List_1_t1786993236 * ___ToneButtons_10;
	// UnityEngine.UI.Text GameMediator::Feedback
	Text_t3286458198 * ___Feedback_11;
	// UnityEngine.UI.Text GameMediator::StatsText
	Text_t3286458198 * ___StatsText_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> GameMediator::SolfToAnimation
	Dictionary_2_t1355425710 * ___SolfToAnimation_13;
	// System.String GameMediator::tonic
	String_t* ___tonic_14;
	// System.Int32 GameMediator::tempo
	int32_t ___tempo_15;
	// System.Int32 GameMediator::melodyLength
	int32_t ___melodyLength_16;
	// System.Int32 GameMediator::measures
	int32_t ___measures_17;
	// System.Int32 GameMediator::beatsPerMeasure
	int32_t ___beatsPerMeasure_18;
	// System.Int32 GameMediator::melodiesPlayed
	int32_t ___melodiesPlayed_20;
	// System.Int32 GameMediator::correctMelodies
	int32_t ___correctMelodies_21;
	// System.Boolean GameMediator::isCorrectMelody
	bool ___isCorrectMelody_22;

public:
	inline static int32_t get_offset_of_PlayButton_2() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___PlayButton_2)); }
	inline Button_t990034267 * get_PlayButton_2() const { return ___PlayButton_2; }
	inline Button_t990034267 ** get_address_of_PlayButton_2() { return &___PlayButton_2; }
	inline void set_PlayButton_2(Button_t990034267 * value)
	{
		___PlayButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlayButton_2, value);
	}

	inline static int32_t get_offset_of_CameraCanvas_3() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___CameraCanvas_3)); }
	inline Camera_t3533968274 * get_CameraCanvas_3() const { return ___CameraCanvas_3; }
	inline Camera_t3533968274 ** get_address_of_CameraCanvas_3() { return &___CameraCanvas_3; }
	inline void set_CameraCanvas_3(Camera_t3533968274 * value)
	{
		___CameraCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraCanvas_3, value);
	}

	inline static int32_t get_offset_of_Solfege3D_4() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___Solfege3D_4)); }
	inline GameObject_t4012695102 * get_Solfege3D_4() const { return ___Solfege3D_4; }
	inline GameObject_t4012695102 ** get_address_of_Solfege3D_4() { return &___Solfege3D_4; }
	inline void set_Solfege3D_4(GameObject_t4012695102 * value)
	{
		___Solfege3D_4 = value;
		Il2CppCodeGenWriteBarrier(&___Solfege3D_4, value);
	}

	inline static int32_t get_offset_of_currentNote_5() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___currentNote_5)); }
	inline MusicNote_t2393937815 * get_currentNote_5() const { return ___currentNote_5; }
	inline MusicNote_t2393937815 ** get_address_of_currentNote_5() { return &___currentNote_5; }
	inline void set_currentNote_5(MusicNote_t2393937815 * value)
	{
		___currentNote_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentNote_5, value);
	}

	inline static int32_t get_offset_of_myScale_8() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___myScale_8)); }
	inline Scale_t79698218 * get_myScale_8() const { return ___myScale_8; }
	inline Scale_t79698218 ** get_address_of_myScale_8() { return &___myScale_8; }
	inline void set_myScale_8(Scale_t79698218 * value)
	{
		___myScale_8 = value;
		Il2CppCodeGenWriteBarrier(&___myScale_8, value);
	}

	inline static int32_t get_offset_of_Solfege3Ds_9() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___Solfege3Ds_9)); }
	inline List_1_t514686775 * get_Solfege3Ds_9() const { return ___Solfege3Ds_9; }
	inline List_1_t514686775 ** get_address_of_Solfege3Ds_9() { return &___Solfege3Ds_9; }
	inline void set_Solfege3Ds_9(List_1_t514686775 * value)
	{
		___Solfege3Ds_9 = value;
		Il2CppCodeGenWriteBarrier(&___Solfege3Ds_9, value);
	}

	inline static int32_t get_offset_of_ToneButtons_10() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___ToneButtons_10)); }
	inline List_1_t1786993236 * get_ToneButtons_10() const { return ___ToneButtons_10; }
	inline List_1_t1786993236 ** get_address_of_ToneButtons_10() { return &___ToneButtons_10; }
	inline void set_ToneButtons_10(List_1_t1786993236 * value)
	{
		___ToneButtons_10 = value;
		Il2CppCodeGenWriteBarrier(&___ToneButtons_10, value);
	}

	inline static int32_t get_offset_of_Feedback_11() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___Feedback_11)); }
	inline Text_t3286458198 * get_Feedback_11() const { return ___Feedback_11; }
	inline Text_t3286458198 ** get_address_of_Feedback_11() { return &___Feedback_11; }
	inline void set_Feedback_11(Text_t3286458198 * value)
	{
		___Feedback_11 = value;
		Il2CppCodeGenWriteBarrier(&___Feedback_11, value);
	}

	inline static int32_t get_offset_of_StatsText_12() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___StatsText_12)); }
	inline Text_t3286458198 * get_StatsText_12() const { return ___StatsText_12; }
	inline Text_t3286458198 ** get_address_of_StatsText_12() { return &___StatsText_12; }
	inline void set_StatsText_12(Text_t3286458198 * value)
	{
		___StatsText_12 = value;
		Il2CppCodeGenWriteBarrier(&___StatsText_12, value);
	}

	inline static int32_t get_offset_of_SolfToAnimation_13() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___SolfToAnimation_13)); }
	inline Dictionary_2_t1355425710 * get_SolfToAnimation_13() const { return ___SolfToAnimation_13; }
	inline Dictionary_2_t1355425710 ** get_address_of_SolfToAnimation_13() { return &___SolfToAnimation_13; }
	inline void set_SolfToAnimation_13(Dictionary_2_t1355425710 * value)
	{
		___SolfToAnimation_13 = value;
		Il2CppCodeGenWriteBarrier(&___SolfToAnimation_13, value);
	}

	inline static int32_t get_offset_of_tonic_14() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___tonic_14)); }
	inline String_t* get_tonic_14() const { return ___tonic_14; }
	inline String_t** get_address_of_tonic_14() { return &___tonic_14; }
	inline void set_tonic_14(String_t* value)
	{
		___tonic_14 = value;
		Il2CppCodeGenWriteBarrier(&___tonic_14, value);
	}

	inline static int32_t get_offset_of_tempo_15() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___tempo_15)); }
	inline int32_t get_tempo_15() const { return ___tempo_15; }
	inline int32_t* get_address_of_tempo_15() { return &___tempo_15; }
	inline void set_tempo_15(int32_t value)
	{
		___tempo_15 = value;
	}

	inline static int32_t get_offset_of_melodyLength_16() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___melodyLength_16)); }
	inline int32_t get_melodyLength_16() const { return ___melodyLength_16; }
	inline int32_t* get_address_of_melodyLength_16() { return &___melodyLength_16; }
	inline void set_melodyLength_16(int32_t value)
	{
		___melodyLength_16 = value;
	}

	inline static int32_t get_offset_of_measures_17() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___measures_17)); }
	inline int32_t get_measures_17() const { return ___measures_17; }
	inline int32_t* get_address_of_measures_17() { return &___measures_17; }
	inline void set_measures_17(int32_t value)
	{
		___measures_17 = value;
	}

	inline static int32_t get_offset_of_beatsPerMeasure_18() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___beatsPerMeasure_18)); }
	inline int32_t get_beatsPerMeasure_18() const { return ___beatsPerMeasure_18; }
	inline int32_t* get_address_of_beatsPerMeasure_18() { return &___beatsPerMeasure_18; }
	inline void set_beatsPerMeasure_18(int32_t value)
	{
		___beatsPerMeasure_18 = value;
	}

	inline static int32_t get_offset_of_melodiesPlayed_20() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___melodiesPlayed_20)); }
	inline int32_t get_melodiesPlayed_20() const { return ___melodiesPlayed_20; }
	inline int32_t* get_address_of_melodiesPlayed_20() { return &___melodiesPlayed_20; }
	inline void set_melodiesPlayed_20(int32_t value)
	{
		___melodiesPlayed_20 = value;
	}

	inline static int32_t get_offset_of_correctMelodies_21() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___correctMelodies_21)); }
	inline int32_t get_correctMelodies_21() const { return ___correctMelodies_21; }
	inline int32_t* get_address_of_correctMelodies_21() { return &___correctMelodies_21; }
	inline void set_correctMelodies_21(int32_t value)
	{
		___correctMelodies_21 = value;
	}

	inline static int32_t get_offset_of_isCorrectMelody_22() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621, ___isCorrectMelody_22)); }
	inline bool get_isCorrectMelody_22() const { return ___isCorrectMelody_22; }
	inline bool* get_address_of_isCorrectMelody_22() { return &___isCorrectMelody_22; }
	inline void set_isCorrectMelody_22(bool value)
	{
		___isCorrectMelody_22 = value;
	}
};

struct GameMediator_t3713763621_StaticFields
{
public:
	// System.Int32 GameMediator::guesses
	int32_t ___guesses_6;
	// Melody GameMediator::currentMelody
	Melody_t2301047568 * ___currentMelody_7;
	// System.Single GameMediator::timeBeginAnswer
	float ___timeBeginAnswer_19;

public:
	inline static int32_t get_offset_of_guesses_6() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621_StaticFields, ___guesses_6)); }
	inline int32_t get_guesses_6() const { return ___guesses_6; }
	inline int32_t* get_address_of_guesses_6() { return &___guesses_6; }
	inline void set_guesses_6(int32_t value)
	{
		___guesses_6 = value;
	}

	inline static int32_t get_offset_of_currentMelody_7() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621_StaticFields, ___currentMelody_7)); }
	inline Melody_t2301047568 * get_currentMelody_7() const { return ___currentMelody_7; }
	inline Melody_t2301047568 ** get_address_of_currentMelody_7() { return &___currentMelody_7; }
	inline void set_currentMelody_7(Melody_t2301047568 * value)
	{
		___currentMelody_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentMelody_7, value);
	}

	inline static int32_t get_offset_of_timeBeginAnswer_19() { return static_cast<int32_t>(offsetof(GameMediator_t3713763621_StaticFields, ___timeBeginAnswer_19)); }
	inline float get_timeBeginAnswer_19() const { return ___timeBeginAnswer_19; }
	inline float* get_address_of_timeBeginAnswer_19() { return &___timeBeginAnswer_19; }
	inline void set_timeBeginAnswer_19(float value)
	{
		___timeBeginAnswer_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
