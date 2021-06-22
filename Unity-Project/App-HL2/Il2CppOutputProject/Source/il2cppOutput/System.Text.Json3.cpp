#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3;
// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo>
struct ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Text.Json.JsonParameterInfo>
struct Dictionary_2_t9AED93840D686AA9810D78EBD50ECE7FDCA32C26;
// System.Collections.Generic.Dictionary`2<System.String,System.Text.Json.JsonPropertyInfo>
struct Dictionary_2_t929F87A14E910ABDCC882775D5D2B73E9E243D5D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>>>
struct Func_2_tB70DBF72BDE13A60F022FF99C0825B7D33B2CD88;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734;
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonElement>
struct IEnumerator_1_t73017A217E49AA7D9A3E3731EAD4F86E7F7DA323;
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonProperty>
struct IEnumerator_1_tF60738823D7C5388D396B0FEF59CE68312CB4560;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tCB963BA7F071839639F443DD18CE2F1F15A68528;
// System.Collections.Generic.List`1<System.Text.Json.ArgumentState>
struct List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7;
// System.Collections.Generic.List`1<System.Text.Json.PropertyRef>
struct List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588;
// System.Collections.Generic.List`1<System.Text.Json.ReadStackFrame>
struct List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD;
// System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>
struct List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25;
// System.Pinnable`1<System.Int32>
struct Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.ArraySegment`1<System.Byte>>
struct TaskFactory_1_tEE49CB5FD4827D7F7DBF62C9200028C41A403EC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>>
struct Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Text.Json.JsonDocument>
struct Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84;
// System.Text.Json.JsonPropertyInfo[]
struct JsonPropertyInfoU5BU5D_tA4A63CE1364F3F2F11C0154CBD97DABE117B84BC;
// System.Text.Json.ParameterRef[]
struct ParameterRefU5BU5D_t6EE971D7892473F544A0AAB23CEB3CE34AB008C1;
// System.Text.Json.PropertyRef[]
struct PropertyRefU5BU5D_tAFEF91572F5C4DB176E1A2BB28BA5AAB34194DEE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Text.Json.WriteStackFrame[]
struct WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Text.Json.ArgumentState
struct ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6;
// System.Text.Json.JsonClassInfo
struct JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226;
// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740;
// System.Text.Json.JsonDocument
struct JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A;
// System.Text.Json.JsonElement
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6;
// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B;
// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC;
// System.Text.Json.MemberAccessor
struct MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699;
// System.Text.Json.Serialization.ReferenceResolver
struct ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Text.Json.WriteStackFrame
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B;
// System.Text.Json.JsonClassInfo/ConstructorDelegate
struct ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26;
// System.Text.Json.Serialization.ReflectionMemberAccessor/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t26912B7B1AF89C641A0B2396AD9DBEBDDCB99CF0;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral158765DAD906DF36B8505DD381B603F9A0F345A1;
IL2CPP_EXTERN_C String_t* _stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_m87ECB5EF3C7630EB729B587C4397D0B9B2ADF312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m7D803A35CEEC0748CEE0EA52F368409988CA4BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF62F3E9AF3E710E4AE6A8F8F04A2D9C2DAFDF2DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m78B0D7EA1EBE2491BD0407CAAEE13C0C64D1B249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A;;
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com;
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com;;
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke;
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke;;
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32;;
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com;
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com;;
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke;
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke;;
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B;;
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com;
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com;;
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke;
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3  : public RuntimeObject
{
public:
	// T[] System.Buffers.ArrayBufferWriter`1::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_0;
	// System.Int32 System.Buffers.ArrayBufferWriter`1::_index
	int32_t ____index_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3, ____buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_0() const { return ____buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}
};


// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060  : public RuntimeObject
{
public:

public:
};

struct ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_StaticFields
{
public:
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::s_sharedInstance
	ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * ___s_sharedInstance_0;

public:
	inline static int32_t get_offset_of_s_sharedInstance_0() { return static_cast<int32_t>(offsetof(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_StaticFields, ___s_sharedInstance_0)); }
	inline ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * get_s_sharedInstance_0() const { return ___s_sharedInstance_0; }
	inline ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 ** get_address_of_s_sharedInstance_0() { return &___s_sharedInstance_0; }
	inline void set_s_sharedInstance_0(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * value)
	{
		___s_sharedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sharedInstance_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>
struct List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79, ____items_1)); }
	inline WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* get__items_1() const { return ____items_1; }
	inline WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79_StaticFields, ____emptyArray_5)); }
	inline WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Pinnable`1<System.Byte>
struct Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25, ___Data_0)); }
	inline uint8_t get_Data_0() const { return ___Data_0; }
	inline uint8_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(uint8_t value)
	{
		___Data_0 = value;
	}
};


// System.Pinnable`1<System.Int32>
struct Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	int32_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815, ___Data_0)); }
	inline int32_t get_Data_0() const { return ___Data_0; }
	inline int32_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(int32_t value)
	{
		___Data_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740  : public RuntimeObject
{
public:
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<CanUseDirectReadOrWrite>k__BackingField
	bool ___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<CanBePolymorphic>k__BackingField
	bool ___U3CCanBePolymorphicU3Ek__BackingField_1;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<IsValueType>k__BackingField
	bool ___U3CIsValueTypeU3Ek__BackingField_2;
	// System.Reflection.ConstructorInfo System.Text.Json.Serialization.JsonConverter::<ConstructorInfo>k__BackingField
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___U3CConstructorInfoU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCanUseDirectReadOrWriteU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740, ___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0)); }
	inline bool get_U3CCanUseDirectReadOrWriteU3Ek__BackingField_0() const { return ___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCanUseDirectReadOrWriteU3Ek__BackingField_0() { return &___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0; }
	inline void set_U3CCanUseDirectReadOrWriteU3Ek__BackingField_0(bool value)
	{
		___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCanBePolymorphicU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740, ___U3CCanBePolymorphicU3Ek__BackingField_1)); }
	inline bool get_U3CCanBePolymorphicU3Ek__BackingField_1() const { return ___U3CCanBePolymorphicU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCanBePolymorphicU3Ek__BackingField_1() { return &___U3CCanBePolymorphicU3Ek__BackingField_1; }
	inline void set_U3CCanBePolymorphicU3Ek__BackingField_1(bool value)
	{
		___U3CCanBePolymorphicU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsValueTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740, ___U3CIsValueTypeU3Ek__BackingField_2)); }
	inline bool get_U3CIsValueTypeU3Ek__BackingField_2() const { return ___U3CIsValueTypeU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsValueTypeU3Ek__BackingField_2() { return &___U3CIsValueTypeU3Ek__BackingField_2; }
	inline void set_U3CIsValueTypeU3Ek__BackingField_2(bool value)
	{
		___U3CIsValueTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConstructorInfoU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740, ___U3CConstructorInfoU3Ek__BackingField_3)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_U3CConstructorInfoU3Ek__BackingField_3() const { return ___U3CConstructorInfoU3Ek__BackingField_3; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_U3CConstructorInfoU3Ek__BackingField_3() { return &___U3CConstructorInfoU3Ek__BackingField_3; }
	inline void set_U3CConstructorInfoU3Ek__BackingField_3(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___U3CConstructorInfoU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConstructorInfoU3Ek__BackingField_3), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699  : public RuntimeObject
{
public:

public:
};

struct ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699_StaticFields
{
public:
	// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.Serialization.ReferenceHandler::<Preserve>k__BackingField
	ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * ___U3CPreserveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CPreserveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699_StaticFields, ___U3CPreserveU3Ek__BackingField_0)); }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * get_U3CPreserveU3Ek__BackingField_0() const { return ___U3CPreserveU3Ek__BackingField_0; }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 ** get_address_of_U3CPreserveU3Ek__BackingField_0() { return &___U3CPreserveU3Ek__BackingField_0; }
	inline void set_U3CPreserveU3Ek__BackingField_0(ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * value)
	{
		___U3CPreserveU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreserveU3Ek__BackingField_0), (void*)value);
	}
};


// System.Text.Json.Serialization.ReferenceResolver
struct ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Text.Json.Serialization.ReflectionMemberAccessor/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t26912B7B1AF89C641A0B2396AD9DBEBDDCB99CF0  : public RuntimeObject
{
public:
	// System.Type System.Text.Json.Serialization.ReflectionMemberAccessor/<>c__DisplayClass0_0::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t26912B7B1AF89C641A0B2396AD9DBEBDDCB99CF0, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>
struct ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C, ___m_task_0)); }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Memory`1<System.Byte>
struct Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 
{
public:
	// System.Object System.Memory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke_define
#define Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke_define
struct Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com_define
#define Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com_define
struct Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC 
{
public:
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_com_define
#define ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_com_define
struct ReadOnlyMemory_1_tF33A09C369600CF5A4FE0749E9B0F56968D9F354_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ValueTuple`2<System.Int32,System.String>
struct ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F, ___Item2_1)); }
	inline String_t* get_Item2_1() const { return ___Item2_1; }
	inline String_t** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(String_t* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
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

// System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B 
{
public:
	// System.Int32[] System.Text.Json.BitStack::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_2;
	// System.UInt64 System.Text.Json.BitStack::_allocationFreeContainer
	uint64_t ____allocationFreeContainer_3;
	// System.Int32 System.Text.Json.BitStack::_currentDepth
	int32_t ____currentDepth_4;

public:
	inline static int32_t get_offset_of__array_2() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____array_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_2() const { return ____array_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_2() { return &____array_2; }
	inline void set__array_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_2), (void*)value);
	}

	inline static int32_t get_offset_of__allocationFreeContainer_3() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____allocationFreeContainer_3)); }
	inline uint64_t get__allocationFreeContainer_3() const { return ____allocationFreeContainer_3; }
	inline uint64_t* get_address_of__allocationFreeContainer_3() { return &____allocationFreeContainer_3; }
	inline void set__allocationFreeContainer_3(uint64_t value)
	{
		____allocationFreeContainer_3 = value;
	}

	inline static int32_t get_offset_of__currentDepth_4() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____currentDepth_4)); }
	inline int32_t get__currentDepth_4() const { return ____currentDepth_4; }
	inline int32_t* get_address_of__currentDepth_4() { return &____currentDepth_4; }
	inline void set__currentDepth_4(int32_t value)
	{
		____currentDepth_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____array_2;
	uint64_t ____allocationFreeContainer_3;
	int32_t ____currentDepth_4;
};
// Native definition for COM marshalling of System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____array_2;
	uint64_t ____allocationFreeContainer_3;
	int32_t ____currentDepth_4;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Text.Json.JsonElement
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A 
{
public:
	// System.Text.Json.JsonDocument System.Text.Json.JsonElement::_parent
	JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * ____parent_0;
	// System.Int32 System.Text.Json.JsonElement::_idx
	int32_t ____idx_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A, ____parent_0)); }
	inline JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * get__parent_0() const { return ____parent_0; }
	inline JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__idx_1() { return static_cast<int32_t>(offsetof(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A, ____idx_1)); }
	inline int32_t get__idx_1() const { return ____idx_1; }
	inline int32_t* get_address_of__idx_1() { return &____idx_1; }
	inline void set__idx_1(int32_t value)
	{
		____idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke
{
	JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * ____parent_0;
	int32_t ____idx_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement
struct JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com
{
	JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * ____parent_0;
	int32_t ____idx_1;
};

// System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 
{
public:
	// System.Byte[] System.Text.Json.JsonEncodedText::_utf8Value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____utf8Value_0;
	// System.String System.Text.Json.JsonEncodedText::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__utf8Value_0() { return static_cast<int32_t>(offsetof(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867, ____utf8Value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__utf8Value_0() const { return ____utf8Value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__utf8Value_0() { return &____utf8Value_0; }
	inline void set__utf8Value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____utf8Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8Value_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	char* ____value_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	Il2CppChar* ____value_1;
};

// System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 
{
public:
	// System.Int32 System.Text.Json.JsonWriterOptions::_optionsMask
	int32_t ____optionsMask_0;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::<Encoder>k__BackingField
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__optionsMask_0() { return static_cast<int32_t>(offsetof(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867, ____optionsMask_0)); }
	inline int32_t get__optionsMask_0() const { return ____optionsMask_0; }
	inline int32_t* get_address_of__optionsMask_0() { return &____optionsMask_0; }
	inline void set__optionsMask_0(int32_t value)
	{
		____optionsMask_0 = value;
	}

	inline static int32_t get_offset_of_U3CEncoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867, ___U3CEncoderU3Ek__BackingField_1)); }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * get_U3CEncoderU3Ek__BackingField_1() const { return ___U3CEncoderU3Ek__BackingField_1; }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 ** get_address_of_U3CEncoderU3Ek__BackingField_1() { return &___U3CEncoderU3Ek__BackingField_1; }
	inline void set_U3CEncoderU3Ek__BackingField_1(JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * value)
	{
		___U3CEncoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEncoderU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867_marshaled_pinvoke
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867_marshaled_com
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;
};

// System.NUInt
struct NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC 
{
public:
	// System.Void* System.NUInt::_value
	void* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC, ____value_0)); }
	inline void* get__value_0() const { return ____value_0; }
	inline void** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(void* value)
	{
		____value_0 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 
{
public:
	// System.Object System.SequencePosition::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__integer_1() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____integer_1)); }
	inline int32_t get__integer_1() const { return ____integer_1; }
	inline int32_t* get_address_of__integer_1() { return &____integer_1; }
	inline void set__integer_1(int32_t value)
	{
		____integer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tBDFE139E9CD088D6574EC5DCA303D6D0E510B7FB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tBDFE139E9CD088D6574EC5DCA303D6D0E510B7FB__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t9EC3B56206D8BE420211AF8C78D379A65BB699D0 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t9EC3B56206D8BE420211AF8C78D379A65BB699D0__padding[3];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t488ED541F8AF0A3B7EBB2F4BFEA7AF05AB2C5216 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t488ED541F8AF0A3B7EBB2F4BFEA7AF05AB2C5216__padding[36];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_t734610009095902F7BD46BC8DE07E537BA3F5C8D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t734610009095902F7BD46BC8DE07E537BA3F5C8D__padding[5];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tFD9FFF29D0297C78D903D581B64ECDEF04A522EC 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tFD9FFF29D0297C78D903D581B64ECDEF04A522EC__padding[52];
	};

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Text.Json.JsonDocument/DbRow
struct DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB 
{
public:
	// System.Int32 System.Text.Json.JsonDocument/DbRow::_location
	int32_t ____location_1;
	// System.Int32 System.Text.Json.JsonDocument/DbRow::_sizeOrLengthUnion
	int32_t ____sizeOrLengthUnion_2;
	// System.Int32 System.Text.Json.JsonDocument/DbRow::_numberOfRowsAndTypeUnion
	int32_t ____numberOfRowsAndTypeUnion_3;

public:
	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of__sizeOrLengthUnion_2() { return static_cast<int32_t>(offsetof(DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB, ____sizeOrLengthUnion_2)); }
	inline int32_t get__sizeOrLengthUnion_2() const { return ____sizeOrLengthUnion_2; }
	inline int32_t* get_address_of__sizeOrLengthUnion_2() { return &____sizeOrLengthUnion_2; }
	inline void set__sizeOrLengthUnion_2(int32_t value)
	{
		____sizeOrLengthUnion_2 = value;
	}

	inline static int32_t get_offset_of__numberOfRowsAndTypeUnion_3() { return static_cast<int32_t>(offsetof(DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB, ____numberOfRowsAndTypeUnion_3)); }
	inline int32_t get__numberOfRowsAndTypeUnion_3() const { return ____numberOfRowsAndTypeUnion_3; }
	inline int32_t* get_address_of__numberOfRowsAndTypeUnion_3() { return &____numberOfRowsAndTypeUnion_3; }
	inline void set__numberOfRowsAndTypeUnion_3(int32_t value)
	{
		____numberOfRowsAndTypeUnion_3 = value;
	}
};


// System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 
{
public:
	// System.Int32 System.Text.Json.JsonDocument/MetadataDb::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_2;
	// System.Byte[] System.Text.Json.JsonDocument/MetadataDb::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_3;

public:
	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6, ___U3CLengthU3Ek__BackingField_2)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_2() const { return ___U3CLengthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_2() { return &___U3CLengthU3Ek__BackingField_2; }
	inline void set_U3CLengthU3Ek__BackingField_2(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6, ____data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_pinvoke
{
	int32_t ___U3CLengthU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_com
{
	int32_t ___U3CLengthU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};

// System.Text.Json.JsonDocument/StackRow
struct StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 
{
public:
	// System.Int32 System.Text.Json.JsonDocument/StackRow::SizeOrLength
	int32_t ___SizeOrLength_1;
	// System.Int32 System.Text.Json.JsonDocument/StackRow::NumberOfRows
	int32_t ___NumberOfRows_2;

public:
	inline static int32_t get_offset_of_SizeOrLength_1() { return static_cast<int32_t>(offsetof(StackRow_t5925824841945157351ED6E5B4E7D67B21202C36, ___SizeOrLength_1)); }
	inline int32_t get_SizeOrLength_1() const { return ___SizeOrLength_1; }
	inline int32_t* get_address_of_SizeOrLength_1() { return &___SizeOrLength_1; }
	inline void set_SizeOrLength_1(int32_t value)
	{
		___SizeOrLength_1 = value;
	}

	inline static int32_t get_offset_of_NumberOfRows_2() { return static_cast<int32_t>(offsetof(StackRow_t5925824841945157351ED6E5B4E7D67B21202C36, ___NumberOfRows_2)); }
	inline int32_t get_NumberOfRows_2() const { return ___NumberOfRows_2; }
	inline int32_t* get_address_of_NumberOfRows_2() { return &___NumberOfRows_2; }
	inline void set_NumberOfRows_2(int32_t value)
	{
		___NumberOfRows_2 = value;
	}
};


// System.Text.Json.JsonDocument/StackRowStack
struct StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 
{
public:
	// System.Byte[] System.Text.Json.JsonDocument/StackRowStack::_rentedBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____rentedBuffer_0;
	// System.Int32 System.Text.Json.JsonDocument/StackRowStack::_topOfStack
	int32_t ____topOfStack_1;

public:
	inline static int32_t get_offset_of__rentedBuffer_0() { return static_cast<int32_t>(offsetof(StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097, ____rentedBuffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__rentedBuffer_0() const { return ____rentedBuffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__rentedBuffer_0() { return &____rentedBuffer_0; }
	inline void set__rentedBuffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____rentedBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rentedBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of__topOfStack_1() { return static_cast<int32_t>(offsetof(StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097, ____topOfStack_1)); }
	inline int32_t get__topOfStack_1() const { return ____topOfStack_1; }
	inline int32_t* get_address_of__topOfStack_1() { return &____topOfStack_1; }
	inline void set__topOfStack_1(int32_t value)
	{
		____topOfStack_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocument/StackRowStack
struct StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____rentedBuffer_0;
	int32_t ____topOfStack_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocument/StackRowStack
struct StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____rentedBuffer_0;
	int32_t ____topOfStack_1;
};

// System.Text.Json.JsonHelpers/DateTimeParseData
struct DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966 
{
public:
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Year
	int32_t ___Year_0;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Month
	int32_t ___Month_1;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Day
	int32_t ___Day_2;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Hour
	int32_t ___Hour_3;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Minute
	int32_t ___Minute_4;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Second
	int32_t ___Second_5;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::Fraction
	int32_t ___Fraction_6;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::OffsetHours
	int32_t ___OffsetHours_7;
	// System.Int32 System.Text.Json.JsonHelpers/DateTimeParseData::OffsetMinutes
	int32_t ___OffsetMinutes_8;
	// System.Byte System.Text.Json.JsonHelpers/DateTimeParseData::OffsetToken
	uint8_t ___OffsetToken_9;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_Fraction_6() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___Fraction_6)); }
	inline int32_t get_Fraction_6() const { return ___Fraction_6; }
	inline int32_t* get_address_of_Fraction_6() { return &___Fraction_6; }
	inline void set_Fraction_6(int32_t value)
	{
		___Fraction_6 = value;
	}

	inline static int32_t get_offset_of_OffsetHours_7() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___OffsetHours_7)); }
	inline int32_t get_OffsetHours_7() const { return ___OffsetHours_7; }
	inline int32_t* get_address_of_OffsetHours_7() { return &___OffsetHours_7; }
	inline void set_OffsetHours_7(int32_t value)
	{
		___OffsetHours_7 = value;
	}

	inline static int32_t get_offset_of_OffsetMinutes_8() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___OffsetMinutes_8)); }
	inline int32_t get_OffsetMinutes_8() const { return ___OffsetMinutes_8; }
	inline int32_t* get_address_of_OffsetMinutes_8() { return &___OffsetMinutes_8; }
	inline void set_OffsetMinutes_8(int32_t value)
	{
		___OffsetMinutes_8 = value;
	}

	inline static int32_t get_offset_of_OffsetToken_9() { return static_cast<int32_t>(offsetof(DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966, ___OffsetToken_9)); }
	inline uint8_t get_OffsetToken_9() const { return ___OffsetToken_9; }
	inline uint8_t* get_address_of_OffsetToken_9() { return &___OffsetToken_9; }
	inline void set_OffsetToken_9(uint8_t value)
	{
		___OffsetToken_9 = value;
	}
};


// System.Text.Json.JsonSerializerOptions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD2176723E235B86AC7DA9EBEFDA22DF5C03A27EF 
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions/<>c__DisplayClass3_0::converters
	Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * ___converters_0;

public:
	inline static int32_t get_offset_of_converters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD2176723E235B86AC7DA9EBEFDA22DF5C03A27EF, ___converters_0)); }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * get_converters_0() const { return ___converters_0; }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 ** get_address_of_converters_0() { return &___converters_0; }
	inline void set_converters_0(Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * value)
	{
		___converters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converters_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>
struct AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4, ___m_task_2)); }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument>
struct AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB, ___m_task_2)); }
	inline Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t81342C9E8A84367E2B6D98C75BDAA0E0C69C770E * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ArraySegment`1<System.Byte>>
struct ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Nullable`1<System.Text.Json.JsonEncodedText>
struct Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157 
{
public:
	// T System.Nullable`1::value
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157, ___value_0)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_value_0() const { return ___value_0; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SpanHelpers/PerTypeValues`1<System.Byte>
struct PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171  : public RuntimeObject
{
public:

public:
};

struct PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields
{
public:
	// System.Boolean System.SpanHelpers/PerTypeValues`1::IsReferenceOrContainsReferences
	bool ___IsReferenceOrContainsReferences_0;
	// T[] System.SpanHelpers/PerTypeValues`1::EmptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyArray_1;
	// System.IntPtr System.SpanHelpers/PerTypeValues`1::ArrayAdjustment
	intptr_t ___ArrayAdjustment_2;

public:
	inline static int32_t get_offset_of_IsReferenceOrContainsReferences_0() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___IsReferenceOrContainsReferences_0)); }
	inline bool get_IsReferenceOrContainsReferences_0() const { return ___IsReferenceOrContainsReferences_0; }
	inline bool* get_address_of_IsReferenceOrContainsReferences_0() { return &___IsReferenceOrContainsReferences_0; }
	inline void set_IsReferenceOrContainsReferences_0(bool value)
	{
		___IsReferenceOrContainsReferences_0 = value;
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___EmptyArray_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayAdjustment_2() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___ArrayAdjustment_2)); }
	inline intptr_t get_ArrayAdjustment_2() const { return ___ArrayAdjustment_2; }
	inline intptr_t* get_address_of_ArrayAdjustment_2() { return &___ArrayAdjustment_2; }
	inline void set_ArrayAdjustment_2(intptr_t value)
	{
		___ArrayAdjustment_2 = value;
	}
};


// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____pinnable_0)); }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Byte>
struct Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____pinnable_0)); }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Int32>
struct Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E, ____pinnable_0)); }
	inline Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.ClassType
struct ClassType_t3EBCED569B18EAA72261A326389788478A6C6974 
{
public:
	// System.Byte System.Text.Json.ClassType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassType_t3EBCED569B18EAA72261A326389788478A6C6974, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
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

// System.ExceptionArgument
struct ExceptionArgument_t5294CC4B751504BEA66F23B94F8E61EA3A624EC6 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t5294CC4B751504BEA66F23B94F8E61EA3A624EC6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonCommentHandling
struct JsonCommentHandling_t7CF4D6E8699225352765CA2C00FB9D9343563B39 
{
public:
	// System.Byte System.Text.Json.JsonCommentHandling::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonCommentHandling_t7CF4D6E8699225352765CA2C00FB9D9343563B39, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonDocument
struct JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A  : public RuntimeObject
{
public:
	// System.ReadOnlyMemory`1<System.Byte> System.Text.Json.JsonDocument::_utf8Json
	ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ____utf8Json_0;
	// System.Text.Json.JsonDocument/MetadataDb System.Text.Json.JsonDocument::_parsedData
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  ____parsedData_1;
	// System.Byte[] System.Text.Json.JsonDocument::_extraRentedBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____extraRentedBytes_2;
	// System.ValueTuple`2<System.Int32,System.String> System.Text.Json.JsonDocument::_lastIndexAndString
	ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F  ____lastIndexAndString_3;
	// System.Boolean System.Text.Json.JsonDocument::<IsDisposable>k__BackingField
	bool ___U3CIsDisposableU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__utf8Json_0() { return static_cast<int32_t>(offsetof(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A, ____utf8Json_0)); }
	inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  get__utf8Json_0() const { return ____utf8Json_0; }
	inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC * get_address_of__utf8Json_0() { return &____utf8Json_0; }
	inline void set__utf8Json_0(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  value)
	{
		____utf8Json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____utf8Json_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__parsedData_1() { return static_cast<int32_t>(offsetof(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A, ____parsedData_1)); }
	inline MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  get__parsedData_1() const { return ____parsedData_1; }
	inline MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * get_address_of__parsedData_1() { return &____parsedData_1; }
	inline void set__parsedData_1(MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  value)
	{
		____parsedData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____parsedData_1))->____data_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__extraRentedBytes_2() { return static_cast<int32_t>(offsetof(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A, ____extraRentedBytes_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__extraRentedBytes_2() const { return ____extraRentedBytes_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__extraRentedBytes_2() { return &____extraRentedBytes_2; }
	inline void set__extraRentedBytes_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____extraRentedBytes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extraRentedBytes_2), (void*)value);
	}

	inline static int32_t get_offset_of__lastIndexAndString_3() { return static_cast<int32_t>(offsetof(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A, ____lastIndexAndString_3)); }
	inline ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F  get__lastIndexAndString_3() const { return ____lastIndexAndString_3; }
	inline ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F * get_address_of__lastIndexAndString_3() { return &____lastIndexAndString_3; }
	inline void set__lastIndexAndString_3(ValueTuple_2_t1C65704531D1BF77739714AEC12FE375712C593F  value)
	{
		____lastIndexAndString_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____lastIndexAndString_3))->___Item2_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CIsDisposableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A, ___U3CIsDisposableU3Ek__BackingField_4)); }
	inline bool get_U3CIsDisposableU3Ek__BackingField_4() const { return ___U3CIsDisposableU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsDisposableU3Ek__BackingField_4() { return &___U3CIsDisposableU3Ek__BackingField_4; }
	inline void set_U3CIsDisposableU3Ek__BackingField_4(bool value)
	{
		___U3CIsDisposableU3Ek__BackingField_4 = value;
	}
};


// System.Text.Json.Serialization.JsonIgnoreCondition
struct JsonIgnoreCondition_t4FA48C41C374B2CF29A9CEC409994BBCE6090726 
{
public:
	// System.Int32 System.Text.Json.Serialization.JsonIgnoreCondition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonIgnoreCondition_t4FA48C41C374B2CF29A9CEC409994BBCE6090726, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonProperty
struct JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B 
{
public:
	// System.Text.Json.JsonElement System.Text.Json.JsonProperty::<Value>k__BackingField
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___U3CValueU3Ek__BackingField_0;
	// System.String System.Text.Json.JsonProperty::<_name>k__BackingField
	String_t* ___U3C_nameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B, ___U3CValueU3Ek__BackingField_0)); }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CValueU3Ek__BackingField_0))->____parent_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3C_nameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B, ___U3C_nameU3Ek__BackingField_1)); }
	inline String_t* get_U3C_nameU3Ek__BackingField_1() const { return ___U3C_nameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3C_nameU3Ek__BackingField_1() { return &___U3C_nameU3Ek__BackingField_1; }
	inline void set_U3C_nameU3Ek__BackingField_1(String_t* value)
	{
		___U3C_nameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_nameU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonProperty
struct JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B_marshaled_pinvoke
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke ___U3CValueU3Ek__BackingField_0;
	char* ___U3C_nameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonProperty
struct JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B_marshaled_com
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com ___U3CValueU3Ek__BackingField_0;
	Il2CppChar* ___U3C_nameU3Ek__BackingField_1;
};

// System.Text.Json.JsonTokenType
struct JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F 
{
public:
	// System.Byte System.Text.Json.JsonTokenType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.MetadataPropertyName
struct MetadataPropertyName_t0A0E527DDD5ED0694571DE6E608AF1FF9CBE9B6A 
{
public:
	// System.Int32 System.Text.Json.MetadataPropertyName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyName_t0A0E527DDD5ED0694571DE6E608AF1FF9CBE9B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Text.Json.StackFrameObjectState
struct StackFrameObjectState_tC32220B023A965598E785A9AA23DBBBCFC6EC934 
{
public:
	// System.Byte System.Text.Json.StackFrameObjectState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackFrameObjectState_tC32220B023A965598E785A9AA23DBBBCFC6EC934, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.StackFramePropertyState
struct StackFramePropertyState_t8152BC103D8A28A5CD1B6DCBB22B49BA2F5A6B81 
{
public:
	// System.Byte System.Text.Json.StackFramePropertyState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackFramePropertyState_t8152BC103D8A28A5CD1B6DCBB22B49BA2F5A6B81, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// System.HexConverter/Casing
struct Casing_t2C4ECCF70D0E0953E36FD68BEC9E33B4A34DB8AC 
{
public:
	// System.UInt32 System.HexConverter/Casing::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Casing_t2C4ECCF70D0E0953E36FD68BEC9E33B4A34DB8AC, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 
{
public:
	// System.Text.Json.JsonElement System.Text.Json.JsonElement/ArrayEnumerator::_target
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ____target_0;
	// System.Int32 System.Text.Json.JsonElement/ArrayEnumerator::_curIdx
	int32_t ____curIdx_1;
	// System.Int32 System.Text.Json.JsonElement/ArrayEnumerator::_endIdxOrVersion
	int32_t ____endIdxOrVersion_2;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562, ____target_0)); }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  get__target_0() const { return ____target_0; }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____target_0))->____parent_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__curIdx_1() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562, ____curIdx_1)); }
	inline int32_t get__curIdx_1() const { return ____curIdx_1; }
	inline int32_t* get_address_of__curIdx_1() { return &____curIdx_1; }
	inline void set__curIdx_1(int32_t value)
	{
		____curIdx_1 = value;
	}

	inline static int32_t get_offset_of__endIdxOrVersion_2() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562, ____endIdxOrVersion_2)); }
	inline int32_t get__endIdxOrVersion_2() const { return ____endIdxOrVersion_2; }
	inline int32_t* get_address_of__endIdxOrVersion_2() { return &____endIdxOrVersion_2; }
	inline void set__endIdxOrVersion_2(int32_t value)
	{
		____endIdxOrVersion_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_pinvoke
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_com
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};

