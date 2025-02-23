﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_tAECBB18D4C9BA1BD5D0A45BDA503F9A9D56DD431;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEnumerator_1_t37415676E5B1C7D8510A762DEFBC56348D9359D0;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_t84C33FA185EC91D4A28232BE4C444B66E4B9ABBB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_t8FEDE1AC7BC94BB40CCCD807EC8A187354AEBBFA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_tD186E4C862F35B156C4D8381A729B19495C77800;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_t9EFE957AFA5AC03EDDC60E90A4C4BA3A5FDCA337;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_t4BEA6FC8D5EDFFFA395C66B176E604B9504DCCD5;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t087726847A7755115A9464A201CE76C01156D000;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyCollection_t1FD60E5690D1244A6EA6FC396CCCED24AFF3AF52;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct List_1_tA6CB456D14BFC987703CE5A9AF7D2EEFAF1B38B4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct ValueCollection_t478E8D3315CE8DBABFD61FC1F4C4B79CD11F1102;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct EntryU5BU5D_t7B1A46C3F3EA39C4826B34B3E4C46750FC5B6D91;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t89C368950F10109B9742F86D44B027D38F874146;
// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer
struct GazeStabilizer_t5D3B7FC34EBD8268F76166AB1F141685E1604491;
// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tAA70FFAC70309438AC75F1F2C526D52957BBAFD1;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_t3AB2F482C146CF04A5963EA6C8FE895F88CA716B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_t6FD4D19B88A2412DDE17AECEF9B5A9872E3EE851;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t5BA6263C4B870B16D3E72209A7E762A0DB89DE16;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_tE1C5360415B6877BD87CEBE468AC455E852016CD;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_t60054FAFAC50668DE998C4A961604EE64E5AD572;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_tD4C6068826237CE34DA27F629770BF035E7A6E90;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler
struct IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSystem_t3382F8C95785E5EFD846C3FF819317EBE10223E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_t60054FAFAC50668DE998C4A961604EE64E5AD572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_tD4C6068826237CE34DA27F629770BF035E7A6E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t4BEA6FC8D5EDFFFA395C66B176E604B9504DCCD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t84C33FA185EC91D4A28232BE4C444B66E4B9ABBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t8FEDE1AC7BC94BB40CCCD807EC8A187354AEBBFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t9EFE957AFA5AC03EDDC60E90A4C4BA3A5FDCA337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tD186E4C862F35B156C4D8381A729B19495C77800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_mD50A9557DA6CE12693BD7FA1CDB4E1444F6171DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m875845081DE3550EEFC04BBC5B59BA456F77424B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m1531216395B95FB96CBE228DE63F1B74EB208238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9A2BA7616A8891F2FCEC826C3C656A689D500533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE6B56723FDEECEAFFCB31FB5881423E28F93CBA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5A31E3FB9D478678CB4D2662004723A33E2149D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9_m16E4A2E032C292FB34D5E81ED4CFDD107A35B1C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC_mAD8D995903EBA74F51DBF7A48601D7C4DF9FCBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE_mBF5FD17E62DDF9A9A7ABFB447AC4D922D22AAE9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8_m907926A1F251409AE7A2387B0E0ABE5303135B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC_mCEB68D93F17E1B4A982E8A68BE7D81DA1D1357CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237_m4CFD8C17D4C460FD27E4A54450F4C49B6C5282E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A_m05EFB083F55D861B9E87DB24C0A2E53C37CB7A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5_m2ACBC219DA1DEAA5B5ACFB0EB3139883948B28AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m818BE99715D5C2BF10428544DD09268D5438C94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m2C4C93FAFEF33580DE2F1FDEDA0DE24F7C35B33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mAB72FB67F0A48DE667A3B063EFA5BDD4B2874380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m7F97C326CE2E6CC11F0288A9C83BCF8C21A9CC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_m419063D44F93825AF9CA37773BE81AE0DF8F8E0A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7B1A46C3F3EA39C4826B34B3E4C46750FC5B6D91* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1FD60E5690D1244A6EA6FC396CCCED24AFF3AF52 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t478E8D3315CE8DBABFD61FC1F4C4B79CD11F1102 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___entries_1)); }
	inline EntryU5BU5D_t7B1A46C3F3EA39C4826B34B3E4C46750FC5B6D91* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7B1A46C3F3EA39C4826B34B3E4C46750FC5B6D91** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7B1A46C3F3EA39C4826B34B3E4C46750FC5B6D91* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___keys_7)); }
	inline KeyCollection_t1FD60E5690D1244A6EA6FC396CCCED24AFF3AF52 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1FD60E5690D1244A6EA6FC396CCCED24AFF3AF52 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1FD60E5690D1244A6EA6FC396CCCED24AFF3AF52 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ___values_8)); }
	inline ValueCollection_t478E8D3315CE8DBABFD61FC1F4C4B79CD11F1102 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t478E8D3315CE8DBABFD61FC1F4C4B79CD11F1102 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t478E8D3315CE8DBABFD61FC1F4C4B79CD11F1102 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9
	U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9
	U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<>9
	U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9, ___value_1)); }
	inline PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * get_value_1() const { return ___value_1; }
	inline PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___dictionary_0)); }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___current_3)); }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t211AA7B538FF92E2391B390CADF83A61D25B46D7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t211AA7B538FF92E2391B390CADF83A61D25B46D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t628600F30E2551A06B7C03627FDCCDA7AA5B61E5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t628600F30E2551A06B7C03627FDCCDA7AA5B61E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::isInteractionEnabled
	bool ___isInteractionEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceParent_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInteractionEnabled_6() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___isInteractionEnabled_6)); }
	inline bool get_isInteractionEnabled_6() const { return ___isInteractionEnabled_6; }
	inline bool* get_address_of_isInteractionEnabled_6() { return &___isInteractionEnabled_6; }
	inline void set_isInteractionEnabled_6(bool value)
	{
		___isInteractionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CIsActiveU3Ek__BackingField_7)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_7() const { return ___U3CIsActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_7() { return &___U3CIsActiveU3Ek__BackingField_7; }
	inline void set_U3CIsActiveU3Ek__BackingField_7(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CSceneQueryTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_16() const { return ___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return &___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>4__this
	InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>4__this
	InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData/FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule/MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D, ___action_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com ___action_4;
};

// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46  : public GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_18;
	// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::stabilizer
	BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * ___stabilizer_19;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeProvider
	GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * ___gazeProvider_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::pointerExtent
	float ___pointerExtent_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::isDown
	bool ___isDown_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentInputSource
	RuntimeObject* ___currentInputSource_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentHandedness
	uint8_t ___currentHandedness_26;

public:
	inline static int32_t get_offset_of_gazeTransform_18() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___gazeTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_18() const { return ___gazeTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_18() { return &___gazeTransform_18; }
	inline void set_gazeTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_19() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___stabilizer_19)); }
	inline BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * get_stabilizer_19() const { return ___stabilizer_19; }
	inline BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 ** get_address_of_stabilizer_19() { return &___stabilizer_19; }
	inline void set_stabilizer_19(BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * value)
	{
		___stabilizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_19), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProvider_20() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___gazeProvider_20)); }
	inline GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * get_gazeProvider_20() const { return ___gazeProvider_20; }
	inline GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 ** get_address_of_gazeProvider_20() { return &___gazeProvider_20; }
	inline void set_gazeProvider_20(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * value)
	{
		___gazeProvider_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___U3CControllerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___U3CInputSourceParentU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_22() const { return ___U3CInputSourceParentU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_22() { return &___U3CInputSourceParentU3Ek__BackingField_22; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_pointerExtent_23() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___pointerExtent_23)); }
	inline float get_pointerExtent_23() const { return ___pointerExtent_23; }
	inline float* get_address_of_pointerExtent_23() { return &___pointerExtent_23; }
	inline void set_pointerExtent_23(float value)
	{
		___pointerExtent_23 = value;
	}

	inline static int32_t get_offset_of_isDown_24() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___isDown_24)); }
	inline bool get_isDown_24() const { return ___isDown_24; }
	inline bool* get_address_of_isDown_24() { return &___isDown_24; }
	inline void set_isDown_24(bool value)
	{
		___isDown_24 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_25() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___currentInputSource_25)); }
	inline RuntimeObject* get_currentInputSource_25() const { return ___currentInputSource_25; }
	inline RuntimeObject** get_address_of_currentInputSource_25() { return &___currentInputSource_25; }
	inline void set_currentInputSource_25(RuntimeObject* value)
	{
		___currentInputSource_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSource_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentHandedness_26() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46, ___currentHandedness_26)); }
	inline uint8_t get_currentHandedness_26() const { return ___currentHandedness_26; }
	inline uint8_t* get_address_of_currentHandedness_26() { return &___currentHandedness_26; }
	inline void set_currentHandedness_26(uint8_t value)
	{
		___currentHandedness_26 = value;
	}
};

