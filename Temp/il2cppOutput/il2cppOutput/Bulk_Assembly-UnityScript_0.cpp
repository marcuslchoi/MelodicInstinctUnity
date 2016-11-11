#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CharacterMovement
struct CharacterMovement_t2528585432;
// FixedTiling
struct FixedTiling_t2748551263;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.Object
struct Il2CppObject;
// WaterScroller
struct WaterScroller_t3284977233;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_CharacterMovement2528585432.h"
#include "AssemblyU2DUnityScript_CharacterMovement2528585432MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_CharacterController2029520850.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController2029520850MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DUnityScript_FixedTiling2748551263.h"
#include "AssemblyU2DUnityScript_FixedTiling2748551263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DUnityScript_WaterScroller3284977233.h"
#include "AssemblyU2DUnityScript_WaterScroller3284977233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Shader3998140498MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_DepthTextureMode2168306440.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t1092684080_m1748555263(__this, method) ((  Renderer_t1092684080 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterMovement::.ctor()
extern "C"  void CharacterMovement__ctor_m788163262 (CharacterMovement_t2528585432 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_speed_2((((float)((float)7))));
		__this->set_gravity_3((((float)((float)((int32_t)10)))));
		Vector3_t3525329789  L_0 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_moveDirection_5(L_0);
		return;
	}
}
// System.Void CharacterMovement::Start()
extern const Il2CppType* CharacterController_t2029520850_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CharacterController_t2029520850_il2cpp_TypeInfo_var;
extern const uint32_t CharacterMovement_Start_m4030268350_MetadataUsageId;
extern "C"  void CharacterMovement_Start_m4030268350 (CharacterMovement_t2528585432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CharacterMovement_Start_m4030268350_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(CharacterController_t2029520850_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_t2126946602 * L_2 = Component_GetComponent_m936021879(L_0, L_1, /*hidden argument*/NULL);
		__this->set_controller_4(((CharacterController_t2029520850 *)CastclassSealed(L_2, CharacterController_t2029520850_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CharacterMovement::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3_t3525329789_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral97;
extern Il2CppCodeGenString* _stringLiteral100;
extern const uint32_t CharacterMovement_Update_m390119439_MetadataUsageId;
extern "C"  void CharacterMovement_Update_m390119439 (CharacterMovement_t2528585432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CharacterMovement_Update_m390119439_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3525329789 * L_0 = __this->get_address_of_moveDirection_5();
		float L_1 = L_0->get_y_2();
		float L_2 = __this->get_gravity_3();
		if ((((float)L_1) <= ((float)((float)((float)L_2*(float)(((float)((float)(-1)))))))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t3525329789 * L_3 = __this->get_address_of_moveDirection_5();
		Vector3_t3525329789 * L_4 = __this->get_address_of_moveDirection_5();
		float L_5 = L_4->get_y_2();
		float L_6 = __this->get_gravity_3();
		float L_7 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_3->set_y_2(((float)((float)L_5-(float)((float)((float)L_6*(float)L_7)))));
	}

IL_003c:
	{
		CharacterController_t2029520850 * L_8 = __this->get_controller_4();
		Vector3_t3525329789  L_9 = __this->get_moveDirection_5();
		float L_10 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_11 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		CharacterController_Move_m3043020731(L_8, L_11, /*hidden argument*/NULL);
		Transform_t284553113 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_13 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3525329789  L_14 = Transform_TransformDirection_m83001769(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		CharacterController_t2029520850 * L_15 = __this->get_controller_4();
		NullCheck(L_15);
		bool L_16 = CharacterController_get_isGrounded_m1739295843(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0243;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009b;
		}
	}
	{
		Vector3_t3525329789 * L_18 = __this->get_address_of_moveDirection_5();
		float L_19 = __this->get_speed_2();
		L_18->set_y_2(L_19);
		goto IL_023e;
	}

IL_009b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_20 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral119, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_010e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_21 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00e7;
		}
	}
	{
		CharacterController_t2029520850 * L_22 = __this->get_controller_4();
		Transform_t284553113 * L_23 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t3525329789  L_24 = Transform_get_forward_m877665793(L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_speed_2();
		Vector3_t3525329789  L_26 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t3525329789  L_27 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_26, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_22);
		CharacterController_SimpleMove_m3593592780(L_22, L_27, /*hidden argument*/NULL);
		goto IL_0109;
	}

IL_00e7:
	{
		CharacterController_t2029520850 * L_28 = __this->get_controller_4();
		Transform_t284553113 * L_29 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t3525329789  L_30 = Transform_get_forward_m877665793(L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_speed_2();
		Vector3_t3525329789  L_32 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		CharacterController_SimpleMove_m3593592780(L_28, L_32, /*hidden argument*/NULL);
	}

IL_0109:
	{
		goto IL_023e;
	}

IL_010e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_33 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral115, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0183;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_34 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_015b;
		}
	}
	{
		CharacterController_t2029520850 * L_35 = __this->get_controller_4();
		Transform_t284553113 * L_36 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t3525329789  L_37 = Transform_get_forward_m877665793(L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_speed_2();
		Vector3_t3525329789  L_39 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_37, ((-L_38)), /*hidden argument*/NULL);
		Vector3_t3525329789  L_40 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_39, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_35);
		CharacterController_SimpleMove_m3593592780(L_35, L_40, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_015b:
	{
		CharacterController_t2029520850 * L_41 = __this->get_controller_4();
		Transform_t284553113 * L_42 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t3525329789  L_43 = Transform_get_forward_m877665793(L_42, /*hidden argument*/NULL);
		float L_44 = __this->get_speed_2();
		Vector3_t3525329789  L_45 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_43, ((-L_44)), /*hidden argument*/NULL);
		NullCheck(L_41);
		CharacterController_SimpleMove_m3593592780(L_41, L_45, /*hidden argument*/NULL);
	}

IL_017e:
	{
		goto IL_023e;
	}

IL_0183:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_46 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral97, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_47 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01c5;
		}
	}
	{
		CharacterController_t2029520850 * L_48 = __this->get_controller_4();
		Vector3_t3525329789  L_49 = V_0;
		float L_50 = __this->get_speed_2();
		Vector3_t3525329789  L_51 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		Vector3_t3525329789  L_52 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_51, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_48);
		CharacterController_SimpleMove_m3593592780(L_48, L_52, /*hidden argument*/NULL);
		goto IL_01dd;
	}

IL_01c5:
	{
		CharacterController_t2029520850 * L_53 = __this->get_controller_4();
		Vector3_t3525329789  L_54 = V_0;
		float L_55 = __this->get_speed_2();
		Vector3_t3525329789  L_56 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		CharacterController_SimpleMove_m3593592780(L_53, L_56, /*hidden argument*/NULL);
	}

IL_01dd:
	{
		goto IL_023e;
	}

IL_01e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_57 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral100, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_023e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_58 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0225;
		}
	}
	{
		CharacterController_t2029520850 * L_59 = __this->get_controller_4();
		Vector3_t3525329789  L_60 = V_0;
		float L_61 = __this->get_speed_2();
		Vector3_t3525329789  L_62 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_60, ((-L_61)), /*hidden argument*/NULL);
		Vector3_t3525329789  L_63 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_62, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_59);
		CharacterController_SimpleMove_m3593592780(L_59, L_63, /*hidden argument*/NULL);
		goto IL_023e;
	}

