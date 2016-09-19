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

// CameraController
struct CameraController_t3473169601;
// GameControl
struct GameControl_t2485871851;
// Player2
struct Player2_t1171085649;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Collider
struct Collider_t2939674232;
// System.String
struct String_t;
// Rotator
struct Rotator_t3048826765;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_Single4291918972.h"
#include "AssemblyU2DCSharp_GameControl2485871851.h"
#include "AssemblyU2DCSharp_GameControl2485871851MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Player21171085649.h"
#include "AssemblyU2DCSharp_Player21171085649MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rotator3048826765.h"
#include "AssemblyU2DCSharp_Rotator3048826765MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
#define GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(__this, method) ((  PlayerController_t2866526589 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Player2>()
#define GameObject_GetComponent_TisPlayer2_t1171085649_m2764079088(__this, method) ((  Player2_t1171085649 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_player1_2();
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_5 = __this->get_player2_3();
		Transform_t1659122786 * L_6 = GameObject_get_transform_m1278640159(L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, L_8, (2.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_9, /*hidden argument*/NULL);
		__this->set_offset_4(L_10);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_player1_2();
		Transform_t1659122786 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_4 = __this->get_player2_3();
		Transform_t1659122786 * L_5 = GameObject_get_transform_m1278640159(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, L_7, (2.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = __this->get_offset_4();
		Vector3_t4282066566  L_10 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_0, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::.ctor()
extern "C"  void GameControl__ctor_m788229856 (GameControl_t2485871851 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::ResetPressed()
extern "C"  void GameControl_ResetPressed_m3667560055 (GameControl_t2485871851 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Application_get_loadedLevelName_m953500779(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2::.ctor()
extern "C"  void Player2__ctor_m1988935994 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t Player2_Start_m936073786_MetadataUsageId;
extern "C"  void Player2_Start_m936073786 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_Start_m936073786_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_8(L_0);
		__this->set_count_9(0);
		Player2_SetCountText_m3547161060(__this, /*hidden argument*/NULL);
		Text_t9039225 * L_1 = __this->get_winText_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		Text_t9039225 * L_3 = __this->get_notifications_7();
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		__this->set_isJumping_11((bool)0);
		__this->set_jumpTimer_12((0.0f));
		return;
	}
}
// System.Void Player2::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1058680008;
extern Il2CppCodeGenString* _stringLiteral1943916242;
extern const uint32_t Player2_FixedUpdate_m3261811509_MetadataUsageId;
extern "C"  void Player2_FixedUpdate_m3261811509 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_FixedUpdate_m3261811509_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		V_0 = (-1.0f);
		goto IL_0074;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = (1.0f);
		goto IL_0074;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_0074;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_0074;
	}

IL_0068:
	{
		V_1 = (0.0f);
		V_0 = (0.0f);
	}

IL_0074:
	{
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		float L_6 = __this->get_jumpTimer_12();
		float L_7 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_jumpTimer_12(((float)((float)L_6+(float)L_7)));
		Rigidbody_t3346577219 * L_8 = __this->get_rb_8();
		Vector3_t4282066566  L_9 = V_2;
		float L_10 = __this->get_speed_2();
		Vector3_t4282066566  L_11 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = __this->get_jumpTimer_12();
		float L_13 = __this->get_jumpCooldown_4();
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_00c3;
		}
	}
	{
		__this->set_isJumping_11((bool)0);
	}

IL_00c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0117;
		}
	}
	{
		bool L_15 = __this->get_isJumping_11();
		if (L_15)
		{
			goto IL_010c;
		}
	}
	{
		__this->set_jumpTimer_12((0.0f));
		__this->set_isJumping_11((bool)1);
		Rigidbody_t3346577219 * L_16 = __this->get_rb_8();
		float L_17 = __this->get_jumpForce_3();
		Rigidbody_AddForce_m3268382483(L_16, (0.0f), L_17, (0.0f), /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_010c:
	{
		Player2_Notify_m3957509711(__this, _stringLiteral1058680008, /*hidden argument*/NULL);
	}

IL_0117:
	{
		Player2_ClearNotificationArea_m3729632157(__this, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_count_9();
		GameObject_t3674682005 * L_19 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral1943916242, /*hidden argument*/NULL);
		PlayerController_t2866526589 * L_20 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_19, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		int32_t L_21 = L_20->get_count_9();
		if ((((int32_t)((int32_t)((int32_t)L_18+(int32_t)L_21))) < ((int32_t)((int32_t)14))))
		{
			goto IL_0164;
		}
	}
	{
		GameObject_t3674682005 * L_22 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral1943916242, /*hidden argument*/NULL);
		PlayerController_t2866526589 * L_23 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_22, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		int32_t L_24 = L_23->get_score_10();
		int32_t L_25 = __this->get_score_10();
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0164;
		}
	}
	{
		Player2_ShowWin_m2138373239(__this, /*hidden argument*/NULL);
	}