// System.Text.Json.JsonElement/ObjectEnumerator
struct ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 
{
public:
	// System.Text.Json.JsonElement System.Text.Json.JsonElement/ObjectEnumerator::_target
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ____target_0;
	// System.Int32 System.Text.Json.JsonElement/ObjectEnumerator::_curIdx
	int32_t ____curIdx_1;
	// System.Int32 System.Text.Json.JsonElement/ObjectEnumerator::_endIdxOrVersion
	int32_t ____endIdxOrVersion_2;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7, ____target_0)); }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  get__target_0() const { return ____target_0; }
	inline JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____target_0))->____parent_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__curIdx_1() { return static_cast<int32_t>(offsetof(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7, ____curIdx_1)); }
	inline int32_t get__curIdx_1() const { return ____curIdx_1; }
	inline int32_t* get_address_of__curIdx_1() { return &____curIdx_1; }
	inline void set__curIdx_1(int32_t value)
	{
		____curIdx_1 = value;
	}

	inline static int32_t get_offset_of__endIdxOrVersion_2() { return static_cast<int32_t>(offsetof(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7, ____endIdxOrVersion_2)); }
	inline int32_t get__endIdxOrVersion_2() const { return ____endIdxOrVersion_2; }
	inline int32_t* get_address_of__endIdxOrVersion_2() { return &____endIdxOrVersion_2; }
	inline void set__endIdxOrVersion_2(int32_t value)
	{
		____endIdxOrVersion_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement/ObjectEnumerator
struct ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_pinvoke
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement/ObjectEnumerator
struct ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_com
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};

// System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B 
{
public:
	// System.Int64 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevTotalConsumed
	int64_t ____prevTotalConsumed_0;
	// System.Int64 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevBytePositionInLine
	int64_t ____prevBytePositionInLine_1;
	// System.Int32 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevConsumed
	int32_t ____prevConsumed_2;
	// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevCurrentPosition
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ____prevCurrentPosition_3;

public:
	inline static int32_t get_offset_of__prevTotalConsumed_0() { return static_cast<int32_t>(offsetof(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B, ____prevTotalConsumed_0)); }
	inline int64_t get__prevTotalConsumed_0() const { return ____prevTotalConsumed_0; }
	inline int64_t* get_address_of__prevTotalConsumed_0() { return &____prevTotalConsumed_0; }
	inline void set__prevTotalConsumed_0(int64_t value)
	{
		____prevTotalConsumed_0 = value;
	}

	inline static int32_t get_offset_of__prevBytePositionInLine_1() { return static_cast<int32_t>(offsetof(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B, ____prevBytePositionInLine_1)); }
	inline int64_t get__prevBytePositionInLine_1() const { return ____prevBytePositionInLine_1; }
	inline int64_t* get_address_of__prevBytePositionInLine_1() { return &____prevBytePositionInLine_1; }
	inline void set__prevBytePositionInLine_1(int64_t value)
	{
		____prevBytePositionInLine_1 = value;
	}

	inline static int32_t get_offset_of__prevConsumed_2() { return static_cast<int32_t>(offsetof(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B, ____prevConsumed_2)); }
	inline int32_t get__prevConsumed_2() const { return ____prevConsumed_2; }
	inline int32_t* get_address_of__prevConsumed_2() { return &____prevConsumed_2; }
	inline void set__prevConsumed_2(int32_t value)
	{
		____prevConsumed_2 = value;
	}

	inline static int32_t get_offset_of__prevCurrentPosition_3() { return static_cast<int32_t>(offsetof(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B, ____prevCurrentPosition_3)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get__prevCurrentPosition_3() const { return ____prevCurrentPosition_3; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of__prevCurrentPosition_3() { return &____prevCurrentPosition_3; }
	inline void set__prevCurrentPosition_3(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		____prevCurrentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____prevCurrentPosition_3))->____object_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_pinvoke
{
	int64_t ____prevTotalConsumed_0;
	int64_t ____prevBytePositionInLine_1;
	int32_t ____prevConsumed_2;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke ____prevCurrentPosition_3;
};
// Native definition for COM marshalling of System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_com
{
	int64_t ____prevTotalConsumed_0;
	int64_t ____prevBytePositionInLine_1;
	int32_t ____prevConsumed_2;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com ____prevCurrentPosition_3;
};

// System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>>
struct Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985, ___m_result_40)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_m_result_40() const { return ___m_result_40; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->____array_0), (void*)NULL);
	}
};

struct Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tEE49CB5FD4827D7F7DBF62C9200028C41A403EC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB70DBF72BDE13A60F022FF99C0825B7D33B2CD88 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tEE49CB5FD4827D7F7DBF62C9200028C41A403EC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tEE49CB5FD4827D7F7DBF62C9200028C41A403EC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tEE49CB5FD4827D7F7DBF62C9200028C41A403EC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB70DBF72BDE13A60F022FF99C0825B7D33B2CD88 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB70DBF72BDE13A60F022FF99C0825B7D33B2CD88 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB70DBF72BDE13A60F022FF99C0825B7D33B2CD88 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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

// System.Text.Json.JsonClassInfo
struct JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226  : public RuntimeObject
{
public:
	// System.Text.Json.JsonClassInfo/ConstructorDelegate System.Text.Json.JsonClassInfo::<CreateObject>k__BackingField
	ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * ___U3CCreateObjectU3Ek__BackingField_0;
	// System.Object System.Text.Json.JsonClassInfo::<CreateObjectWithArgs>k__BackingField
	RuntimeObject * ___U3CCreateObjectWithArgsU3Ek__BackingField_1;
	// System.Text.Json.ClassType System.Text.Json.JsonClassInfo::<ClassType>k__BackingField
	uint8_t ___U3CClassTypeU3Ek__BackingField_2;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonClassInfo::<DataExtensionProperty>k__BackingField
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___U3CDataExtensionPropertyU3Ek__BackingField_3;
	// System.Text.Json.JsonClassInfo System.Text.Json.JsonClassInfo::_elementClassInfo
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ____elementClassInfo_4;
	// System.Type System.Text.Json.JsonClassInfo::<ElementType>k__BackingField
	Type_t * ___U3CElementTypeU3Ek__BackingField_5;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonClassInfo::<Options>k__BackingField
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___U3COptionsU3Ek__BackingField_6;
	// System.Type System.Text.Json.JsonClassInfo::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_7;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonClassInfo::<PropertyInfoForClassInfo>k__BackingField
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___U3CPropertyInfoForClassInfoU3Ek__BackingField_8;
	// System.Int32 System.Text.Json.JsonClassInfo::<ParameterCount>k__BackingField
	int32_t ___U3CParameterCountU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Text.Json.JsonParameterInfo> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Json.JsonClassInfo::ParameterCache
	Dictionary_2_t9AED93840D686AA9810D78EBD50ECE7FDCA32C26 * ___ParameterCache_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Text.Json.JsonPropertyInfo> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Json.JsonClassInfo::PropertyCache
	Dictionary_2_t929F87A14E910ABDCC882775D5D2B73E9E243D5D * ___PropertyCache_14;
	// System.Text.Json.JsonPropertyInfo[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Json.JsonClassInfo::PropertyCacheArray
	JsonPropertyInfoU5BU5D_tA4A63CE1364F3F2F11C0154CBD97DABE117B84BC* ___PropertyCacheArray_15;
	// System.Text.Json.ParameterRef[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Json.JsonClassInfo::_parameterRefsSorted
	ParameterRefU5BU5D_t6EE971D7892473F544A0AAB23CEB3CE34AB008C1* ____parameterRefsSorted_16;
	// System.Text.Json.PropertyRef[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Json.JsonClassInfo::_propertyRefsSorted
	PropertyRefU5BU5D_tAFEF91572F5C4DB176E1A2BB28BA5AAB34194DEE* ____propertyRefsSorted_17;

public:
	inline static int32_t get_offset_of_U3CCreateObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CCreateObjectU3Ek__BackingField_0)); }
	inline ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * get_U3CCreateObjectU3Ek__BackingField_0() const { return ___U3CCreateObjectU3Ek__BackingField_0; }
	inline ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 ** get_address_of_U3CCreateObjectU3Ek__BackingField_0() { return &___U3CCreateObjectU3Ek__BackingField_0; }
	inline void set_U3CCreateObjectU3Ek__BackingField_0(ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * value)
	{
		___U3CCreateObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreateObjectU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreateObjectWithArgsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CCreateObjectWithArgsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CCreateObjectWithArgsU3Ek__BackingField_1() const { return ___U3CCreateObjectWithArgsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CCreateObjectWithArgsU3Ek__BackingField_1() { return &___U3CCreateObjectWithArgsU3Ek__BackingField_1; }
	inline void set_U3CCreateObjectWithArgsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CCreateObjectWithArgsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreateObjectWithArgsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClassTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CClassTypeU3Ek__BackingField_2)); }
	inline uint8_t get_U3CClassTypeU3Ek__BackingField_2() const { return ___U3CClassTypeU3Ek__BackingField_2; }
	inline uint8_t* get_address_of_U3CClassTypeU3Ek__BackingField_2() { return &___U3CClassTypeU3Ek__BackingField_2; }
	inline void set_U3CClassTypeU3Ek__BackingField_2(uint8_t value)
	{
		___U3CClassTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDataExtensionPropertyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CDataExtensionPropertyU3Ek__BackingField_3)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_U3CDataExtensionPropertyU3Ek__BackingField_3() const { return ___U3CDataExtensionPropertyU3Ek__BackingField_3; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_U3CDataExtensionPropertyU3Ek__BackingField_3() { return &___U3CDataExtensionPropertyU3Ek__BackingField_3; }
	inline void set_U3CDataExtensionPropertyU3Ek__BackingField_3(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___U3CDataExtensionPropertyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataExtensionPropertyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of__elementClassInfo_4() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ____elementClassInfo_4)); }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * get__elementClassInfo_4() const { return ____elementClassInfo_4; }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 ** get_address_of__elementClassInfo_4() { return &____elementClassInfo_4; }
	inline void set__elementClassInfo_4(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * value)
	{
		____elementClassInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elementClassInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CElementTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CElementTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CElementTypeU3Ek__BackingField_5() const { return ___U3CElementTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CElementTypeU3Ek__BackingField_5() { return &___U3CElementTypeU3Ek__BackingField_5; }
	inline void set_U3CElementTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CElementTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CElementTypeU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3COptionsU3Ek__BackingField_6)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get_U3COptionsU3Ek__BackingField_6() const { return ___U3COptionsU3Ek__BackingField_6; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of_U3COptionsU3Ek__BackingField_6() { return &___U3COptionsU3Ek__BackingField_6; }
	inline void set_U3COptionsU3Ek__BackingField_6(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		___U3COptionsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CTypeU3Ek__BackingField_7)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_7() const { return ___U3CTypeU3Ek__BackingField_7; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_7() { return &___U3CTypeU3Ek__BackingField_7; }
	inline void set_U3CTypeU3Ek__BackingField_7(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyInfoForClassInfoU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CPropertyInfoForClassInfoU3Ek__BackingField_8)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_U3CPropertyInfoForClassInfoU3Ek__BackingField_8() const { return ___U3CPropertyInfoForClassInfoU3Ek__BackingField_8; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_U3CPropertyInfoForClassInfoU3Ek__BackingField_8() { return &___U3CPropertyInfoForClassInfoU3Ek__BackingField_8; }
	inline void set_U3CPropertyInfoForClassInfoU3Ek__BackingField_8(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___U3CPropertyInfoForClassInfoU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyInfoForClassInfoU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParameterCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___U3CParameterCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CParameterCountU3Ek__BackingField_12() const { return ___U3CParameterCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CParameterCountU3Ek__BackingField_12() { return &___U3CParameterCountU3Ek__BackingField_12; }
	inline void set_U3CParameterCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CParameterCountU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_ParameterCache_13() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___ParameterCache_13)); }
	inline Dictionary_2_t9AED93840D686AA9810D78EBD50ECE7FDCA32C26 * get_ParameterCache_13() const { return ___ParameterCache_13; }
	inline Dictionary_2_t9AED93840D686AA9810D78EBD50ECE7FDCA32C26 ** get_address_of_ParameterCache_13() { return &___ParameterCache_13; }
	inline void set_ParameterCache_13(Dictionary_2_t9AED93840D686AA9810D78EBD50ECE7FDCA32C26 * value)
	{
		___ParameterCache_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParameterCache_13), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyCache_14() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___PropertyCache_14)); }
	inline Dictionary_2_t929F87A14E910ABDCC882775D5D2B73E9E243D5D * get_PropertyCache_14() const { return ___PropertyCache_14; }
	inline Dictionary_2_t929F87A14E910ABDCC882775D5D2B73E9E243D5D ** get_address_of_PropertyCache_14() { return &___PropertyCache_14; }
	inline void set_PropertyCache_14(Dictionary_2_t929F87A14E910ABDCC882775D5D2B73E9E243D5D * value)
	{
		___PropertyCache_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyCache_14), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyCacheArray_15() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ___PropertyCacheArray_15)); }
	inline JsonPropertyInfoU5BU5D_tA4A63CE1364F3F2F11C0154CBD97DABE117B84BC* get_PropertyCacheArray_15() const { return ___PropertyCacheArray_15; }
	inline JsonPropertyInfoU5BU5D_tA4A63CE1364F3F2F11C0154CBD97DABE117B84BC** get_address_of_PropertyCacheArray_15() { return &___PropertyCacheArray_15; }
	inline void set_PropertyCacheArray_15(JsonPropertyInfoU5BU5D_tA4A63CE1364F3F2F11C0154CBD97DABE117B84BC* value)
	{
		___PropertyCacheArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyCacheArray_15), (void*)value);
	}

	inline static int32_t get_offset_of__parameterRefsSorted_16() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ____parameterRefsSorted_16)); }
	inline ParameterRefU5BU5D_t6EE971D7892473F544A0AAB23CEB3CE34AB008C1* get__parameterRefsSorted_16() const { return ____parameterRefsSorted_16; }
	inline ParameterRefU5BU5D_t6EE971D7892473F544A0AAB23CEB3CE34AB008C1** get_address_of__parameterRefsSorted_16() { return &____parameterRefsSorted_16; }
	inline void set__parameterRefsSorted_16(ParameterRefU5BU5D_t6EE971D7892473F544A0AAB23CEB3CE34AB008C1* value)
	{
		____parameterRefsSorted_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterRefsSorted_16), (void*)value);
	}

	inline static int32_t get_offset_of__propertyRefsSorted_17() { return static_cast<int32_t>(offsetof(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226, ____propertyRefsSorted_17)); }
	inline PropertyRefU5BU5D_tAFEF91572F5C4DB176E1A2BB28BA5AAB34194DEE* get__propertyRefsSorted_17() const { return ____propertyRefsSorted_17; }
	inline PropertyRefU5BU5D_tAFEF91572F5C4DB176E1A2BB28BA5AAB34194DEE** get_address_of__propertyRefsSorted_17() { return &____propertyRefsSorted_17; }
	inline void set__propertyRefsSorted_17(PropertyRefU5BU5D_tAFEF91572F5C4DB176E1A2BB28BA5AAB34194DEE* value)
	{
		____propertyRefsSorted_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyRefsSorted_17), (void*)value);
	}
};


// System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB 
{
public:
	// System.Int32 System.Text.Json.JsonDocumentOptions::_maxDepth
	int32_t ____maxDepth_1;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonDocumentOptions::_commentHandling
	uint8_t ____commentHandling_2;
	// System.Boolean System.Text.Json.JsonDocumentOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__maxDepth_1() { return static_cast<int32_t>(offsetof(JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB, ____maxDepth_1)); }
	inline int32_t get__maxDepth_1() const { return ____maxDepth_1; }
	inline int32_t* get_address_of__maxDepth_1() { return &____maxDepth_1; }
	inline void set__maxDepth_1(int32_t value)
	{
		____maxDepth_1 = value;
	}

	inline static int32_t get_offset_of__commentHandling_2() { return static_cast<int32_t>(offsetof(JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB, ____commentHandling_2)); }
	inline uint8_t get__commentHandling_2() const { return ____commentHandling_2; }
	inline uint8_t* get_address_of__commentHandling_2() { return &____commentHandling_2; }
	inline void set__commentHandling_2(uint8_t value)
	{
		____commentHandling_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB, ___U3CAllowTrailingCommasU3Ek__BackingField_3)); }
	inline bool get_U3CAllowTrailingCommasU3Ek__BackingField_3() const { return ___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return &___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline void set_U3CAllowTrailingCommasU3Ek__BackingField_3(bool value)
	{
		___U3CAllowTrailingCommasU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB_marshaled_pinvoke
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB_marshaled_com
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
};

// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B  : public RuntimeObject
{
public:
	// System.Text.Json.JsonClassInfo System.Text.Json.JsonPropertyInfo::_runtimeClassInfo
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ____runtimeClassInfo_1;
	// System.Text.Json.ClassType System.Text.Json.JsonPropertyInfo::ClassType
	uint8_t ___ClassType_2;
	// System.Type System.Text.Json.JsonPropertyInfo::<DeclaredPropertyType>k__BackingField
	Type_t * ___U3CDeclaredPropertyTypeU3Ek__BackingField_3;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<HasGetter>k__BackingField
	bool ___U3CHasGetterU3Ek__BackingField_4;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<HasSetter>k__BackingField
	bool ___U3CHasSetterU3Ek__BackingField_5;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IgnoreDefaultValuesOnRead>k__BackingField
	bool ___U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IgnoreDefaultValuesOnWrite>k__BackingField
	bool ___U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IsPropertyPolicy>k__BackingField
	bool ___U3CIsPropertyPolicyU3Ek__BackingField_8;
	// System.String System.Text.Json.JsonPropertyInfo::<NameAsString>k__BackingField
	String_t* ___U3CNameAsStringU3Ek__BackingField_9;
	// System.Byte[] System.Text.Json.JsonPropertyInfo::<NameAsUtf8Bytes>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CNameAsUtf8BytesU3Ek__BackingField_10;
	// System.Nullable`1<System.Text.Json.JsonEncodedText> System.Text.Json.JsonPropertyInfo::EscapedName
	Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157  ___EscapedName_11;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonPropertyInfo::<Options>k__BackingField
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___U3COptionsU3Ek__BackingField_12;
	// System.Type System.Text.Json.JsonPropertyInfo::<ParentClassType>k__BackingField
	Type_t * ___U3CParentClassTypeU3Ek__BackingField_13;
	// System.Reflection.PropertyInfo System.Text.Json.JsonPropertyInfo::<PropertyInfo>k__BackingField
	PropertyInfo_t * ___U3CPropertyInfoU3Ek__BackingField_14;
	// System.Type System.Text.Json.JsonPropertyInfo::<RuntimePropertyType>k__BackingField
	Type_t * ___U3CRuntimePropertyTypeU3Ek__BackingField_15;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldSerialize>k__BackingField
	bool ___U3CShouldSerializeU3Ek__BackingField_16;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldDeserialize>k__BackingField
	bool ___U3CShouldDeserializeU3Ek__BackingField_17;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IsIgnored>k__BackingField
	bool ___U3CIsIgnoredU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of__runtimeClassInfo_1() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ____runtimeClassInfo_1)); }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * get__runtimeClassInfo_1() const { return ____runtimeClassInfo_1; }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 ** get_address_of__runtimeClassInfo_1() { return &____runtimeClassInfo_1; }
	inline void set__runtimeClassInfo_1(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * value)
	{
		____runtimeClassInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeClassInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_ClassType_2() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___ClassType_2)); }
	inline uint8_t get_ClassType_2() const { return ___ClassType_2; }
	inline uint8_t* get_address_of_ClassType_2() { return &___ClassType_2; }
	inline void set_ClassType_2(uint8_t value)
	{
		___ClassType_2 = value;
	}

	inline static int32_t get_offset_of_U3CDeclaredPropertyTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CDeclaredPropertyTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CDeclaredPropertyTypeU3Ek__BackingField_3() const { return ___U3CDeclaredPropertyTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CDeclaredPropertyTypeU3Ek__BackingField_3() { return &___U3CDeclaredPropertyTypeU3Ek__BackingField_3; }
	inline void set_U3CDeclaredPropertyTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CDeclaredPropertyTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaredPropertyTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasGetterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CHasGetterU3Ek__BackingField_4)); }
	inline bool get_U3CHasGetterU3Ek__BackingField_4() const { return ___U3CHasGetterU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasGetterU3Ek__BackingField_4() { return &___U3CHasGetterU3Ek__BackingField_4; }
	inline void set_U3CHasGetterU3Ek__BackingField_4(bool value)
	{
		___U3CHasGetterU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CHasSetterU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CHasSetterU3Ek__BackingField_5)); }
	inline bool get_U3CHasSetterU3Ek__BackingField_5() const { return ___U3CHasSetterU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHasSetterU3Ek__BackingField_5() { return &___U3CHasSetterU3Ek__BackingField_5; }
	inline void set_U3CHasSetterU3Ek__BackingField_5(bool value)
	{
		___U3CHasSetterU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6)); }
	inline bool get_U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6() const { return ___U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6() { return &___U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6; }
	inline void set_U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6(bool value)
	{
		___U3CIgnoreDefaultValuesOnReadU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7)); }
	inline bool get_U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7() const { return ___U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7() { return &___U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7; }
	inline void set_U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7(bool value)
	{
		___U3CIgnoreDefaultValuesOnWriteU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPropertyPolicyU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CIsPropertyPolicyU3Ek__BackingField_8)); }
	inline bool get_U3CIsPropertyPolicyU3Ek__BackingField_8() const { return ___U3CIsPropertyPolicyU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPropertyPolicyU3Ek__BackingField_8() { return &___U3CIsPropertyPolicyU3Ek__BackingField_8; }
	inline void set_U3CIsPropertyPolicyU3Ek__BackingField_8(bool value)
	{
		___U3CIsPropertyPolicyU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CNameAsStringU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CNameAsStringU3Ek__BackingField_9)); }
	inline String_t* get_U3CNameAsStringU3Ek__BackingField_9() const { return ___U3CNameAsStringU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CNameAsStringU3Ek__BackingField_9() { return &___U3CNameAsStringU3Ek__BackingField_9; }
	inline void set_U3CNameAsStringU3Ek__BackingField_9(String_t* value)
	{
		___U3CNameAsStringU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameAsStringU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameAsUtf8BytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CNameAsUtf8BytesU3Ek__BackingField_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CNameAsUtf8BytesU3Ek__BackingField_10() const { return ___U3CNameAsUtf8BytesU3Ek__BackingField_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CNameAsUtf8BytesU3Ek__BackingField_10() { return &___U3CNameAsUtf8BytesU3Ek__BackingField_10; }
	inline void set_U3CNameAsUtf8BytesU3Ek__BackingField_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CNameAsUtf8BytesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameAsUtf8BytesU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_EscapedName_11() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___EscapedName_11)); }
	inline Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157  get_EscapedName_11() const { return ___EscapedName_11; }
	inline Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157 * get_address_of_EscapedName_11() { return &___EscapedName_11; }
	inline void set_EscapedName_11(Nullable_1_tB28E64BF0B277925726D991D29A8989CBE1E5157  value)
	{
		___EscapedName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___EscapedName_11))->___value_0))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___EscapedName_11))->___value_0))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3COptionsU3Ek__BackingField_12)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get_U3COptionsU3Ek__BackingField_12() const { return ___U3COptionsU3Ek__BackingField_12; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of_U3COptionsU3Ek__BackingField_12() { return &___U3COptionsU3Ek__BackingField_12; }
	inline void set_U3COptionsU3Ek__BackingField_12(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		___U3COptionsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParentClassTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CParentClassTypeU3Ek__BackingField_13)); }
	inline Type_t * get_U3CParentClassTypeU3Ek__BackingField_13() const { return ___U3CParentClassTypeU3Ek__BackingField_13; }
	inline Type_t ** get_address_of_U3CParentClassTypeU3Ek__BackingField_13() { return &___U3CParentClassTypeU3Ek__BackingField_13; }
	inline void set_U3CParentClassTypeU3Ek__BackingField_13(Type_t * value)
	{
		___U3CParentClassTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentClassTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyInfoU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CPropertyInfoU3Ek__BackingField_14)); }
	inline PropertyInfo_t * get_U3CPropertyInfoU3Ek__BackingField_14() const { return ___U3CPropertyInfoU3Ek__BackingField_14; }
	inline PropertyInfo_t ** get_address_of_U3CPropertyInfoU3Ek__BackingField_14() { return &___U3CPropertyInfoU3Ek__BackingField_14; }
	inline void set_U3CPropertyInfoU3Ek__BackingField_14(PropertyInfo_t * value)
	{
		___U3CPropertyInfoU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyInfoU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRuntimePropertyTypeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CRuntimePropertyTypeU3Ek__BackingField_15)); }
	inline Type_t * get_U3CRuntimePropertyTypeU3Ek__BackingField_15() const { return ___U3CRuntimePropertyTypeU3Ek__BackingField_15; }
	inline Type_t ** get_address_of_U3CRuntimePropertyTypeU3Ek__BackingField_15() { return &___U3CRuntimePropertyTypeU3Ek__BackingField_15; }
	inline void set_U3CRuntimePropertyTypeU3Ek__BackingField_15(Type_t * value)
	{
		___U3CRuntimePropertyTypeU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRuntimePropertyTypeU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CShouldSerializeU3Ek__BackingField_16)); }
	inline bool get_U3CShouldSerializeU3Ek__BackingField_16() const { return ___U3CShouldSerializeU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CShouldSerializeU3Ek__BackingField_16() { return &___U3CShouldSerializeU3Ek__BackingField_16; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_16(bool value)
	{
		___U3CShouldSerializeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CShouldDeserializeU3Ek__BackingField_17)); }
	inline bool get_U3CShouldDeserializeU3Ek__BackingField_17() const { return ___U3CShouldDeserializeU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CShouldDeserializeU3Ek__BackingField_17() { return &___U3CShouldDeserializeU3Ek__BackingField_17; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_17(bool value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsIgnoredU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B, ___U3CIsIgnoredU3Ek__BackingField_18)); }
	inline bool get_U3CIsIgnoredU3Ek__BackingField_18() const { return ___U3CIsIgnoredU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsIgnoredU3Ek__BackingField_18() { return &___U3CIsIgnoredU3Ek__BackingField_18; }
	inline void set_U3CIsIgnoredU3Ek__BackingField_18(bool value)
	{
		___U3CIsIgnoredU3Ek__BackingField_18 = value;
	}
};