IL_0225:
	{
		CharacterController_t2029520850 * L_64 = __this->get_controller_4();
		Vector3_t3525329789  L_65 = V_0;
		float L_66 = __this->get_speed_2();
		Vector3_t3525329789  L_67 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_65, ((-L_66)), /*hidden argument*/NULL);
		NullCheck(L_64);
		CharacterController_SimpleMove_m3593592780(L_64, L_67, /*hidden argument*/NULL);
	}

IL_023e:
	{
		goto IL_02cb;
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_68 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral119, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_02cb;
		}
	}
	{
		Initobj (Vector3_t3525329789_il2cpp_TypeInfo_var, (&V_1));
		Transform_t284553113 * L_69 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t3525329789  L_70 = Transform_TransformDirection_m3326859781(L_69, (((float)((float)0))), (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		V_1 = L_70;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_71 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_02a9;
		}
	}
	{
		CharacterController_t2029520850 * L_72 = __this->get_controller_4();
		Vector3_t3525329789  L_73 = V_1;
		float L_74 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_75 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		float L_76 = __this->get_speed_2();
		Vector3_t3525329789  L_77 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		Vector3_t3525329789  L_78 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_77, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_72);
		CharacterController_Move_m3043020731(L_72, L_78, /*hidden argument*/NULL);
		goto IL_02cb;
	}