IL_0164:
	{
		return;
	}
}
// System.Void Player2::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern Il2CppCodeGenString* _stringLiteral2688490;
extern const uint32_t Player2_OnTriggerEnter_m2668735614_MetadataUsageId;
extern "C"  void Player2_OnTriggerEnter_m2668735614 (Player2_t1171085649 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_OnTriggerEnter_m2668735614_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___other0;
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Collider_t2939674232 * L_3 = ___other0;
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_score_10();
		__this->set_score_10(((int32_t)((int32_t)L_5+(int32_t)1)));
		int32_t L_6 = __this->get_count_9();
		__this->set_count_9(((int32_t)((int32_t)L_6+(int32_t)1)));
	}

IL_003d:
	{
		Collider_t2939674232 * L_7 = ___other0;
		GameObject_t3674682005 * L_8 = Component_get_gameObject_m1170635899(L_7, /*hidden argument*/NULL);
		bool L_9 = GameObject_CompareTag_m3153977471(L_8, _stringLiteral2688490, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = __this->get_score_10();
		__this->set_score_10(((int32_t)((int32_t)L_10-(int32_t)1)));
	}

IL_0060:
	{
		Player2_SetCountText_m3547161060(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2::ClearNotificationArea()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Player2_ClearNotificationArea_m3729632157_MetadataUsageId;
extern "C"  void Player2_ClearNotificationArea_m3729632157 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_ClearNotificationArea_m3729632157_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		Player2_Notify_m3957509711(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2::Notify(System.String)
extern "C"  void Player2_Notify_m3957509711 (Player2_t1171085649 * __this, String_t* ___s0, const MethodInfo* method)
{
	{
		Text_t9039225 * L_0 = __this->get_notifications_7();
		String_t* L_1 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Player2::SetCountText()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3588653336;
extern const uint32_t Player2_SetCountText_m3547161060_MetadataUsageId;
extern "C"  void Player2_SetCountText_m3547161060 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_SetCountText_m3547161060_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_countText_6();
		int32_t* L_1 = __this->get_address_of_score_10();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3588653336, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		return;
	}
}
// System.Void Player2::ShowWin()
extern Il2CppCodeGenString* _stringLiteral1586341784;
extern const uint32_t Player2_ShowWin_m2138373239_MetadataUsageId;
extern "C"  void Player2_ShowWin_m2138373239 (Player2_t1171085649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player2_ShowWin_m2138373239_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_winText_5();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1586341784);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_8(L_0);
		__this->set_count_9(0);
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		Text_t9039225 * L_1 = __this->get_winText_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		Text_t9039225 * L_3 = __this->get_notifications_7();
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		__this->set_isJumping_11((bool)0);
		__this->set_jumpTimer_12((0.0f));
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayer2_t1171085649_m2764079088_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1058680008;
extern Il2CppCodeGenString* _stringLiteral1943916243;
extern const uint32_t PlayerController_FixedUpdate_m270852281_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m270852281_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = (-1.0f);
		goto IL_0080;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		V_0 = (1.0f);
		goto IL_0080;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_0080;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_0080;
	}

IL_0074:
	{
		V_1 = (0.0f);
		V_0 = (0.0f);
	}

IL_0080:
	{
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		float L_6 = __this->get_jumpTimer_12();
		float L_7 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_jumpTimer_12(((float)((float)L_6+(float)L_7)));
		Rigidbody_t3346577219 * L_8 = __this->get_rb_8();
		Vector3_t4282066566  L_9 = V_2;
		float L_10 = __this->get_speed_2();
		Vector3_t4282066566  L_11 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = __this->get_jumpTimer_12();
		float L_13 = __this->get_jumpCooldown_4();
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_isJumping_11((bool)0);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0123;
		}
	}
	{
		bool L_15 = __this->get_isJumping_11();
		if (L_15)
		{
			goto IL_0118;
		}
	}
	{
		__this->set_jumpTimer_12((0.0f));
		__this->set_isJumping_11((bool)1);
		Rigidbody_t3346577219 * L_16 = __this->get_rb_8();
		float L_17 = __this->get_jumpForce_3();
		Rigidbody_AddForce_m3268382483(L_16, (0.0f), L_17, (0.0f), /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0118:
	{
		PlayerController_Notify_m3095437267(__this, _stringLiteral1058680008, /*hidden argument*/NULL);
	}

IL_0123:
	{
		PlayerController_ClearNotificationArea_m4206701601(__this, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_count_9();
		GameObject_t3674682005 * L_19 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral1943916243, /*hidden argument*/NULL);
		Player2_t1171085649 * L_20 = GameObject_GetComponent_TisPlayer2_t1171085649_m2764079088(L_19, /*hidden argument*/GameObject_GetComponent_TisPlayer2_t1171085649_m2764079088_MethodInfo_var);
		int32_t L_21 = L_20->get_count_9();
		if ((((int32_t)((int32_t)((int32_t)L_18+(int32_t)L_21))) < ((int32_t)((int32_t)14))))
		{
			goto IL_0170;
		}
	}
	{
		GameObject_t3674682005 * L_22 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral1943916243, /*hidden argument*/NULL);
		PlayerController_t2866526589 * L_23 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_22, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		int32_t L_24 = L_23->get_score_10();
		int32_t L_25 = __this->get_score_10();
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0170;
		}
	}
	{
		PlayerController_ShowWin_m1363014651(__this, /*hidden argument*/NULL);
	}

IL_0170:
	{
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern Il2CppCodeGenString* _stringLiteral2688490;
extern const uint32_t PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter_m3392021114 (PlayerController_t2866526589 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___other0;
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Collider_t2939674232 * L_3 = ___other0;
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_score_10();
		__this->set_score_10(((int32_t)((int32_t)L_5+(int32_t)1)));
		int32_t L_6 = __this->get_count_9();
		__this->set_count_9(((int32_t)((int32_t)L_6+(int32_t)1)));
	}

IL_003d:
	{
		Collider_t2939674232 * L_7 = ___other0;
		GameObject_t3674682005 * L_8 = Component_get_gameObject_m1170635899(L_7, /*hidden argument*/NULL);
		bool L_9 = GameObject_CompareTag_m3153977471(L_8, _stringLiteral2688490, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = __this->get_score_10();
		__this->set_score_10(((int32_t)((int32_t)L_10-(int32_t)1)));
	}

IL_0060:
	{
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::ClearNotificationArea()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_ClearNotificationArea_m4206701601_MetadataUsageId;
extern "C"  void PlayerController_ClearNotificationArea_m4206701601 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ClearNotificationArea_m4206701601_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		PlayerController_Notify_m3095437267(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Notify(System.String)
extern "C"  void PlayerController_Notify_m3095437267 (PlayerController_t2866526589 * __this, String_t* ___s0, const MethodInfo* method)
{
	{
		Text_t9039225 * L_0 = __this->get_notifications_7();
		String_t* L_1 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3588653336;
extern const uint32_t PlayerController_SetCountText_m1021738208_MetadataUsageId;
extern "C"  void PlayerController_SetCountText_m1021738208 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1021738208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_countText_6();
		int32_t* L_1 = __this->get_address_of_score_10();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3588653336, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		return;
	}
}
// System.Void PlayerController::ShowWin()
extern Il2CppCodeGenString* _stringLiteral1557712633;
extern const uint32_t PlayerController_ShowWin_m1363014651_MetadataUsageId;
extern "C"  void PlayerController_ShowWin_m1363014651 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ShowWin_m1363014651_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_winText_5();
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1557712633);
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1971779198 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m2722475087 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m637363399(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