struct JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B_StaticFields
{
public:
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::s_missingProperty
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___s_missingProperty_0;

public:
	inline static int32_t get_offset_of_s_missingProperty_0() { return static_cast<int32_t>(offsetof(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B_StaticFields, ___s_missingProperty_0)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_s_missingProperty_0() const { return ___s_missingProperty_0; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_s_missingProperty_0() { return &___s_missingProperty_0; }
	inline void set_s_missingProperty_0(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___s_missingProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_missingProperty_0), (void*)value);
	}
};


// System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746 
{
public:
	// System.Int32 System.Text.Json.JsonReaderOptions::_maxDepth
	int32_t ____maxDepth_1;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonReaderOptions::_commentHandling
	uint8_t ____commentHandling_2;
	// System.Boolean System.Text.Json.JsonReaderOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__maxDepth_1() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ____maxDepth_1)); }
	inline int32_t get__maxDepth_1() const { return ____maxDepth_1; }
	inline int32_t* get_address_of__maxDepth_1() { return &____maxDepth_1; }
	inline void set__maxDepth_1(int32_t value)
	{
		____maxDepth_1 = value;
	}

	inline static int32_t get_offset_of__commentHandling_2() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ____commentHandling_2)); }
	inline uint8_t get__commentHandling_2() const { return ____commentHandling_2; }
	inline uint8_t* get_address_of__commentHandling_2() { return &____commentHandling_2; }
	inline void set__commentHandling_2(uint8_t value)
	{
		____commentHandling_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ___U3CAllowTrailingCommasU3Ek__BackingField_3)); }
	inline bool get_U3CAllowTrailingCommasU3Ek__BackingField_3() const { return ___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return &___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline void set_U3CAllowTrailingCommasU3Ek__BackingField_3(bool value)
	{
		___U3CAllowTrailingCommasU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_pinvoke
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
};
// Native definition for COM marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_com
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
};

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::_converters
	ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * ____converters_2;
	// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo> System.Text.Json.JsonSerializerOptions::_classes
	ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * ____classes_6;
	// System.Text.Json.MemberAccessor System.Text.Json.JsonSerializerOptions::_memberAccessorStrategy
	MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * ____memberAccessorStrategy_7;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_dictionaryKeyPolicy
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ____dictionaryKeyPolicy_8;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_jsonPropertyNamingPolicy
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ____jsonPropertyNamingPolicy_9;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonSerializerOptions::_readCommentHandling
	uint8_t ____readCommentHandling_10;
	// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.JsonSerializerOptions::_referenceHandler
	ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * ____referenceHandler_11;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonSerializerOptions::_encoder
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ____encoder_12;
	// System.Text.Json.Serialization.JsonIgnoreCondition System.Text.Json.JsonSerializerOptions::_defaultIgnoreCondition
	int32_t ____defaultIgnoreCondition_13;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_defaultBufferSize
	int32_t ____defaultBufferSize_14;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_maxDepth
	int32_t ____maxDepth_15;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_allowTrailingCommas
	bool ____allowTrailingCommas_16;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_haveTypesBeenCreated
	bool ____haveTypesBeenCreated_17;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreNullValues
	bool ____ignoreNullValues_18;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadOnlyProperties
	bool ____ignoreReadOnlyProperties_19;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_propertyNameCaseInsensitive
	bool ____propertyNameCaseInsensitive_20;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_writeIndented
	bool ____writeIndented_21;
	// System.Int32 System.Text.Json.JsonSerializerOptions::<EffectiveMaxDepth>k__BackingField
	int32_t ___U3CEffectiveMaxDepthU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of__converters_2() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____converters_2)); }
	inline ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * get__converters_2() const { return ____converters_2; }
	inline ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 ** get_address_of__converters_2() { return &____converters_2; }
	inline void set__converters_2(ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * value)
	{
		____converters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ___U3CConvertersU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_3() const { return ___U3CConvertersU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_3() { return &___U3CConvertersU3Ek__BackingField_3; }
	inline void set_U3CConvertersU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of__classes_6() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____classes_6)); }
	inline ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * get__classes_6() const { return ____classes_6; }
	inline ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 ** get_address_of__classes_6() { return &____classes_6; }
	inline void set__classes_6(ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * value)
	{
		____classes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____classes_6), (void*)value);
	}

	inline static int32_t get_offset_of__memberAccessorStrategy_7() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____memberAccessorStrategy_7)); }
	inline MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * get__memberAccessorStrategy_7() const { return ____memberAccessorStrategy_7; }
	inline MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 ** get_address_of__memberAccessorStrategy_7() { return &____memberAccessorStrategy_7; }
	inline void set__memberAccessorStrategy_7(MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * value)
	{
		____memberAccessorStrategy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberAccessorStrategy_7), (void*)value);
	}

	inline static int32_t get_offset_of__dictionaryKeyPolicy_8() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____dictionaryKeyPolicy_8)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get__dictionaryKeyPolicy_8() const { return ____dictionaryKeyPolicy_8; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of__dictionaryKeyPolicy_8() { return &____dictionaryKeyPolicy_8; }
	inline void set__dictionaryKeyPolicy_8(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		____dictionaryKeyPolicy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionaryKeyPolicy_8), (void*)value);
	}

	inline static int32_t get_offset_of__jsonPropertyNamingPolicy_9() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____jsonPropertyNamingPolicy_9)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get__jsonPropertyNamingPolicy_9() const { return ____jsonPropertyNamingPolicy_9; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of__jsonPropertyNamingPolicy_9() { return &____jsonPropertyNamingPolicy_9; }
	inline void set__jsonPropertyNamingPolicy_9(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		____jsonPropertyNamingPolicy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jsonPropertyNamingPolicy_9), (void*)value);
	}

	inline static int32_t get_offset_of__readCommentHandling_10() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____readCommentHandling_10)); }
	inline uint8_t get__readCommentHandling_10() const { return ____readCommentHandling_10; }
	inline uint8_t* get_address_of__readCommentHandling_10() { return &____readCommentHandling_10; }
	inline void set__readCommentHandling_10(uint8_t value)
	{
		____readCommentHandling_10 = value;
	}

	inline static int32_t get_offset_of__referenceHandler_11() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____referenceHandler_11)); }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * get__referenceHandler_11() const { return ____referenceHandler_11; }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 ** get_address_of__referenceHandler_11() { return &____referenceHandler_11; }
	inline void set__referenceHandler_11(ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * value)
	{
		____referenceHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_12() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____encoder_12)); }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * get__encoder_12() const { return ____encoder_12; }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 ** get_address_of__encoder_12() { return &____encoder_12; }
	inline void set__encoder_12(JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * value)
	{
		____encoder_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_12), (void*)value);
	}

	inline static int32_t get_offset_of__defaultIgnoreCondition_13() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____defaultIgnoreCondition_13)); }
	inline int32_t get__defaultIgnoreCondition_13() const { return ____defaultIgnoreCondition_13; }
	inline int32_t* get_address_of__defaultIgnoreCondition_13() { return &____defaultIgnoreCondition_13; }
	inline void set__defaultIgnoreCondition_13(int32_t value)
	{
		____defaultIgnoreCondition_13 = value;
	}

	inline static int32_t get_offset_of__defaultBufferSize_14() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____defaultBufferSize_14)); }
	inline int32_t get__defaultBufferSize_14() const { return ____defaultBufferSize_14; }
	inline int32_t* get_address_of__defaultBufferSize_14() { return &____defaultBufferSize_14; }
	inline void set__defaultBufferSize_14(int32_t value)
	{
		____defaultBufferSize_14 = value;
	}

	inline static int32_t get_offset_of__maxDepth_15() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____maxDepth_15)); }
	inline int32_t get__maxDepth_15() const { return ____maxDepth_15; }
	inline int32_t* get_address_of__maxDepth_15() { return &____maxDepth_15; }
	inline void set__maxDepth_15(int32_t value)
	{
		____maxDepth_15 = value;
	}

	inline static int32_t get_offset_of__allowTrailingCommas_16() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____allowTrailingCommas_16)); }
	inline bool get__allowTrailingCommas_16() const { return ____allowTrailingCommas_16; }
	inline bool* get_address_of__allowTrailingCommas_16() { return &____allowTrailingCommas_16; }
	inline void set__allowTrailingCommas_16(bool value)
	{
		____allowTrailingCommas_16 = value;
	}

	inline static int32_t get_offset_of__haveTypesBeenCreated_17() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____haveTypesBeenCreated_17)); }
	inline bool get__haveTypesBeenCreated_17() const { return ____haveTypesBeenCreated_17; }
	inline bool* get_address_of__haveTypesBeenCreated_17() { return &____haveTypesBeenCreated_17; }
	inline void set__haveTypesBeenCreated_17(bool value)
	{
		____haveTypesBeenCreated_17 = value;
	}

	inline static int32_t get_offset_of__ignoreNullValues_18() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____ignoreNullValues_18)); }
	inline bool get__ignoreNullValues_18() const { return ____ignoreNullValues_18; }
	inline bool* get_address_of__ignoreNullValues_18() { return &____ignoreNullValues_18; }
	inline void set__ignoreNullValues_18(bool value)
	{
		____ignoreNullValues_18 = value;
	}

	inline static int32_t get_offset_of__ignoreReadOnlyProperties_19() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____ignoreReadOnlyProperties_19)); }
	inline bool get__ignoreReadOnlyProperties_19() const { return ____ignoreReadOnlyProperties_19; }
	inline bool* get_address_of__ignoreReadOnlyProperties_19() { return &____ignoreReadOnlyProperties_19; }
	inline void set__ignoreReadOnlyProperties_19(bool value)
	{
		____ignoreReadOnlyProperties_19 = value;
	}

	inline static int32_t get_offset_of__propertyNameCaseInsensitive_20() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____propertyNameCaseInsensitive_20)); }
	inline bool get__propertyNameCaseInsensitive_20() const { return ____propertyNameCaseInsensitive_20; }
	inline bool* get_address_of__propertyNameCaseInsensitive_20() { return &____propertyNameCaseInsensitive_20; }
	inline void set__propertyNameCaseInsensitive_20(bool value)
	{
		____propertyNameCaseInsensitive_20 = value;
	}

	inline static int32_t get_offset_of__writeIndented_21() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____writeIndented_21)); }
	inline bool get__writeIndented_21() const { return ____writeIndented_21; }
	inline bool* get_address_of__writeIndented_21() { return &____writeIndented_21; }
	inline void set__writeIndented_21(bool value)
	{
		____writeIndented_21 = value;
	}

	inline static int32_t get_offset_of_U3CEffectiveMaxDepthU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ___U3CEffectiveMaxDepthU3Ek__BackingField_22)); }
	inline int32_t get_U3CEffectiveMaxDepthU3Ek__BackingField_22() const { return ___U3CEffectiveMaxDepthU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CEffectiveMaxDepthU3Ek__BackingField_22() { return &___U3CEffectiveMaxDepthU3Ek__BackingField_22; }
	inline void set_U3CEffectiveMaxDepthU3Ek__BackingField_22(int32_t value)
	{
		___U3CEffectiveMaxDepthU3Ek__BackingField_22 = value;
	}
};

struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultSimpleConverters
	Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * ___s_defaultSimpleConverters_0;
	// System.Text.Json.Serialization.JsonConverter[] System.Text.Json.JsonSerializerOptions::s_defaultFactoryConverters
	JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* ___s_defaultFactoryConverters_1;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonSerializerOptions::s_defaultOptions
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___s_defaultOptions_5;

public:
	inline static int32_t get_offset_of_s_defaultSimpleConverters_0() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultSimpleConverters_0)); }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * get_s_defaultSimpleConverters_0() const { return ___s_defaultSimpleConverters_0; }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 ** get_address_of_s_defaultSimpleConverters_0() { return &___s_defaultSimpleConverters_0; }
	inline void set_s_defaultSimpleConverters_0(Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * value)
	{
		___s_defaultSimpleConverters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultSimpleConverters_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultFactoryConverters_1() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultFactoryConverters_1)); }
	inline JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* get_s_defaultFactoryConverters_1() const { return ___s_defaultFactoryConverters_1; }
	inline JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84** get_address_of_s_defaultFactoryConverters_1() { return &___s_defaultFactoryConverters_1; }
	inline void set_s_defaultFactoryConverters_1(JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* value)
	{
		___s_defaultFactoryConverters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultFactoryConverters_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultOptions_5() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultOptions_5)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get_s_defaultOptions_5() const { return ___s_defaultOptions_5; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of_s_defaultOptions_5() { return &___s_defaultOptions_5; }
	inline void set_s_defaultOptions_5(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		___s_defaultOptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultOptions_5), (void*)value);
	}
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

// System.Text.Json.ReadStackFrame
struct ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3 
{
public:
	// System.Text.Json.JsonPropertyInfo System.Text.Json.ReadStackFrame::JsonPropertyInfo
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___JsonPropertyInfo_0;
	// System.Text.Json.StackFramePropertyState System.Text.Json.ReadStackFrame::PropertyState
	uint8_t ___PropertyState_1;
	// System.Boolean System.Text.Json.ReadStackFrame::UseExtensionProperty
	bool ___UseExtensionProperty_2;
	// System.Byte[] System.Text.Json.ReadStackFrame::JsonPropertyName
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___JsonPropertyName_3;
	// System.String System.Text.Json.ReadStackFrame::JsonPropertyNameAsString
	String_t* ___JsonPropertyNameAsString_4;
	// System.Int32 System.Text.Json.ReadStackFrame::OriginalDepth
	int32_t ___OriginalDepth_5;
	// System.Text.Json.JsonTokenType System.Text.Json.ReadStackFrame::OriginalTokenType
	uint8_t ___OriginalTokenType_6;
	// System.Object System.Text.Json.ReadStackFrame::ReturnValue
	RuntimeObject * ___ReturnValue_7;
	// System.Text.Json.JsonClassInfo System.Text.Json.ReadStackFrame::JsonClassInfo
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_8;
	// System.Text.Json.StackFrameObjectState System.Text.Json.ReadStackFrame::ObjectState
	uint8_t ___ObjectState_9;
	// System.String System.Text.Json.ReadStackFrame::MetadataId
	String_t* ___MetadataId_10;
	// System.Int32 System.Text.Json.ReadStackFrame::PropertyIndex
	int32_t ___PropertyIndex_11;
	// System.Collections.Generic.List`1<System.Text.Json.PropertyRef> System.Text.Json.ReadStackFrame::PropertyRefCache
	List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 * ___PropertyRefCache_12;
	// System.Object System.Text.Json.ReadStackFrame::AddMethodDelegate
	RuntimeObject * ___AddMethodDelegate_13;
	// System.Int32 System.Text.Json.ReadStackFrame::CtorArgumentStateIndex
	int32_t ___CtorArgumentStateIndex_14;
	// System.Text.Json.ArgumentState System.Text.Json.ReadStackFrame::CtorArgumentState
	ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 * ___CtorArgumentState_15;

public:
	inline static int32_t get_offset_of_JsonPropertyInfo_0() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___JsonPropertyInfo_0)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_JsonPropertyInfo_0() const { return ___JsonPropertyInfo_0; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_JsonPropertyInfo_0() { return &___JsonPropertyInfo_0; }
	inline void set_JsonPropertyInfo_0(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___JsonPropertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonPropertyInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyState_1() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___PropertyState_1)); }
	inline uint8_t get_PropertyState_1() const { return ___PropertyState_1; }
	inline uint8_t* get_address_of_PropertyState_1() { return &___PropertyState_1; }
	inline void set_PropertyState_1(uint8_t value)
	{
		___PropertyState_1 = value;
	}

	inline static int32_t get_offset_of_UseExtensionProperty_2() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___UseExtensionProperty_2)); }
	inline bool get_UseExtensionProperty_2() const { return ___UseExtensionProperty_2; }
	inline bool* get_address_of_UseExtensionProperty_2() { return &___UseExtensionProperty_2; }
	inline void set_UseExtensionProperty_2(bool value)
	{
		___UseExtensionProperty_2 = value;
	}

	inline static int32_t get_offset_of_JsonPropertyName_3() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___JsonPropertyName_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_JsonPropertyName_3() const { return ___JsonPropertyName_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_JsonPropertyName_3() { return &___JsonPropertyName_3; }
	inline void set_JsonPropertyName_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___JsonPropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonPropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_JsonPropertyNameAsString_4() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___JsonPropertyNameAsString_4)); }
	inline String_t* get_JsonPropertyNameAsString_4() const { return ___JsonPropertyNameAsString_4; }
	inline String_t** get_address_of_JsonPropertyNameAsString_4() { return &___JsonPropertyNameAsString_4; }
	inline void set_JsonPropertyNameAsString_4(String_t* value)
	{
		___JsonPropertyNameAsString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonPropertyNameAsString_4), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalDepth_5() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___OriginalDepth_5)); }
	inline int32_t get_OriginalDepth_5() const { return ___OriginalDepth_5; }
	inline int32_t* get_address_of_OriginalDepth_5() { return &___OriginalDepth_5; }
	inline void set_OriginalDepth_5(int32_t value)
	{
		___OriginalDepth_5 = value;
	}

	inline static int32_t get_offset_of_OriginalTokenType_6() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___OriginalTokenType_6)); }
	inline uint8_t get_OriginalTokenType_6() const { return ___OriginalTokenType_6; }
	inline uint8_t* get_address_of_OriginalTokenType_6() { return &___OriginalTokenType_6; }
	inline void set_OriginalTokenType_6(uint8_t value)
	{
		___OriginalTokenType_6 = value;
	}

	inline static int32_t get_offset_of_ReturnValue_7() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___ReturnValue_7)); }
	inline RuntimeObject * get_ReturnValue_7() const { return ___ReturnValue_7; }
	inline RuntimeObject ** get_address_of_ReturnValue_7() { return &___ReturnValue_7; }
	inline void set_ReturnValue_7(RuntimeObject * value)
	{
		___ReturnValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReturnValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_JsonClassInfo_8() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___JsonClassInfo_8)); }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * get_JsonClassInfo_8() const { return ___JsonClassInfo_8; }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 ** get_address_of_JsonClassInfo_8() { return &___JsonClassInfo_8; }
	inline void set_JsonClassInfo_8(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * value)
	{
		___JsonClassInfo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonClassInfo_8), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectState_9() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___ObjectState_9)); }
	inline uint8_t get_ObjectState_9() const { return ___ObjectState_9; }
	inline uint8_t* get_address_of_ObjectState_9() { return &___ObjectState_9; }
	inline void set_ObjectState_9(uint8_t value)
	{
		___ObjectState_9 = value;
	}

	inline static int32_t get_offset_of_MetadataId_10() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___MetadataId_10)); }
	inline String_t* get_MetadataId_10() const { return ___MetadataId_10; }
	inline String_t** get_address_of_MetadataId_10() { return &___MetadataId_10; }
	inline void set_MetadataId_10(String_t* value)
	{
		___MetadataId_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetadataId_10), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyIndex_11() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___PropertyIndex_11)); }
	inline int32_t get_PropertyIndex_11() const { return ___PropertyIndex_11; }
	inline int32_t* get_address_of_PropertyIndex_11() { return &___PropertyIndex_11; }
	inline void set_PropertyIndex_11(int32_t value)
	{
		___PropertyIndex_11 = value;
	}

	inline static int32_t get_offset_of_PropertyRefCache_12() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___PropertyRefCache_12)); }
	inline List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 * get_PropertyRefCache_12() const { return ___PropertyRefCache_12; }
	inline List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 ** get_address_of_PropertyRefCache_12() { return &___PropertyRefCache_12; }
	inline void set_PropertyRefCache_12(List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 * value)
	{
		___PropertyRefCache_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyRefCache_12), (void*)value);
	}

	inline static int32_t get_offset_of_AddMethodDelegate_13() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___AddMethodDelegate_13)); }
	inline RuntimeObject * get_AddMethodDelegate_13() const { return ___AddMethodDelegate_13; }
	inline RuntimeObject ** get_address_of_AddMethodDelegate_13() { return &___AddMethodDelegate_13; }
	inline void set_AddMethodDelegate_13(RuntimeObject * value)
	{
		___AddMethodDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddMethodDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_CtorArgumentStateIndex_14() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___CtorArgumentStateIndex_14)); }
	inline int32_t get_CtorArgumentStateIndex_14() const { return ___CtorArgumentStateIndex_14; }
	inline int32_t* get_address_of_CtorArgumentStateIndex_14() { return &___CtorArgumentStateIndex_14; }
	inline void set_CtorArgumentStateIndex_14(int32_t value)
	{
		___CtorArgumentStateIndex_14 = value;
	}

	inline static int32_t get_offset_of_CtorArgumentState_15() { return static_cast<int32_t>(offsetof(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3, ___CtorArgumentState_15)); }
	inline ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 * get_CtorArgumentState_15() const { return ___CtorArgumentState_15; }
	inline ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 ** get_address_of_CtorArgumentState_15() { return &___CtorArgumentState_15; }
	inline void set_CtorArgumentState_15(ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 * value)
	{
		___CtorArgumentState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CtorArgumentState_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.ReadStackFrame
struct ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3_marshaled_pinvoke
{
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___JsonPropertyInfo_0;
	uint8_t ___PropertyState_1;
	int32_t ___UseExtensionProperty_2;
	Il2CppSafeArray/*NONE*/* ___JsonPropertyName_3;
	char* ___JsonPropertyNameAsString_4;
	int32_t ___OriginalDepth_5;
	uint8_t ___OriginalTokenType_6;
	Il2CppIUnknown* ___ReturnValue_7;
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_8;
	uint8_t ___ObjectState_9;
	char* ___MetadataId_10;
	int32_t ___PropertyIndex_11;
	List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 * ___PropertyRefCache_12;
	Il2CppIUnknown* ___AddMethodDelegate_13;
	int32_t ___CtorArgumentStateIndex_14;
	ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 * ___CtorArgumentState_15;
};
// Native definition for COM marshalling of System.Text.Json.ReadStackFrame
struct ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3_marshaled_com
{
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___JsonPropertyInfo_0;
	uint8_t ___PropertyState_1;
	int32_t ___UseExtensionProperty_2;
	Il2CppSafeArray/*NONE*/* ___JsonPropertyName_3;
	Il2CppChar* ___JsonPropertyNameAsString_4;
	int32_t ___OriginalDepth_5;
	uint8_t ___OriginalTokenType_6;
	Il2CppIUnknown* ___ReturnValue_7;
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_8;
	uint8_t ___ObjectState_9;
	Il2CppChar* ___MetadataId_10;
	int32_t ___PropertyIndex_11;
	List_1_t9A5995EA5C036F8D411D4F04769DC9749A08D588 * ___PropertyRefCache_12;
	Il2CppIUnknown* ___AddMethodDelegate_13;
	int32_t ___CtorArgumentStateIndex_14;
	ArgumentState_t12473DA2560B3F7D67458F48D08F0C78FBE42AC5 * ___CtorArgumentState_15;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236  : public RuntimeObject
{
public:
	// System.Buffers.IBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_output
	RuntimeObject* ____output_3;
	// System.IO.Stream System.Text.Json.Utf8JsonWriter::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.Buffers.ArrayBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_arrayBufferWriter
	ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * ____arrayBufferWriter_5;
	// System.Memory`1<System.Byte> System.Text.Json.Utf8JsonWriter::_memory
	Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  ____memory_6;
	// System.Boolean System.Text.Json.Utf8JsonWriter::_inObject
	bool ____inObject_7;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonWriter::_tokenType
	uint8_t ____tokenType_8;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonWriter::_bitStack
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  ____bitStack_9;
	// System.Int32 System.Text.Json.Utf8JsonWriter::_currentDepth
	int32_t ____currentDepth_10;
	// System.Text.Json.JsonWriterOptions System.Text.Json.Utf8JsonWriter::_options
	JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  ____options_11;
	// System.Int32 System.Text.Json.Utf8JsonWriter::<BytesPending>k__BackingField
	int32_t ___U3CBytesPendingU3Ek__BackingField_12;
	// System.Int64 System.Text.Json.Utf8JsonWriter::<BytesCommitted>k__BackingField
	int64_t ___U3CBytesCommittedU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__output_3() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____output_3)); }
	inline RuntimeObject* get__output_3() const { return ____output_3; }
	inline RuntimeObject** get_address_of__output_3() { return &____output_3; }
	inline void set__output_3(RuntimeObject* value)
	{
		____output_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_3), (void*)value);
	}

	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__arrayBufferWriter_5() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____arrayBufferWriter_5)); }
	inline ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * get__arrayBufferWriter_5() const { return ____arrayBufferWriter_5; }
	inline ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 ** get_address_of__arrayBufferWriter_5() { return &____arrayBufferWriter_5; }
	inline void set__arrayBufferWriter_5(ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * value)
	{
		____arrayBufferWriter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayBufferWriter_5), (void*)value);
	}

	inline static int32_t get_offset_of__memory_6() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____memory_6)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_6() const { return ____memory_6; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_6() { return &____memory_6; }
	inline void set__memory_6(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_6))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__inObject_7() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____inObject_7)); }
	inline bool get__inObject_7() const { return ____inObject_7; }
	inline bool* get_address_of__inObject_7() { return &____inObject_7; }
	inline void set__inObject_7(bool value)
	{
		____inObject_7 = value;
	}

	inline static int32_t get_offset_of__tokenType_8() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____tokenType_8)); }
	inline uint8_t get__tokenType_8() const { return ____tokenType_8; }
	inline uint8_t* get_address_of__tokenType_8() { return &____tokenType_8; }
	inline void set__tokenType_8(uint8_t value)
	{
		____tokenType_8 = value;
	}

	inline static int32_t get_offset_of__bitStack_9() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____bitStack_9)); }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  get__bitStack_9() const { return ____bitStack_9; }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B * get_address_of__bitStack_9() { return &____bitStack_9; }
	inline void set__bitStack_9(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  value)
	{
		____bitStack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____bitStack_9))->____array_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentDepth_10() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____currentDepth_10)); }
	inline int32_t get__currentDepth_10() const { return ____currentDepth_10; }
	inline int32_t* get_address_of__currentDepth_10() { return &____currentDepth_10; }
	inline void set__currentDepth_10(int32_t value)
	{
		____currentDepth_10 = value;
	}

	inline static int32_t get_offset_of__options_11() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____options_11)); }
	inline JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  get__options_11() const { return ____options_11; }
	inline JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * get_address_of__options_11() { return &____options_11; }
	inline void set__options_11(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  value)
	{
		____options_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_11))->___U3CEncoderU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CBytesPendingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ___U3CBytesPendingU3Ek__BackingField_12)); }
	inline int32_t get_U3CBytesPendingU3Ek__BackingField_12() const { return ___U3CBytesPendingU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CBytesPendingU3Ek__BackingField_12() { return &___U3CBytesPendingU3Ek__BackingField_12; }
	inline void set_U3CBytesPendingU3Ek__BackingField_12(int32_t value)
	{
		___U3CBytesPendingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCommittedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ___U3CBytesCommittedU3Ek__BackingField_13)); }
	inline int64_t get_U3CBytesCommittedU3Ek__BackingField_13() const { return ___U3CBytesCommittedU3Ek__BackingField_13; }
	inline int64_t* get_address_of_U3CBytesCommittedU3Ek__BackingField_13() { return &___U3CBytesCommittedU3Ek__BackingField_13; }
	inline void set_U3CBytesCommittedU3Ek__BackingField_13(int64_t value)
	{
		___U3CBytesCommittedU3Ek__BackingField_13 = value;
	}
};

struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields
{
public:
	// System.Int32 System.Text.Json.Utf8JsonWriter::s_newLineLength
	int32_t ___s_newLineLength_0;
	// System.Char[] System.Text.Json.Utf8JsonWriter::s_singleLineCommentDelimiter
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_singleLineCommentDelimiter_14;

public:
	inline static int32_t get_offset_of_s_newLineLength_0() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields, ___s_newLineLength_0)); }
	inline int32_t get_s_newLineLength_0() const { return ___s_newLineLength_0; }
	inline int32_t* get_address_of_s_newLineLength_0() { return &___s_newLineLength_0; }
	inline void set_s_newLineLength_0(int32_t value)
	{
		___s_newLineLength_0 = value;
	}

	inline static int32_t get_offset_of_s_singleLineCommentDelimiter_14() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields, ___s_singleLineCommentDelimiter_14)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_singleLineCommentDelimiter_14() const { return ___s_singleLineCommentDelimiter_14; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_singleLineCommentDelimiter_14() { return &___s_singleLineCommentDelimiter_14; }
	inline void set_s_singleLineCommentDelimiter_14(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_singleLineCommentDelimiter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_singleLineCommentDelimiter_14), (void*)value);
	}
};