IL_02a9:
	{
		CharacterController_t2029520850 * L_79 = __this->get_controller_4();
		Vector3_t3525329789  L_80 = V_1;
		float L_81 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_82 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		float L_83 = __this->get_speed_2();
		Vector3_t3525329789  L_84 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
		NullCheck(L_79);
		CharacterController_Move_m3043020731(L_79, L_84, /*hidden argument*/NULL);
	}

IL_02cb:
	{
		return;
	}
}
// System.Void CharacterMovement::Main()
extern "C"  void CharacterMovement_Main_m4097338943 (CharacterMovement_t2528585432 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FixedTiling::.ctor()
extern "C"  void FixedTiling__ctor_m2366739287 (FixedTiling_t2748551263 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_tileScale_2((0.1f));
		return;
	}
}
// System.Void FixedTiling::Start()
extern const MethodInfo* Component_GetComponent_TisRenderer_t1092684080_m1748555263_MethodInfo_var;
extern const uint32_t FixedTiling_Start_m1313877079_MetadataUsageId;
extern "C"  void FixedTiling_Start_m1313877079 (FixedTiling_t2748551263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (FixedTiling_Start_m1313877079_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Renderer_t1092684080 * L_0 = Component_GetComponent_TisRenderer_t1092684080_m1748555263(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m1748555263_MethodInfo_var);
		NullCheck(L_0);
		Material_t1886596500 * L_1 = Renderer_get_sharedMaterial_m835478880(L_0, /*hidden argument*/NULL);
		Transform_t284553113 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = Transform_get_localScale_m3886572677(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		float L_5 = __this->get_tileScale_2();
		Transform_t284553113 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3525329789  L_7 = Transform_get_localScale_m3886572677(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_y_2();
		float L_9 = __this->get_tileScale_2();
		Vector2_t3525329788  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m1517109030(&L_10, ((float)((float)L_4*(float)L_5)), ((float)((float)L_8*(float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_mainTextureScale_m2180744791(L_1, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedTiling::Main()
extern "C"  void FixedTiling_Main_m3871166086 (FixedTiling_t2748551263 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WaterScroller::.ctor()
extern "C"  void WaterScroller__ctor_m2276074725 (WaterScroller_t3284977233 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_scrollSpeed_2((0.1f));
		return;
	}
}
// System.Void WaterScroller::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t1092684080_m1748555263_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral558922319;
extern const uint32_t WaterScroller_Update_m3565701832_MetadataUsageId;
extern "C"  void WaterScroller_Update_m3565701832 (WaterScroller_t3284977233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WaterScroller_Update_m3565701832_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Renderer_t1092684080 * L_0 = Component_GetComponent_TisRenderer_t1092684080_m1748555263(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m1748555263_MethodInfo_var);
		NullCheck(L_0);
		Material_t1886596500 * L_1 = Renderer_get_material_m2720864603(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Shader_t3998140498 * L_2 = Material_get_shader_m2881845503(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = Shader_get_isSupported_m1422621179(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Camera_t3533968274 * L_4 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t3533968274 * L_5 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = Camera_get_depthTextureMode_m2117446653(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_set_depthTextureMode_m2368326786(L_4, ((int32_t)((int32_t)L_6|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0030:
	{
		float L_7 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get_scrollSpeed_2();
		V_0 = ((float)((float)L_7*(float)L_8));
		Renderer_t1092684080 * L_9 = Component_GetComponent_TisRenderer_t1092684080_m1748555263(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m1748555263_MethodInfo_var);
		NullCheck(L_9);
		Material_t1886596500 * L_10 = Renderer_get_sharedMaterial_m835478880(L_9, /*hidden argument*/NULL);
		float L_11 = V_0;
		float L_12 = V_0;
		Vector2_t3525329788  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m1517109030(&L_13, ((float)((float)L_11/(float)(10.0f))), L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetTextureOffset_m1301408396(L_10, _stringLiteral558922319, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaterScroller::Main()
extern "C"  void WaterScroller_Main_m958747448 (WaterScroller_t3284977233 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
