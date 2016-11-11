#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// NoteAnimatorControl
struct NoteAnimatorControl_t2900672004;
// UnityEngine.TextAsset
struct TextAsset_t2461560304;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4157799059;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIConrtol_note
struct  GUIConrtol_note_t1042344459  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] GUIConrtol_note::chrModel
	GameObjectU5BU5D_t3499186955* ___chrModel_2;
	// NoteAnimatorControl GUIConrtol_note::chrCtrl
	NoteAnimatorControl_t2900672004 * ___chrCtrl_3;
	// System.Int32 GUIConrtol_note::activeLodIdx
	int32_t ___activeLodIdx_4;
	// System.Int32 GUIConrtol_note::shaderIdx
	int32_t ___shaderIdx_5;
	// System.Int32 GUIConrtol_note::stateLength
	int32_t ___stateLength_6;
	// UnityEngine.TextAsset GUIConrtol_note::stateList
	TextAsset_t2461560304 * ___stateList_7;
	// UnityEngine.TextAsset GUIConrtol_note::IMInfo
	TextAsset_t2461560304 * ___IMInfo_8;
	// System.String[] GUIConrtol_note::stateName
	StringU5BU5D_t2956870243* ___stateName_9;
	// System.String[] GUIConrtol_note::stateLabelName
	StringU5BU5D_t2956870243* ___stateLabelName_10;
	// UnityEngine.GameObject[] GUIConrtol_note::lightObj
	GameObjectU5BU5D_t3499186955* ___lightObj_11;
	// UnityEngine.GameObject GUIConrtol_note::AnimationSelectUI
	GameObject_t4012695102 * ___AnimationSelectUI_12;
	// UnityEngine.GameObject GUIConrtol_note::InteractiveModeUI
	GameObject_t4012695102 * ___InteractiveModeUI_13;
	// UnityEngine.GameObject GUIConrtol_note::ModelInformationUI
	GameObject_t4012695102 * ___ModelInformationUI_14;
	// UnityEngine.UI.Text GUIConrtol_note::modelChangeButtonlabel
	Text_t3286458198 * ___modelChangeButtonlabel_15;
	// UnityEngine.GameObject[] GUIConrtol_note::ASelectBtn
	GameObjectU5BU5D_t3499186955* ___ASelectBtn_16;
	// UnityEngine.UI.Text[] GUIConrtol_note::ASelectLabel
	TextU5BU5D_t4157799059* ___ASelectLabel_17;
	// UnityEngine.UI.Text GUIConrtol_note::ASelectPage
	Text_t3286458198 * ___ASelectPage_18;
	// UnityEngine.UI.Text GUIConrtol_note::IMText
	Text_t3286458198 * ___IMText_19;
	// System.Boolean GUIConrtol_note::viewerMode
	bool ___viewerMode_20;
	// System.String GUIConrtol_note::meshInfoMsg
	String_t* ___meshInfoMsg_21;
	// System.String[] GUIConrtol_note::iModeMsg
	StringU5BU5D_t2956870243* ___iModeMsg_22;