// System.Text.Json.WriteStackFrame
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B 
{
public:
	// System.Collections.IEnumerator System.Text.Json.WriteStackFrame::CollectionEnumerator
	RuntimeObject* ___CollectionEnumerator_0;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.WriteStackFrame::DeclaredJsonPropertyInfo
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___DeclaredJsonPropertyInfo_1;
	// System.Boolean System.Text.Json.WriteStackFrame::IgnoreDictionaryKeyPolicy
	bool ___IgnoreDictionaryKeyPolicy_2;
	// System.Text.Json.JsonClassInfo System.Text.Json.WriteStackFrame::JsonClassInfo
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_3;
	// System.Int32 System.Text.Json.WriteStackFrame::OriginalDepth
	int32_t ___OriginalDepth_4;
	// System.Boolean System.Text.Json.WriteStackFrame::ProcessedStartToken
	bool ___ProcessedStartToken_5;
	// System.Boolean System.Text.Json.WriteStackFrame::ProcessedEndToken
	bool ___ProcessedEndToken_6;
	// System.Text.Json.StackFramePropertyState System.Text.Json.WriteStackFrame::PropertyState
	uint8_t ___PropertyState_7;
	// System.Int32 System.Text.Json.WriteStackFrame::EnumeratorIndex
	int32_t ___EnumeratorIndex_8;
	// System.String System.Text.Json.WriteStackFrame::JsonPropertyNameAsString
	String_t* ___JsonPropertyNameAsString_9;
	// System.Text.Json.MetadataPropertyName System.Text.Json.WriteStackFrame::MetadataPropertyName
	int32_t ___MetadataPropertyName_10;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.WriteStackFrame::PolymorphicJsonPropertyInfo
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___PolymorphicJsonPropertyInfo_11;

public:
	inline static int32_t get_offset_of_CollectionEnumerator_0() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___CollectionEnumerator_0)); }
	inline RuntimeObject* get_CollectionEnumerator_0() const { return ___CollectionEnumerator_0; }
	inline RuntimeObject** get_address_of_CollectionEnumerator_0() { return &___CollectionEnumerator_0; }
	inline void set_CollectionEnumerator_0(RuntimeObject* value)
	{
		___CollectionEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionEnumerator_0), (void*)value);
	}

	inline static int32_t get_offset_of_DeclaredJsonPropertyInfo_1() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___DeclaredJsonPropertyInfo_1)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_DeclaredJsonPropertyInfo_1() const { return ___DeclaredJsonPropertyInfo_1; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_DeclaredJsonPropertyInfo_1() { return &___DeclaredJsonPropertyInfo_1; }
	inline void set_DeclaredJsonPropertyInfo_1(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___DeclaredJsonPropertyInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeclaredJsonPropertyInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_IgnoreDictionaryKeyPolicy_2() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___IgnoreDictionaryKeyPolicy_2)); }
	inline bool get_IgnoreDictionaryKeyPolicy_2() const { return ___IgnoreDictionaryKeyPolicy_2; }
	inline bool* get_address_of_IgnoreDictionaryKeyPolicy_2() { return &___IgnoreDictionaryKeyPolicy_2; }
	inline void set_IgnoreDictionaryKeyPolicy_2(bool value)
	{
		___IgnoreDictionaryKeyPolicy_2 = value;
	}

	inline static int32_t get_offset_of_JsonClassInfo_3() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___JsonClassInfo_3)); }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * get_JsonClassInfo_3() const { return ___JsonClassInfo_3; }
	inline JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 ** get_address_of_JsonClassInfo_3() { return &___JsonClassInfo_3; }
	inline void set_JsonClassInfo_3(JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * value)
	{
		___JsonClassInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonClassInfo_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalDepth_4() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___OriginalDepth_4)); }
	inline int32_t get_OriginalDepth_4() const { return ___OriginalDepth_4; }
	inline int32_t* get_address_of_OriginalDepth_4() { return &___OriginalDepth_4; }
	inline void set_OriginalDepth_4(int32_t value)
	{
		___OriginalDepth_4 = value;
	}

	inline static int32_t get_offset_of_ProcessedStartToken_5() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___ProcessedStartToken_5)); }
	inline bool get_ProcessedStartToken_5() const { return ___ProcessedStartToken_5; }
	inline bool* get_address_of_ProcessedStartToken_5() { return &___ProcessedStartToken_5; }
	inline void set_ProcessedStartToken_5(bool value)
	{
		___ProcessedStartToken_5 = value;
	}

	inline static int32_t get_offset_of_ProcessedEndToken_6() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___ProcessedEndToken_6)); }
	inline bool get_ProcessedEndToken_6() const { return ___ProcessedEndToken_6; }
	inline bool* get_address_of_ProcessedEndToken_6() { return &___ProcessedEndToken_6; }
	inline void set_ProcessedEndToken_6(bool value)
	{
		___ProcessedEndToken_6 = value;
	}

	inline static int32_t get_offset_of_PropertyState_7() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___PropertyState_7)); }
	inline uint8_t get_PropertyState_7() const { return ___PropertyState_7; }
	inline uint8_t* get_address_of_PropertyState_7() { return &___PropertyState_7; }
	inline void set_PropertyState_7(uint8_t value)
	{
		___PropertyState_7 = value;
	}

	inline static int32_t get_offset_of_EnumeratorIndex_8() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___EnumeratorIndex_8)); }
	inline int32_t get_EnumeratorIndex_8() const { return ___EnumeratorIndex_8; }
	inline int32_t* get_address_of_EnumeratorIndex_8() { return &___EnumeratorIndex_8; }
	inline void set_EnumeratorIndex_8(int32_t value)
	{
		___EnumeratorIndex_8 = value;
	}

	inline static int32_t get_offset_of_JsonPropertyNameAsString_9() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___JsonPropertyNameAsString_9)); }
	inline String_t* get_JsonPropertyNameAsString_9() const { return ___JsonPropertyNameAsString_9; }
	inline String_t** get_address_of_JsonPropertyNameAsString_9() { return &___JsonPropertyNameAsString_9; }
	inline void set_JsonPropertyNameAsString_9(String_t* value)
	{
		___JsonPropertyNameAsString_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonPropertyNameAsString_9), (void*)value);
	}

	inline static int32_t get_offset_of_MetadataPropertyName_10() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___MetadataPropertyName_10)); }
	inline int32_t get_MetadataPropertyName_10() const { return ___MetadataPropertyName_10; }
	inline int32_t* get_address_of_MetadataPropertyName_10() { return &___MetadataPropertyName_10; }
	inline void set_MetadataPropertyName_10(int32_t value)
	{
		___MetadataPropertyName_10 = value;
	}

	inline static int32_t get_offset_of_PolymorphicJsonPropertyInfo_11() { return static_cast<int32_t>(offsetof(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B, ___PolymorphicJsonPropertyInfo_11)); }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * get_PolymorphicJsonPropertyInfo_11() const { return ___PolymorphicJsonPropertyInfo_11; }
	inline JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B ** get_address_of_PolymorphicJsonPropertyInfo_11() { return &___PolymorphicJsonPropertyInfo_11; }
	inline void set_PolymorphicJsonPropertyInfo_11(JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * value)
	{
		___PolymorphicJsonPropertyInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PolymorphicJsonPropertyInfo_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.WriteStackFrame
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke
{
	RuntimeObject* ___CollectionEnumerator_0;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___DeclaredJsonPropertyInfo_1;
	int32_t ___IgnoreDictionaryKeyPolicy_2;
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_3;
	int32_t ___OriginalDepth_4;
	int32_t ___ProcessedStartToken_5;
	int32_t ___ProcessedEndToken_6;
	uint8_t ___PropertyState_7;
	int32_t ___EnumeratorIndex_8;
	char* ___JsonPropertyNameAsString_9;
	int32_t ___MetadataPropertyName_10;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___PolymorphicJsonPropertyInfo_11;
};
// Native definition for COM marshalling of System.Text.Json.WriteStackFrame
struct WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com
{
	RuntimeObject* ___CollectionEnumerator_0;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___DeclaredJsonPropertyInfo_1;
	int32_t ___IgnoreDictionaryKeyPolicy_2;
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * ___JsonClassInfo_3;
	int32_t ___OriginalDepth_4;
	int32_t ___ProcessedStartToken_5;
	int32_t ___ProcessedEndToken_6;
	uint8_t ___PropertyState_7;
	int32_t ___EnumeratorIndex_8;
	Il2CppChar* ___JsonPropertyNameAsString_9;
	int32_t ___MetadataPropertyName_10;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * ___PolymorphicJsonPropertyInfo_11;
};

// System.Text.Json.JsonDocument/<ReadToEndAsync>d__65
struct U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 
{
public:
	// System.Int32 System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>> System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<>t__builder
	AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4  ___U3CU3Et__builder_1;
	// System.IO.Stream System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_2;
	// System.Threading.CancellationToken System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int32 System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<written>5__2
	int32_t ___U3CwrittenU3E5__2_4;
	// System.Byte[] System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<rented>5__3
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CrentedU3E5__3_5;
	// System.Int32 System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<utf8BomLength>5__4
	int32_t ___U3Cutf8BomLengthU3E5__4_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::<>u__1
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___stream_2)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_2() const { return ___stream_2; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CwrittenU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3CwrittenU3E5__2_4)); }
	inline int32_t get_U3CwrittenU3E5__2_4() const { return ___U3CwrittenU3E5__2_4; }
	inline int32_t* get_address_of_U3CwrittenU3E5__2_4() { return &___U3CwrittenU3E5__2_4; }
	inline void set_U3CwrittenU3E5__2_4(int32_t value)
	{
		___U3CwrittenU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CrentedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3CrentedU3E5__3_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CrentedU3E5__3_5() const { return ___U3CrentedU3E5__3_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CrentedU3E5__3_5() { return &___U3CrentedU3E5__3_5; }
	inline void set_U3CrentedU3E5__3_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CrentedU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrentedU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cutf8BomLengthU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3Cutf8BomLengthU3E5__4_6)); }
	inline int32_t get_U3Cutf8BomLengthU3E5__4_6() const { return ___U3Cutf8BomLengthU3E5__4_6; }
	inline int32_t* get_address_of_U3Cutf8BomLengthU3E5__4_6() { return &___U3Cutf8BomLengthU3E5__4_6; }
	inline void set_U3Cutf8BomLengthU3E5__4_6(int32_t value)
	{
		___U3Cutf8BomLengthU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6, ___U3CU3Eu__1_7)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder
struct AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_methodBuilder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ____methodBuilder_0;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_haveResult
	bool ____haveResult_1;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_useBuilder
	bool ____useBuilder_2;

public:
	inline static int32_t get_offset_of__methodBuilder_0() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE, ____methodBuilder_0)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get__methodBuilder_0() const { return ____methodBuilder_0; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of__methodBuilder_0() { return &____methodBuilder_0; }
	inline void set__methodBuilder_0(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		____methodBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____methodBuilder_0))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__haveResult_1() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE, ____haveResult_1)); }
	inline bool get__haveResult_1() const { return ____haveResult_1; }
	inline bool* get_address_of__haveResult_1() { return &____haveResult_1; }
	inline void set__haveResult_1(bool value)
	{
		____haveResult_1 = value;
	}

	inline static int32_t get_offset_of__useBuilder_2() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE, ____useBuilder_2)); }
	inline bool get__useBuilder_2() const { return ____useBuilder_2; }
	inline bool* get_address_of__useBuilder_2() { return &____useBuilder_2; }
	inline void set__useBuilder_2(bool value)
	{
		____useBuilder_2 = value;
	}
};


// System.Text.Json.ReadStack
struct ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4 
{
public:
	// System.Int32 System.Text.Json.ReadStack::_continuationCount
	int32_t ____continuationCount_1;
	// System.Int32 System.Text.Json.ReadStack::_count
	int32_t ____count_2;
	// System.Collections.Generic.List`1<System.Text.Json.ReadStackFrame> System.Text.Json.ReadStack::_previous
	List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD * ____previous_3;
	// System.Collections.Generic.List`1<System.Text.Json.ArgumentState> System.Text.Json.ReadStack::_ctorArgStateCache
	List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 * ____ctorArgStateCache_4;
	// System.Int64 System.Text.Json.ReadStack::BytesConsumed
	int64_t ___BytesConsumed_5;
	// System.Text.Json.ReadStackFrame System.Text.Json.ReadStack::Current
	ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3  ___Current_6;
	// System.Boolean System.Text.Json.ReadStack::ReadAhead
	bool ___ReadAhead_7;
	// System.Text.Json.Serialization.ReferenceResolver System.Text.Json.ReadStack::ReferenceResolver
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_8;
	// System.Boolean System.Text.Json.ReadStack::SupportContinuation
	bool ___SupportContinuation_9;
	// System.Boolean System.Text.Json.ReadStack::UseFastPath
	bool ___UseFastPath_10;

public:
	inline static int32_t get_offset_of__continuationCount_1() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ____continuationCount_1)); }
	inline int32_t get__continuationCount_1() const { return ____continuationCount_1; }
	inline int32_t* get_address_of__continuationCount_1() { return &____continuationCount_1; }
	inline void set__continuationCount_1(int32_t value)
	{
		____continuationCount_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}

	inline static int32_t get_offset_of__previous_3() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ____previous_3)); }
	inline List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD * get__previous_3() const { return ____previous_3; }
	inline List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD ** get_address_of__previous_3() { return &____previous_3; }
	inline void set__previous_3(List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD * value)
	{
		____previous_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_3), (void*)value);
	}

	inline static int32_t get_offset_of__ctorArgStateCache_4() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ____ctorArgStateCache_4)); }
	inline List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 * get__ctorArgStateCache_4() const { return ____ctorArgStateCache_4; }
	inline List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 ** get_address_of__ctorArgStateCache_4() { return &____ctorArgStateCache_4; }
	inline void set__ctorArgStateCache_4(List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 * value)
	{
		____ctorArgStateCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ctorArgStateCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_BytesConsumed_5() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___BytesConsumed_5)); }
	inline int64_t get_BytesConsumed_5() const { return ___BytesConsumed_5; }
	inline int64_t* get_address_of_BytesConsumed_5() { return &___BytesConsumed_5; }
	inline void set_BytesConsumed_5(int64_t value)
	{
		___BytesConsumed_5 = value;
	}

	inline static int32_t get_offset_of_Current_6() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___Current_6)); }
	inline ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3  get_Current_6() const { return ___Current_6; }
	inline ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3 * get_address_of_Current_6() { return &___Current_6; }
	inline void set_Current_6(ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3  value)
	{
		___Current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___JsonPropertyInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___JsonPropertyName_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___JsonPropertyNameAsString_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___ReturnValue_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___JsonClassInfo_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___MetadataId_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___PropertyRefCache_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___AddMethodDelegate_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_6))->___CtorArgumentState_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ReadAhead_7() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___ReadAhead_7)); }
	inline bool get_ReadAhead_7() const { return ___ReadAhead_7; }
	inline bool* get_address_of_ReadAhead_7() { return &___ReadAhead_7; }
	inline void set_ReadAhead_7(bool value)
	{
		___ReadAhead_7 = value;
	}

	inline static int32_t get_offset_of_ReferenceResolver_8() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___ReferenceResolver_8)); }
	inline ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * get_ReferenceResolver_8() const { return ___ReferenceResolver_8; }
	inline ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 ** get_address_of_ReferenceResolver_8() { return &___ReferenceResolver_8; }
	inline void set_ReferenceResolver_8(ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * value)
	{
		___ReferenceResolver_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceResolver_8), (void*)value);
	}

	inline static int32_t get_offset_of_SupportContinuation_9() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___SupportContinuation_9)); }
	inline bool get_SupportContinuation_9() const { return ___SupportContinuation_9; }
	inline bool* get_address_of_SupportContinuation_9() { return &___SupportContinuation_9; }
	inline void set_SupportContinuation_9(bool value)
	{
		___SupportContinuation_9 = value;
	}

	inline static int32_t get_offset_of_UseFastPath_10() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4, ___UseFastPath_10)); }
	inline bool get_UseFastPath_10() const { return ___UseFastPath_10; }
	inline bool* get_address_of_UseFastPath_10() { return &___UseFastPath_10; }
	inline void set_UseFastPath_10(bool value)
	{
		___UseFastPath_10 = value;
	}
};

struct ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_StaticFields
{
public:
	// System.Char[] System.Text.Json.ReadStack::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.ReadStack
struct ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_marshaled_pinvoke
{
	int32_t ____continuationCount_1;
	int32_t ____count_2;
	List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD * ____previous_3;
	List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 * ____ctorArgStateCache_4;
	int64_t ___BytesConsumed_5;
	ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3_marshaled_pinvoke ___Current_6;
	int32_t ___ReadAhead_7;
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_8;
	int32_t ___SupportContinuation_9;
	int32_t ___UseFastPath_10;
};
// Native definition for COM marshalling of System.Text.Json.ReadStack
struct ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_marshaled_com
{
	int32_t ____continuationCount_1;
	int32_t ____count_2;
	List_1_t814EF893AA45ADB5DD8897F915DAADC58EBB5CDD * ____previous_3;
	List_1_t79C179CE402EBA6FF054F20B73ABAD38A5BD06F7 * ____ctorArgStateCache_4;
	int64_t ___BytesConsumed_5;
	ReadStackFrame_t5DD00C0EABFD9B456A0F6715A6B448FE3A5936B3_marshaled_com ___Current_6;
	int32_t ___ReadAhead_7;
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_8;
	int32_t ___SupportContinuation_9;
	int32_t ___UseFastPath_10;
};

// System.Text.Json.WriteStack
struct WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 
{
public:
	// System.Int32 System.Text.Json.WriteStack::_continuationCount
	int32_t ____continuationCount_0;
	// System.Int32 System.Text.Json.WriteStack::_count
	int32_t ____count_1;
	// System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame> System.Text.Json.WriteStack::_previous
	List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * ____previous_2;
	// System.Text.Json.WriteStackFrame System.Text.Json.WriteStack::Current
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  ___Current_3;
	// System.Int32 System.Text.Json.WriteStack::FlushThreshold
	int32_t ___FlushThreshold_4;
	// System.Text.Json.Serialization.ReferenceResolver System.Text.Json.WriteStack::ReferenceResolver
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_5;
	// System.Boolean System.Text.Json.WriteStack::SupportContinuation
	bool ___SupportContinuation_6;

public:
	inline static int32_t get_offset_of__continuationCount_0() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ____continuationCount_0)); }
	inline int32_t get__continuationCount_0() const { return ____continuationCount_0; }
	inline int32_t* get_address_of__continuationCount_0() { return &____continuationCount_0; }
	inline void set__continuationCount_0(int32_t value)
	{
		____continuationCount_0 = value;
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ____previous_2)); }
	inline List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * get__previous_2() const { return ____previous_2; }
	inline List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of_Current_3() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ___Current_3)); }
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  get_Current_3() const { return ___Current_3; }
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * get_address_of_Current_3() { return &___Current_3; }
	inline void set_Current_3(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  value)
	{
		___Current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_3))->___CollectionEnumerator_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_3))->___DeclaredJsonPropertyInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_3))->___JsonClassInfo_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_3))->___JsonPropertyNameAsString_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Current_3))->___PolymorphicJsonPropertyInfo_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_FlushThreshold_4() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ___FlushThreshold_4)); }
	inline int32_t get_FlushThreshold_4() const { return ___FlushThreshold_4; }
	inline int32_t* get_address_of_FlushThreshold_4() { return &___FlushThreshold_4; }
	inline void set_FlushThreshold_4(int32_t value)
	{
		___FlushThreshold_4 = value;
	}

	inline static int32_t get_offset_of_ReferenceResolver_5() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ___ReferenceResolver_5)); }
	inline ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * get_ReferenceResolver_5() const { return ___ReferenceResolver_5; }
	inline ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 ** get_address_of_ReferenceResolver_5() { return &___ReferenceResolver_5; }
	inline void set_ReferenceResolver_5(ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * value)
	{
		___ReferenceResolver_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceResolver_5), (void*)value);
	}

	inline static int32_t get_offset_of_SupportContinuation_6() { return static_cast<int32_t>(offsetof(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481, ___SupportContinuation_6)); }
	inline bool get_SupportContinuation_6() const { return ___SupportContinuation_6; }
	inline bool* get_address_of_SupportContinuation_6() { return &___SupportContinuation_6; }
	inline void set_SupportContinuation_6(bool value)
	{
		___SupportContinuation_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.WriteStack
struct WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_pinvoke
{
	int32_t ____continuationCount_0;
	int32_t ____count_1;
	List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * ____previous_2;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke ___Current_3;
	int32_t ___FlushThreshold_4;
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_5;
	int32_t ___SupportContinuation_6;
};
// Native definition for COM marshalling of System.Text.Json.WriteStack
struct WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_com
{
	int32_t ____continuationCount_0;
	int32_t ____count_1;
	List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * ____previous_2;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com ___Current_3;
	int32_t ___FlushThreshold_4;
	ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * ___ReferenceResolver_5;
	int32_t ___SupportContinuation_6;
};

// System.Text.Json.JsonClassInfo/ConstructorDelegate
struct ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26  : public MulticastDelegate_t
{
public:

public:
};


// System.Text.Json.JsonDocument/<ParseAsyncCore>d__57
struct U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 
{
public:
	// System.Int32 System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument> System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::<>t__builder
	AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB  ___U3CU3Et__builder_1;
	// System.IO.Stream System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::utf8Json
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___utf8Json_2;
	// System.Threading.CancellationToken System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Text.Json.JsonDocumentOptions System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::options
	JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB  ___options_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>> System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::<>u__1
	ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_utf8Json_2() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___utf8Json_2)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_utf8Json_2() const { return ___utf8Json_2; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_utf8Json_2() { return &___utf8Json_2; }
	inline void set_utf8Json_2(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___utf8Json_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Json_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_4() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___options_4)); }
	inline JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB  get_options_4() const { return ___options_4; }
	inline JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB * get_address_of_options_4() { return &___options_4; }
	inline void set_options_4(JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB  value)
	{
		___options_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36
struct U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 
{
public:
	// System.Int32 System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Text.Json.Utf8JsonWriter System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::<>4__this
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1, ___U3CU3E4__this_2)); }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35
struct U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 
{
public:
	// System.Int32 System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::<>t__builder
	AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE  ___U3CU3Et__builder_1;
	// System.Text.Json.Utf8JsonWriter System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::<>4__this
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2, ___U3CU3Et__builder_1)); }
	inline AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2, ___U3CU3E4__this_2)); }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Text.Json.WriteStackFrame[]
struct WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  m_Items[1];