struct InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_28;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_27() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields, ___OnPreSceneQueryPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_27() const { return ___OnPreSceneQueryPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_27() { return &___OnPreSceneQueryPerfMarker_27; }
	inline void set_OnPreSceneQueryPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_28() { return static_cast<int32_t>(offsetof(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields, ___OnPostSceneQueryPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_28() const { return ___OnPostSceneQueryPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_28() { return &___OnPostSceneQueryPerfMarker_28; }
	inline void set_OnPostSceneQueryPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD  : public BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9  : public BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69  : public BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE  : public BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_t7A4192098EB2A58B8DB9A3B9BBC28F71E047A49D  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE, ___U3CInputDataU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9, ___U3CInputDataU3Ek__BackingField_6)); }
	inline HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 ** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4, ___U3CInputDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t087726847A7755115A9464A201CE76C01156D000  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t087726847A7755115A9464A201CE76C01156D000, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5  : public SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC  : public SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237  : public SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8  : public SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A  : public SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t89C368950F10109B9742F86D44B027D38F874146  : public InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::lockCursorWhenFocusLocked
	bool ___lockCursorWhenFocusLocked_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::setCursorInvisibleWhenFocusLocked
	bool ___setCursorInvisibleWhenFocusLocked_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxGazeCollisionDistance
	float ___maxGazeCollisionDistance_9;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GazeProvider::raycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks_10;
	// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider::stabilizer
	GazeStabilizer_t5D3B7FC34EBD8268F76166AB1F141685E1604491 * ___stabilizer_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::minHeadVelocityThreshold
	float ___minHeadVelocityThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxHeadVelocityThreshold
	float ___maxHeadVelocityThreshold_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeInputSource
	BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * ___gazeInputSource_15;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazePointer
	InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * ___gazePointer_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeCursorPrefab>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeCursorPrefabU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeTargetU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitInfo>k__BackingField
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  ___U3CHitInfoU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPositionU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitNormalU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadVelocityU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadMovementDirection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadMovementDirectionU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHitDistance
	float ___lastHitDistance_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::delayInitialization
	bool ___delayInitialization_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHeadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastHeadPosition_26;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadPosition
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadPosition_27;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadForward
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadForward_28;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::latestEyeTrackingUpdate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___latestEyeTrackingUpdate_33;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeCalibrationValid>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsEyeCalibrationValidU3Ek__BackingField_35;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::<LatestEyeGaze>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CLatestEyeGazeU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeTrackingEnabled>k__BackingField
	bool ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::<Timestamp>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CTimestampU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<UseHeadGazeOverride>k__BackingField
	bool ___U3CUseHeadGazeOverrideU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_lockCursorWhenFocusLocked_7() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___lockCursorWhenFocusLocked_7)); }
	inline bool get_lockCursorWhenFocusLocked_7() const { return ___lockCursorWhenFocusLocked_7; }
	inline bool* get_address_of_lockCursorWhenFocusLocked_7() { return &___lockCursorWhenFocusLocked_7; }
	inline void set_lockCursorWhenFocusLocked_7(bool value)
	{
		___lockCursorWhenFocusLocked_7 = value;
	}

	inline static int32_t get_offset_of_setCursorInvisibleWhenFocusLocked_8() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___setCursorInvisibleWhenFocusLocked_8)); }
	inline bool get_setCursorInvisibleWhenFocusLocked_8() const { return ___setCursorInvisibleWhenFocusLocked_8; }
	inline bool* get_address_of_setCursorInvisibleWhenFocusLocked_8() { return &___setCursorInvisibleWhenFocusLocked_8; }
	inline void set_setCursorInvisibleWhenFocusLocked_8(bool value)
	{
		___setCursorInvisibleWhenFocusLocked_8 = value;
	}

	inline static int32_t get_offset_of_maxGazeCollisionDistance_9() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___maxGazeCollisionDistance_9)); }
	inline float get_maxGazeCollisionDistance_9() const { return ___maxGazeCollisionDistance_9; }
	inline float* get_address_of_maxGazeCollisionDistance_9() { return &___maxGazeCollisionDistance_9; }
	inline void set_maxGazeCollisionDistance_9(float value)
	{
		___maxGazeCollisionDistance_9 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMasks_10() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___raycastLayerMasks_10)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_raycastLayerMasks_10() const { return ___raycastLayerMasks_10; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_raycastLayerMasks_10() { return &___raycastLayerMasks_10; }
	inline void set_raycastLayerMasks_10(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___raycastLayerMasks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastLayerMasks_10), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_11() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___stabilizer_11)); }
	inline GazeStabilizer_t5D3B7FC34EBD8268F76166AB1F141685E1604491 * get_stabilizer_11() const { return ___stabilizer_11; }
	inline GazeStabilizer_t5D3B7FC34EBD8268F76166AB1F141685E1604491 ** get_address_of_stabilizer_11() { return &___stabilizer_11; }
	inline void set_stabilizer_11(GazeStabilizer_t5D3B7FC34EBD8268F76166AB1F141685E1604491 * value)
	{
		___stabilizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_gazeTransform_12() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___gazeTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_12() const { return ___gazeTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_12() { return &___gazeTransform_12; }
	inline void set_gazeTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_minHeadVelocityThreshold_13() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___minHeadVelocityThreshold_13)); }
	inline float get_minHeadVelocityThreshold_13() const { return ___minHeadVelocityThreshold_13; }
	inline float* get_address_of_minHeadVelocityThreshold_13() { return &___minHeadVelocityThreshold_13; }
	inline void set_minHeadVelocityThreshold_13(float value)
	{
		___minHeadVelocityThreshold_13 = value;
	}

	inline static int32_t get_offset_of_maxHeadVelocityThreshold_14() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___maxHeadVelocityThreshold_14)); }
	inline float get_maxHeadVelocityThreshold_14() const { return ___maxHeadVelocityThreshold_14; }
	inline float* get_address_of_maxHeadVelocityThreshold_14() { return &___maxHeadVelocityThreshold_14; }
	inline void set_maxHeadVelocityThreshold_14(float value)
	{
		___maxHeadVelocityThreshold_14 = value;
	}

	inline static int32_t get_offset_of_gazeInputSource_15() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___gazeInputSource_15)); }
	inline BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * get_gazeInputSource_15() const { return ___gazeInputSource_15; }
	inline BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 ** get_address_of_gazeInputSource_15() { return &___gazeInputSource_15; }
	inline void set_gazeInputSource_15(BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * value)
	{
		___gazeInputSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeInputSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_gazePointer_16() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___gazePointer_16)); }
	inline InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * get_gazePointer_16() const { return ___gazePointer_16; }
	inline InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 ** get_address_of_gazePointer_16() { return &___gazePointer_16; }
	inline void set_gazePointer_16(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * value)
	{
		___gazePointer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointer_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CGazeCursorPrefabU3Ek__BackingField_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeCursorPrefabU3Ek__BackingField_17() const { return ___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return &___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline void set_U3CGazeCursorPrefabU3Ek__BackingField_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeCursorPrefabU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeCursorPrefabU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CGazeTargetU3Ek__BackingField_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeTargetU3Ek__BackingField_18() const { return ___U3CGazeTargetU3Ek__BackingField_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeTargetU3Ek__BackingField_18() { return &___U3CGazeTargetU3Ek__BackingField_18; }
	inline void set_U3CGazeTargetU3Ek__BackingField_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CHitInfoU3Ek__BackingField_19)); }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  get_U3CHitInfoU3Ek__BackingField_19() const { return ___U3CHitInfoU3Ek__BackingField_19; }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 * get_address_of_U3CHitInfoU3Ek__BackingField_19() { return &___U3CHitInfoU3Ek__BackingField_19; }
	inline void set_U3CHitInfoU3Ek__BackingField_19(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  value)
	{
		___U3CHitInfoU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CHitPositionU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPositionU3Ek__BackingField_20() const { return ___U3CHitPositionU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPositionU3Ek__BackingField_20() { return &___U3CHitPositionU3Ek__BackingField_20; }
	inline void set_U3CHitPositionU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CHitNormalU3Ek__BackingField_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitNormalU3Ek__BackingField_21() const { return ___U3CHitNormalU3Ek__BackingField_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitNormalU3Ek__BackingField_21() { return &___U3CHitNormalU3Ek__BackingField_21; }
	inline void set_U3CHitNormalU3Ek__BackingField_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitNormalU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeadVelocityU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CHeadVelocityU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadVelocityU3Ek__BackingField_22() const { return ___U3CHeadVelocityU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadVelocityU3Ek__BackingField_22() { return &___U3CHeadVelocityU3Ek__BackingField_22; }
	inline void set_U3CHeadVelocityU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadVelocityU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CHeadMovementDirectionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadMovementDirectionU3Ek__BackingField_23() const { return ___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return &___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline void set_U3CHeadMovementDirectionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadMovementDirectionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_24() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___lastHitDistance_24)); }
	inline float get_lastHitDistance_24() const { return ___lastHitDistance_24; }
	inline float* get_address_of_lastHitDistance_24() { return &___lastHitDistance_24; }
	inline void set_lastHitDistance_24(float value)
	{
		___lastHitDistance_24 = value;
	}

	inline static int32_t get_offset_of_delayInitialization_25() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___delayInitialization_25)); }
	inline bool get_delayInitialization_25() const { return ___delayInitialization_25; }
	inline bool* get_address_of_delayInitialization_25() { return &___delayInitialization_25; }
	inline void set_delayInitialization_25(bool value)
	{
		___delayInitialization_25 = value;
	}

	inline static int32_t get_offset_of_lastHeadPosition_26() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___lastHeadPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastHeadPosition_26() const { return ___lastHeadPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastHeadPosition_26() { return &___lastHeadPosition_26; }
	inline void set_lastHeadPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastHeadPosition_26 = value;
	}

	inline static int32_t get_offset_of_overrideHeadPosition_27() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___overrideHeadPosition_27)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadPosition_27() const { return ___overrideHeadPosition_27; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadPosition_27() { return &___overrideHeadPosition_27; }
	inline void set_overrideHeadPosition_27(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadPosition_27 = value;
	}

	inline static int32_t get_offset_of_overrideHeadForward_28() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___overrideHeadForward_28)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadForward_28() const { return ___overrideHeadForward_28; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadForward_28() { return &___overrideHeadForward_28; }
	inline void set_overrideHeadForward_28(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadForward_28 = value;
	}

	inline static int32_t get_offset_of_latestEyeTrackingUpdate_33() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___latestEyeTrackingUpdate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_latestEyeTrackingUpdate_33() const { return ___latestEyeTrackingUpdate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_latestEyeTrackingUpdate_33() { return &___latestEyeTrackingUpdate_33; }
	inline void set_latestEyeTrackingUpdate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___latestEyeTrackingUpdate_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CIsEyeCalibrationValidU3Ek__BackingField_35)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsEyeCalibrationValidU3Ek__BackingField_35() const { return ___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return &___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline void set_U3CIsEyeCalibrationValidU3Ek__BackingField_35(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsEyeCalibrationValidU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CLatestEyeGazeU3Ek__BackingField_36)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CLatestEyeGazeU3Ek__BackingField_36() const { return ___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return &___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline void set_U3CLatestEyeGazeU3Ek__BackingField_36(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CLatestEyeGazeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37)); }
	inline bool get_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() const { return ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return &___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline void set_U3CIsEyeTrackingEnabledU3Ek__BackingField_37(bool value)
	{
		___U3CIsEyeTrackingEnabledU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CTimestampU3Ek__BackingField_38)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CTimestampU3Ek__BackingField_38() const { return ___U3CTimestampU3Ek__BackingField_38; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CTimestampU3Ek__BackingField_38() { return &___U3CTimestampU3Ek__BackingField_38; }
	inline void set_U3CTimestampU3Ek__BackingField_38(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CTimestampU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146, ___U3CUseHeadGazeOverrideU3Ek__BackingField_39)); }
	inline bool get_U3CUseHeadGazeOverrideU3Ek__BackingField_39() const { return ___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return &___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline void set_U3CUseHeadGazeOverrideU3Ek__BackingField_39(bool value)
	{
		___U3CUseHeadGazeOverrideU3Ek__BackingField_39 = value;
	}
};

struct GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::InitializeGazePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InitializeGazePointerPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxEyeTrackingTimeoutInSeconds
	float ___maxEyeTrackingTimeoutInSeconds_34;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields, ___LateUpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_30() const { return ___LateUpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_30() { return &___LateUpdatePerfMarker_30; }
	inline void set_LateUpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_InitializeGazePointerPerfMarker_31() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields, ___InitializeGazePointerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InitializeGazePointerPerfMarker_31() const { return ___InitializeGazePointerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InitializeGazePointerPerfMarker_31() { return &___InitializeGazePointerPerfMarker_31; }
	inline void set_InitializeGazePointerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InitializeGazePointerPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_32() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields, ___RaiseSourceDetectedPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_32() const { return ___RaiseSourceDetectedPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_32() { return &___RaiseSourceDetectedPerfMarker_32; }
	inline void set_RaiseSourceDetectedPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_maxEyeTrackingTimeoutInSeconds_34() { return static_cast<int32_t>(offsetof(GazeProvider_t89C368950F10109B9742F86D44B027D38F874146_StaticFields, ___maxEyeTrackingTimeoutInSeconds_34)); }
	inline float get_maxEyeTrackingTimeoutInSeconds_34() const { return ___maxEyeTrackingTimeoutInSeconds_34; }
	inline float* get_address_of_maxEyeTrackingTimeoutInSeconds_34() { return &___maxEyeTrackingTimeoutInSeconds_34; }
	inline void set_maxEyeTrackingTimeoutInSeconds_34(float value)
	{
		___maxEyeTrackingTimeoutInSeconds_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C  : public InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F  : public StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToUpdate
	Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * ___pointerDataToUpdate_30;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToRemove
	List_1_tA6CB456D14BFC987703CE5A9AF7D2EEFAF1B38B4 * ___pointerDataToRemove_31;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<RaycastCamera>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CRaycastCameraU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ManualInitializationRequired>k__BackingField
	bool ___U3CManualInitializationRequiredU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ProcessPaused>k__BackingField
	bool ___U3CProcessPausedU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_pointerDataToUpdate_30() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F, ___pointerDataToUpdate_30)); }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * get_pointerDataToUpdate_30() const { return ___pointerDataToUpdate_30; }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 ** get_address_of_pointerDataToUpdate_30() { return &___pointerDataToUpdate_30; }
	inline void set_pointerDataToUpdate_30(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * value)
	{
		___pointerDataToUpdate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToUpdate_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataToRemove_31() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F, ___pointerDataToRemove_31)); }
	inline List_1_tA6CB456D14BFC987703CE5A9AF7D2EEFAF1B38B4 * get_pointerDataToRemove_31() const { return ___pointerDataToRemove_31; }
	inline List_1_tA6CB456D14BFC987703CE5A9AF7D2EEFAF1B38B4 ** get_address_of_pointerDataToRemove_31() { return &___pointerDataToRemove_31; }
	inline void set_pointerDataToRemove_31(List_1_tA6CB456D14BFC987703CE5A9AF7D2EEFAF1B38B4 * value)
	{
		___pointerDataToRemove_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToRemove_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastCameraU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F, ___U3CRaycastCameraU3Ek__BackingField_32)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CRaycastCameraU3Ek__BackingField_32() const { return ___U3CRaycastCameraU3Ek__BackingField_32; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CRaycastCameraU3Ek__BackingField_32() { return &___U3CRaycastCameraU3Ek__BackingField_32; }
	inline void set_U3CRaycastCameraU3Ek__BackingField_32(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CRaycastCameraU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaycastCameraU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F, ___U3CManualInitializationRequiredU3Ek__BackingField_33)); }
	inline bool get_U3CManualInitializationRequiredU3Ek__BackingField_33() const { return ___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return &___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline void set_U3CManualInitializationRequiredU3Ek__BackingField_33(bool value)
	{
		___U3CManualInitializationRequiredU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CProcessPausedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F, ___U3CProcessPausedU3Ek__BackingField_34)); }
	inline bool get_U3CProcessPausedU3Ek__BackingField_34() const { return ___U3CProcessPausedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CProcessPausedU3Ek__BackingField_34() { return &___U3CProcessPausedU3Ek__BackingField_34; }
	inline void set_U3CProcessPausedU3Ek__BackingField_34(bool value)
	{
		___U3CProcessPausedU3Ek__BackingField_34 = value;
	}
};

struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessMrtkPointerLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessMrtkPointerLostPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::GetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetMousePointerEventDataPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::UpdateMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMousePointerEventDataPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ResetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetMousePointerEventDataPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_41;

public:
	inline static int32_t get_offset_of_ProcessPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___ProcessPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessPerfMarker_35() const { return ___ProcessPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessPerfMarker_35() { return &___ProcessPerfMarker_35; }
	inline void set_ProcessPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ProcessMrtkPointerLostPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___ProcessMrtkPointerLostPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessMrtkPointerLostPerfMarker_36() const { return ___ProcessMrtkPointerLostPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessMrtkPointerLostPerfMarker_36() { return &___ProcessMrtkPointerLostPerfMarker_36; }
	inline void set_ProcessMrtkPointerLostPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessMrtkPointerLostPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetMousePointerEventDataPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___GetMousePointerEventDataPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetMousePointerEventDataPerfMarker_37() const { return ___GetMousePointerEventDataPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetMousePointerEventDataPerfMarker_37() { return &___GetMousePointerEventDataPerfMarker_37; }
	inline void set_GetMousePointerEventDataPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetMousePointerEventDataPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_UpdateMousePointerEventDataPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___UpdateMousePointerEventDataPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMousePointerEventDataPerfMarker_38() const { return ___UpdateMousePointerEventDataPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMousePointerEventDataPerfMarker_38() { return &___UpdateMousePointerEventDataPerfMarker_38; }
	inline void set_UpdateMousePointerEventDataPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMousePointerEventDataPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResetMousePointerEventDataPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___ResetMousePointerEventDataPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetMousePointerEventDataPerfMarker_39() const { return ___ResetMousePointerEventDataPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetMousePointerEventDataPerfMarker_39() { return &___ResetMousePointerEventDataPerfMarker_39; }
	inline void set_ResetMousePointerEventDataPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetMousePointerEventDataPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___OnSourceDetectedPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_40() const { return ___OnSourceDetectedPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_40() { return &___OnSourceDetectedPerfMarker_40; }
	inline void set_OnSourceDetectedPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F_StaticFields, ___OnSourceLostPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_41() const { return ___OnSourceLostPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_41() { return &___OnSourceLostPerfMarker_41; }
	inline void set_OnSourceLostPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  m_Items[1];

public:
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m705344CA8124B0931115B5A6BF0E87666F0FF50F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_m8755F0D399BAB6605BB638D9884EE31342AD7FD1_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mC2DB9FE8915E40911168611D52B609B7E560ACD3_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer__ctor_mBC880610394C9D83FF2EC79532C660A107CA8F2F (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_mAAC57085658AB0CA5F3AF2B86EA270A4C5F9FC06_inline (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_IsInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_mF05D2D579E6A0A24362507725B6FE40A4DEFF243 (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, bool ___value0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_IsEyeTrackingEnabledAndValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeProvider_get_IsEyeTrackingEnabledAndValid_m98333DACBF7B75C568BC0A28B404D7BD294D357B (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::set_SourceType(Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m34D4B292B017F87C5605AC8469495E8ACF76E3AC_inline (BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_LatestEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m25728C98AAC7E45E746FFDAE0D136773027626D4_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_UseHeadGazeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_m8469B98280ECBD9BB7A7B489FE91335E7CD515EC_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_mAAEEDA5F214E2EC9C601656F82FDC78A312F3857 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformDirection_m8A3DE42058B6064E6A454BBAF305FA8294634D8A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_mE52A73F39EA7C15B7F0B307652A33B7B948E46BC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::get_Rays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* GenericPointer_get_Rays_mDEAF5D213E1703CA5946E8060BA66D57A0EB6038_inline (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mBDD1A288DED1DE14EE208EC6FC174D428FBF18B3 (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_mF3F529EC05E163E3F0FDAF4CA96F01BE1B07E885_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_HitPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_HitPosition_m93D81C49B61B29087E30F6BD90ED8C20EF3E0C71_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInputAction_get_None_mD7B6AEABD675FCE5E8DC792AF068C5609477E310_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A7648B7D53C5528364D64755ABF715B88C02D83 (U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * AwaiterExtensions_GetAwaiter_m1C58A1432CFBB25FF8CF7E85F8BE7C9EFDC2A5A2 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m7A5618F38A46BDF541A508B22AC7AC7E6C5FDD46_inline (SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m875845081DE3550EEFC04BBC5B59BA456F77424B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C **, U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m705344CA8124B0931115B5A6BF0E87666F0FF50F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mE0CCE246F85F3FC13348F31FF01E79B6B61C7F56 (SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9A2EA93EF00443E8287427D5E4E508FF3DBD6C07 (U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m6ABD0CA8F5CF3EF447843F4089F20CF53F9E5E2F (U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalHandlerListener_EnsureInputSystemValid_m22F77FC56C3F5257FD18DC68119EBF50DCE85667 (InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mDC6B8C9DE81C6576F5E7260822A37A9F19C10EEE (U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m67599BD41C246500CA292B0EA6619CC5B4FCEE27 (U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m423EA9BC93849A8B218DBFA8C19372470D1C721A (U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_mD50A9557DA6CE12693BD7FA1CDB4E1444F6171DD (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C **, U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_m8755F0D399BAB6605BB638D9884EE31342AD7FD1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC0FAE9961297912C612E7C65DE6FF01711921770 (U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m1BDD180426387692B6AEFA209908CA68B528F2C1 (U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalListener_EnsureInputSystemValid_m68318AEEE24606AC48CFED1DDDD8769463B9333B (InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mEA9BB23BDE89C80C4C82D3DE4A2C52743AF3E7BD (U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m314F7DF771B1A2A55C13C88D8893CC894448347C (U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mF75518FF7E5D9DC19FFAB7A183601641BC63E55B (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::GetEnumerator()
inline Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  Dictionary_2_GetEnumerator_m1531216395B95FB96CBE228DE63F1B74EB208238 (Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  (*) (Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Current()
inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  Enumerator_get_Current_m5A31E3FB9D478678CB4D2662004723A33E2149D6_inline (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  (*) (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Value()
inline PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * KeyValuePair_2_get_Value_m818BE99715D5C2BF10428544DD09268D5438C94D_inline (KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 * __this, const RuntimeMethod* method)
{
	return ((  PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * (*) (KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::MoveNext()
inline bool Enumerator_MoveNext_mE6B56723FDEECEAFFCB31FB5881423E28F93CBA8 (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m68011A90A5D33E2FA6FB7646FFE90D8AB5213A13 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::Dispose()
inline void Enumerator_Dispose_m9A2BA7616A8891F2FCEC826C3C656A689D500533 (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m83C7DDCC5E135EEA7F13AAE930D266CCE1ECCD28 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mFEA94B8D2D5BBF8074D0BEE762AD278CEEFB3003 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82C6A35ECFE8EAF7B116C6289727A30319F3ACAD (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237_m4CFD8C17D4C460FD27E4A54450F4C49B6C5282E2 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8_m907926A1F251409AE7A2387B0E0ABE5303135B63 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A_m05EFB083F55D861B9E87DB24C0A2E53C37CB7A6D (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC_mCEB68D93F17E1B4A982E8A68BE7D81DA1D1357CF (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5_m2ACBC219DA1DEAA5B5ACFB0EB3139883948B28AD (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC2DB9FE8915E40911168611D52B609B7E560ACD3_gshared)(___interface0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC2DB9FE8915E40911168611D52B609B7E560ACD3_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * ExecuteEvents_ValidateEventData_TisInputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC_mAD8D995903EBA74F51DBF7A48601D7C4DF9FCBBC (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC2DB9FE8915E40911168611D52B609B7E560ACD3_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_m419063D44F93825AF9CA37773BE81AE0DF8F8E0A (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mC2DB9FE8915E40911168611D52B609B7E560ACD3_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * ExecuteEvents_ValidateEventData_TisInputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE_mBF5FD17E62DDF9A9A7ABFB447AC4D922D22AAE9A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9_m16E4A2E032C292FB34D5E81ED4CFDD107A35B1C6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m62B8C1CC94491E9B837F4164A854D1FC2819B0AC (U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.ctor(Microsoft.MixedReality.Toolkit.Input.GazeProvider,System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,UnityEngine.LayerMask[],System.Single,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__ctor_mE5FD946E6AF356AC8CF0A8C4D6058BE479848A17 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * ___gazeProvider0, String_t* ___pointerName1, RuntimeObject* ___inputSourceParent2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks3, float ___pointerExtent4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform5, BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * ___stabilizer6, const RuntimeMethod* method)
{
	{
		// : base(pointerName, inputSourceParent)
		String_t* L_0 = ___pointerName1;
		RuntimeObject* L_1 = ___inputSourceParent2;
		GenericPointer__ctor_mBC880610394C9D83FF2EC79532C660A107CA8F2F(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.gazeProvider = gazeProvider;
		GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_2 = ___gazeProvider0;
		__this->set_gazeProvider_20(L_2);
		// PrioritizedLayerMasksOverride = raycastLayerMasks;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = ___raycastLayerMasks3;
		GenericPointer_set_PrioritizedLayerMasksOverride_mAAC57085658AB0CA5F3AF2B86EA270A4C5F9FC06_inline(__this, L_3, /*hidden argument*/NULL);
		// this.pointerExtent = pointerExtent;
		float L_4 = ___pointerExtent4;
		__this->set_pointerExtent_23(L_4);
		// this.gazeTransform = gazeTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___gazeTransform5;
		__this->set_gazeTransform_18(L_5);
		// this.stabilizer = stabilizer;
		BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * L_6 = ___stabilizer6;
		__this->set_stabilizer_19(L_6);
		// IsInteractionEnabled = true;
		GenericPointer_set_IsInteractionEnabled_mF05D2D579E6A0A24362507725B6FE40A4DEFF243(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_Controller_m438EBFD6980E80AFD2F6F9B788D428E85AC5490B (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_Controller_mC072DFAD3C9725FB4E42299F3F94381AF4B89E47 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_InputSourceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_InputSourceParent_mC280C1E154DB8B975466E2EFE525A216C82E4F69 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceParentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_InputSourceParent_mD1E4AC26AD32CA561F2796B1825735D9B5CC90DC (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CInputSourceParentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_PointerExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalGazePointer_get_PointerExtent_mA706DF820174B5E1B6D3B97E47FABD7CCB99F16B (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// get => pointerExtent;
		float L_0 = __this->get_pointerExtent_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_PointerExtent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_PointerExtent_m7FBFA9119BA14C2DBD0B832C27607EB6461C64A6 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => pointerExtent = value;
		float L_0 = ___value0;
		__this->set_pointerExtent_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::SetGazeInputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_SetGazeInputSourceParent_mF861A2316BF95CFE09BD2DD4C4163247508FFB6A (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, RuntimeObject* ___gazeInputSource0, const RuntimeMethod* method)
{
	{
		// InputSourceParent = gazeInputSource;
		RuntimeObject* L_0 = ___gazeInputSource0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreSceneQuery_mF9C9277257B2363A557386D6916A535790760722 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPreSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var))->get_OnPreSceneQueryPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (gazeProvider.IsEyeTrackingEnabledAndValid)
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_2 = __this->get_gazeProvider_20();
			NullCheck(L_2);
			bool L_3;
			L_3 = GazeProvider_get_IsEyeTrackingEnabledAndValid_m98333DACBF7B75C568BC0A28B404D7BD294D357B(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_005b;
			}
		}

IL_001b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Eyes;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_4 = __this->get_gazeProvider_20();
			NullCheck(L_4);
			BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * L_5 = L_4->get_gazeInputSource_15();
			NullCheck(L_5);
			BaseGenericInputSource_set_SourceType_m34D4B292B017F87C5605AC8469495E8ACF76E3AC_inline(L_5, 5, /*hidden argument*/NULL);
			// newGazeOrigin = gazeProvider.LatestEyeGaze.origin;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_6 = __this->get_gazeProvider_20();
			NullCheck(L_6);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
			L_7 = GazeProvider_get_LatestEyeGaze_m25728C98AAC7E45E746FFDAE0D136773027626D4_inline(L_6, /*hidden argument*/NULL);
			V_5 = L_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_2 = L_8;
			// newGazeNormal = gazeProvider.LatestEyeGaze.direction;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_9 = __this->get_gazeProvider_20();
			NullCheck(L_9);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10;
			L_10 = GazeProvider_get_LatestEyeGaze_m25728C98AAC7E45E746FFDAE0D136773027626D4_inline(L_9, /*hidden argument*/NULL);
			V_5 = L_10;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_11;
			// }
			goto IL_0145;
		}

IL_005b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Head;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_12 = __this->get_gazeProvider_20();
			NullCheck(L_12);
			BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * L_13 = L_12->get_gazeInputSource_15();
			NullCheck(L_13);
			BaseGenericInputSource_set_SourceType_m34D4B292B017F87C5605AC8469495E8ACF76E3AC_inline(L_13, 4, /*hidden argument*/NULL);
			// if (gazeProvider.UseHeadGazeOverride && gazeProvider.overrideHeadPosition.HasValue && gazeProvider.overrideHeadForward.HasValue)
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_14 = __this->get_gazeProvider_20();
			NullCheck(L_14);
			bool L_15;
			L_15 = GazeProvider_get_UseHeadGazeOverride_m8469B98280ECBD9BB7A7B489FE91335E7CD515EC_inline(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00e3;
			}
		}

IL_0079:
		{
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_16 = __this->get_gazeProvider_20();
			NullCheck(L_16);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_17 = L_16->get_address_of_overrideHeadPosition_27();
			bool L_18;
			L_18 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_17, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_00e3;
			}
		}

IL_008b:
		{
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_19 = __this->get_gazeProvider_20();
			NullCheck(L_19);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_20 = L_19->get_address_of_overrideHeadForward_28();
			bool L_21;
			L_21 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_20, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_00e3;
			}
		}

IL_009d:
		{
			// newGazeOrigin = gazeProvider.overrideHeadPosition.Value;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_22 = __this->get_gazeProvider_20();
			NullCheck(L_22);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_23 = L_22->get_address_of_overrideHeadPosition_27();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_23, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_2 = L_24;
			// newGazeNormal = gazeProvider.overrideHeadForward.Value;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_25 = __this->get_gazeProvider_20();
			NullCheck(L_25);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_26 = L_25->get_address_of_overrideHeadForward_28();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_26, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_3 = L_27;
			// gazeProvider.overrideHeadPosition = null;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_28 = __this->get_gazeProvider_20();
			NullCheck(L_28);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_29 = L_28->get_address_of_overrideHeadPosition_27();
			il2cpp_codegen_initobj(L_29, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			// gazeProvider.overrideHeadForward = null;
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_30 = __this->get_gazeProvider_20();
			NullCheck(L_30);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_31 = L_30->get_address_of_overrideHeadForward_28();
			il2cpp_codegen_initobj(L_31, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			// }
			goto IL_00fb;
		}

IL_00e3:
		{
			// newGazeOrigin = gazeTransform.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_gazeTransform_18();
			NullCheck(L_32);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			// newGazeNormal = gazeTransform.forward;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_gazeTransform_18();
			NullCheck(L_34);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_34, /*hidden argument*/NULL);
			V_3 = L_35;
		}

IL_00fb:
		{
			// if (stabilizer != null)
			BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * L_36 = __this->get_stabilizer_19();
			if (!L_36)
			{
				goto IL_0145;
			}
		}

IL_0103:
		{
			// stabilizer.UpdateStability(MixedRealityPlayspace.InverseTransformPoint(newGazeOrigin), MixedRealityPlayspace.InverseTransformDirection(newGazeNormal));
			BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * L_37 = __this->get_stabilizer_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = MixedRealityPlayspace_InverseTransformPoint_mAAEEDA5F214E2EC9C601656F82FDC78A312F3857(L_38, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = MixedRealityPlayspace_InverseTransformDirection_m8A3DE42058B6064E6A454BBAF305FA8294634D8A(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, L_37, L_39, L_41);
			// newGazeOrigin = MixedRealityPlayspace.TransformPoint(stabilizer.StablePosition);
			BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * L_42 = __this->get_stabilizer_19();
			NullCheck(L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(9 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StablePosition() */, L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			L_44 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_43, /*hidden argument*/NULL);
			V_2 = L_44;
			// newGazeNormal = MixedRealityPlayspace.TransformDirection(stabilizer.StableRay.direction);
			BaseRayStabilizer_t34791EADC14F1C6EBC8BB6AD4C8AC9A8F7CE8467 * L_45 = __this->get_stabilizer_19();
			NullCheck(L_45);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_46;
			L_46 = VirtFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(11 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StableRay() */, L_45);
			V_5 = L_46;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = MixedRealityPlayspace_TransformDirection_mE52A73F39EA7C15B7F0B307652A33B7B948E46BC(L_47, /*hidden argument*/NULL);
			V_3 = L_48;
		}

IL_0145:
		{
			// Vector3 endPoint = newGazeOrigin + (newGazeNormal * pointerExtent);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
			float L_51 = __this->get_pointerExtent_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, L_51, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
			L_53 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_49, L_52, /*hidden argument*/NULL);
			V_4 = L_53;
			// Rays[0].UpdateRayStep(ref newGazeOrigin, ref endPoint);
			RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* L_54;
			L_54 = GenericPointer_get_Rays_mDEAF5D213E1703CA5946E8060BA66D57A0EB6038_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			RayStep_UpdateRayStep_mBDD1A288DED1DE14EE208EC6FC174D428FBF18B3((RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			// gazeProvider.HitPosition = Rays[0].Origin + (gazeProvider.lastHitDistance * Rays[0].Direction);
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_55 = __this->get_gazeProvider_20();
			RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* L_56;
			L_56 = GenericPointer_get_Rays_mDEAF5D213E1703CA5946E8060BA66D57A0EB6038_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_56);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline((RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 *)((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * L_58 = __this->get_gazeProvider_20();
			NullCheck(L_58);
			float L_59 = L_58->get_lastHitDistance_24();
			RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* L_60;
			L_60 = GenericPointer_get_Rays_mDEAF5D213E1703CA5946E8060BA66D57A0EB6038_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_60);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = RayStep_get_Direction_mF3F529EC05E163E3F0FDAF4CA96F01BE1B07E885_inline((RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 *)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			L_62 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_59, L_61, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
			L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_57, L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			GazeProvider_set_HitPosition_m93D81C49B61B29087E30F6BD90ED8C20EF3E0C71_inline(L_55, L_63, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x1C0, FINALLY_01b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b2;
	}

FINALLY_01b2:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(434)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(434)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C0, IL_01c0)
	}

IL_01c0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPostSceneQuery_mADA894363C158A737526AA6634A19E917A649DFC (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPostSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var))->get_OnPostSceneQueryPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (isDown)
			bool L_2 = __this->get_isDown_24();
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0016:
		{
			// CoreServices.InputSystem.RaisePointerDragged(this, MixedRealityInputAction.None, currentHandedness, currentInputSource);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_4;
			L_4 = MixedRealityInputAction_get_None_mD7B6AEABD675FCE5E8DC792AF068C5609477E310_inline(/*hidden argument*/NULL);
			uint8_t L_5 = __this->get_currentHandedness_26();
			RuntimeObject* L_6 = __this->get_currentInputSource_25();
			NullCheck(L_3);
			InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, L_3, __this, L_4, L_5, L_6);
		}

IL_0032:
		{
			// }
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreCurrentPointerTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreCurrentPointerTargetChange_mB3914550FC2F601BA17D4A892C850FEF0D004B9C (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// public override void OnPreCurrentPointerTargetChange() { }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InternalGazePointer_get_Position_m54F05A7EB2BAF081BDA9E1FBC40775C8DE9B1DC0 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 Position => gazeTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InternalGazePointer_get_Rotation_m0371DB9F374BBA304E5FFB6CC708FA742DFD210B (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// public override Quaternion Rotation => gazeTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_Reset_mF496D623476C02613759DE60D39C283CA4FA616C (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, const RuntimeMethod* method)
{
	{
		// Controller = null;
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerDown_mCEB06722F450D356D976593FA16976F0B2BAF33B (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// isDown = true;
		__this->set_isDown_24((bool)1);
		// currentHandedness = handedness;
		uint8_t L_0 = ___handedness1;
		__this->set_currentHandedness_26(L_0);
		// currentInputSource = inputSource;
		RuntimeObject* L_1 = ___inputSource2;
		__this->set_currentInputSource_25(L_1);
		// CoreServices.InputSystem?.RaisePointerDown(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_4 = ___mixedRealityInputAction0;
		uint8_t L_5 = ___handedness1;
		RuntimeObject* L_6 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B2_0, __this, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerUp_m3E235D42680F90A6B52CFEE53EEDAE8567709D27 (InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46 * __this, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// isDown = false;
		__this->set_isDown_24((bool)0);
		// currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// currentInputSource = null;
		__this->set_currentInputSource_25((RuntimeObject*)NULL);
		// CoreServices.InputSystem?.RaisePointerClicked(this, mixedRealityInputAction, 0, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		goto IL_002a;
	}

IL_0020:
	{
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_2 = ___mixedRealityInputAction0;
		uint8_t L_3 = ___handedness1;
		RuntimeObject* L_4 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B2_0, __this, L_2, 0, L_3, L_4);
	}

IL_002a:
	{
		// CoreServices.InputSystem?.RaisePointerUp(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_7 = ___mixedRealityInputAction0;
		uint8_t L_8 = ___handedness1;
		RuntimeObject* L_9 = ___inputSource2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B5_0, __this, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__cctor_m7E6DD051558D4C9B3CD0FD73B16450C3061099FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnPreSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPreSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701, /*hidden argument*/NULL);
		((InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var))->set_OnPreSceneQueryPerfMarker_27(L_0);
		// private static readonly ProfilerMarker OnPostSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPostSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742, /*hidden argument*/NULL);
		((InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t06763423D5FD67B1DC4861E34A28BA3B549CEF46_il2cpp_TypeInfo_var))->set_OnPostSceneQueryPerfMarker_28(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0C48DA2F09A1BFA4CD9A0D5C12F05365236F2BD2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * L_0 = (U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC *)il2cpp_codegen_object_new(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6A7648B7D53C5528364D64755ABF715B88C02D83(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A7648B7D53C5528364D64755ABF715B88C02D83 (U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mAB72FB67F0A48DE667A3B063EFA5BDD4B2874380 (U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9A2EA93EF00443E8287427D5E4E508FF3DBD6C07 (U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m875845081DE3550EEFC04BBC5B59BA456F77424B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mAB72FB67F0A48DE667A3B063EFA5BDD4B2874380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var);
			U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC * L_5 = ((U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mAB72FB67F0A48DE667A3B063EFA5BDD4B2874380_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA3A44580A85A7B6DA1140A39350A2D75A1FDF5EC_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_m1C58A1432CFBB25FF8CF7E85F8BE7C9EFDC2A5A2(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m7A5618F38A46BDF541A508B22AC7AC7E6C5FDD46_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m875845081DE3550EEFC04BBC5B59BA456F77424B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B_m875845081DE3550EEFC04BBC5B59BA456F77424B_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_mE0CCE246F85F3FC13348F31FF01E79B6B61C7F56(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9A2EA93EF00443E8287427D5E4E508FF3DBD6C07_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9A2EA93EF00443E8287427D5E4E508FF3DBD6C07(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m6ABD0CA8F5CF3EF447843F4089F20CF53F9E5E2F (U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m6ABD0CA8F5CF3EF447843F4089F20CF53F9E5E2F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tCA12957703A740C626592825876688C41456064B *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m6ABD0CA8F5CF3EF447843F4089F20CF53F9E5E2F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mDC6B8C9DE81C6576F5E7260822A37A9F19C10EEE (U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0089;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m22F77FC56C3F5257FD18DC68119EBF50DCE85667(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02_m701932E16462F32A9691BBA8032A28A49632F4EA_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00a2;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// RegisterHandlers();
			InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::RegisterHandlers() */, L_18);
		}

IL_0089:
		{
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_mDC6B8C9DE81C6576F5E7260822A37A9F19C10EEE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_mDC6B8C9DE81C6576F5E7260822A37A9F19C10EEE(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m67599BD41C246500CA292B0EA6619CC5B4FCEE27 (U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m67599BD41C246500CA292B0EA6619CC5B4FCEE27_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t675472EF11D08C3C95631F89126B6A6C7F44BA02 *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m67599BD41C246500CA292B0EA6619CC5B4FCEE27(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m207BE60898751011FBDEF7BAD7E9172F1AA98575 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * L_0 = (U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC *)il2cpp_codegen_object_new(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m423EA9BC93849A8B218DBFA8C19372470D1C721A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m423EA9BC93849A8B218DBFA8C19372470D1C721A (U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m2C4C93FAFEF33580DE2F1FDEDA0DE24F7C35B33D (U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC0FAE9961297912C612E7C65DE6FF01711921770 (U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_mD50A9557DA6CE12693BD7FA1CDB4E1444F6171DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m2C4C93FAFEF33580DE2F1FDEDA0DE24F7C35B33D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var);
			U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC * L_5 = ((U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m2C4C93FAFEF33580DE2F1FDEDA0DE24F7C35B33D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A2B2A71D850228A300894121A83D10BFAFE4FEC_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_m1C58A1432CFBB25FF8CF7E85F8BE7C9EFDC2A5A2(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m7A5618F38A46BDF541A508B22AC7AC7E6C5FDD46_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_mD50A9557DA6CE12693BD7FA1CDB4E1444F6171DD((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_TisU3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384_mD50A9557DA6CE12693BD7FA1CDB4E1444F6171DD_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_mE0CCE246F85F3FC13348F31FF01E79B6B61C7F56(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC0FAE9961297912C612E7C65DE6FF01711921770_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC0FAE9961297912C612E7C65DE6FF01711921770(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m1BDD180426387692B6AEFA209908CA68B528F2C1 (U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m1BDD180426387692B6AEFA209908CA68B528F2C1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t5652FB9F8C647E6926BA578686B56448DE00F384 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m1BDD180426387692B6AEFA209908CA68B528F2C1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mEA9BB23BDE89C80C4C82D3DE4A2C52743AF3E7BD (U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_t3382F8C95785E5EFD846C3FF819317EBE10223E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0093;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalListener_EnsureInputSystemValid_m68318AEEE24606AC48CFED1DDDD8769463B9333B(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC_m8C5789E54A7478954C983451744965706C76F630_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00ac;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// CoreServices.InputSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_18;
			L_18 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			InputSystemGlobalListener_t492CD2A29343172890F43C11385B977E9A7595C5 * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t3382F8C95785E5EFD846C3FF819317EBE10223E5_il2cpp_TypeInfo_var, L_18, L_20);
		}

IL_0093:
		{
			goto IL_00ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	} // end catch (depth: 1)

IL_00ac:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_mEA9BB23BDE89C80C4C82D3DE4A2C52743AF3E7BD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_mEA9BB23BDE89C80C4C82D3DE4A2C52743AF3E7BD(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m314F7DF771B1A2A55C13C88D8893CC894448347C (U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m314F7DF771B1A2A55C13C88D8893CC894448347C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t6CBA84DD85093A28D6C0FBFF003AB0D0922A9CFC *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m314F7DF771B1A2A55C13C88D8893CC894448347C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m83C7DDCC5E135EEA7F13AAE930D266CCE1ECCD28 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m68011A90A5D33E2FA6FB7646FFE90D8AB5213A13 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mF75518FF7E5D9DC19FFAB7A183601641BC63E55B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ActiveMixedRealityPointersU3Ed__16_MoveNext_mCA2A157A0FE21F4AC1DBED5B1FC9F584FFD834F3 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m1531216395B95FB96CBE228DE63F1B74EB208238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6B56723FDEECEAFFCB31FB5881423E28F93CBA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5A31E3FB9D478678CB4D2662004723A33E2149D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m818BE99715D5C2BF10428544DD09268D5438C94D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * V_2 = NULL;
	KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0064;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0096;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * L_5 = L_4->get_pointerDataToUpdate_30();
			NullCheck(L_5);
			Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  L_6;
			L_6 = Dictionary_2_GetEnumerator_m1531216395B95FB96CBE228DE63F1B74EB208238(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m1531216395B95FB96CBE228DE63F1B74EB208238_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_006c;
		}

IL_003b:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  L_8;
			L_8 = Enumerator_get_Current_m5A31E3FB9D478678CB4D2662004723A33E2149D6_inline((Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *)L_7, /*hidden argument*/Enumerator_get_Current_m5A31E3FB9D478678CB4D2662004723A33E2149D6_RuntimeMethod_var);
			V_3 = L_8;
			// yield return pointerDataEntry.Value.pointer;
			PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * L_9;
			L_9 = KeyValuePair_2_get_Value_m818BE99715D5C2BF10428544DD09268D5438C94D_inline((KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m818BE99715D5C2BF10428544DD09268D5438C94D_RuntimeMethod_var);
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->get_pointer_0();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0096;
		}

IL_0064:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_006c:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * L_11 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_12;
			L_12 = Enumerator_MoveNext_mE6B56723FDEECEAFFCB31FB5881423E28F93CBA8((Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *)L_11, /*hidden argument*/Enumerator_MoveNext_mE6B56723FDEECEAFFCB31FB5881423E28F93CBA8_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0079:
		{
			U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mF75518FF7E5D9DC19FFAB7A183601641BC63E55B(__this, /*hidden argument*/NULL);
			Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * L_13 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_13, sizeof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 ));
			// }
			V_0 = (bool)0;
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008f;
	}

FAULT_008f:
	{ // begin fault (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m68011A90A5D33E2FA6FB7646FFE90D8AB5213A13(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end fault
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mF75518FF7E5D9DC19FFAB7A183601641BC63E55B (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9A2BA7616A8891F2FCEC826C3C656A689D500533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m9A2BA7616A8891F2FCEC826C3C656A689D500533((Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 *)L_0, /*hidden argument*/Enumerator_Dispose_m9A2BA7616A8891F2FCEC826C3C656A689D500533_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumeratorU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_get_Current_mDD44F5B49C2E0791F93907A15DDF71A3CFF7CDE7 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m7F97C326CE2E6CC11F0288A9C83BCF8C21A9CC17 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m7F97C326CE2E6CC11F0288A9C83BCF8C21A9CC17_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_get_Current_m8E1777D0F00D5084361814F59CF1DE4427E24762 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mFEA94B8D2D5BBF8074D0BEE762AD278CEEFB3003 (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * L_3 = (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 *)il2cpp_codegen_object_new(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_il2cpp_TypeInfo_var);
		U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m83C7DDCC5E135EEA7F13AAE930D266CCE1ECCD28(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * L_4 = V_0;
		MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerable_GetEnumerator_mCCC9EFA44BB126B6854C2DB3036B8AED95FD970F (U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mFEA94B8D2D5BBF8074D0BEE762AD278CEEFB3003(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_mB14A60DAF4BFAD1C0E78E6A310CE28E406014CA1 (PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_0 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_0, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_0);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_pointer_0(L_1);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_3);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_5);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_7, L_6, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3D4EC53C84596F116D7B844860B56180B43A0DC0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * L_0 = (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 *)il2cpp_codegen_object_new(U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82C6A35ECFE8EAF7B116C6289727A30319F3ACAD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82C6A35ECFE8EAF7B116C6289727A30319F3ACAD (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_0_mC7974230D22D9F122403FE1A44B2AACB9746CF81 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_1_mD82B11A248AF55C7B5CF09B6AE103220A0D4412C (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69_mA052381EF47C80265CCC5B42E03B1CE06044066A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tB7BB47A3057E06BC63DDE23406339979F7B82A76_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_2_m61CF5E02B0C9EBE99108FB21BF862467A013BEB0 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237_m4CFD8C17D4C460FD27E4A54450F4C49B6C5282E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237_m4CFD8C17D4C460FD27E4A54450F4C49B6C5282E2(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237_m4CFD8C17D4C460FD27E4A54450F4C49B6C5282E2_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_3_m70A8E92EF36AD367A83C9DD0FF114CFFF99BDC95 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8_m907926A1F251409AE7A2387B0E0ABE5303135B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8_m907926A1F251409AE7A2387B0E0ABE5303135B63(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8_m907926A1F251409AE7A2387B0E0ABE5303135B63_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_4_m9C7DE2308EF4D2634BCC6EB3B064464357D9E8AD (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A_m05EFB083F55D861B9E87DB24C0A2E53C37CB7A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A_m05EFB083F55D861B9E87DB24C0A2E53C37CB7A6D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A_m05EFB083F55D861B9E87DB24C0A2E53C37CB7A6D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_5_mB8A415593BDF071A17A3A1CA0ABACA01EEBA296B (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC_mCEB68D93F17E1B4A982E8A68BE7D81DA1D1357CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC_mCEB68D93F17E1B4A982E8A68BE7D81DA1D1357CF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC_mCEB68D93F17E1B4A982E8A68BE7D81DA1D1357CF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_6_m87AF0B62FB6907A270B29764AC6DAF4D1E1568A2 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5_m2ACBC219DA1DEAA5B5ACFB0EB3139883948B28AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5_m2ACBC219DA1DEAA5B5ACFB0EB3139883948B28AD(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5_m2ACBC219DA1DEAA5B5ACFB0EB3139883948B28AD_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_t56F14A4073DB557825A406A9E751CB9F495BD8E1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_7_m8FF52EA5BCCF2ACD1300486B862C98CA2E319688 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_8_m0226DA8B7D015EE7B5C5B11A48F50E1C7EC9546D (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t09DFBA0D882081DD6EFC92D60D89886BF85CCB4C_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_9_m17021813F3148CB3E4003C6E53F09B237F369038 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_10_mE03B531C83EB9557EEC9B6A0357C827E9130528C (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D_mFDBC22220BC93B0A5B229D72C54927584181E26E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t268E4714635E26834E9F36828C3FCF64396F3CE2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_11_mE4E0720CEBA312715E21A0A7E34D66EEE61FBA77 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_12_m72847825F264FD0AF65680D167A487B49E00F8DE (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_13_mF50C16AE611BB681A829F5F33B7B22C7FD666763 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_14_m5F35B44E227747D97BDCF79C54248FFC05F00335 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B_m55E84A750355B585CBF1D5ED657FA81E22ED393C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_15_m3B0CEAC5872B053E9C16377A0FC13A1F9135CF5B (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_16_m090464066E31F8EE71AC1ED0E8F04E1ABB9E75E8 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_17_m794242E6A4BE03702BD594727F1465DBD7BC622F (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_18_m45BC51730B79893D83AC479CE22A8A0A41665AA2 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_m04AFE2C726DF4F4D49F0CC03F079C23F1DE80021_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tFE0BDB9B374946BB8B5FC9BBD5685797361B67EF_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_19_m187F8F96F3AF2732BC821D81637F8944B9BFEA19 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC_mAD8D995903EBA74F51DBF7A48601D7C4DF9FCBBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tD186E4C862F35B156C4D8381A729B19495C77800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC_mAD8D995903EBA74F51DBF7A48601D7C4DF9FCBBC(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC_mAD8D995903EBA74F51DBF7A48601D7C4DF9FCBBC_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tD186E4C862F35B156C4D8381A729B19495C77800_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_20_m09A3FB10BE3C6BC20B8E9E12147269DD29F6AFE7 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t9EFE957AFA5AC03EDDC60E90A4C4BA3A5FDCA337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t9EFE957AFA5AC03EDDC60E90A4C4BA3A5FDCA337_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_21_m70A22DC64ACD37BA1EE5414DF216E47A414566BC (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t4BEA6FC8D5EDFFFA395C66B176E604B9504DCCD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t4BEA6FC8D5EDFFFA395C66B176E604B9504DCCD5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_22_m0CEE9866870590765E782E2D1F00F9699003FB3F (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t8FEDE1AC7BC94BB40CCCD807EC8A187354AEBBFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t8FEDE1AC7BC94BB40CCCD807EC8A187354AEBBFA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_23_m31DEC551F57A4D4B5CC0A0F0CE87869E5BC78FF1 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t84C33FA185EC91D4A28232BE4C444B66E4B9ABBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t84C33FA185EC91D4A28232BE4C444B66E4B9ABBB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_24_m6AAA6FA23621959E3B59C267CF7459D00DE7ECFE (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_25_m6F177B6664F8F82471352C16D44606D86BE9E26B (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_26_mE10AF0CD8A59E68E9582084F89770F4F876813E6 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_27_mAC4476815ED28CE8DF2F2C8646D5DDA06D655845 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_28_m9B3B2898D350959534A64916A07C0C59C5B68A43 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_29_m3C084EEA4E66BE7C7F894D226D54FE4909B6A92F (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_30_m845C51C8C4F81A7DB7602A8DE446EB5044F89373 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_31_mC34593A8C3FEF7FEB575345F43115CF38EA2F136 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_32_m0043202BE744C4F0AEDCB0010E1596081FC63B9D (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_m4F5F2DC39CCA4FED8E92C92F7E662E20BC39FF17_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_33_mF82D0F2FA51AFDFF73000BE7CB674C862E382F55 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t087726847A7755115A9464A201CE76C01156D000_m4C033D9CA299481E0978374CC0CDDEE2E5361BA5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t07BC27A248529CC703A39E1C8966CC1A3E8150D9_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_34_m3C5CD84FA68A14C5123D5F3DF9EF70D6B459FDD8 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E_m43F9B0A08D9E703A4A5A44FEEA35BFB998F91635_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t4F335538EFDEC2EC81949B9985CC0952F3CE3BE3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_35_m192F62B89A7186463BFBF5E3A7E82F8156E91144 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2_m5F0A9498D8884984FC1A8E370124096EF5C49CCD_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t3B85EB03363A31CA464BA97BEAC39A228FDEF589_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_36_m535A19FA6445F25750A196965BEFC3E970E4915A (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4_m903403E7986D5D840D43AFF9508BBC310685E3DA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tC0E676A3A255C11DE6D12D7B4763539D88300676_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_37_mB58892C3B223D65482434AB0A822803A6E3BC939 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9_m8571BE987E7C15ABC85C56F573265D4FC185C3EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t3659EA37E5C2C9C8F97618405F38B09B2C7AFF00_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_38_m022D1144DB069D9A5E363443574C832C391366EA (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_39_mFC7EDBD4044D390A9BAFEAC5CC9CBDFD94702AC1 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_m419063D44F93825AF9CA37773BE81AE0DF8F8E0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE_mA9AB87C99FDF1116E2931BFF0419A709974C8509_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealitySpeechHandler speechHandler && !speechHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_m419063D44F93825AF9CA37773BE81AE0DF8F8E0A(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_m419063D44F93825AF9CA37773BE81AE0DF8F8E0A_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_6 = V_1;
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_tB8E38D06AE33FAEF3B8689E3FF529105FF5DC0BB_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_m4DD4EA6C9C825B363158FF65474F299063A06EC0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_12 = V_2;
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_12, L_13);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_14 = V_2;
		SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tA2ACF97C983AD74B025582CD305C61B10977B21E_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0040:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_40_m047DDF57A9E957503D74676B3BAFDD17EC83B434 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_41_mAEB0187976DC18563A9671BECA2B404AC70231E0 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_42_m5B3DECE18C5229AEFEC81203BC631ECD0697BE3E (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_43_mDE73AACEAD85C0FDE061ADBD27E305391482D444 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD_mEC05527E50432F9246A15F220E075F943169CE9A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t34B58DFF94E212AF2B41118ADF316FA269C15250_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_44_m407CE50F1B92C22B289C7DF756267533B6A5E12C (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE_mBF5FD17E62DDF9A9A7ABFB447AC4D922D22AAE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointHandler_t60054FAFAC50668DE998C4A961604EE64E5AD572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE_mBF5FD17E62DDF9A9A7ABFB447AC4D922D22AAE9A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE_mBF5FD17E62DDF9A9A7ABFB447AC4D922D22AAE9A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_t60054FAFAC50668DE998C4A961604EE64E5AD572_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_45_m09972FF0BE24881968374A10F743332F119D4ACB (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9_m16E4A2E032C292FB34D5E81ED4CFDD107A35B1C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandMeshHandler_tD4C6068826237CE34DA27F629770BF035E7A6E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9_m16E4A2E032C292FB34D5E81ED4CFDD107A35B1C6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9_m16E4A2E032C292FB34D5E81ED4CFDD107A35B1C6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_tD4C6068826237CE34DA27F629770BF035E7A6E90_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_46_m476A3A549F99309B840698223C68607199972D04 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_47_mAEFC1C160FC8884098EAFE8EB94CAD918A2278EF (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_48_mE7469B3796332B314F48554D63100CECAD2A17E2 (U3CU3Ec_t5703304E017934EB51C316712AE0B750D1E3E342 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C_mCD7059FBC9AF44463CA7F3A99BE3BFB0CCB58020_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tA7D8CB477F79E23F8061450ED48B99C107F4398D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7C24FE6EBE8FC91C07943ABB6CA6E2B94C9B4721 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * L_0 = (U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D *)il2cpp_codegen_object_new(U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m62B8C1CC94491E9B837F4164A854D1FC2819B0AC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m62B8C1CC94491E9B837F4164A854D1FC2819B0AC (U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_mF3BF9D26E4AD0853C2F014F369D997AE5B04FA10 (U3CU3Ec_t8159A0B3C3147B1B3A1D66CA8A992D7C98C7C69D * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_mAAC57085658AB0CA5F3AF2B86EA270A4C5F9FC06_inline (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m34D4B292B017F87C5605AC8469495E8ACF76E3AC_inline (BaseGenericInputSource_t38EE1814DD3F3103D7D522EF927CCC9EA9DDD3F7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public InputSourceType SourceType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSourceTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m25728C98AAC7E45E746FFDAE0D136773027626D4_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, const RuntimeMethod* method)
{
	{
		// public Ray LatestEyeGaze { get; private set; } = default(Ray);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CLatestEyeGazeU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_m8469B98280ECBD9BB7A7B489FE91335E7CD515EC_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseHeadGazeOverride { get; set; }
		bool L_0 = __this->get_U3CUseHeadGazeOverrideU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* GenericPointer_get_Rays_mDEAF5D213E1703CA5946E8060BA66D57A0EB6038_inline (GenericPointer_t49FC8790E7EF78D5BD01B5282CDB7F8CAE93B9FC * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_mF3F529EC05E163E3F0FDAF4CA96F01BE1B07E885_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_HitPosition_m93D81C49B61B29087E30F6BD90ED8C20EF3E0C71_inline (GazeProvider_t89C368950F10109B9742F86D44B027D38F874146 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 HitPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CHitPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInputAction_get_None_mD7B6AEABD675FCE5E8DC792AF068C5609477E310_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_0 = ((MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m7A5618F38A46BDF541A508B22AC7AC7E6C5FDD46_inline (SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