public:
	inline static int32_t get_offset_of_chrModel_2() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___chrModel_2)); }
	inline GameObjectU5BU5D_t3499186955* get_chrModel_2() const { return ___chrModel_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_chrModel_2() { return &___chrModel_2; }
	inline void set_chrModel_2(GameObjectU5BU5D_t3499186955* value)
	{
		___chrModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___chrModel_2, value);
	}

	inline static int32_t get_offset_of_chrCtrl_3() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___chrCtrl_3)); }
	inline NoteAnimatorControl_t2900672004 * get_chrCtrl_3() const { return ___chrCtrl_3; }
	inline NoteAnimatorControl_t2900672004 ** get_address_of_chrCtrl_3() { return &___chrCtrl_3; }
	inline void set_chrCtrl_3(NoteAnimatorControl_t2900672004 * value)
	{
		___chrCtrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___chrCtrl_3, value);
	}

	inline static int32_t get_offset_of_activeLodIdx_4() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___activeLodIdx_4)); }
	inline int32_t get_activeLodIdx_4() const { return ___activeLodIdx_4; }
	inline int32_t* get_address_of_activeLodIdx_4() { return &___activeLodIdx_4; }
	inline void set_activeLodIdx_4(int32_t value)
	{
		___activeLodIdx_4 = value;
	}

	inline static int32_t get_offset_of_shaderIdx_5() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___shaderIdx_5)); }
	inline int32_t get_shaderIdx_5() const { return ___shaderIdx_5; }
	inline int32_t* get_address_of_shaderIdx_5() { return &___shaderIdx_5; }
	inline void set_shaderIdx_5(int32_t value)
	{
		___shaderIdx_5 = value;
	}

	inline static int32_t get_offset_of_stateLength_6() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___stateLength_6)); }
	inline int32_t get_stateLength_6() const { return ___stateLength_6; }
	inline int32_t* get_address_of_stateLength_6() { return &___stateLength_6; }
	inline void set_stateLength_6(int32_t value)
	{
		___stateLength_6 = value;
	}

	inline static int32_t get_offset_of_stateList_7() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___stateList_7)); }
	inline TextAsset_t2461560304 * get_stateList_7() const { return ___stateList_7; }
	inline TextAsset_t2461560304 ** get_address_of_stateList_7() { return &___stateList_7; }
	inline void set_stateList_7(TextAsset_t2461560304 * value)
	{
		___stateList_7 = value;
		Il2CppCodeGenWriteBarrier(&___stateList_7, value);
	}

	inline static int32_t get_offset_of_IMInfo_8() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___IMInfo_8)); }
	inline TextAsset_t2461560304 * get_IMInfo_8() const { return ___IMInfo_8; }
	inline TextAsset_t2461560304 ** get_address_of_IMInfo_8() { return &___IMInfo_8; }
	inline void set_IMInfo_8(TextAsset_t2461560304 * value)
	{
		___IMInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___IMInfo_8, value);
	}

	inline static int32_t get_offset_of_stateName_9() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___stateName_9)); }
	inline StringU5BU5D_t2956870243* get_stateName_9() const { return ___stateName_9; }
	inline StringU5BU5D_t2956870243** get_address_of_stateName_9() { return &___stateName_9; }
	inline void set_stateName_9(StringU5BU5D_t2956870243* value)
	{
		___stateName_9 = value;
		Il2CppCodeGenWriteBarrier(&___stateName_9, value);
	}

	inline static int32_t get_offset_of_stateLabelName_10() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___stateLabelName_10)); }
	inline StringU5BU5D_t2956870243* get_stateLabelName_10() const { return ___stateLabelName_10; }
	inline StringU5BU5D_t2956870243** get_address_of_stateLabelName_10() { return &___stateLabelName_10; }
	inline void set_stateLabelName_10(StringU5BU5D_t2956870243* value)
	{
		___stateLabelName_10 = value;
		Il2CppCodeGenWriteBarrier(&___stateLabelName_10, value);
	}

	inline static int32_t get_offset_of_lightObj_11() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___lightObj_11)); }
	inline GameObjectU5BU5D_t3499186955* get_lightObj_11() const { return ___lightObj_11; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_lightObj_11() { return &___lightObj_11; }
	inline void set_lightObj_11(GameObjectU5BU5D_t3499186955* value)
	{
		___lightObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___lightObj_11, value);
	}

	inline static int32_t get_offset_of_AnimationSelectUI_12() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___AnimationSelectUI_12)); }
	inline GameObject_t4012695102 * get_AnimationSelectUI_12() const { return ___AnimationSelectUI_12; }
	inline GameObject_t4012695102 ** get_address_of_AnimationSelectUI_12() { return &___AnimationSelectUI_12; }
	inline void set_AnimationSelectUI_12(GameObject_t4012695102 * value)
	{
		___AnimationSelectUI_12 = value;
		Il2CppCodeGenWriteBarrier(&___AnimationSelectUI_12, value);
	}

	inline static int32_t get_offset_of_InteractiveModeUI_13() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___InteractiveModeUI_13)); }
	inline GameObject_t4012695102 * get_InteractiveModeUI_13() const { return ___InteractiveModeUI_13; }
	inline GameObject_t4012695102 ** get_address_of_InteractiveModeUI_13() { return &___InteractiveModeUI_13; }
	inline void set_InteractiveModeUI_13(GameObject_t4012695102 * value)
	{
		___InteractiveModeUI_13 = value;
		Il2CppCodeGenWriteBarrier(&___InteractiveModeUI_13, value);
	}

	inline static int32_t get_offset_of_ModelInformationUI_14() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___ModelInformationUI_14)); }
	inline GameObject_t4012695102 * get_ModelInformationUI_14() const { return ___ModelInformationUI_14; }
	inline GameObject_t4012695102 ** get_address_of_ModelInformationUI_14() { return &___ModelInformationUI_14; }
	inline void set_ModelInformationUI_14(GameObject_t4012695102 * value)
	{
		___ModelInformationUI_14 = value;
		Il2CppCodeGenWriteBarrier(&___ModelInformationUI_14, value);
	}

	inline static int32_t get_offset_of_modelChangeButtonlabel_15() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___modelChangeButtonlabel_15)); }
	inline Text_t3286458198 * get_modelChangeButtonlabel_15() const { return ___modelChangeButtonlabel_15; }
	inline Text_t3286458198 ** get_address_of_modelChangeButtonlabel_15() { return &___modelChangeButtonlabel_15; }
	inline void set_modelChangeButtonlabel_15(Text_t3286458198 * value)
	{
		___modelChangeButtonlabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___modelChangeButtonlabel_15, value);
	}

	inline static int32_t get_offset_of_ASelectBtn_16() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___ASelectBtn_16)); }
	inline GameObjectU5BU5D_t3499186955* get_ASelectBtn_16() const { return ___ASelectBtn_16; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_ASelectBtn_16() { return &___ASelectBtn_16; }
	inline void set_ASelectBtn_16(GameObjectU5BU5D_t3499186955* value)
	{
		___ASelectBtn_16 = value;
		Il2CppCodeGenWriteBarrier(&___ASelectBtn_16, value);
	}

	inline static int32_t get_offset_of_ASelectLabel_17() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___ASelectLabel_17)); }
	inline TextU5BU5D_t4157799059* get_ASelectLabel_17() const { return ___ASelectLabel_17; }
	inline TextU5BU5D_t4157799059** get_address_of_ASelectLabel_17() { return &___ASelectLabel_17; }
	inline void set_ASelectLabel_17(TextU5BU5D_t4157799059* value)
	{
		___ASelectLabel_17 = value;
		Il2CppCodeGenWriteBarrier(&___ASelectLabel_17, value);
	}

	inline static int32_t get_offset_of_ASelectPage_18() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___ASelectPage_18)); }
	inline Text_t3286458198 * get_ASelectPage_18() const { return ___ASelectPage_18; }
	inline Text_t3286458198 ** get_address_of_ASelectPage_18() { return &___ASelectPage_18; }
	inline void set_ASelectPage_18(Text_t3286458198 * value)
	{
		___ASelectPage_18 = value;
		Il2CppCodeGenWriteBarrier(&___ASelectPage_18, value);
	}

	inline static int32_t get_offset_of_IMText_19() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___IMText_19)); }
	inline Text_t3286458198 * get_IMText_19() const { return ___IMText_19; }
	inline Text_t3286458198 ** get_address_of_IMText_19() { return &___IMText_19; }
	inline void set_IMText_19(Text_t3286458198 * value)
	{
		___IMText_19 = value;
		Il2CppCodeGenWriteBarrier(&___IMText_19, value);
	}

	inline static int32_t get_offset_of_viewerMode_20() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___viewerMode_20)); }
	inline bool get_viewerMode_20() const { return ___viewerMode_20; }
	inline bool* get_address_of_viewerMode_20() { return &___viewerMode_20; }
	inline void set_viewerMode_20(bool value)
	{
		___viewerMode_20 = value;
	}

	inline static int32_t get_offset_of_meshInfoMsg_21() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___meshInfoMsg_21)); }
	inline String_t* get_meshInfoMsg_21() const { return ___meshInfoMsg_21; }
	inline String_t** get_address_of_meshInfoMsg_21() { return &___meshInfoMsg_21; }
	inline void set_meshInfoMsg_21(String_t* value)
	{
		___meshInfoMsg_21 = value;
		Il2CppCodeGenWriteBarrier(&___meshInfoMsg_21, value);
	}

	inline static int32_t get_offset_of_iModeMsg_22() { return static_cast<int32_t>(offsetof(GUIConrtol_note_t1042344459, ___iModeMsg_22)); }
	inline StringU5BU5D_t2956870243* get_iModeMsg_22() const { return ___iModeMsg_22; }
	inline StringU5BU5D_t2956870243** get_address_of_iModeMsg_22() { return &___iModeMsg_22; }
	inline void set_iModeMsg_22(StringU5BU5D_t2956870243* value)
	{
		___iModeMsg_22 = value;
		Il2CppCodeGenWriteBarrier(&___iModeMsg_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