public:
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___CollectionEnumerator_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___DeclaredJsonPropertyInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___JsonClassInfo_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___JsonPropertyNameAsString_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PolymorphicJsonPropertyInfo_11), (void*)NULL);
		#endif
	}
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___CollectionEnumerator_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___DeclaredJsonPropertyInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___JsonClassInfo_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___JsonPropertyNameAsString_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PolymorphicJsonPropertyInfo_11), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke_back(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled);
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke_cleanup(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com_back(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled);
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com_cleanup(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_pinvoke(const JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A& unmarshaled, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_pinvoke_back(const JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke& marshaled, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A& unmarshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_pinvoke_cleanup(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_com(const JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A& unmarshaled, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_com_back(const JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com& marshaled, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A& unmarshaled);
IL2CPP_EXTERN_C void JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshal_com_cleanup(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke(const SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32& unmarshaled, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke_back(const SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke& marshaled, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32& unmarshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke_cleanup(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com(const SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32& unmarshaled, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com_back(const SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com& marshaled, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32& unmarshaled);
IL2CPP_EXTERN_C void SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com_cleanup(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832_gshared (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_gshared_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0_gshared (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_gshared (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, int32_t ___index0, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_gshared_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8  Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7_gshared (Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ArraySegment`1<System.Byte>>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_gshared_inline (ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8_gshared (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>,System.Text.Json.JsonDocument/<ParseAsyncCore>d__57>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_mA52AFE0DABFB66FBE3661E72A2B29AFC07722CFF_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * ___awaiter0, U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6_gshared (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * __this, const RuntimeMethod* method);
// System.Memory`1<!!0> System.MemoryExtensions::AsMemory<System.Byte>(System.ArraySegment`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<!0> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A_gshared (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  ___memory0, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(System.ArraySegment`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method);
// System.Buffers.ArrayPool`1<!0> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_gshared_inline (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Text.Json.JsonDocument/<ReadToEndAsync>d__65>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_gshared (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(!!0[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_gshared_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.Span`1<System.Byte>::op_Implicit(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method);
// System.Boolean System.MemoryExtensions::SequenceEqual<System.Byte>(System.ReadOnlySpan`1<!!0>,System.ReadOnlySpan`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___other1, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD_gshared (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819_gshared (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25_gshared (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::op_Implicit(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, const RuntimeMethod* method);
// !0[] System.Span`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(!!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Text.Json.JsonDocument/DbRow>(System.Span`1<System.Byte>,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Int32>(System.Span`1<System.Byte>,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, int32_t* ___value1, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Int32>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Text.Json.JsonDocument/DbRow>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method);
// System.Span`1<!!1> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.Int32>(System.Span`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E  MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method);
// !0& System.Span`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_gshared_inline (Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Text.Json.JsonDocument/StackRow>(System.Span`1<System.Byte>,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * ___value1, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Text.Json.JsonDocument/StackRow>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891_gshared (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6_gshared (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD_gshared (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Byte>(System.ReadOnlyMemory`1<!!0>,System.ArraySegment`1<!!0>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1_gshared (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ___memory0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___segment1, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * ___stateMachine1, const RuntimeMethod* method);
// System.Int32 System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_gshared_inline (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method);
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0_gshared (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_gshared (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);

// System.Boolean System.Text.Json.WriteStack::get_IsContinuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WriteStack_get_IsContinuation_mAAD21F07540633C8C1D2DED021A0B0DE3C643707 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::.ctor()
inline void List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832 (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *, const RuntimeMethod*))List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::get_Count()
inline int32_t List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *, const RuntimeMethod*))List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::Add(!0)
inline void List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0 (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B , const RuntimeMethod*))List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191 (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, int32_t ___index0, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *, int32_t, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B , const RuntimeMethod*))List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Text.Json.WriteStack::AddCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method);
// System.Text.Json.JsonClassInfo System.Text.Json.JsonSerializerOptions::GetOrAddClass(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * JsonSerializerOptions_GetOrAddClass_mCB95ED072976219AEDFF121AAE4A5088AA66CA28 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Text.Json.ClassType System.Text.Json.JsonClassInfo::get_ClassType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JsonClassInfo_get_ClassType_m8B7809B6486BA9BB711580BAEBB2BC9914D5123D_inline (JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * __this, const RuntimeMethod* method);
// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonClassInfo::get_PropertyInfoForClassInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * JsonClassInfo_get_PropertyInfoForClassInfo_mF60DA7EF84CA9322ADAD514F488C735716B46AA1_inline (JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * __this, const RuntimeMethod* method);
// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.JsonSerializerOptions::get_ReferenceHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * JsonSerializerOptions_get_ReferenceHandler_mED2E78BDB89C782261DB173F86E5CF091DC32174_inline (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStack::Initialize(System.Type,System.Text.Json.JsonSerializerOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Initialize_mBC81CA9F7A663D486F256D4E0DCC56DE942499E4 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, bool ___supportContinuation2, const RuntimeMethod* method);
// System.Text.Json.JsonPropertyInfo System.Text.Json.WriteStackFrame::GetPolymorphicJsonPropertyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * WriteStackFrame_GetPolymorphicJsonPropertyInfo_mC27DC72FD83A8F9EFECC56C0E6091D2C4246F799 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method);
// System.Text.Json.JsonClassInfo System.Text.Json.JsonPropertyInfo::get_RuntimeClassInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * JsonPropertyInfo_get_RuntimeClassInfo_mCE6583F66AEB52F091BA3931F50D7F63C508AACC (JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStackFrame::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_Reset_m111EF30B6EB90CA0541E8F6122C0DAD77DA20E1B (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Text.Json.WriteStackFrame>::get_Item(System.Int32)
inline WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  (*) (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *, int32_t, const RuntimeMethod*))List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Text.Json.WriteStack::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Push_mF74A454C955AD5263445C2AF2F0C6FFFDB057794 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStack::Pop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Pop_mAD1369F2F7B7824DE727514FEDEF47FCCD339380 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, bool ___success0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStack::<PropertyPath>g__AppendStackFrame|13_0(System.Text.StringBuilder,System.Text.Json.WriteStackFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_U3CPropertyPathU3Eg__AppendStackFrameU7C13_0_m4C08685ED11B0694B35F90C15D63FE4D4A2CB575 (StringBuilder_t * ___sb0, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * ___frame1, const RuntimeMethod* method);
// System.String System.Text.Json.WriteStack::PropertyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WriteStack_PropertyPath_m10A29C9BBB1E71BD30691F2B612550537C5AD195 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Text.Json.JsonPropertyInfo::get_PropertyInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t * JsonPropertyInfo_get_PropertyInfo_mE528577CE025E0E5D463DBA2917CF1A4A1279967_inline (JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStack::<PropertyPath>g__AppendPropertyName|13_1(System.Text.StringBuilder,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_U3CPropertyPathU3Eg__AppendPropertyNameU7C13_1_m19252D944F3669835FCFD8A09493E8C3FF08A952 (StringBuilder_t * ___sb0, String_t* ___propertyName1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m7E9204CF616E533528CC448D05BC8AF97A7D8038 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStackFrame::EndDictionaryElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_EndDictionaryElement_mAA68DA1D655C8DDFC655F0863A7175FFBA651862 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.WriteStackFrame::EndProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_EndProperty_m8BE6CE8FFD60AEA86A7BDEE46137C22EC5D91FF5 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method);
// System.Text.Json.Serialization.JsonConverter System.Text.Json.WriteStackFrame::InitializeReEntry(System.Type,System.Text.Json.JsonSerializerOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * WriteStackFrame_InitializeReEntry_m41C09568FE8FA22C607A819CF299837D845263AE (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, String_t* ___propertyName2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>> System.Text.Json.JsonDocument::ReadToEndAsync(System.IO.Stream,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * JsonDocument_ReadToEndAsync_m9EA18DE96A957038480FD4442AD783CAB8A004AE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8  Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7 (Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8  (*) (Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.ArraySegment`1<System.Byte>>::GetAwaiter()
inline ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_inline (ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  (*) (ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8 (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>,System.Text.Json.JsonDocument/<ParseAsyncCore>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_m87ECB5EF3C7630EB729B587C4397D0B9B2ADF312 (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * __this, ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * ___awaiter0, U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *, ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *, U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_mA52AFE0DABFB66FBE3661E72A2B29AFC07722CFF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.ArraySegment`1<System.Byte>>::GetResult()
inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6 (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * __this, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  (*) (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6_gshared)(__this, method);
}
// System.Memory`1<!!0> System.MemoryExtensions::AsMemory<System.Byte>(System.ArraySegment`1<!!0>)
inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549 (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	return ((  Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549_gshared)(___segment0, method);
}
// System.ReadOnlyMemory`1<!0> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<!0>)
inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  ___memory0, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 , const RuntimeMethod*))Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A_gshared)(___memory0, method);
}
// System.Text.Json.JsonReaderOptions System.Text.Json.JsonDocumentOptions::GetReaderOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  JsonDocumentOptions_GetReaderOptions_m5392839E273FC8EAFFE1B8BE9002F7D39253C288 (JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::Parse(System.ReadOnlyMemory`1<System.Byte>,System.Text.Json.JsonReaderOptions,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * JsonDocument_Parse_m0BA06A1D6866A3F320BF7B0776700A095E6501C0 (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ___utf8Json0, JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  ___readerOptions1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extraRentedBytes2, const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(System.ArraySegment`1<!!0>)
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_gshared_inline)(___segment0, method);
}
// System.Void System.Span`1<System.Byte>::Clear()
inline void Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808 (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, const RuntimeMethod*))Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808_gshared)(__this, method);
}
// System.Buffers.ArrayPool`1<!0> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
inline ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_gshared_inline)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m7D803A35CEEC0748CEE0EA52F368409988CA4BF3 (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mF62F3E9AF3E710E4AE6A8F8F04A2D9C2DAFDF2DE (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * __this, JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *, JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD (U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Text.Json.JsonDocument>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m78B0D7EA1EBE2491BD0407CAAEE13C0C64D1B249 (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncCoreU3Ed__57_SetStateMachine_mC5FC7DF12D11A98051F722D5D99389EB398326DC (U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonConstants::get_Utf8Bom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  JsonConstants_get_Utf8Bom_mF2BA89800E7E0F2630A553618DC4A0DE5652EDED (const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline)(__this, method);
}
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_m9CDC0B9CEA956A30F9B6BDA815DA307169C6E1C8 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.Text.Json.JsonDocument/<ReadToEndAsync>d__65>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506 (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared)(__this, method);
}
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(!!0[],System.Int32,System.Int32)
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_gshared_inline)(___array0, ___start1, ___length2, method);
}
// System.ReadOnlySpan`1<!0> System.Span`1<System.Byte>::op_Implicit(System.Span`1<!0>)
inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883 (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_gshared)(___span0, method);
}
// System.Boolean System.MemoryExtensions::SequenceEqual<System.Byte>(System.ReadOnlySpan`1<!!0>,System.ReadOnlySpan`1<!!0>)
inline bool MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___other1, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_gshared_inline)(___span0, ___other1, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819 (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819_gshared)(__this, ___result0, method);
}
// System.Void System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6 (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ArraySegment`1<System.Byte>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25 (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__65_SetStateMachine_m0D9CA0B295B40DF7B513E7E1540557AC9F85F947 (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DbRow_get_Location_mD05CE33A25EF42F5AD31F70837C9DB0EE8FB8544_inline (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_SizeOrLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbRow_get_SizeOrLength_mD79871044B666EF009CD4E4E0C0A678EFBB22383 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_IsUnknownSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_IsUnknownSize_mF7A4FD87A29952C63456834BDC53D0F01E60FEC5 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_HasComplexChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_HasComplexChildren_mC01D85B8D710B20CE8339E10B17AED3E4FF9BE27 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_NumberOfRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbRow_get_NumberOfRows_mC1C32D2C5396C3530CDE3FE9CA4BDA210FCD4255 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Text.Json.JsonTokenType System.Text.Json.JsonDocument/DbRow::get_TokenType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/DbRow::.ctor(System.Text.Json.JsonTokenType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbRow__ctor_m8D9239E25D5BEB578BFE21906B2E415CEF5A4204 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, uint8_t ___jsonTokenType0, int32_t ___location1, int32_t ___sizeOrLength2, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_IsSimpleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_IsSimpleValue_m521915053BFCB1988622B26725C80B4284EB19AF (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m4E19822E3CB7A90F122D934C082FB30BA3A98EFD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___completeDb0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m1124B085E119A0D26CDE4862E8F3F718F27287AA (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___payloadLength0, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::op_Implicit(!0[])
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_gshared)(___array0, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<!0>)
inline void Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44 (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_gshared)(__this, ___destination0, method);
}
// !0[] System.Span`1<System.Byte>::ToArray()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9 (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, const RuntimeMethod*))Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9_gshared)(__this, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Text.Json.JsonDocument/MetadataDb,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m3574B9EAC8C00B94C0FC02E0DA839B142B088F1D (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  ___source0, bool ___useArrayPools1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Dispose_m9ED516C69EEC358A2D9C108EC50E955D1ACF23DD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::TrimExcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_TrimExcess_m4D8D56BF7EB8D76DEA0982D4B89C9B6AA66B7E95 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::Enlarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Enlarge_m634C0BAA0125BDD18015A8756F78C7E006577EAF (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Byte>(!!0[],System.Int32)
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_gshared)(___array0, ___start1, method);
}
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Text.Json.JsonDocument/DbRow>(System.Span`1<System.Byte>,!!0&)
inline void MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *, const RuntimeMethod*))MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::Append(System.Text.Json.JsonTokenType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Append_m0B6B5FB723881387386991848D48D81FABA9C411 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___tokenType0, int32_t ___startLocation1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::AssertValidIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_AssertValidIndex_m4086DEF25350B632D6C52D9C4664FA06AB5F03F3 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Int32>(System.Span`1<System.Byte>,!!0&)
inline void MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, int32_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , int32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetLength_m9AA0ADBBED9EBDA848E0BE187B8BF307002FE183 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Int32>(System.ReadOnlySpan`1<System.Byte>)
inline int32_t MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_gshared_inline)(___source0, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetNumberOfRows(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetNumberOfRows_mECA139C5AE294C9FAEA39AF8F6BE4A26FF0E9B6E (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, int32_t ___numberOfRows1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetHasComplexChildren(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetHasComplexChildren_mC2E8DFE3C0FD745BCBEC71B1FDFB2E17C448E83E (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::FindOpenElement(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataDb_FindOpenElement_m81B711CEE279A13D1122534C50298657C959A3AD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___lookupType0, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::FindIndexOfFirstUnsetSizeOrLength(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataDb_FindIndexOfFirstUnsetSizeOrLength_mCC53A152E29E81DB6BA8756756022C7C7F3EDFA9 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___lookupType0, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, int32_t, const RuntimeMethod*))Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_gshared_inline)(__this, ___start0, method);
}
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Text.Json.JsonDocument/DbRow>(System.ReadOnlySpan`1<System.Byte>)
inline DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	return ((  DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_gshared_inline)(___source0, method);
}
// System.Text.Json.JsonDocument/DbRow System.Text.Json.JsonDocument/MetadataDb::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MetadataDb_Get_m1351D614C17271EFAC8E55439800909928B2ECB0 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
inline uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_gshared_inline)(___source0, method);
}
// System.Text.Json.JsonTokenType System.Text.Json.JsonDocument/MetadataDb::GetJsonTokenType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MetadataDb_GetJsonTokenType_m9A58764A46434A07E500B03CDBE2ABCDECB33FC2 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Span`1<!!1> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.Int32>(System.Span`1<!!0>)
inline Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E  MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835 (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method)
{
	return ((  Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E  (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835_gshared)(___span0, method);
}
// !0& System.Span`1<System.Int32>::get_Item(System.Int32)
inline int32_t* Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_inline (Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E *, int32_t, const RuntimeMethod*))Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_gshared_inline)(__this, ___index0, method);
}
// System.Text.Json.JsonDocument/MetadataDb System.Text.Json.JsonDocument/MetadataDb::CopySegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  MetadataDb_CopySegment_m002B7AF25A6BC7719DD1E1CEA37265C1AC106CE6 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___startIndex0, int32_t ___endIndex1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/StackRow::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRow__ctor_m7B93B861827FE58530539F69E2FC22007D89DCC7 (StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * __this, int32_t ___sizeOrLength0, int32_t ___numberOfRows1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/StackRowStack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack__ctor_m20FC0DFE2DB10327E9DC93609B5F148CD5E8E4B3 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, int32_t ___initialSize0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/StackRowStack::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Dispose_m9E3CBA52F321E9D745E78B175574FFC1BD0924EA (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonDocument/StackRowStack::Enlarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Enlarge_m1D08EBC9C47AB95D02670479F5B04ABB609AEA43 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.Text.Json.JsonDocument/StackRow>(System.Span`1<System.Byte>,!!0&)
inline void MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 *, const RuntimeMethod*))MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Text.Json.JsonDocument/StackRowStack::Push(System.Text.Json.JsonDocument/StackRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Push_m652E61A4CF74E053DAD0EEB3264742A2F2A4D347 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  ___row0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.MemoryMarshal::Read<System.Text.Json.JsonDocument/StackRow>(System.ReadOnlySpan`1<System.Byte>)
inline StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	return ((  StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_gshared_inline)(___source0, method);
}
// System.Text.Json.JsonDocument/StackRow System.Text.Json.JsonDocument/StackRowStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  StackRowStack_Pop_mD66350D7D1E66E8676F5C205D8251202E8D61DD8 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Json.JsonDocument::GetEndIndex(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonDocument_GetEndIndex_mD22C1C79670CE5F34EE33B8D355C9B29ACF69FA3 (JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * __this, int32_t ___index0, bool ___includeEndElement1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::.ctor(System.Text.Json.JsonElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator__ctor_m77111C7F513942BFE9D6EDAD4C7EEC51B1622434 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement::.ctor(System.Text.Json.JsonDocument,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonElement__ctor_m4387857C3F024CEC6197F51B68DC5BA8E97A8947 (JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * __this, JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * ___parent0, int32_t ___idx1, const RuntimeMethod* method);
// System.Text.Json.JsonElement System.Text.Json.JsonElement/ArrayEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ArrayEnumerator_get_Current_m108E0BDAE9E6CB4CECE122F2021C9089E09BB990 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Text.Json.JsonElement/ArrayEnumerator System.Text.Json.JsonElement/ArrayEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayEnumerator_System_Collections_IEnumerable_GetEnumerator_mD01CB54AC963BA3CD4256CC2F2131AD8B3068DEF (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonElement> System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.Generic.IEnumerable<System.Text.Json.JsonElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonElementU3E_GetEnumerator_mC571DB9E26D1491C643BB003DB371B61C822B76C (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator_Dispose_mF348DC81EF018D2650E01E37B7A6A8806102F1E0 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator_Reset_m970D33CE75D5059E96B395BF71868BE29FFC6BE5 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Object System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ArrayEnumerator_System_Collections_IEnumerator_get_Current_m9DFECAB1A14773240A04B56B63A40C89686A65F8 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonElement/ArrayEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayEnumerator_MoveNext_mEA611C60C6FB3B8CB7ACFCE1F0F90093150ABEC2 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::.ctor(System.Text.Json.JsonElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator__ctor_mA6653A3CDA60B5F6709B6E5426D357E77B9A482D (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonProperty::.ctor(System.Text.Json.JsonElement,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonProperty__ctor_mEA1B3D74FA548B7CC960D82E15913C581DF745DC (JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___value0, String_t* ___name1, const RuntimeMethod* method);
// System.Text.Json.JsonProperty System.Text.Json.JsonElement/ObjectEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  ObjectEnumerator_get_Current_mE8604E9BED7F0CEA282E2C97B8B54CD56C1B10DB (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Text.Json.JsonElement/ObjectEnumerator System.Text.Json.JsonElement/ObjectEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectEnumerator_System_Collections_IEnumerable_GetEnumerator_mCB6DF699BA1F90FA868E035159B48B313842895A (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonProperty> System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.Generic.IEnumerable<System.Text.Json.JsonProperty>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonPropertyU3E_GetEnumerator_m5934E7205B3A25D6A38DD80B624A7D472AFB7504 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator_Dispose_mE333B1AF6130EADC239BFB9D40F1BA64D3A48A78 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator_Reset_m6A23236FE8C354E2C119E08B81E31B22FFF4DDD2 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Object System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectEnumerator_System_Collections_IEnumerator_get_Current_m6DC9ADDB9879D9F2182A527F2EEE92E7E7B63FF0 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonElement/ObjectEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectEnumerator_MoveNext_m98D7956A6DB9F9750FE99FC863979AC0EF54663F (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.JsonHelpers/DateTimeParseData::get_OffsetNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParseData_get_OffsetNegative_m8450AC72A81187CAC841C39031610166F8FB4002 (DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m35ED39C8B9201D90292C1803022AEE106B69A295 (Type_t * ___type0, bool ___nonPublic1, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonReader/PartialStateForRollback::.ctor(System.Int64,System.Int64,System.Int32,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialStateForRollback__ctor_m2F1F9AFCAD9561920CC30CAFEE477607907B1CCF (PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * __this, int64_t ___totalConsumed0, int64_t ___bytePositionInLine1, int32_t ___consumed2, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___currentPosition3, const RuntimeMethod* method);
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method);
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method);
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_mADBBB1B327A02C5A125FAF01BF0CAB1B662AC7F3 (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method);
// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::GetStartPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  PartialStateForRollback_GetStartPosition_m6143FDB787E1122DB00813508786C77ED6CC2BE0 (PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Text.Json.Utf8JsonWriter::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Utf8JsonWriter_FlushAsync_mF95F9D0EB1982902C7C6E2A1F626D86EC7350A56 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35>(!!0&,!!1&)
inline void AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891 (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::ResetHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ResetHelper_mF79D2A625F9FA9F21240073119FAC69E7E6B5765 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_mD4AB399A1E02077235B459D35DCF258444B55BD7 (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m4C3CDE4851C1C6765FDEB1D95E0892A010AE406E (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_mF6570C96F6F14A64ABBFE5805CD5971EF87185F1 (U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m23A84E8836D1C29F136ACED56FAB5D9925D64E13 (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mA16313E0A35C7B29FB2627D88176F7E25916B9AB (U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::CheckNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_CheckNotDisposed_m3409E4094212AB3E6195DAAF1F9504DB74E8912A (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Json.Utf8JsonWriter::get_BytesPending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Advance(System.Int32)
inline void ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6 (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	((  void (*) (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 *, int32_t, const RuntimeMethod*))ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6_gshared)(__this, ___count0, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesPending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesPending_mD2A966716344C9340EE41F8B9F2BA827B686E3A0_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenMemory()
inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  (*) (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 *, const RuntimeMethod*))ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD_gshared)(__this, method);
}
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Byte>(System.ReadOnlyMemory`1<!!0>,System.ArraySegment`1<!!0>&)
inline bool MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1 (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ___memory0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___segment1, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC , ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1_gshared)(___memory0, ___segment1, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int64 System.Text.Json.Utf8JsonWriter::get_BytesCommitted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Utf8JsonWriter_get_BytesCommitted_mF9D0019CEC587CA2BD497BDE7876CD722EB10DDF_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Int32 System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenCount()
inline int32_t ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_inline (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 *, const RuntimeMethod*))ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_gshared_inline)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesCommitted(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesCommitted_mF0C5873DB76FEC25BFECD20C1DB0D2448497C13D_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Clear()
inline void ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0 (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 *, const RuntimeMethod*))ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncU3Ed__36_MoveNext_mD217A74FB116AF0FF9AE0FEB7B5925EF77D1444B (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncU3Ed__36_SetStateMachine_mDF34643613F5DCDABFAE7CBCA6CA6C158BAB9AF3 (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.NUInt System.NUInt::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  NUInt_op_Explicit_mD0F4DA19D9AE2D181E3CA043FF3273F408630429 (int32_t ___value0, const RuntimeMethod* method);
// System.NUInt System.NUInt::op_Multiply(System.NUInt,System.NUInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  NUInt_op_Multiply_m9CFC3DD50807644F879A8BA16D1C71EC657D1874_inline (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  ___left0, NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  ___right1, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_mEED9F6E1F130004EF9A292105F99AD6D10B2529C (uint8_t* ___first0, uint8_t* ___second1, NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  ___length2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, const RuntimeMethod*))Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5 (int32_t ___argument0, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_gshared)(___span0, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_gshared)(___span0, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4B1505E62CFA19EE4C92F330E4204B597FC68600 (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mAF34281ECEE2ECA94B4933593CBF984CE961ACB5 (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m163A78956E6FC16CE7D88B1F7667D05802D058C8 (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Text.Json.WriteStack
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_pinvoke(const WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481& unmarshaled, WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_pinvoke& marshaled)
{
	Exception_t* ____previous_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_previous' of type 'WriteStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____previous_2Exception, NULL);
}
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_pinvoke_back(const WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_pinvoke& marshaled, WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481& unmarshaled)
{
	Exception_t* ____previous_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_previous' of type 'WriteStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____previous_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.WriteStack
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_pinvoke_cleanup(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Text.Json.WriteStack
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_com(const WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481& unmarshaled, WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_com& marshaled)
{
	Exception_t* ____previous_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_previous' of type 'WriteStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____previous_2Exception, NULL);
}
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_com_back(const WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_com& marshaled, WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481& unmarshaled)
{
	Exception_t* ____previous_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_previous' of type 'WriteStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____previous_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.WriteStack
IL2CPP_EXTERN_C void WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshal_com_cleanup(WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481_marshaled_com& marshaled)
{
}
// System.Boolean System.Text.Json.WriteStack::get_IsContinuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WriteStack_get_IsContinuation_mAAD21F07540633C8C1D2DED021A0B0DE3C643707 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__continuationCount_0();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool WriteStack_get_IsContinuation_mAAD21F07540633C8C1D2DED021A0B0DE3C643707_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	bool _returnValue;
	_returnValue = WriteStack_get_IsContinuation_mAAD21F07540633C8C1D2DED021A0B0DE3C643707(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.WriteStack::AddCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_0 = __this->get__previous_2();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_1 = (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 *)il2cpp_codegen_object_new(List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79_il2cpp_TypeInfo_var);
		List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832(L_1, /*hidden argument*/List_1__ctor_mD43203E8C73F9F05114381056159EF61B963A832_RuntimeMethod_var);
		__this->set__previous_2(L_1);
	}

IL_0013:
	{
		int32_t L_2 = __this->get__count_1();
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_3 = __this->get__previous_2();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_inline(L_3, /*hidden argument*/List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_5 = __this->get__previous_2();
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_6 = __this->get_Current_3();
		NullCheck(L_5);
		List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0(L_5, L_6, /*hidden argument*/List_1_Add_m197508CF7365D46D158B04E7B46630806C7747C0_RuntimeMethod_var);
		goto IL_0052;
	}

IL_0039:
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_7 = __this->get__previous_2();
		int32_t L_8 = __this->get__count_1();
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_9 = __this->get_Current_3();
		NullCheck(L_7);
		List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), L_9, /*hidden argument*/List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_10 = __this->get__count_1();
		__this->set__count_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27(_thisAdjusted, method);
}
// System.Void System.Text.Json.WriteStack::Initialize(System.Type,System.Text.Json.JsonSerializerOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Initialize_mBC81CA9F7A663D486F256D4E0DCC56DE942499E4 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, bool ___supportContinuation2, const RuntimeMethod* method)
{
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * V_0 = NULL;
	bool V_1 = false;
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = ___options1;
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_2;
		L_2 = JsonSerializerOptions_GetOrAddClass_mCB95ED072976219AEDFF121AAE4A5088AA66CA28(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_3 = __this->get_address_of_Current_3();
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_4 = V_0;
		L_3->set_JsonClassInfo_3(L_4);
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = JsonClassInfo_get_ClassType_m8B7809B6486BA9BB711580BAEBB2BC9914D5123D_inline(L_5, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)24))))
		{
			goto IL_0030;
		}
	}
	{
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_7 = __this->get_address_of_Current_3();
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_8 = V_0;
		NullCheck(L_8);
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_9;
		L_9 = JsonClassInfo_get_PropertyInfoForClassInfo_mF60DA7EF84CA9322ADAD514F488C735716B46AA1_inline(L_8, /*hidden argument*/NULL);
		L_7->set_DeclaredJsonPropertyInfo_1(L_9);
	}

IL_0030:
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_10 = ___options1;
		NullCheck(L_10);
		ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * L_11;
		L_11 = JsonSerializerOptions_get_ReferenceHandler_mED2E78BDB89C782261DB173F86E5CF091DC32174_inline(L_10, /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_13 = ___options1;
		NullCheck(L_13);
		ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * L_14;
		L_14 = JsonSerializerOptions_get_ReferenceHandler_mED2E78BDB89C782261DB173F86E5CF091DC32174_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 * L_15;
		L_15 = VirtFuncInvoker1< ReferenceResolver_t736D852B3CAC0B3DBFB1C088F0BF9FC194A988C1 *, bool >::Invoke(5 /* System.Text.Json.Serialization.ReferenceResolver System.Text.Json.Serialization.ReferenceHandler::CreateResolver(System.Boolean) */, L_14, (bool)1);
		__this->set_ReferenceResolver_5(L_15);
	}

IL_004f:
	{
		bool L_16 = ___supportContinuation2;
		__this->set_SupportContinuation_6(L_16);
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStack_Initialize_mBC81CA9F7A663D486F256D4E0DCC56DE942499E4_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, bool ___supportContinuation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	WriteStack_Initialize_mBC81CA9F7A663D486F256D4E0DCC56DE942499E4(_thisAdjusted, ___type0, ___options1, ___supportContinuation2, method);
}
// System.Void System.Text.Json.WriteStack::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Push_mF74A454C955AD5263445C2AF2F0C6FFFDB057794 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * V_0 = NULL;
	{
		int32_t L_0 = __this->get__continuationCount_0();
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_1 = __this->get__count_1();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		__this->set__count_1(1);
		return;
	}

IL_0018:
	{
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_2 = __this->get_address_of_Current_3();
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_3;
		L_3 = WriteStackFrame_GetPolymorphicJsonPropertyInfo_mC27DC72FD83A8F9EFECC56C0E6091D2C4246F799((WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *)L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_4;
		L_4 = JsonPropertyInfo_get_RuntimeClassInfo_mCE6583F66AEB52F091BA3931F50D7F63C508AACC(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27((WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *)__this, /*hidden argument*/NULL);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_5 = __this->get_address_of_Current_3();
		WriteStackFrame_Reset_m111EF30B6EB90CA0541E8F6122C0DAD77DA20E1B((WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *)L_5, /*hidden argument*/NULL);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_6 = __this->get_address_of_Current_3();
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_7 = V_0;
		L_6->set_JsonClassInfo_3(L_7);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_8 = __this->get_address_of_Current_3();
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_9 = V_0;
		NullCheck(L_9);
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_10;
		L_10 = JsonClassInfo_get_PropertyInfoForClassInfo_mF60DA7EF84CA9322ADAD514F488C735716B46AA1_inline(L_9, /*hidden argument*/NULL);
		L_8->set_DeclaredJsonPropertyInfo_1(L_10);
		return;
	}

IL_0058:
	{
		int32_t L_11 = __this->get__continuationCount_0();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		__this->set__continuationCount_0(0);
		return;
	}

IL_0069:
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_12 = __this->get__previous_2();
		int32_t L_13 = __this->get__count_1();
		NullCheck(L_12);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_14;
		L_14 = List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_inline(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		__this->set_Current_3(L_14);
		int32_t L_15 = __this->get__count_1();
		int32_t L_16 = __this->get__continuationCount_0();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0098;
		}
	}
	{
		__this->set__continuationCount_0(0);
		return;
	}

IL_0098:
	{
		int32_t L_17 = __this->get__count_1();
		__this->set__count_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStack_Push_mF74A454C955AD5263445C2AF2F0C6FFFDB057794_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	WriteStack_Push_mF74A454C955AD5263445C2AF2F0C6FFFDB057794(_thisAdjusted, method);
}
// System.Void System.Text.Json.WriteStack::Pop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_Pop_mAD1369F2F7B7824DE727514FEDEF47FCCD339380 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = ___success0;
		if (L_0)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_1 = __this->get__continuationCount_0();
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_2 = __this->get__count_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		__this->set__continuationCount_0(1);
		__this->set__count_1(1);
		return;
	}

IL_0026:
	{
		WriteStack_AddCurrent_mD2E9F41A58942382AB7CF943610A493184611B27((WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get__count_1();
		__this->set__count_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get__count_1();
		__this->set__continuationCount_0(L_4);
		int32_t L_5 = __this->get__count_1();
		__this->set__count_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_6 = __this->get__previous_2();
		int32_t L_7 = __this->get__count_1();
		NullCheck(L_6);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_8;
		L_8 = List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		__this->set_Current_3(L_8);
		return;
	}

IL_006e:
	{
		int32_t L_9 = __this->get__continuationCount_0();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		return;
	}

IL_0078:
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_10 = __this->get__previous_2();
		int32_t L_11 = __this->get__count_1();
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_12 = __this->get_Current_3();
		NullCheck(L_10);
		List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), L_12, /*hidden argument*/List_1_set_Item_mBA6947B17B7E7BABEB278301AA0913D883A71191_RuntimeMethod_var);
	}

IL_0091:
	{
		int32_t L_13 = __this->get__count_1();
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_14 = __this->get__previous_2();
		int32_t L_15 = __this->get__count_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_0;
		__this->set__count_1(L_16);
		int32_t L_17 = V_0;
		NullCheck(L_14);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_18;
		L_18 = List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_inline(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		__this->set_Current_3(L_18);
	}

IL_00be:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStack_Pop_mAD1369F2F7B7824DE727514FEDEF47FCCD339380_AdjustorThunk (RuntimeObject * __this, bool ___success0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	WriteStack_Pop_mAD1369F2F7B7824DE727514FEDEF47FCCD339380(_thisAdjusted, ___success0, method);
}
// System.String System.Text.Json.WriteStack::PropertyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WriteStack_PropertyPath_m10A29C9BBB1E71BD30691F2B612550537C5AD195 (WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_0, _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get__count_1();
		int32_t L_2 = __this->get__continuationCount_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003a;
	}

IL_0021:
	{
		StringBuilder_t * L_4 = V_0;
		List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * L_5 = __this->get__previous_2();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_7;
		L_7 = List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_RuntimeMethod_var);
		V_3 = L_7;
		WriteStack_U3CPropertyPathU3Eg__AppendStackFrameU7C13_0_m4C08685ED11B0694B35F90C15D63FE4D4A2CB575(L_4, (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *)(&V_3), /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_11 = __this->get__continuationCount_0();
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_13 = __this->get_address_of_Current_3();
		WriteStack_U3CPropertyPathU3Eg__AppendStackFrameU7C13_0_m4C08685ED11B0694B35F90C15D63FE4D4A2CB575(L_12, (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *)L_13, /*hidden argument*/NULL);
	}

IL_0054:
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* WriteStack_PropertyPath_m10A29C9BBB1E71BD30691F2B612550537C5AD195_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 * _thisAdjusted = reinterpret_cast<WriteStack_t899FAD0CE5E911706CE96496A5B6C05AA8B48481 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WriteStack_PropertyPath_m10A29C9BBB1E71BD30691F2B612550537C5AD195(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.WriteStack::<PropertyPath>g__AppendStackFrame|13_0(System.Text.StringBuilder,System.Text.Json.WriteStackFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_U3CPropertyPathU3Eg__AppendStackFrameU7C13_0_m4C08685ED11B0694B35F90C15D63FE4D4A2CB575 (StringBuilder_t * ___sb0, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * ___frame1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * G_B2_0 = NULL;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	PropertyInfo_t * G_B4_0 = NULL;
	PropertyInfo_t * G_B3_0 = NULL;
	{
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_0 = ___frame1;
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_1 = L_0->get_DeclaredJsonPropertyInfo_1();
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		PropertyInfo_t * L_3;
		L_3 = JsonPropertyInfo_get_PropertyInfo_mE528577CE025E0E5D463DBA2917CF1A4A1279967_inline(G_B2_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0019;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B4_0);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, G_B4_0);
		G_B5_0 = L_5;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		String_t* L_6 = V_0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * L_7 = ___frame1;
		String_t* L_8 = L_7->get_JsonPropertyNameAsString_9();
		V_0 = L_8;
	}

IL_0029:
	{
		StringBuilder_t * L_9 = ___sb0;
		String_t* L_10 = V_0;
		WriteStack_U3CPropertyPathU3Eg__AppendPropertyNameU7C13_1_m19252D944F3669835FCFD8A09493E8C3FF08A952(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.Json.WriteStack::<PropertyPath>g__AppendPropertyName|13_1(System.Text.StringBuilder,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStack_U3CPropertyPathU3Eg__AppendPropertyNameU7C13_1_m19252D944F3669835FCFD8A09493E8C3FF08A952 (StringBuilder_t * ___sb0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158765DAD906DF36B8505DD381B603F9A0F345A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___propertyName1;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_1 = ___propertyName1;
		IL2CPP_RUNTIME_CLASS_INIT(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ((ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_StaticFields*)il2cpp_codegen_static_fields_for(ReadStack_tF94D85B4BDBE2BF20B7B446F4C7C0428425621D4_il2cpp_TypeInfo_var))->get_SpecialCharacters_0();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = String_IndexOfAny_m7E9204CF616E533528CC448D05BC8AF97A7D8038(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t * L_4 = ___sb0;
		NullCheck(L_4);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, _stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		String_t* L_7 = ___propertyName1;
		NullCheck(L_6);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, _stringLiteral158765DAD906DF36B8505DD381B603F9A0F345A1, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		StringBuilder_t * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)46), /*hidden argument*/NULL);
		StringBuilder_t * L_13 = ___sb0;
		String_t* L_14 = ___propertyName1;
		NullCheck(L_13);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0043:
	{
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
// Conversion methods for marshalling of: System.Text.Json.WriteStackFrame
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___CollectionEnumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CollectionEnumerator' of type 'WriteStackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CollectionEnumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke_back(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled)
{
	Exception_t* ___CollectionEnumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CollectionEnumerator' of type 'WriteStackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CollectionEnumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.WriteStackFrame
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_pinvoke_cleanup(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.Json.WriteStackFrame
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled)
{
	Exception_t* ___CollectionEnumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CollectionEnumerator' of type 'WriteStackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CollectionEnumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com_back(const WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled, WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B& unmarshaled)
{
	Exception_t* ___CollectionEnumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CollectionEnumerator' of type 'WriteStackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CollectionEnumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.WriteStackFrame
IL2CPP_EXTERN_C void WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshal_com_cleanup(WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B_marshaled_com& marshaled)
{
}
// System.Void System.Text.Json.WriteStackFrame::EndDictionaryElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_EndDictionaryElement_mAA68DA1D655C8DDFC655F0863A7175FFBA651862 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method)
{
	{
		__this->set_PropertyState_7(0);
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStackFrame_EndDictionaryElement_mAA68DA1D655C8DDFC655F0863A7175FFBA651862_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * _thisAdjusted = reinterpret_cast<WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *>(__this + _offset);
	WriteStackFrame_EndDictionaryElement_mAA68DA1D655C8DDFC655F0863A7175FFBA651862(_thisAdjusted, method);
}
// System.Void System.Text.Json.WriteStackFrame::EndProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_EndProperty_m8BE6CE8FFD60AEA86A7BDEE46137C22EC5D91FF5 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method)
{
	{
		__this->set_DeclaredJsonPropertyInfo_1((JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B *)NULL);
		__this->set_JsonPropertyNameAsString_9((String_t*)NULL);
		__this->set_PolymorphicJsonPropertyInfo_11((JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B *)NULL);
		__this->set_PropertyState_7(0);
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStackFrame_EndProperty_m8BE6CE8FFD60AEA86A7BDEE46137C22EC5D91FF5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * _thisAdjusted = reinterpret_cast<WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *>(__this + _offset);
	WriteStackFrame_EndProperty_m8BE6CE8FFD60AEA86A7BDEE46137C22EC5D91FF5(_thisAdjusted, method);
}
// System.Text.Json.JsonPropertyInfo System.Text.Json.WriteStackFrame::GetPolymorphicJsonPropertyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * WriteStackFrame_GetPolymorphicJsonPropertyInfo_mC27DC72FD83A8F9EFECC56C0E6091D2C4246F799 (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method)
{
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * G_B2_0 = NULL;
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * G_B1_0 = NULL;
	{
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_0 = __this->get_PolymorphicJsonPropertyInfo_11();
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
	}
	{
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_2 = __this->get_DeclaredJsonPropertyInfo_1();
		G_B2_0 = L_2;
	}

IL_0010:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * WriteStackFrame_GetPolymorphicJsonPropertyInfo_mC27DC72FD83A8F9EFECC56C0E6091D2C4246F799_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * _thisAdjusted = reinterpret_cast<WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *>(__this + _offset);
	JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * _returnValue;
	_returnValue = WriteStackFrame_GetPolymorphicJsonPropertyInfo_mC27DC72FD83A8F9EFECC56C0E6091D2C4246F799(_thisAdjusted, method);
	return _returnValue;
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.WriteStackFrame::InitializeReEntry(System.Type,System.Text.Json.JsonSerializerOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * WriteStackFrame_InitializeReEntry_m41C09568FE8FA22C607A819CF299837D845263AE (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, String_t* ___propertyName2, const RuntimeMethod* method)
{
	JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * V_0 = NULL;
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = ___options1;
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_2;
		L_2 = JsonSerializerOptions_GetOrAddClass_mCB95ED072976219AEDFF121AAE4A5088AA66CA28(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___propertyName2;
		__this->set_JsonPropertyNameAsString_9(L_3);
		JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * L_4 = V_0;
		NullCheck(L_4);
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_5;
		L_5 = JsonClassInfo_get_PropertyInfoForClassInfo_mF60DA7EF84CA9322ADAD514F488C735716B46AA1_inline(L_4, /*hidden argument*/NULL);
		__this->set_PolymorphicJsonPropertyInfo_11(L_5);
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_6 = __this->get_PolymorphicJsonPropertyInfo_11();
		NullCheck(L_6);
		JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * L_7;
		L_7 = VirtFuncInvoker0< JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * >::Invoke(4 /* System.Text.Json.Serialization.JsonConverter System.Text.Json.JsonPropertyInfo::get_ConverterBase() */, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C  JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * WriteStackFrame_InitializeReEntry_m41C09568FE8FA22C607A819CF299837D845263AE_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options1, String_t* ___propertyName2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * _thisAdjusted = reinterpret_cast<WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *>(__this + _offset);
	JsonConverter_t38B9DA1A64951DA21A82265691571A2059D67740 * _returnValue;
	_returnValue = WriteStackFrame_InitializeReEntry_m41C09568FE8FA22C607A819CF299837D845263AE(_thisAdjusted, ___type0, ___options1, ___propertyName2, method);
	return _returnValue;
}
// System.Void System.Text.Json.WriteStackFrame::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStackFrame_Reset_m111EF30B6EB90CA0541E8F6122C0DAD77DA20E1B (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * __this, const RuntimeMethod* method)
{
	{
		__this->set_CollectionEnumerator_0((RuntimeObject*)NULL);
		__this->set_EnumeratorIndex_8(0);
		__this->set_IgnoreDictionaryKeyPolicy_2((bool)0);
		__this->set_JsonClassInfo_3((JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 *)NULL);
		__this->set_OriginalDepth_4(0);
		__this->set_ProcessedStartToken_5((bool)0);
		__this->set_ProcessedEndToken_6((bool)0);
		WriteStackFrame_EndProperty_m8BE6CE8FFD60AEA86A7BDEE46137C22EC5D91FF5((WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *)__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WriteStackFrame_Reset_m111EF30B6EB90CA0541E8F6122C0DAD77DA20E1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B * _thisAdjusted = reinterpret_cast<WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B *>(__this + _offset);
	WriteStackFrame_Reset_m111EF30B6EB90CA0541E8F6122C0DAD77DA20E1B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.JsonClassInfo/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_mC5EC2E842ED3F547E8363F348B48487019C1D411 (ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object System.Text.Json.JsonClassInfo/ConstructorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_mCF123F73C066C3612F5E45DF3DA68E6D888E1372 (ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Text.Json.JsonClassInfo/ConstructorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorDelegate_BeginInvoke_mA929069257CE80BF958580A6514AC98B185E26E5 (ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Object System.Text.Json.JsonClassInfo/ConstructorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_EndInvoke_mC53F6F69FB9D4C9111DD4D362117C3CBCABD26EA (ConstructorDelegate_t887DF7B0DB9342AFA6CA041811C25FCAC9CC4B26 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD (U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_m87ECB5EF3C7630EB729B587C4397D0B9B2ADF312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF62F3E9AF3E710E4AE6A8F8F04A2D9C2DAFDF2DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * V_1 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
				goto IL_0059;
			}
		}

IL_000a:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_utf8Json_2();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = __this->get_cancellationToken_3();
			Task_1_tCBE5A2ABED266F89E7F1CAC31F882816D804B985 * L_4;
			L_4 = JsonDocument_ReadToEndAsync_m9EA18DE96A957038480FD4442AD783CAB8A004AE(L_2, L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8  L_5;
			L_5 = Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7(L_4, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m0E2430C409BCD2B226EA4AC94C8DA1D8534513C7_RuntimeMethod_var);
			V_5 = L_5;
			ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  L_6;
			L_6 = ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_inline((ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_RuntimeMethod_var);
			V_4 = L_6;
			bool L_7;
			L_7 = ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8((ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m2D230F04D69897DAD535B96F5F4581467DDDE0D8_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0076;
			}
		}

IL_0035:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  L_9 = V_4;
			__this->set_U3CU3Eu__1_5(L_9);
			AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_m87ECB5EF3C7630EB729B587C4397D0B9B2ADF312((AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *)L_10, (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *)(&V_4), (U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C_TisU3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2_m87ECB5EF3C7630EB729B587C4397D0B9B2ADF312_RuntimeMethod_var);
			goto IL_00f6;
		}

IL_0059:
		{
			ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  L_11 = __this->get_U3CU3Eu__1_5();
			V_4 = L_11;
			ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C * L_12 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_12, sizeof(ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0076:
		{
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_14;
			L_14 = ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6((ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC723D4CAC0FFD2CB0AF9749A899E22F31CE1B8F6_RuntimeMethod_var);
			V_3 = L_14;
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_15 = V_3;
			V_2 = L_15;
		}

IL_0080:
		try
		{ // begin try (depth: 2)
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
			Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_17;
			L_17 = MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549(L_16, /*hidden argument*/MemoryExtensions_AsMemory_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m53DF6DFFED11BE41B0B9F2659942171514EFF549_RuntimeMethod_var);
			ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_18;
			L_18 = Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A(L_17, /*hidden argument*/Memory_1_op_Implicit_mAAD9EF725587A874A7D8DF1C096FFEBC670B032A_RuntimeMethod_var);
			JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB * L_19 = __this->get_address_of_options_4();
			JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  L_20;
			L_20 = JsonDocumentOptions_GetReaderOptions_m5392839E273FC8EAFFE1B8BE9002F7D39253C288((JsonDocumentOptions_t788E4AA75E30A27BE20173E832E12153CA7D6CBB *)L_19, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_22;
			L_22 = JsonDocument_Parse_m0BA06A1D6866A3F320BF7B0776700A095E6501C0(L_18, L_20, L_21, /*hidden argument*/NULL);
			V_1 = L_22;
			goto IL_00e2;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a5;
			}
			throw e;
		}

CATCH_00a5:
		{ // begin catch(System.Object)
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_23 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var)));
			Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_24;
			L_24 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_inline(L_23, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_RuntimeMethod_var)));
			V_6 = L_24;
			Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_6), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808_RuntimeMethod_var)));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var)));
			ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_25;
			L_25 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var)));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var)));
			NullCheck(L_25);
			VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_25, L_26, (bool)0);
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD_RuntimeMethod_var)));
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m7D803A35CEEC0748CEE0EA52F368409988CA4BF3((AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *)L_27, L_28, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m7D803A35CEEC0748CEE0EA52F368409988CA4BF3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f6;
	} // end catch (depth: 1)

IL_00e2:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_30 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF62F3E9AF3E710E4AE6A8F8F04A2D9C2DAFDF2DE((AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *)L_29, L_30, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mF62F3E9AF3E710E4AE6A8F8F04A2D9C2DAFDF2DE_RuntimeMethod_var);
	}

IL_00f6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * _thisAdjusted = reinterpret_cast<U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 *>(__this + _offset);
	U3CParseAsyncCoreU3Ed__57_MoveNext_mA1F17DDA6126A0721901F9BE227144532FF1C4CD(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/<ParseAsyncCore>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncCoreU3Ed__57_SetStateMachine_mC5FC7DF12D11A98051F722D5D99389EB398326DC (U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m78B0D7EA1EBE2491BD0407CAAEE13C0C64D1B249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m78B0D7EA1EBE2491BD0407CAAEE13C0C64D1B249((AsyncTaskMethodBuilder_1_t4804D1303852CEEA75A0EC9C8B85E2D086B712DB *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m78B0D7EA1EBE2491BD0407CAAEE13C0C64D1B249_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CParseAsyncCoreU3Ed__57_SetStateMachine_mC5FC7DF12D11A98051F722D5D99389EB398326DC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 * _thisAdjusted = reinterpret_cast<U3CParseAsyncCoreU3Ed__57_t38FCAB69BEB42D2683C27A53EB214ED8902877C2 *>(__this + _offset);
	U3CParseAsyncCoreU3Ed__57_SetStateMachine_mC5FC7DF12D11A98051F722D5D99389EB398326DC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6 (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  V_7;
	memset((&V_7), 0, sizeof(V_7));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	int32_t V_9 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0019;
			}
		}

IL_000b:
		{
			__this->set_U3CwrittenU3E5__2_4(0);
			__this->set_U3CrentedU3E5__3_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		}

IL_0019:
		{
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0101;
				}
			}

IL_0020:
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_023d;
				}
			}

IL_0027:
			{
				ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
				L_4 = JsonConstants_get_Utf8Bom_mF2BA89800E7E0F2630A553618DC4A0DE5652EDED(/*hidden argument*/NULL);
				V_3 = L_4;
				int32_t L_5;
				L_5 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&V_3), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
				__this->set_U3Cutf8BomLengthU3E5__4_6(L_5);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get_stream_2();
				NullCheck(L_6);
				bool L_7;
				L_7 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_6);
				if (!L_7)
				{
					goto IL_0084;
				}
			}

IL_0047:
			{
				int32_t L_8 = __this->get_U3Cutf8BomLengthU3E5__4_6();
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = __this->get_stream_2();
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_9);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = __this->get_stream_2();
				NullCheck(L_11);
				int64_t L_12;
				L_12 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				int64_t L_13;
				L_13 = Math_Max_m9CDC0B9CEA956A30F9B6BDA815DA307169C6E1C8(((int64_t)((int64_t)L_8)), ((int64_t)il2cpp_codegen_subtract((int64_t)L_10, (int64_t)L_12)), /*hidden argument*/NULL);
				V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)((int64_t)((int64_t)1))));
				IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
				ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_14;
				L_14 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
				int64_t L_15 = V_4;
				if ((int64_t)(L_15) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6_RuntimeMethod_var);
				NullCheck(L_14);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
				L_16 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_14, ((int32_t)((int32_t)L_15)));
				__this->set_U3CrentedU3E5__3_5(L_16);
				goto IL_0099;
			}

IL_0084:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
				ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_17;
				L_17 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
				NullCheck(L_17);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
				L_18 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_17, ((int32_t)4096));
				__this->set_U3CrentedU3E5__3_5(L_18);
			}

IL_0099:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = __this->get_stream_2();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_U3CrentedU3E5__3_5();
				int32_t L_21 = __this->get_U3CwrittenU3E5__2_4();
				int32_t L_22 = __this->get_U3Cutf8BomLengthU3E5__4_6();
				int32_t L_23 = __this->get_U3CwrittenU3E5__2_4();
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = __this->get_cancellationToken_3();
				NullCheck(L_19);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_25;
				L_25 = VirtFuncInvoker4< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(23 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_19, L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), L_24);
				NullCheck(L_25);
				ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_26;
				L_26 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_25, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
				V_7 = L_26;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_27;
				L_27 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_7), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
				V_6 = L_27;
				bool L_28;
				L_28 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_011e;
				}
			}

IL_00dd:
			{
				int32_t L_29 = 0;
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_30 = V_6;
				__this->set_U3CU3Eu__1_7(L_30);
				AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506((AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *)L_31, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_RuntimeMethod_var);
				goto IL_0302;
			}

IL_0101:
			{
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_32 = __this->get_U3CU3Eu__1_7();
				V_6 = L_32;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_33 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_33, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->set_U3CU3E1__state_0(L_34);
			}

IL_011e:
			{
				int32_t L_35;
				L_35 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
				V_5 = L_35;
				int32_t L_36 = V_5;
				V_2 = L_36;
				int32_t L_37 = __this->get_U3CwrittenU3E5__2_4();
				int32_t L_38 = V_2;
				__this->set_U3CwrittenU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
				int32_t L_39 = V_2;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_014d;
				}
			}

IL_013c:
			{
				int32_t L_40 = __this->get_U3CwrittenU3E5__2_4();
				int32_t L_41 = __this->get_U3Cutf8BomLengthU3E5__4_6();
				if ((((int32_t)L_40) < ((int32_t)L_41)))
				{
					goto IL_0099;
				}
			}

IL_014d:
			{
				int32_t L_42 = __this->get_U3CwrittenU3E5__2_4();
				int32_t L_43 = __this->get_U3Cutf8BomLengthU3E5__4_6();
				if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
				{
					goto IL_0185;
				}
			}

IL_015b:
			{
				ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_44;
				L_44 = JsonConstants_get_Utf8Bom_mF2BA89800E7E0F2630A553618DC4A0DE5652EDED(/*hidden argument*/NULL);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_U3CrentedU3E5__3_5();
				int32_t L_46 = __this->get_U3Cutf8BomLengthU3E5__4_6();
				IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
				Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_47;
				L_47 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_45, 0, L_46, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
				ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_48;
				L_48 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_47, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
				bool L_49;
				L_49 = MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_inline(L_44, L_48, /*hidden argument*/MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0185;
				}
			}

IL_017e:
			{
				__this->set_U3CwrittenU3E5__2_4(0);
			}

IL_0185:
			{
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = __this->get_U3CrentedU3E5__3_5();
				NullCheck(L_50);
				int32_t L_51 = __this->get_U3CwrittenU3E5__2_4();
				if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))) == ((uint32_t)L_51))))
				{
					goto IL_01d3;
				}
			}

IL_0195:
			{
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = __this->get_U3CrentedU3E5__3_5();
				V_8 = L_52;
				IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
				ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_53;
				L_53 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_8;
				NullCheck(L_54);
				NullCheck(L_53);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55;
				L_55 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_53, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))), (int32_t)2)));
				__this->set_U3CrentedU3E5__3_5(L_55);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = V_8;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = __this->get_U3CrentedU3E5__3_5();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_8;
				NullCheck(L_58);
				Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_56, 0, (RuntimeArray *)(RuntimeArray *)L_57, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))), /*hidden argument*/NULL);
				ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_59;
				L_59 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = V_8;
				NullCheck(L_59);
				VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_59, L_60, (bool)1);
			}

IL_01d3:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_61 = __this->get_stream_2();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = __this->get_U3CrentedU3E5__3_5();
				int32_t L_63 = __this->get_U3CwrittenU3E5__2_4();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = __this->get_U3CrentedU3E5__3_5();
				NullCheck(L_64);
				int32_t L_65 = __this->get_U3CwrittenU3E5__2_4();
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_66 = __this->get_cancellationToken_3();
				NullCheck(L_61);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_67;
				L_67 = VirtFuncInvoker4< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(23 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_61, L_62, L_63, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))), (int32_t)L_65)), L_66);
				NullCheck(L_67);
				ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_68;
				L_68 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_67, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
				V_7 = L_68;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_69;
				L_69 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_7), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
				V_10 = L_69;
				bool L_70;
				L_70 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_10), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_025a;
				}
			}

IL_0219:
			{
				int32_t L_71 = 1;
				V_0 = L_71;
				__this->set_U3CU3E1__state_0(L_71);
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_72 = V_10;
				__this->set_U3CU3Eu__1_7(L_72);
				AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * L_73 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506((AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *)L_73, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_10), (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6_mEC2CF51DE307474D424FD9E26C51F32C8A848506_RuntimeMethod_var);
				goto IL_0302;
			}

IL_023d:
			{
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_74 = __this->get_U3CU3Eu__1_7();
				V_10 = L_74;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_75 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_75, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->set_U3CU3E1__state_0(L_76);
			}

IL_025a:
			{
				int32_t L_77;
				L_77 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_10), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
				V_9 = L_77;
				int32_t L_78 = V_9;
				V_2 = L_78;
				int32_t L_79 = __this->get_U3CwrittenU3E5__2_4();
				int32_t L_80 = V_2;
				__this->set_U3CwrittenU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80)));
				int32_t L_81 = V_2;
				if ((((int32_t)L_81) > ((int32_t)0)))
				{
					goto IL_0185;
				}
			}

IL_027b:
			{
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = __this->get_U3CrentedU3E5__3_5();
				int32_t L_83 = __this->get_U3CwrittenU3E5__2_4();
				ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_84;
				memset((&L_84), 0, sizeof(L_84));
				ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_84), L_82, 0, L_83, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
				V_1 = L_84;
				goto IL_02e7;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0290;
			}
			throw e;
		}

CATCH_0290:
		{ // begin catch(System.Object)
			{
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = __this->get_U3CrentedU3E5__3_5();
				if (!L_85)
				{
					goto IL_02c5;
				}
			}

IL_0299:
			{
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = __this->get_U3CrentedU3E5__3_5();
				int32_t L_87 = __this->get_U3CwrittenU3E5__2_4();
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var)));
				Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_88;
				L_88 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_86, 0, L_87, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var)));
				V_11 = L_88;
				Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_11), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Span_1_Clear_m81829595FDD2E174E0581F7A07FBB41585875808_RuntimeMethod_var)));
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var)));
				ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_89;
				L_89 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var)));
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = __this->get_U3CrentedU3E5__3_5();
				NullCheck(L_89);
				VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_89, L_90, (bool)0);
			}

IL_02c5:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02c7;
		}
		throw e;
	}

CATCH_02c7:
	{ // begin catch(System.Exception)
		V_12 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrentedU3E5__3_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * L_91 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_92 = V_12;
		AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD((AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *)L_91, L_92, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9AEB12146F99A1F4E8F8992A49A6C3BC57AB5EBD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0302;
	} // end catch (depth: 1)

IL_02e7:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrentedU3E5__3_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * L_93 = __this->get_address_of_U3CU3Et__builder_1();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_94 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819((AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *)L_93, L_94, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB6426AE79AFDC2DCFDFD3F2CB765EA12494D7819_RuntimeMethod_var);
	}

IL_0302:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * _thisAdjusted = reinterpret_cast<U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 *>(__this + _offset);
	U3CReadToEndAsyncU3Ed__65_MoveNext_m5BE6B9A0E99D1ADA1176F6E88555EB0A311298C6(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/<ReadToEndAsync>d__65::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__65_SetStateMachine_m0D9CA0B295B40DF7B513E7E1540557AC9F85F947 (U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25((AsyncTaskMethodBuilder_1_t8E9DBAAF78B292FA43800E4E4E522B546AF081F4 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m57FFFD41160014C16C21B3A3F4B9902B587CAE25_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToEndAsyncU3Ed__65_SetStateMachine_m0D9CA0B295B40DF7B513E7E1540557AC9F85F947_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 * _thisAdjusted = reinterpret_cast<U3CReadToEndAsyncU3Ed__65_t5E9F867A52B0A7741293A791D1E61CFD247B75F6 *>(__this + _offset);
	U3CReadToEndAsyncU3Ed__65_SetStateMachine_m0D9CA0B295B40DF7B513E7E1540557AC9F85F947(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbRow_get_Location_mD05CE33A25EF42F5AD31F70837C9DB0EE8FB8544 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__location_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DbRow_get_Location_mD05CE33A25EF42F5AD31F70837C9DB0EE8FB8544_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DbRow_get_Location_mD05CE33A25EF42F5AD31F70837C9DB0EE8FB8544_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_SizeOrLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbRow_get_SizeOrLength_mD79871044B666EF009CD4E4E0C0A678EFBB22383 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__sizeOrLengthUnion_2();
		return ((int32_t)((int32_t)L_0&(int32_t)((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C  int32_t DbRow_get_SizeOrLength_mD79871044B666EF009CD4E4E0C0A678EFBB22383_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DbRow_get_SizeOrLength_mD79871044B666EF009CD4E4E0C0A678EFBB22383(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_IsUnknownSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_IsUnknownSize_mF7A4FD87A29952C63456834BDC53D0F01E60FEC5 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__sizeOrLengthUnion_2();
		return (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DbRow_get_IsUnknownSize_mF7A4FD87A29952C63456834BDC53D0F01E60FEC5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	bool _returnValue;
	_returnValue = DbRow_get_IsUnknownSize_mF7A4FD87A29952C63456834BDC53D0F01E60FEC5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_HasComplexChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_HasComplexChildren_mC01D85B8D710B20CE8339E10B17AED3E4FF9BE27 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__sizeOrLengthUnion_2();
		return (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DbRow_get_HasComplexChildren_mC01D85B8D710B20CE8339E10B17AED3E4FF9BE27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	bool _returnValue;
	_returnValue = DbRow_get_HasComplexChildren_mC01D85B8D710B20CE8339E10B17AED3E4FF9BE27(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Text.Json.JsonDocument/DbRow::get_NumberOfRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbRow_get_NumberOfRows_mC1C32D2C5396C3530CDE3FE9CA4BDA210FCD4255 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__numberOfRowsAndTypeUnion_3();
		return ((int32_t)((int32_t)L_0&(int32_t)((int32_t)268435455)));
	}
}
IL2CPP_EXTERN_C  int32_t DbRow_get_NumberOfRows_mC1C32D2C5396C3530CDE3FE9CA4BDA210FCD4255_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DbRow_get_NumberOfRows_mC1C32D2C5396C3530CDE3FE9CA4BDA210FCD4255(_thisAdjusted, method);
	return _returnValue;
}
// System.Text.Json.JsonTokenType System.Text.Json.JsonDocument/DbRow::get_TokenType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__numberOfRowsAndTypeUnion_3();
		return (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_0>>((int32_t)28))))));
	}
}
IL2CPP_EXTERN_C  uint8_t DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonDocument/DbRow::.ctor(System.Text.Json.JsonTokenType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbRow__ctor_m8D9239E25D5BEB578BFE21906B2E415CEF5A4204 (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, uint8_t ___jsonTokenType0, int32_t ___location1, int32_t ___sizeOrLength2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___location1;
		__this->set__location_1(L_0);
		int32_t L_1 = ___sizeOrLength2;
		__this->set__sizeOrLengthUnion_2(L_1);
		uint8_t L_2 = ___jsonTokenType0;
		__this->set__numberOfRowsAndTypeUnion_3(((int32_t)((int32_t)L_2<<(int32_t)((int32_t)28))));
		return;
	}
}
IL2CPP_EXTERN_C  void DbRow__ctor_m8D9239E25D5BEB578BFE21906B2E415CEF5A4204_AdjustorThunk (RuntimeObject * __this, uint8_t ___jsonTokenType0, int32_t ___location1, int32_t ___sizeOrLength2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	DbRow__ctor_m8D9239E25D5BEB578BFE21906B2E415CEF5A4204(_thisAdjusted, ___jsonTokenType0, ___location1, ___sizeOrLength2, method);
}
// System.Boolean System.Text.Json.JsonDocument/DbRow::get_IsSimpleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbRow_get_IsSimpleValue_m521915053BFCB1988622B26725C80B4284EB19AF (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0;
		L_0 = DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078((DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DbRow_get_IsSimpleValue_m521915053BFCB1988622B26725C80B4284EB19AF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * _thisAdjusted = reinterpret_cast<DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *>(__this + _offset);
	bool _returnValue;
	_returnValue = DbRow_get_IsSimpleValue_m521915053BFCB1988622B26725C80B4284EB19AF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Text.Json.JsonDocument/MetadataDb
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_pinvoke(const MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6& unmarshaled, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CLengthU3Ek__BackingField_2 = unmarshaled.get_U3CLengthU3Ek__BackingField_2();
	marshaled.____data_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get__data_3());
}
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_pinvoke_back(const MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_pinvoke& marshaled, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_0 = marshaled.___U3CLengthU3Ek__BackingField_2;
	unmarshaled.set_U3CLengthU3Ek__BackingField_2(unmarshaled_U3CLengthU3Ek__BackingField_temp_0);
	unmarshaled.set__data_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.____data_3));
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonDocument/MetadataDb
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_pinvoke_cleanup(MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data_3);
	marshaled.____data_3 = NULL;
}
// Conversion methods for marshalling of: System.Text.Json.JsonDocument/MetadataDb
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_com(const MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6& unmarshaled, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_com& marshaled)
{
	marshaled.___U3CLengthU3Ek__BackingField_2 = unmarshaled.get_U3CLengthU3Ek__BackingField_2();
	marshaled.____data_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get__data_3());
}
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_com_back(const MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_com& marshaled, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_0 = marshaled.___U3CLengthU3Ek__BackingField_2;
	unmarshaled.set_U3CLengthU3Ek__BackingField_2(unmarshaled_U3CLengthU3Ek__BackingField_temp_0);
	unmarshaled.set__data_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.____data_3));
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonDocument/MetadataDb
IL2CPP_EXTERN_C void MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshal_com_cleanup(MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data_3);
	marshaled.____data_3 = NULL;
}
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m4E19822E3CB7A90F122D934C082FB30BA3A98EFD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___completeDb0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___completeDb0;
		__this->set__data_3(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___completeDb0;
		NullCheck(L_1);
		MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb__ctor_m4E19822E3CB7A90F122D934C082FB30BA3A98EFD_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___completeDb0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb__ctor_m4E19822E3CB7A90F122D934C082FB30BA3A98EFD(_thisAdjusted, ___completeDb0, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m1124B085E119A0D26CDE4862E8F3F718F27287AA (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___payloadLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___payloadLength0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_0));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1048576))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)4194304))))
		{
			goto IL_001b;
		}
	}
	{
		V_0 = ((int32_t)1048576);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_3;
		L_3 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_3, L_4);
		__this->set__data_3(L_5);
		MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, 0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb__ctor_m1124B085E119A0D26CDE4862E8F3F718F27287AA_AdjustorThunk (RuntimeObject * __this, int32_t ___payloadLength0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb__ctor_m1124B085E119A0D26CDE4862E8F3F718F27287AA(_thisAdjusted, ___payloadLength0, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::.ctor(System.Text.Json.JsonDocument/MetadataDb,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb__ctor_m3574B9EAC8C00B94C0FC02E0DA839B142B088F1D (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  ___source0, bool ___useArrayPools1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)(&___source0), /*hidden argument*/NULL);
		MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___useArrayPools1;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_2;
		L_2 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		int32_t L_3;
		L_3 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_2, L_3);
		__this->set__data_3(L_4);
		MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  L_5 = ___source0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5.get__data_3();
		int32_t L_7;
		L_7 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_8;
		L_8 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_6, 0, L_7, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get__data_3();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_10;
		L_10 = Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D(L_9, /*hidden argument*/Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var);
		Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), L_10, /*hidden argument*/Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_RuntimeMethod_var);
		return;
	}

IL_004c:
	{
		MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  L_11 = ___source0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = L_11.get__data_3();
		int32_t L_13;
		L_13 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_14;
		L_14 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_12, 0, L_13, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		V_0 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), /*hidden argument*/Span_1_ToArray_m564CAA1E20DD850AE8E747AC9FE14B718339B0D9_RuntimeMethod_var);
		__this->set__data_3(L_15);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb__ctor_m3574B9EAC8C00B94C0FC02E0DA839B142B088F1D_AdjustorThunk (RuntimeObject * __this, MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  ___source0, bool ___useArrayPools1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb__ctor_m3574B9EAC8C00B94C0FC02E0DA839B142B088F1D(_thisAdjusted, ___source0, ___useArrayPools1, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Dispose_m9ED516C69EEC358A2D9C108EC50E955D1ACF23DD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = __this->get_address_of__data_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = InterlockedExchangeImpl<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_3;
		L_3 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_3, L_4, (bool)0);
		MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, 0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_Dispose_m9ED516C69EEC358A2D9C108EC50E955D1ACF23DD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_Dispose_m9ED516C69EEC358A2D9C108EC50E955D1ACF23DD(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::TrimExcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_TrimExcess_m4D8D56BF7EB8D76DEA0982D4B89C9B6AA66B7E95 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__data_3();
		NullCheck(L_1);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)2)))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_2;
		L_2 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		int32_t L_3;
		L_3 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_2, L_3);
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		V_1 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get__data_3();
		NullCheck(L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get__data_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		int32_t L_10;
		L_10 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get__data_3();
		V_1 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		__this->set__data_3(L_12);
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_13;
		L_13 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_13, L_14, (bool)0);
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_TrimExcess_m4D8D56BF7EB8D76DEA0982D4B89C9B6AA66B7E95_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_TrimExcess_m4D8D56BF7EB8D76DEA0982D4B89C9B6AA66B7E95(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::Append(System.Text.Json.JsonTokenType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Append_m0B6B5FB723881387386991848D48D81FABA9C411 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___tokenType0, int32_t ___startLocation1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__data_3();
		NullCheck(L_1);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)((int32_t)12))))))
		{
			goto IL_0019;
		}
	}
	{
		MetadataDb_Enlarge_m634C0BAA0125BDD18015A8756F78C7E006577EAF((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		uint8_t L_2 = ___tokenType0;
		int32_t L_3 = ___startLocation1;
		int32_t L_4 = ___length2;
		DbRow__ctor_m8D9239E25D5BEB578BFE21906B2E415CEF5A4204((DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)(&V_0), L_2, L_3, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__data_3();
		int32_t L_6;
		L_6 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_7;
		L_7 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_5, L_6, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_inline(L_7, (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)(&V_0), /*hidden argument*/MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_RuntimeMethod_var);
		int32_t L_8;
		L_8 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)12))), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_Append_m0B6B5FB723881387386991848D48D81FABA9C411_AdjustorThunk (RuntimeObject * __this, uint8_t ___tokenType0, int32_t ___startLocation1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_Append_m0B6B5FB723881387386991848D48D81FABA9C411(_thisAdjusted, ___tokenType0, ___startLocation1, ___length2, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::Enlarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_Enlarge_m634C0BAA0125BDD18015A8756F78C7E006577EAF (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_1;
		L_1 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_2);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)2)));
		__this->set__data_3(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__data_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_4, 0, (RuntimeArray *)(RuntimeArray *)L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_7;
		L_7 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_7, L_8, (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_Enlarge_m634C0BAA0125BDD18015A8756F78C7E006577EAF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_Enlarge_m634C0BAA0125BDD18015A8756F78C7E006577EAF(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::AssertValidIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_AssertValidIndex_m4086DEF25350B632D6C52D9C4664FA06AB5F03F3 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_AssertValidIndex_m4086DEF25350B632D6C52D9C4664FA06AB5F03F3_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_AssertValidIndex_m4086DEF25350B632D6C52D9C4664FA06AB5F03F3(_thisAdjusted, ___index0, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetLength_m9AA0ADBBED9EBDA848E0BE187B8BF307002FE183 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4)), /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		V_0 = L_2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_3 = V_0;
		MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_inline(L_3, (int32_t*)(&___length1), /*hidden argument*/MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_SetLength_m9AA0ADBBED9EBDA848E0BE187B8BF307002FE183_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_SetLength_m9AA0ADBBED9EBDA848E0BE187B8BF307002FE183(_thisAdjusted, ___index0, ___length1, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetNumberOfRows(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetNumberOfRows_mECA139C5AE294C9FAEA39AF8F6BE4A26FF0E9B6E (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, int32_t ___numberOfRows1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)8)), /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		V_0 = L_2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_3 = V_0;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_3, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		int32_t L_5;
		L_5 = MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_inline(L_4, /*hidden argument*/MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_RuntimeMethod_var);
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = ___numberOfRows1;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)-268435456)))|(int32_t)L_7));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_8 = V_0;
		MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_inline(L_8, (int32_t*)(&V_2), /*hidden argument*/MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_SetNumberOfRows_mECA139C5AE294C9FAEA39AF8F6BE4A26FF0E9B6E_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, int32_t ___numberOfRows1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_SetNumberOfRows_mECA139C5AE294C9FAEA39AF8F6BE4A26FF0E9B6E(_thisAdjusted, ___index0, ___numberOfRows1, method);
}
// System.Void System.Text.Json.JsonDocument/MetadataDb::SetHasComplexChildren(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataDb_SetHasComplexChildren_mC2E8DFE3C0FD745BCBEC71B1FDFB2E17C448E83E (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4)), /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		V_0 = L_2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_3 = V_0;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_3, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		int32_t L_5;
		L_5 = MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_inline(L_4, /*hidden argument*/MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_RuntimeMethod_var);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648LL)));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_7 = V_0;
		MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_inline(L_7, (int32_t*)(&V_2), /*hidden argument*/MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void MetadataDb_SetHasComplexChildren_mC2E8DFE3C0FD745BCBEC71B1FDFB2E17C448E83E_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_SetHasComplexChildren_mC2E8DFE3C0FD745BCBEC71B1FDFB2E17C448E83E(_thisAdjusted, ___index0, method);
}
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::FindIndexOfFirstUnsetSizeOrLength(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataDb_FindIndexOfFirstUnsetSizeOrLength_mCC53A152E29E81DB6BA8756756022C7C7F3EDFA9 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___lookupType0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___lookupType0;
		int32_t L_1;
		L_1 = MetadataDb_FindOpenElement_m81B711CEE279A13D1122534C50298657C959A3AD((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MetadataDb_FindIndexOfFirstUnsetSizeOrLength_mCC53A152E29E81DB6BA8756756022C7C7F3EDFA9_AdjustorThunk (RuntimeObject * __this, uint8_t ___lookupType0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetadataDb_FindIndexOfFirstUnsetSizeOrLength_mCC53A152E29E81DB6BA8756756022C7C7F3EDFA9(_thisAdjusted, ___lookupType0, method);
	return _returnValue;
}
// System.Int32 System.Text.Json.JsonDocument/MetadataDb::FindOpenElement(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataDb_FindOpenElement_m81B711CEE279A13D1122534C50298657C959A3AD (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, uint8_t ___lookupType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1;
		L_1 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_0, 0, L_1, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3;
		L_3 = MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12)));
		goto IL_004c;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5;
		L_5 = Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), L_4, /*hidden argument*/Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_RuntimeMethod_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_6;
		L_6 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_5, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  L_7;
		L_7 = MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_inline(L_6, /*hidden argument*/MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8;
		L_8 = DbRow_get_IsUnknownSize_mF7A4FD87A29952C63456834BDC53D0F01E60FEC5((DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)(&V_2), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		uint8_t L_9;
		L_9 = DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078((DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)(&V_2), /*hidden argument*/NULL);
		uint8_t L_10 = ___lookupType0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_0047:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)12)));
	}

IL_004c:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t MetadataDb_FindOpenElement_m81B711CEE279A13D1122534C50298657C959A3AD_AdjustorThunk (RuntimeObject * __this, uint8_t ___lookupType0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetadataDb_FindOpenElement_m81B711CEE279A13D1122534C50298657C959A3AD(_thisAdjusted, ___lookupType0, method);
	return _returnValue;
}
// System.Text.Json.JsonDocument/DbRow System.Text.Json.JsonDocument/MetadataDb::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MetadataDb_Get_m1351D614C17271EFAC8E55439800909928B2ECB0 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, L_1, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_3;
		L_3 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_2, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  L_4;
		L_4 = MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_inline(L_3, /*hidden argument*/MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_EXTERN_C  DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MetadataDb_Get_m1351D614C17271EFAC8E55439800909928B2ECB0_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  _returnValue;
	_returnValue = MetadataDb_Get_m1351D614C17271EFAC8E55439800909928B2ECB0(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Text.Json.JsonTokenType System.Text.Json.JsonDocument/MetadataDb::GetJsonTokenType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MetadataDb_GetJsonTokenType_m9A58764A46434A07E500B03CDBE2ABCDECB33FC2 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)8)), /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_3;
		L_3 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_2, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		uint32_t L_4;
		L_4 = MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_inline(L_3, /*hidden argument*/MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_RuntimeMethod_var);
		V_0 = L_4;
		uint32_t L_5 = V_0;
		return (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)28))))));
	}
}
IL2CPP_EXTERN_C  uint8_t MetadataDb_GetJsonTokenType_m9A58764A46434A07E500B03CDBE2ABCDECB33FC2_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = MetadataDb_GetJsonTokenType_m9A58764A46434A07E500B03CDBE2ABCDECB33FC2(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Text.Json.JsonDocument/MetadataDb System.Text.Json.JsonDocument/MetadataDb::CopySegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  MetadataDb_CopySegment_m002B7AF25A6BC7719DD1E1CEA37265C1AC106CE6 (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___startIndex0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___startIndex0;
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  L_1;
		L_1 = MetadataDb_Get_m1351D614C17271EFAC8E55439800909928B2ECB0((MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *)__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___endIndex1;
		int32_t L_3 = ___startIndex0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get__data_3();
		int32_t L_7 = ___startIndex0;
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_9;
		L_9 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_inline(L_6, L_7, L_8, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_RuntimeMethod_var);
		V_5 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_11;
		L_11 = Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D(L_10, /*hidden argument*/Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var);
		Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_5), L_11, /*hidden argument*/Span_1_CopyTo_mA1C1E85AD2DB574BFAB3D6B88398A21154B1EC44_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_13;
		L_13 = Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D(L_12, /*hidden argument*/Span_1_op_Implicit_mF0E9B1DC2DB8B0A0702779AE110153D3D38DE50D_RuntimeMethod_var);
		Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E  L_14;
		L_14 = MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835(L_13, /*hidden argument*/MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8A7F8D00263BBDAFDEF76AE02B6428CF93ABE835_RuntimeMethod_var);
		V_3 = L_14;
		int32_t* L_15;
		L_15 = Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_inline((Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E *)(&V_3), 0, /*hidden argument*/Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_RuntimeMethod_var);
		int32_t L_16 = *((int32_t*)L_15);
		V_4 = L_16;
		uint8_t L_17;
		L_17 = DbRow_get_TokenType_m134C70AE25BC5BB49406A2622FEB092A2D6E0078((DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)7))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_6 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)12)))/(int32_t)4));
		goto IL_0075;
	}

IL_0060:
	{
		int32_t L_20 = V_6;
		int32_t* L_21;
		L_21 = Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_inline((Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E *)(&V_3), L_20, /*hidden argument*/Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_RuntimeMethod_var);
		int32_t* L_22 = L_21;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = V_4;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24));
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)3));
	}

IL_0075:
	{
		int32_t L_26 = V_6;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_2;
		MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  L_28;
		memset((&L_28), 0, sizeof(L_28));
		MetadataDb__ctor_m4E19822E3CB7A90F122D934C082FB30BA3A98EFD((&L_28), L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C  MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  MetadataDb_CopySegment_m002B7AF25A6BC7719DD1E1CEA37265C1AC106CE6_AdjustorThunk (RuntimeObject * __this, int32_t ___startIndex0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * _thisAdjusted = reinterpret_cast<MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 *>(__this + _offset);
	MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6  _returnValue;
	_returnValue = MetadataDb_CopySegment_m002B7AF25A6BC7719DD1E1CEA37265C1AC106CE6(_thisAdjusted, ___startIndex0, ___endIndex1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.JsonDocument/StackRow::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRow__ctor_m7B93B861827FE58530539F69E2FC22007D89DCC7 (StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * __this, int32_t ___sizeOrLength0, int32_t ___numberOfRows1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sizeOrLength0;
		__this->set_SizeOrLength_1(L_0);
		int32_t L_1 = ___numberOfRows1;
		__this->set_NumberOfRows_2(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void StackRow__ctor_m7B93B861827FE58530539F69E2FC22007D89DCC7_AdjustorThunk (RuntimeObject * __this, int32_t ___sizeOrLength0, int32_t ___numberOfRows1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * _thisAdjusted = reinterpret_cast<StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 *>(__this + _offset);
	StackRow__ctor_m7B93B861827FE58530539F69E2FC22007D89DCC7(_thisAdjusted, ___sizeOrLength0, ___numberOfRows1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Text.Json.JsonDocument/StackRowStack
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_pinvoke(const StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097& unmarshaled, StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_pinvoke& marshaled)
{
	marshaled.____rentedBuffer_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get__rentedBuffer_0());
	marshaled.____topOfStack_1 = unmarshaled.get__topOfStack_1();
}
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_pinvoke_back(const StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_pinvoke& marshaled, StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__rentedBuffer_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.____rentedBuffer_0));
	int32_t unmarshaled__topOfStack_temp_1 = 0;
	unmarshaled__topOfStack_temp_1 = marshaled.____topOfStack_1;
	unmarshaled.set__topOfStack_1(unmarshaled__topOfStack_temp_1);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonDocument/StackRowStack
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_pinvoke_cleanup(StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____rentedBuffer_0);
	marshaled.____rentedBuffer_0 = NULL;
}
// Conversion methods for marshalling of: System.Text.Json.JsonDocument/StackRowStack
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_com(const StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097& unmarshaled, StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_com& marshaled)
{
	marshaled.____rentedBuffer_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get__rentedBuffer_0());
	marshaled.____topOfStack_1 = unmarshaled.get__topOfStack_1();
}
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_com_back(const StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_com& marshaled, StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__rentedBuffer_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.____rentedBuffer_0));
	int32_t unmarshaled__topOfStack_temp_1 = 0;
	unmarshaled__topOfStack_temp_1 = marshaled.____topOfStack_1;
	unmarshaled.set__topOfStack_1(unmarshaled__topOfStack_temp_1);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonDocument/StackRowStack
IL2CPP_EXTERN_C void StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshal_com_cleanup(StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____rentedBuffer_0);
	marshaled.____rentedBuffer_0 = NULL;
}
// System.Void System.Text.Json.JsonDocument/StackRowStack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack__ctor_m20FC0DFE2DB10327E9DC93609B5F148CD5E8E4B3 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_0;
		L_0 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		int32_t L_1 = ___initialSize0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_0, L_1);
		__this->set__rentedBuffer_0(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__rentedBuffer_0();
		NullCheck(L_3);
		__this->set__topOfStack_1(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		return;
	}
}
IL2CPP_EXTERN_C  void StackRowStack__ctor_m20FC0DFE2DB10327E9DC93609B5F148CD5E8E4B3_AdjustorThunk (RuntimeObject * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * _thisAdjusted = reinterpret_cast<StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *>(__this + _offset);
	StackRowStack__ctor_m20FC0DFE2DB10327E9DC93609B5F148CD5E8E4B3(_thisAdjusted, ___initialSize0, method);
}
// System.Void System.Text.Json.JsonDocument/StackRowStack::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Dispose_m9E3CBA52F321E9D745E78B175574FFC1BD0924EA (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__rentedBuffer_0();
		V_0 = L_0;
		__this->set__rentedBuffer_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set__topOfStack_1(0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_2;
		L_2 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_2, L_3, (bool)0);
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void StackRowStack_Dispose_m9E3CBA52F321E9D745E78B175574FFC1BD0924EA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * _thisAdjusted = reinterpret_cast<StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *>(__this + _offset);
	StackRowStack_Dispose_m9E3CBA52F321E9D745E78B175574FFC1BD0924EA(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonDocument/StackRowStack::Push(System.Text.Json.JsonDocument/StackRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Push_m652E61A4CF74E053DAD0EEB3264742A2F2A4D347 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  ___row0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__topOfStack_1();
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_000f;
		}
	}
	{
		StackRowStack_Enlarge_m1D08EBC9C47AB95D02670479F5B04ABB609AEA43((StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *)__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		int32_t L_1 = __this->get__topOfStack_1();
		__this->set__topOfStack_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)8)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get__rentedBuffer_0();
		int32_t L_3 = __this->get__topOfStack_1();
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_4;
		L_4 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_2, L_3, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_inline(L_4, (StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 *)(&___row0), /*hidden argument*/MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void StackRowStack_Push_m652E61A4CF74E053DAD0EEB3264742A2F2A4D347_AdjustorThunk (RuntimeObject * __this, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  ___row0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * _thisAdjusted = reinterpret_cast<StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *>(__this + _offset);
	StackRowStack_Push_m652E61A4CF74E053DAD0EEB3264742A2F2A4D347(_thisAdjusted, ___row0, method);
}
// System.Text.Json.JsonDocument/StackRow System.Text.Json.JsonDocument/StackRowStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  StackRowStack_Pop_mD66350D7D1E66E8676F5C205D8251202E8D61DD8 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__rentedBuffer_0();
		int32_t L_1 = __this->get__topOfStack_1();
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD(L_0, L_1, /*hidden argument*/MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m43E8D2C1C8A6494F8A78034F2901561346B3F8FD_RuntimeMethod_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_3;
		L_3 = Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883(L_2, /*hidden argument*/Span_1_op_Implicit_mD4B8038010FD1FFBEC945834B06D9DB212F46883_RuntimeMethod_var);
		StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  L_4;
		L_4 = MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_inline(L_3, /*hidden argument*/MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5 = __this->get__topOfStack_1();
		__this->set__topOfStack_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8)));
		StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  StackRowStack_Pop_mD66350D7D1E66E8676F5C205D8251202E8D61DD8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * _thisAdjusted = reinterpret_cast<StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *>(__this + _offset);
	StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  _returnValue;
	_returnValue = StackRowStack_Pop_mD66350D7D1E66E8676F5C205D8251202E8D61DD8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonDocument/StackRowStack::Enlarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackRowStack_Enlarge_m1D08EBC9C47AB95D02670479F5B04ABB609AEA43 (StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__rentedBuffer_0();
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_il2cpp_TypeInfo_var);
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_1;
		L_1 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_2);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* !0[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)2)));
		__this->set__rentedBuffer_0(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		int32_t L_5 = __this->get__topOfStack_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get__rentedBuffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get__rentedBuffer_0();
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = __this->get__topOfStack_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = __this->get__topOfStack_1();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))), (int32_t)L_9)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), (int32_t)L_11)), /*hidden argument*/NULL);
		int32_t L_12 = __this->get__topOfStack_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get__rentedBuffer_0();
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_0;
		NullCheck(L_14);
		__this->set__topOfStack_1(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))));
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_15;
		L_15 = ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_inline(/*hidden argument*/ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_0;
		NullCheck(L_15);
		VirtActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(!0[],System.Boolean) */, L_15, L_16, (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void StackRowStack_Enlarge_m1D08EBC9C47AB95D02670479F5B04ABB609AEA43_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 * _thisAdjusted = reinterpret_cast<StackRowStack_t257103AC2F2BF28367D230DCC3B1719D0EBA6097 *>(__this + _offset);
	StackRowStack_Enlarge_m1D08EBC9C47AB95D02670479F5B04ABB609AEA43(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Text.Json.JsonElement/ArrayEnumerator
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_pinvoke(const ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562& unmarshaled, ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_pinvoke& marshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ArrayEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_pinvoke_back(const ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_pinvoke& marshaled, ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562& unmarshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ArrayEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonElement/ArrayEnumerator
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_pinvoke_cleanup(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Text.Json.JsonElement/ArrayEnumerator
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_com(const ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562& unmarshaled, ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_com& marshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ArrayEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_com_back(const ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_com& marshaled, ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562& unmarshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ArrayEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonElement/ArrayEnumerator
IL2CPP_EXTERN_C void ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshal_com_cleanup(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_marshaled_com& marshaled)
{
}
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::.ctor(System.Text.Json.JsonElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator__ctor_m77111C7F513942BFE9D6EDAD4C7EEC51B1622434 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method)
{
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_0 = ___target0;
		__this->set__target_0(L_0);
		__this->set__curIdx_1((-1));
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_1 = ___target0;
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_2 = L_1.get__parent_0();
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_3 = __this->get_address_of__target_0();
		int32_t L_4 = L_3->get__idx_1();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = JsonDocument_GetEndIndex_mD22C1C79670CE5F34EE33B8D355C9B29ACF69FA3(L_2, L_4, (bool)0, /*hidden argument*/NULL);
		__this->set__endIdxOrVersion_2(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayEnumerator__ctor_m77111C7F513942BFE9D6EDAD4C7EEC51B1622434_AdjustorThunk (RuntimeObject * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	ArrayEnumerator__ctor_m77111C7F513942BFE9D6EDAD4C7EEC51B1622434(_thisAdjusted, ___target0, method);
}
// System.Text.Json.JsonElement System.Text.Json.JsonElement/ArrayEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ArrayEnumerator_get_Current_m108E0BDAE9E6CB4CECE122F2021C9089E09BB990 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get__curIdx_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A ));
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_1 = V_0;
		return L_1;
	}

IL_0013:
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_2 = __this->get_address_of__target_0();
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_3 = L_2->get__parent_0();
		int32_t L_4 = __this->get__curIdx_1();
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_5;
		memset((&L_5), 0, sizeof(L_5));
		JsonElement__ctor_m4387857C3F024CEC6197F51B68DC5BA8E97A8947((&L_5), L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ArrayEnumerator_get_Current_m108E0BDAE9E6CB4CECE122F2021C9089E09BB990_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  _returnValue;
	_returnValue = ArrayEnumerator_get_Current_m108E0BDAE9E6CB4CECE122F2021C9089E09BB990(_thisAdjusted, method);
	return _returnValue;
}
// System.Text.Json.JsonElement/ArrayEnumerator System.Text.Json.JsonElement/ArrayEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_0 = (*(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *)__this);
		V_0 = L_0;
		(&V_0)->set__curIdx_1((-1));
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  _returnValue;
	_returnValue = ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayEnumerator_System_Collections_IEnumerable_GetEnumerator_mD01CB54AC963BA3CD4256CC2F2131AD8B3068DEF (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_0;
		L_0 = ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913((ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *)__this, /*hidden argument*/NULL);
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_1 = L_0;
		RuntimeObject * L_2 = Box(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ArrayEnumerator_System_Collections_IEnumerable_GetEnumerator_mD01CB54AC963BA3CD4256CC2F2131AD8B3068DEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ArrayEnumerator_System_Collections_IEnumerable_GetEnumerator_mD01CB54AC963BA3CD4256CC2F2131AD8B3068DEF(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonElement> System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.Generic.IEnumerable<System.Text.Json.JsonElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonElementU3E_GetEnumerator_mC571DB9E26D1491C643BB003DB371B61C822B76C (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_0;
		L_0 = ArrayEnumerator_GetEnumerator_m4BE4867A98D935F7A1E9FF4C8DF58253C2DB7913((ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *)__this, /*hidden argument*/NULL);
		ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562  L_1 = L_0;
		RuntimeObject * L_2 = Box(ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ArrayEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonElementU3E_GetEnumerator_mC571DB9E26D1491C643BB003DB371B61C822B76C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ArrayEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonElementU3E_GetEnumerator_mC571DB9E26D1491C643BB003DB371B61C822B76C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator_Dispose_mF348DC81EF018D2650E01E37B7A6A8806102F1E0 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__endIdxOrVersion_2();
		__this->set__curIdx_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayEnumerator_Dispose_mF348DC81EF018D2650E01E37B7A6A8806102F1E0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	ArrayEnumerator_Dispose_mF348DC81EF018D2650E01E37B7A6A8806102F1E0(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator_Reset_m970D33CE75D5059E96B395BF71868BE29FFC6BE5 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	{
		__this->set__curIdx_1((-1));
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayEnumerator_Reset_m970D33CE75D5059E96B395BF71868BE29FFC6BE5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	ArrayEnumerator_Reset_m970D33CE75D5059E96B395BF71868BE29FFC6BE5(_thisAdjusted, method);
}
// System.Object System.Text.Json.JsonElement/ArrayEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ArrayEnumerator_System_Collections_IEnumerator_get_Current_m9DFECAB1A14773240A04B56B63A40C89686A65F8 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_0;
		L_0 = ArrayEnumerator_get_Current_m108E0BDAE9E6CB4CECE122F2021C9089E09BB990((ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *)__this, /*hidden argument*/NULL);
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_1 = L_0;
		RuntimeObject * L_2 = Box(JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ArrayEnumerator_System_Collections_IEnumerator_get_Current_m9DFECAB1A14773240A04B56B63A40C89686A65F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = ArrayEnumerator_System_Collections_IEnumerator_get_Current_m9DFECAB1A14773240A04B56B63A40C89686A65F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonElement/ArrayEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayEnumerator_MoveNext_mEA611C60C6FB3B8CB7ACFCE1F0F90093150ABEC2 (ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__curIdx_1();
		int32_t L_1 = __this->get__endIdxOrVersion_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_2 = __this->get__curIdx_1();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_3 = __this->get_address_of__target_0();
		int32_t L_4 = L_3->get__idx_1();
		__this->set__curIdx_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)12))));
		goto IL_004c;
	}

IL_002f:
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_5 = __this->get_address_of__target_0();
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_6 = L_5->get__parent_0();
		int32_t L_7 = __this->get__curIdx_1();
		NullCheck(L_6);
		int32_t L_8;
		L_8 = JsonDocument_GetEndIndex_mD22C1C79670CE5F34EE33B8D355C9B29ACF69FA3(L_6, L_7, (bool)1, /*hidden argument*/NULL);
		__this->set__curIdx_1(L_8);
	}

IL_004c:
	{
		int32_t L_9 = __this->get__curIdx_1();
		int32_t L_10 = __this->get__endIdxOrVersion_2();
		return (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ArrayEnumerator_MoveNext_mEA611C60C6FB3B8CB7ACFCE1F0F90093150ABEC2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 * _thisAdjusted = reinterpret_cast<ArrayEnumerator_t0518236A50CD1B85F436B55CA7AB4414E96BB562 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayEnumerator_MoveNext_mEA611C60C6FB3B8CB7ACFCE1F0F90093150ABEC2(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Text.Json.JsonElement/ObjectEnumerator
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_pinvoke(const ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7& unmarshaled, ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_pinvoke& marshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ObjectEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_pinvoke_back(const ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_pinvoke& marshaled, ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7& unmarshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ObjectEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonElement/ObjectEnumerator
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_pinvoke_cleanup(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Text.Json.JsonElement/ObjectEnumerator
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_com(const ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7& unmarshaled, ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_com& marshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ObjectEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_com_back(const ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_com& marshaled, ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7& unmarshaled)
{
	Exception_t* ____target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_target' of type 'ObjectEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonElement/ObjectEnumerator
IL2CPP_EXTERN_C void ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshal_com_cleanup(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_marshaled_com& marshaled)
{
}
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::.ctor(System.Text.Json.JsonElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator__ctor_mA6653A3CDA60B5F6709B6E5426D357E77B9A482D (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method)
{
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_0 = ___target0;
		__this->set__target_0(L_0);
		__this->set__curIdx_1((-1));
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_1 = ___target0;
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_2 = L_1.get__parent_0();
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_3 = __this->get_address_of__target_0();
		int32_t L_4 = L_3->get__idx_1();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = JsonDocument_GetEndIndex_mD22C1C79670CE5F34EE33B8D355C9B29ACF69FA3(L_2, L_4, (bool)0, /*hidden argument*/NULL);
		__this->set__endIdxOrVersion_2(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectEnumerator__ctor_mA6653A3CDA60B5F6709B6E5426D357E77B9A482D_AdjustorThunk (RuntimeObject * __this, JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  ___target0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	ObjectEnumerator__ctor_mA6653A3CDA60B5F6709B6E5426D357E77B9A482D(_thisAdjusted, ___target0, method);
}
// System.Text.Json.JsonProperty System.Text.Json.JsonElement/ObjectEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  ObjectEnumerator_get_Current_mE8604E9BED7F0CEA282E2C97B8B54CD56C1B10DB (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get__curIdx_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B ));
		JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  L_1 = V_0;
		return L_1;
	}

IL_0013:
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_2 = __this->get_address_of__target_0();
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_3 = L_2->get__parent_0();
		int32_t L_4 = __this->get__curIdx_1();
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A  L_5;
		memset((&L_5), 0, sizeof(L_5));
		JsonElement__ctor_m4387857C3F024CEC6197F51B68DC5BA8E97A8947((&L_5), L_3, L_4, /*hidden argument*/NULL);
		JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  L_6;
		memset((&L_6), 0, sizeof(L_6));
		JsonProperty__ctor_mEA1B3D74FA548B7CC960D82E15913C581DF745DC((&L_6), L_5, (String_t*)NULL, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  ObjectEnumerator_get_Current_mE8604E9BED7F0CEA282E2C97B8B54CD56C1B10DB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  _returnValue;
	_returnValue = ObjectEnumerator_get_Current_mE8604E9BED7F0CEA282E2C97B8B54CD56C1B10DB(_thisAdjusted, method);
	return _returnValue;
}
// System.Text.Json.JsonElement/ObjectEnumerator System.Text.Json.JsonElement/ObjectEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_0 = (*(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *)__this);
		V_0 = L_0;
		(&V_0)->set__curIdx_1((-1));
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  _returnValue;
	_returnValue = ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectEnumerator_System_Collections_IEnumerable_GetEnumerator_mCB6DF699BA1F90FA868E035159B48B313842895A (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_0;
		L_0 = ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F((ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *)__this, /*hidden argument*/NULL);
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_1 = L_0;
		RuntimeObject * L_2 = Box(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ObjectEnumerator_System_Collections_IEnumerable_GetEnumerator_mCB6DF699BA1F90FA868E035159B48B313842895A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ObjectEnumerator_System_Collections_IEnumerable_GetEnumerator_mCB6DF699BA1F90FA868E035159B48B313842895A(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Text.Json.JsonProperty> System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.Generic.IEnumerable<System.Text.Json.JsonProperty>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonPropertyU3E_GetEnumerator_m5934E7205B3A25D6A38DD80B624A7D472AFB7504 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_0;
		L_0 = ObjectEnumerator_GetEnumerator_mB9F84FCB4B23016AB51E31D4B3EEE97433AFBC6F((ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *)__this, /*hidden argument*/NULL);
		ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7  L_1 = L_0;
		RuntimeObject * L_2 = Box(ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ObjectEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonPropertyU3E_GetEnumerator_m5934E7205B3A25D6A38DD80B624A7D472AFB7504_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ObjectEnumerator_System_Collections_Generic_IEnumerableU3CSystem_Text_Json_JsonPropertyU3E_GetEnumerator_m5934E7205B3A25D6A38DD80B624A7D472AFB7504(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator_Dispose_mE333B1AF6130EADC239BFB9D40F1BA64D3A48A78 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__endIdxOrVersion_2();
		__this->set__curIdx_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectEnumerator_Dispose_mE333B1AF6130EADC239BFB9D40F1BA64D3A48A78_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	ObjectEnumerator_Dispose_mE333B1AF6130EADC239BFB9D40F1BA64D3A48A78(_thisAdjusted, method);
}
// System.Void System.Text.Json.JsonElement/ObjectEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEnumerator_Reset_m6A23236FE8C354E2C119E08B81E31B22FFF4DDD2 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	{
		__this->set__curIdx_1((-1));
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectEnumerator_Reset_m6A23236FE8C354E2C119E08B81E31B22FFF4DDD2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	ObjectEnumerator_Reset_m6A23236FE8C354E2C119E08B81E31B22FFF4DDD2(_thisAdjusted, method);
}
// System.Object System.Text.Json.JsonElement/ObjectEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectEnumerator_System_Collections_IEnumerator_get_Current_m6DC9ADDB9879D9F2182A527F2EEE92E7E7B63FF0 (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  L_0;
		L_0 = ObjectEnumerator_get_Current_mE8604E9BED7F0CEA282E2C97B8B54CD56C1B10DB((ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *)__this, /*hidden argument*/NULL);
		JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B  L_1 = L_0;
		RuntimeObject * L_2 = Box(JsonProperty_t916B5B65458CA307C7BB41E55DBFF5FAAE3C929B_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ObjectEnumerator_System_Collections_IEnumerator_get_Current_m6DC9ADDB9879D9F2182A527F2EEE92E7E7B63FF0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = ObjectEnumerator_System_Collections_IEnumerator_get_Current_m6DC9ADDB9879D9F2182A527F2EEE92E7E7B63FF0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonElement/ObjectEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectEnumerator_MoveNext_m98D7956A6DB9F9750FE99FC863979AC0EF54663F (ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__curIdx_1();
		int32_t L_1 = __this->get__endIdxOrVersion_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_2 = __this->get__curIdx_1();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_3 = __this->get_address_of__target_0();
		int32_t L_4 = L_3->get__idx_1();
		__this->set__curIdx_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)12))));
		goto IL_004c;
	}

IL_002f:
	{
		JsonElement_t27B1E2880464B47D632E147F3C65AAB584DA215A * L_5 = __this->get_address_of__target_0();
		JsonDocument_t940264B102C1E6561EC342A9C6CAF4ED2EBB2D8A * L_6 = L_5->get__parent_0();
		int32_t L_7 = __this->get__curIdx_1();
		NullCheck(L_6);
		int32_t L_8;
		L_8 = JsonDocument_GetEndIndex_mD22C1C79670CE5F34EE33B8D355C9B29ACF69FA3(L_6, L_7, (bool)1, /*hidden argument*/NULL);
		__this->set__curIdx_1(L_8);
	}

IL_004c:
	{
		int32_t L_9 = __this->get__curIdx_1();
		__this->set__curIdx_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)12))));
		int32_t L_10 = __this->get__curIdx_1();
		int32_t L_11 = __this->get__endIdxOrVersion_2();
		return (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ObjectEnumerator_MoveNext_m98D7956A6DB9F9750FE99FC863979AC0EF54663F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 * _thisAdjusted = reinterpret_cast<ObjectEnumerator_tA2889940DCCA3E71EA69429738EFB1E6E633BBA7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ObjectEnumerator_MoveNext_m98D7956A6DB9F9750FE99FC863979AC0EF54663F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Text.Json.JsonHelpers/DateTimeParseData::get_OffsetNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParseData_get_OffsetNegative_m8450AC72A81187CAC841C39031610166F8FB4002 (DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_OffsetToken_9();
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)45)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DateTimeParseData_get_OffsetNegative_m8450AC72A81187CAC841C39031610166F8FB4002_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966 * _thisAdjusted = reinterpret_cast<DateTimeParseData_tE68292CED2F349A73D94DBFFA04FBF95D464A966 *>(__this + _offset);
	bool _returnValue;
	_returnValue = DateTimeParseData_get_OffsetNegative_m8450AC72A81187CAC841C39031610166F8FB4002(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.ReflectionMemberAccessor/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC6E2BAFEE2F4D7C4789833647A71930C83978CB7 (U3CU3Ec__DisplayClass0_0_t26912B7B1AF89C641A0B2396AD9DBEBDDCB99CF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Text.Json.Serialization.ReflectionMemberAccessor/<>c__DisplayClass0_0::<CreateConstructor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass0_0_U3CCreateConstructorU3Eb__0_mD5C16D442DA1BCE6489106C89D90B25078775BAC (U3CU3Ec__DisplayClass0_0_t26912B7B1AF89C641A0B2396AD9DBEBDDCB99CF0 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_type_0();
		RuntimeObject * L_1;
		L_1 = Activator_CreateInstance_m35ED39C8B9201D90292C1803022AEE106B69A295(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
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


// Conversion methods for marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_pinvoke(const PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B& unmarshaled, PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_pinvoke& marshaled)
{
	marshaled.____prevTotalConsumed_0 = unmarshaled.get__prevTotalConsumed_0();
	marshaled.____prevBytePositionInLine_1 = unmarshaled.get__prevBytePositionInLine_1();
	marshaled.____prevConsumed_2 = unmarshaled.get__prevConsumed_2();
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke(unmarshaled.get__prevCurrentPosition_3(), marshaled.____prevCurrentPosition_3);
}
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_pinvoke_back(const PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_pinvoke& marshaled, PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B& unmarshaled)
{
	int64_t unmarshaled__prevTotalConsumed_temp_0 = 0;
	unmarshaled__prevTotalConsumed_temp_0 = marshaled.____prevTotalConsumed_0;
	unmarshaled.set__prevTotalConsumed_0(unmarshaled__prevTotalConsumed_temp_0);
	int64_t unmarshaled__prevBytePositionInLine_temp_1 = 0;
	unmarshaled__prevBytePositionInLine_temp_1 = marshaled.____prevBytePositionInLine_1;
	unmarshaled.set__prevBytePositionInLine_1(unmarshaled__prevBytePositionInLine_temp_1);
	int32_t unmarshaled__prevConsumed_temp_2 = 0;
	unmarshaled__prevConsumed_temp_2 = marshaled.____prevConsumed_2;
	unmarshaled.set__prevConsumed_2(unmarshaled__prevConsumed_temp_2);
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  unmarshaled__prevCurrentPosition_temp_3;
	memset((&unmarshaled__prevCurrentPosition_temp_3), 0, sizeof(unmarshaled__prevCurrentPosition_temp_3));
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke_back(marshaled.____prevCurrentPosition_3, unmarshaled__prevCurrentPosition_temp_3);
	unmarshaled.set__prevCurrentPosition_3(unmarshaled__prevCurrentPosition_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_pinvoke_cleanup(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_pinvoke& marshaled)
{
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_pinvoke_cleanup(marshaled.____prevCurrentPosition_3);
}


// Conversion methods for marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_com(const PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B& unmarshaled, PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_com& marshaled)
{
	marshaled.____prevTotalConsumed_0 = unmarshaled.get__prevTotalConsumed_0();
	marshaled.____prevBytePositionInLine_1 = unmarshaled.get__prevBytePositionInLine_1();
	marshaled.____prevConsumed_2 = unmarshaled.get__prevConsumed_2();
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com(unmarshaled.get__prevCurrentPosition_3(), marshaled.____prevCurrentPosition_3);
}
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_com_back(const PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_com& marshaled, PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B& unmarshaled)
{
	int64_t unmarshaled__prevTotalConsumed_temp_0 = 0;
	unmarshaled__prevTotalConsumed_temp_0 = marshaled.____prevTotalConsumed_0;
	unmarshaled.set__prevTotalConsumed_0(unmarshaled__prevTotalConsumed_temp_0);
	int64_t unmarshaled__prevBytePositionInLine_temp_1 = 0;
	unmarshaled__prevBytePositionInLine_temp_1 = marshaled.____prevBytePositionInLine_1;
	unmarshaled.set__prevBytePositionInLine_1(unmarshaled__prevBytePositionInLine_temp_1);
	int32_t unmarshaled__prevConsumed_temp_2 = 0;
	unmarshaled__prevConsumed_temp_2 = marshaled.____prevConsumed_2;
	unmarshaled.set__prevConsumed_2(unmarshaled__prevConsumed_temp_2);
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  unmarshaled__prevCurrentPosition_temp_3;
	memset((&unmarshaled__prevCurrentPosition_temp_3), 0, sizeof(unmarshaled__prevCurrentPosition_temp_3));
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com_back(marshaled.____prevCurrentPosition_3, unmarshaled__prevCurrentPosition_temp_3);
	unmarshaled.set__prevCurrentPosition_3(unmarshaled__prevCurrentPosition_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshal_com_cleanup(PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B_marshaled_com& marshaled)
{
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshal_com_cleanup(marshaled.____prevCurrentPosition_3);
}
// System.Void System.Text.Json.Utf8JsonReader/PartialStateForRollback::.ctor(System.Int64,System.Int64,System.Int32,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialStateForRollback__ctor_m2F1F9AFCAD9561920CC30CAFEE477607907B1CCF (PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * __this, int64_t ___totalConsumed0, int64_t ___bytePositionInLine1, int32_t ___consumed2, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___currentPosition3, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___totalConsumed0;
		__this->set__prevTotalConsumed_0(L_0);
		int64_t L_1 = ___bytePositionInLine1;
		__this->set__prevBytePositionInLine_1(L_1);
		int32_t L_2 = ___consumed2;
		__this->set__prevConsumed_2(L_2);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_3 = ___currentPosition3;
		__this->set__prevCurrentPosition_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void PartialStateForRollback__ctor_m2F1F9AFCAD9561920CC30CAFEE477607907B1CCF_AdjustorThunk (RuntimeObject * __this, int64_t ___totalConsumed0, int64_t ___bytePositionInLine1, int32_t ___consumed2, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___currentPosition3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * _thisAdjusted = reinterpret_cast<PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B *>(__this + _offset);
	PartialStateForRollback__ctor_m2F1F9AFCAD9561920CC30CAFEE477607907B1CCF(_thisAdjusted, ___totalConsumed0, ___bytePositionInLine1, ___consumed2, ___currentPosition3, method);
}
// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::GetStartPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  PartialStateForRollback_GetStartPosition_m6143FDB787E1122DB00813508786C77ED6CC2BE0 (PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_0 = __this->get_address_of__prevCurrentPosition_3();
		RuntimeObject * L_1;
		L_1 = SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_0, /*hidden argument*/NULL);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_2 = __this->get_address_of__prevCurrentPosition_3();
		int32_t L_3;
		L_3 = SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get__prevConsumed_2();
		int32_t L_5 = ___offset0;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_6;
		memset((&L_6), 0, sizeof(L_6));
		SequencePosition__ctor_mADBBB1B327A02C5A125FAF01BF0CAB1B662AC7F3((&L_6), L_1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  PartialStateForRollback_GetStartPosition_m6143FDB787E1122DB00813508786C77ED6CC2BE0_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B * _thisAdjusted = reinterpret_cast<PartialStateForRollback_t0BC648A2D82D539641114155E7B4B1FDF5BDBA5B *>(__this + _offset);
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  _returnValue;
	_returnValue = PartialStateForRollback_GetStartPosition_m6143FDB787E1122DB00813508786C77ED6CC2BE0(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_mF6570C96F6F14A64ABBFE5805CD5971EF87185F1 (U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * V_1 = NULL;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006e;
			}
		}

IL_0011:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_3 = V_1;
			NullCheck(L_3);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = L_3->get__stream_4();
			if (L_4)
			{
				goto IL_0026;
			}
		}

IL_0019:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get__output_3();
			if (L_6)
			{
				goto IL_0026;
			}
		}

IL_0021:
		{
			goto IL_00c7;
		}

IL_0026:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_7 = V_1;
			il2cpp_codegen_initobj((&V_3), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_8 = V_3;
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = Utf8JsonWriter_FlushAsync_mF95F9D0EB1982902C7C6E2A1F626D86EC7350A56(L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_10;
			L_10 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_9, (bool)0, /*hidden argument*/NULL);
			V_4 = L_10;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_11;
			L_11 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_4), /*hidden argument*/NULL);
			V_2 = L_11;
			bool L_12;
			L_12 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_008a;
			}
		}

IL_004e:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_15, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), (U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 *)__this, /*hidden argument*/AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2_m78D49CFEA55C867DF934FF4E96E66DF2DBBF5891_RuntimeMethod_var);
			goto IL_00da;
		}

IL_006e:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = L_16;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_008a:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_19 = V_1;
			NullCheck(L_19);
			Utf8JsonWriter_ResetHelper_mF79D2A625F9FA9F21240073119FAC69E7E6B5765(L_19, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_20 = V_1;
			NullCheck(L_20);
			L_20->set__stream_4((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_21 = V_1;
			NullCheck(L_21);
			L_21->set__arrayBufferWriter_5((ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 *)NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_22 = V_1;
			NullCheck(L_22);
			L_22->set__output_3((RuntimeObject*)NULL);
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_24 = V_5;
		AsyncValueTaskMethodBuilder_SetException_mD4AB399A1E02077235B459D35DCF258444B55BD7((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00da;
	} // end catch (depth: 1)

IL_00c7:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncValueTaskMethodBuilder_SetResult_m4C3CDE4851C1C6765FDEB1D95E0892A010AE406E((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_25, /*hidden argument*/NULL);
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__35_MoveNext_mF6570C96F6F14A64ABBFE5805CD5971EF87185F1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * _thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 *>(__this + _offset);
	U3CDisposeAsyncU3Ed__35_MoveNext_mF6570C96F6F14A64ABBFE5805CD5971EF87185F1(_thisAdjusted, method);
}
// System.Void System.Text.Json.Utf8JsonWriter/<DisposeAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mA16313E0A35C7B29FB2627D88176F7E25916B9AB (U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncValueTaskMethodBuilder_SetStateMachine_m23A84E8836D1C29F136ACED56FAB5D9925D64E13((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__35_SetStateMachine_mA16313E0A35C7B29FB2627D88176F7E25916B9AB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 * _thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__35_t0CEC273830A363675D797A7F12F241ED3AC76FA2 *>(__this + _offset);
	U3CDisposeAsyncU3Ed__35_SetStateMachine_mA16313E0A35C7B29FB2627D88176F7E25916B9AB(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncU3Ed__36_MoveNext_mD217A74FB116AF0FF9AE0FEB7B5925EF77D1444B (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * V_1 = NULL;
	bool V_2 = false;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00d2;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0169;
			}
		}

IL_001b:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_4 = V_1;
			NullCheck(L_4);
			Utf8JsonWriter_CheckNotDisposed_m3409E4094212AB3E6195DAAF1F9504DB74E8912A(L_4, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = V_1;
			NullCheck(L_5);
			Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_6 = L_5->get_address_of__memory_6();
			il2cpp_codegen_initobj(L_6, sizeof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 ));
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_7 = V_1;
			NullCheck(L_7);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = L_7->get__stream_4();
			if (!L_8)
			{
				goto IL_018f;
			}
		}

IL_0038:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_011a;
			}
		}

IL_0043:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_11 = V_1;
			NullCheck(L_11);
			ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * L_12 = L_11->get__arrayBufferWriter_5();
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline(L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6(L_12, L_14, /*hidden argument*/ArrayBufferWriter_1_Advance_m30CC5604E89FF3BD87C12498646EA79F3C761AF6_RuntimeMethod_var);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_15 = V_1;
			NullCheck(L_15);
			Utf8JsonWriter_set_BytesPending_mD2A966716344C9340EE41F8B9F2BA827B686E3A0_inline(L_15, 0, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_16 = V_1;
			NullCheck(L_16);
			ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * L_17 = L_16->get__arrayBufferWriter_5();
			NullCheck(L_17);
			ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_18;
			L_18 = ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD(L_17, /*hidden argument*/ArrayBufferWriter_1_get_WrittenMemory_m980CC821057F2C16ED8E03AB785A30E4514E80BD_RuntimeMethod_var);
			bool L_19;
			L_19 = MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1(L_18, (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), /*hidden argument*/MemoryMarshal_TryGetArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m56BC301A30770BB2091999915DDFF56FAEFB4AB1_RuntimeMethod_var);
			V_2 = L_19;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_20 = V_1;
			NullCheck(L_20);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_21 = L_20->get__stream_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
			L_22 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
			int32_t L_23;
			L_23 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
			int32_t L_24;
			L_24 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_3), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_25 = __this->get_cancellationToken_3();
			NullCheck(L_21);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26;
			L_26 = VirtFuncInvoker4< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(26 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_21, L_22, L_23, L_24, L_25);
			NullCheck(L_26);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_27;
			L_27 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_26, (bool)0, /*hidden argument*/NULL);
			V_5 = L_27;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_28;
			L_28 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_28;
			bool L_29;
			L_29 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_00ef;
			}
		}

IL_00ae:
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_31 = V_4;
			__this->set_U3CU3Eu__1_4(L_31);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_32, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_RuntimeMethod_var);
			goto IL_01f1;
		}

IL_00d2:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_33 = __this->get_U3CU3Eu__1_4();
			V_4 = L_33;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_34 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_34, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_00ef:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_36 = V_1;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_37 = V_1;
			NullCheck(L_37);
			int64_t L_38;
			L_38 = Utf8JsonWriter_get_BytesCommitted_mF9D0019CEC587CA2BD497BDE7876CD722EB10DDF_inline(L_37, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_39 = V_1;
			NullCheck(L_39);
			ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * L_40 = L_39->get__arrayBufferWriter_5();
			NullCheck(L_40);
			int32_t L_41;
			L_41 = ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_inline(L_40, /*hidden argument*/ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_RuntimeMethod_var);
			NullCheck(L_36);
			Utf8JsonWriter_set_BytesCommitted_mF0C5873DB76FEC25BFECD20C1DB0D2448497C13D_inline(L_36, ((int64_t)il2cpp_codegen_add((int64_t)L_38, (int64_t)((int64_t)((int64_t)L_41)))), /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_42 = V_1;
			NullCheck(L_42);
			ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * L_43 = L_42->get__arrayBufferWriter_5();
			NullCheck(L_43);
			ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0(L_43, /*hidden argument*/ArrayBufferWriter_1_Clear_m102E646BB27769F48A035A13772AB0A89A1F63D0_RuntimeMethod_var);
		}

IL_011a:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_44 = V_1;
			NullCheck(L_44);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_45 = L_44->get__stream_4();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_46 = __this->get_cancellationToken_3();
			NullCheck(L_45);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_47;
			L_47 = VirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(20 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_45, L_46);
			NullCheck(L_47);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_48;
			L_48 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_47, (bool)0, /*hidden argument*/NULL);
			V_5 = L_48;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_49;
			L_49 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_5), /*hidden argument*/NULL);
			V_6 = L_49;
			bool L_50;
			L_50 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
			if (L_50)
			{
				goto IL_0186;
			}
		}

IL_0145:
		{
			int32_t L_51 = 1;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_52 = V_6;
			__this->set_U3CU3Eu__1_4(L_52);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_53, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1_m37653B70BE3E13BE7CE1230E405B13F1E71A4AB5_RuntimeMethod_var);
			goto IL_01f1;
		}

IL_0169:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_54 = __this->get_U3CU3Eu__1_4();
			V_6 = L_54;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_55 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_55, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_0186:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
			goto IL_01c3;
		}

IL_018f:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_57 = V_1;
			NullCheck(L_57);
			int32_t L_58;
			L_58 = Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline(L_57, /*hidden argument*/NULL);
			if (!L_58)
			{
				goto IL_01c3;
			}
		}

IL_0197:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_59 = V_1;
			NullCheck(L_59);
			RuntimeObject* L_60 = L_59->get__output_3();
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_61 = V_1;
			NullCheck(L_61);
			int32_t L_62;
			L_62 = Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline(L_61, /*hidden argument*/NULL);
			NullCheck(L_60);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_60, L_62);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_63 = V_1;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_64 = V_1;
			NullCheck(L_64);
			int64_t L_65;
			L_65 = Utf8JsonWriter_get_BytesCommitted_mF9D0019CEC587CA2BD497BDE7876CD722EB10DDF_inline(L_64, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_66 = V_1;
			NullCheck(L_66);
			int32_t L_67;
			L_67 = Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline(L_66, /*hidden argument*/NULL);
			NullCheck(L_63);
			Utf8JsonWriter_set_BytesCommitted_mF0C5873DB76FEC25BFECD20C1DB0D2448497C13D_inline(L_63, ((int64_t)il2cpp_codegen_add((int64_t)L_65, (int64_t)((int64_t)((int64_t)L_67)))), /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_68 = V_1;
			NullCheck(L_68);
			Utf8JsonWriter_set_BytesPending_mD2A966716344C9340EE41F8B9F2BA827B686E3A0_inline(L_68, 0, /*hidden argument*/NULL);
		}

IL_01c3:
		{
			goto IL_01de;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c5;
		}
		throw e;
	}

CATCH_01c5:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_70 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_69, L_70, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f1;
	} // end catch (depth: 1)

IL_01de:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_71, /*hidden argument*/NULL);
	}

IL_01f1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushAsyncU3Ed__36_MoveNext_mD217A74FB116AF0FF9AE0FEB7B5925EF77D1444B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * _thisAdjusted = reinterpret_cast<U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 *>(__this + _offset);
	U3CFlushAsyncU3Ed__36_MoveNext_mD217A74FB116AF0FF9AE0FEB7B5925EF77D1444B(_thisAdjusted, method);
}
// System.Void System.Text.Json.Utf8JsonWriter/<FlushAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushAsyncU3Ed__36_SetStateMachine_mDF34643613F5DCDABFAE7CBCA6CA6C158BAB9AF3 (U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushAsyncU3Ed__36_SetStateMachine_mDF34643613F5DCDABFAE7CBCA6CA6C158BAB9AF3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 * _thisAdjusted = reinterpret_cast<U3CFlushAsyncU3Ed__36_tA85741D654AB2314C8401D6AA6EFDAAEEEBCCBE1 *>(__this + _offset);
	U3CFlushAsyncU3Ed__36_SetStateMachine_mDF34643613F5DCDABFAE7CBCA6CA6C158BAB9AF3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JsonClassInfo_get_ClassType_m8B7809B6486BA9BB711580BAEBB2BC9914D5123D_inline (JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CClassTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * JsonClassInfo_get_PropertyInfoForClassInfo_mF60DA7EF84CA9322ADAD514F488C735716B46AA1_inline (JsonClassInfo_tD68347CE667BE8A8421B64672918C17B63087226 * __this, const RuntimeMethod* method)
{
	{
		JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * L_0 = __this->get_U3CPropertyInfoForClassInfoU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * JsonSerializerOptions_get_ReferenceHandler_mED2E78BDB89C782261DB173F86E5CF091DC32174_inline (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, const RuntimeMethod* method)
{
	{
		ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * L_0 = __this->get__referenceHandler_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t * JsonPropertyInfo_get_PropertyInfo_mE528577CE025E0E5D463DBA2917CF1A4A1279967_inline (JsonPropertyInfo_tE0AB08AC3E012A61A1C683F4F64FA927F9B6465B * __this, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get_U3CPropertyInfoU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DbRow_get_Location_mD05CE33A25EF42F5AD31F70837C9DB0EE8FB8544_inline (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__location_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetadataDb_get_Length_mE64B4245E0C327B2BF0B6F5CDAFB9E4B9A18F862_inline (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetadataDb_set_Length_m9734E1145C72AC4197F81FEA2DE0AA05C5A48BD4_inline (MetadataDb_tFADC4C331416651B4C98FABC57D6D87095E6B3C6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_BytesPending_m81C591926E8442C00E1E249AD802D2F7D76F54ED_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBytesPendingU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesPending_mD2A966716344C9340EE41F8B9F2BA827B686E3A0_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CBytesPendingU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Utf8JsonWriter_get_BytesCommitted_mF9D0019CEC587CA2BD497BDE7876CD722EB10DDF_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CBytesCommittedU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesCommitted_mF0C5873DB76FEC25BFECD20C1DB0D2448497C13D_inline (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CBytesCommittedU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2BFF7DAF33C26C94D2023AA021A13C80D68CB146_gshared_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  List_1_get_Item_mE4395991853647C2C1DF5C228E139879F57EADDF_gshared_inline (List_1_t354649E9AF1CE045CCE7C87FA8C824B7C48E8B79 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04* L_2 = (WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04*)__this->get__items_1();
		int32_t L_3 = ___index0;
		WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((WriteStackFrameU5BU5D_t2D643833ADD382CA9B07405DA6AB14A3D89CCB04*)L_2, (int32_t)L_3);
		return (WriteStackFrame_t3F6CAC1955D46C9D8855E6C1B798CC170DD1389B )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  ConfiguredTaskAwaitable_1_GetAwaiter_m80F1877E5304C1EB51E7F1E92D2C4CA3A9A3AC6D_gshared_inline (ConfiguredTaskAwaitable_1_tE42D30E9F9657F20F7553A66296B3105F5F75AF8 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C  L_0 = (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t263979B372CD16DB1D31D22859E450E737FD8E3C )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0034C7C50C5C833DB3A97149E52B75B2B40D9C15_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___segment0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___segment0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___segment0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_inline((&L_3), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * ArrayPool_1_get_Shared_m4724577D5D386CC10420CA639E88D70F6E8D4665_gshared_inline (const RuntimeMethod* method)
{
	ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * G_B2_0 = NULL;
	ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_0;
		L_0 = VolatileRead((ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 **)(ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 **)(((ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_s_sharedInstance_0()));
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_1 = (ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * L_2;
		L_2 = ((  ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		G_B2_0 = L_2;
	}

IL_0013:
	{
		return (ArrayPool_1_t3737A05EA2378E1C0C7886C7941A864D3D2E7060 *)G_B2_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_0 = (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  MemoryExtensions_AsSpan_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2D638093C36F090D818B8A219E7A78943A7A87DF_gshared_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_inline((&L_3), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAA7650B93BA331A91CF1D29E5919CE7C3ED453A6_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___other1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ((  bool (*) (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC *)(NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___other1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0053;
		}
	}
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___span0;
		uint8_t* L_6;
		L_6 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_8 = ___other1;
		uint8_t* L_9;
		L_9 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		uint8_t* L_10;
		L_10 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		int32_t L_11 = V_0;
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_12;
		L_12 = NUInt_op_Explicit_mD0F4DA19D9AE2D181E3CA043FF3273F408630429((int32_t)L_11, /*hidden argument*/NULL);
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_13 = V_1;
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_14;
		L_14 = NUInt_op_Multiply_m9CFC3DD50807644F879A8BA16D1C71EC657D1874_inline((NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC )L_12, (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = SpanHelpers_SequenceEqual_mEED9F6E1F130004EF9A292105F99AD6D10B2529C((uint8_t*)(uint8_t*)L_7, (uint8_t*)(uint8_t*)L_10, (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC )L_14, /*hidden argument*/NULL);
		return (bool)L_15;
	}

IL_0053:
	{
		return (bool)0;
	}

IL_0055:
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___other1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0072;
		}
	}
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_18 = ___span0;
		uint8_t* L_19;
		L_19 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_20 = ___other1;
		uint8_t* L_21;
		L_21 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_22 = V_0;
		bool L_23;
		L_23 = ((  bool (*) (uint8_t*, uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((uint8_t*)(uint8_t*)L_19, (uint8_t*)(uint8_t*)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (bool)L_23;
	}

IL_0072:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_m269D50048D9B75BFF96369934394577AADF08D7C_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&___destination0), /*hidden argument*/Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB * L_7 = ___value1;
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  L_8 = (*(DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB *)L_7);
		((  void (*) (uint8_t*, DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2F445FC68A597113F754F2BB01AECD975380FCF3_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, int32_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&___destination0), /*hidden argument*/Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		int32_t* L_7 = ___value1;
		int32_t L_8 = (*(int32_t*)L_7);
		((  void (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1FC483A9CC071398A30D035DDEE401BA84BD9156_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (int32_t)L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m41DBF2B9211BF1951B44F036303566A1C9CAAD0B_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_7 = (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_inline((&L_10), (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  MemoryMarshal_Read_TisDbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB_mFAC03F74920FAFAD98DAA88A71CF462A8D6B25AC_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  L_7;
		L_7 = ((  DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB  (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (DbRow_t73AAAEF878CB83F153C3272E8AD0686550042AEB )L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7D5CA5485D9AB3854D63A84C56262CB390699B29_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		uint32_t L_7;
		L_7 = ((  uint32_t (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (uint32_t)L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m35355FF8C72C97BFC231BC6BF099AF84FC51BFAE_gshared_inline (Span_1_tEEFBA9D34334B807DD5F9CE20A0798526579992E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4B1505E62CFA19EE4C92F330E4204B597FC68600(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 * L_2 = (Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_5;
		L_5 = ((  int32_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_6 = ___index0;
		int32_t* L_7;
		L_7 = ((  int32_t* (*) (int32_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((int32_t*)(int32_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (int32_t*)(L_7);
	}

IL_0030:
	{
		Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 * L_8 = (Pinnable_1_tB5B957042BDF724CB191675EAE4E116DCFEC8815 *)__this->get__pinnable_0();
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		int32_t* L_11;
		L_11 = ((  int32_t* (*) (int32_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)((int32_t*)(int32_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_12 = ___index0;
		int32_t* L_13;
		L_13 = ((  int32_t* (*) (int32_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((int32_t*)(int32_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (int32_t*)(L_13);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mA12C6906A19E331AFA2026D5CE144D16232EB598_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___destination0, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&___destination0), /*hidden argument*/Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 * L_7 = ___value1;
		StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  L_8 = (*(StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 *)L_7);
		((  void (*) (uint8_t*, StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, (StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  MemoryMarshal_Read_TisStackRow_t5925824841945157351ED6E5B4E7D67B21202C36_mBD0A196288B2E829AB3F8D58903FFFA76F727B36_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  L_7;
		L_7 = ((  StackRow_t5925824841945157351ED6E5B4E7D67B21202C36  (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (StackRow_t5925824841945157351ED6E5B4E7D67B21202C36 )L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayBufferWriter_1_get_WrittenCount_m0634F1C5C782DBB6B743D2743262FC48476C46F1_gshared_inline (ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__index_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  NUInt_op_Multiply_m9CFC3DD50807644F879A8BA16D1C71EC657D1874_inline (NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  ___left0, NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  ___right1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_1 = ___left0;
		void* L_2 = L_1.get__value_0();
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_3 = ___right1;
		void* L_4 = L_3.get__value_0();
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_mAF34281ECEE2ECA94B4933593CBF984CE961ACB5((&L_5), ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)(intptr_t)L_2)), (int64_t)((int64_t)((uint64_t)(intptr_t)L_4)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_6 = ___left0;
		void* L_7 = L_6.get__value_0();
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_8 = ___right1;
		void* L_9 = L_8.get__value_0();
		NUInt_tC50448D1D4E13B2C747AD49AFC53D8DC776ED0AC  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_m163A78956E6FC16CE7D88B1F7667D05802D058C8((&L_10), ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(intptr_t)L_7)), (int32_t)((int32_t)((uint32_t)(intptr_t)L_9)))), /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A ));
		return;
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0043;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		NullCheck((RuntimeObject *)(RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)(RuntimeObject *)L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 11)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_5, (Type_t *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616(/*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0057:
	{
		int32_t L_14 = ___length2;
		__this->set__length_2(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___array0;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_16;
		L_16 = ((  Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		__this->set__pinnable_0(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		intptr_t L_17 = ((PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->get_ArrayAdjustment_2();
		int32_t L_18 = ___start1;
		intptr_t L_19;
		L_19 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_17, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__this->set__byteOffset_1((intptr_t)L_19);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
