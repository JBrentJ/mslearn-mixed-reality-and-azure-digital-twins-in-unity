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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.VoidResult>
struct Task_1_tE1C9F780D72F8C5F65E4C71677640BF1A9DC1D3D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_tB9405541D98030886794675C49B7F3FB2E77ACA8;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.Channels.BoundedChannelOptions
struct BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989;
// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tD7E3663F614D05241EF3003ED234F7D8A68B80C5;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_t995D4964348790B509887466D75A2964279D7943;
// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_t2EDFDF766670E57F76D1B0B487888240991021A7;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE4311013D7C73B72D302DD68C3822E4120A896EB;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_tA67130F2FCFEBE0981A6739D9A4772F172F441DA;
// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t4733887CB9A02CE9E78ADF623C64F26A76C7E606;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8;
// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_tA9CED7D7337BEB19E01F02B73F821FE6E9EFBFB9;
// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_t010E1087CC8ACB2D830CB80EA8814AA169EF7923;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t3CB95A3FB5C21870439610B1DE7DFCF51A772D56;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t8152C5DBAC91FA53BFC27ADD2749181124068121;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t6002A8AE05552509789A997DE263F679F5300B71;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t054E2BAB4AF55B53FEF49696A798B1A39259D56E;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tF64EAD601E4F24C8A3610770606291CC09D28393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604;
IL2CPP_EXTERN_C String_t* _stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B;
IL2CPP_EXTERN_C String_t* _stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466;
IL2CPP_EXTERN_C String_t* _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_AvailableSentinel_m7ABDFFDAA4F5A6DAB69CD963E4BD464DB3D34B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_CompletedSentinel_m7F77EEF7F1405EFB2D02CC65CFBC97EF949E9745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncompleteOperationException_mB7CFC30753F917BC5B92C44A2BFAC8E57BFC08A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncorrectCurrentIdException_m644C22B1AC099436F12C24B3B137D05827C837BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowMultipleContinuations_mE46D05BAD27A5D402B4153B5847DABC7E038A662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions__ctor_m18DFD73CACBC0A714558E84A1B013E1A2D54E10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions_set_Capacity_mC6DFAA9C48B430F111C6E61BB8778445DADBC0A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions_set_FullMode_mCF09BBEDF34DC2629D30AD76AD67D4EECCB191E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t31581AF408CCC3F042760F020110580FCA6A1D9E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t41D133DE5307B4701765DA0B3ED21683B67C33A9 
{
public:

public:
};


// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tE1C9F780D72F8C5F65E4C71677640BF1A9DC1D3D * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068, ___m_task_0)); }
	inline Task_1_tE1C9F780D72F8C5F65E4C71677640BF1A9DC1D3D * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tE1C9F780D72F8C5F65E4C71677640BF1A9DC1D3D ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tE1C9F780D72F8C5F65E4C71677640BF1A9DC1D3D * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71  : public RuntimeObject
{
public:

public:
};

struct AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_availableSentinel
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_availableSentinel_0;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_completedSentinel
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_completedSentinel_1;

public:
	inline static int32_t get_offset_of_s_availableSentinel_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_StaticFields, ___s_availableSentinel_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_availableSentinel_0() const { return ___s_availableSentinel_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_availableSentinel_0() { return &___s_availableSentinel_0; }
	inline void set_s_availableSentinel_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_availableSentinel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_availableSentinel_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedSentinel_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_StaticFields, ___s_completedSentinel_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_completedSentinel_1() const { return ___s_completedSentinel_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_completedSentinel_1() { return &___s_completedSentinel_1; }
	inline void set_s_completedSentinel_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_completedSentinel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedSentinel_1), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Threading.Channels.Channel
struct Channel_t7298AA4C578D0BDFD513E55558704F2D90EFD449  : public RuntimeObject
{
public:

public:
};


// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleWriter>k__BackingField
	bool ___U3CSingleWriterU3Ek__BackingField_0;
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleReader>k__BackingField
	bool ___U3CSingleReaderU3Ek__BackingField_1;
	// System.Boolean System.Threading.Channels.ChannelOptions::<AllowSynchronousContinuations>k__BackingField
	bool ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSingleWriterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9, ___U3CSingleWriterU3Ek__BackingField_0)); }
	inline bool get_U3CSingleWriterU3Ek__BackingField_0() const { return ___U3CSingleWriterU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSingleWriterU3Ek__BackingField_0() { return &___U3CSingleWriterU3Ek__BackingField_0; }
	inline void set_U3CSingleWriterU3Ek__BackingField_0(bool value)
	{
		___U3CSingleWriterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSingleReaderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9, ___U3CSingleReaderU3Ek__BackingField_1)); }
	inline bool get_U3CSingleReaderU3Ek__BackingField_1() const { return ___U3CSingleReaderU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSingleReaderU3Ek__BackingField_1() { return &___U3CSingleReaderU3Ek__BackingField_1; }
	inline void set_U3CSingleReaderU3Ek__BackingField_1(bool value)
	{
		___U3CSingleReaderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9, ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2)); }
	inline bool get_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() const { return ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() { return &___U3CAllowSynchronousContinuationsU3Ek__BackingField_2; }
	inline void set_U3CAllowSynchronousContinuationsU3Ek__BackingField_2(bool value)
	{
		___U3CAllowSynchronousContinuationsU3Ek__BackingField_2 = value;
	}
};


// System.Threading.Channels.ChannelUtilities
struct ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF  : public RuntimeObject
{
public:

public:
};

struct ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields
{
public:
	// System.Exception System.Threading.Channels.ChannelUtilities::s_doneWritingSentinel
	Exception_t * ___s_doneWritingSentinel_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_trueTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_trueTask_1;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_falseTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_falseTask_2;
	// System.Threading.Tasks.Task System.Threading.Channels.ChannelUtilities::s_neverCompletingTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_neverCompletingTask_3;

public:
	inline static int32_t get_offset_of_s_doneWritingSentinel_0() { return static_cast<int32_t>(offsetof(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields, ___s_doneWritingSentinel_0)); }
	inline Exception_t * get_s_doneWritingSentinel_0() const { return ___s_doneWritingSentinel_0; }
	inline Exception_t ** get_address_of_s_doneWritingSentinel_0() { return &___s_doneWritingSentinel_0; }
	inline void set_s_doneWritingSentinel_0(Exception_t * value)
	{
		___s_doneWritingSentinel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_doneWritingSentinel_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_trueTask_1() { return static_cast<int32_t>(offsetof(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields, ___s_trueTask_1)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_trueTask_1() const { return ___s_trueTask_1; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_trueTask_1() { return &___s_trueTask_1; }
	inline void set_s_trueTask_1(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_trueTask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_trueTask_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_falseTask_2() { return static_cast<int32_t>(offsetof(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields, ___s_falseTask_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_falseTask_2() const { return ___s_falseTask_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_falseTask_2() { return &___s_falseTask_2; }
	inline void set_s_falseTask_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_falseTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_falseTask_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_neverCompletingTask_3() { return static_cast<int32_t>(offsetof(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields, ___s_neverCompletingTask_3)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_neverCompletingTask_3() const { return ___s_neverCompletingTask_3; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_neverCompletingTask_3() { return &___s_neverCompletingTask_3; }
	inline void set_s_neverCompletingTask_3(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_neverCompletingTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_neverCompletingTask_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Internal.PaddingHelpers
struct PaddingHelpers_t65980037B0DD79797EA55CF87E85E9996009A742  : public RuntimeObject
{
public:

public:
};


// FxResources.System.Threading.Channels.SR
struct SR_t31581AF408CCC3F042760F020110580FCA6A1D9E  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_tF64EAD601E4F24C8A3610770606291CC09D28393  : public RuntimeObject
{
public:

public:
};

struct SR_tF64EAD601E4F24C8A3610770606291CC09D28393_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_tF64EAD601E4F24C8A3610770606291CC09D28393_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}
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

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_tB9405541D98030886794675C49B7F3FB2E77ACA8  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tD7E3663F614D05241EF3003ED234F7D8A68B80C5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_t995D4964348790B509887466D75A2964279D7943  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_t2EDFDF766670E57F76D1B0B487888240991021A7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::<ParameterValue>k__BackingField
	bool ___U3CParameterValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CParameterValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DoesNotReturnIfAttribute_t2EDFDF766670E57F76D1B0B487888240991021A7, ___U3CParameterValueU3Ek__BackingField_0)); }
	inline bool get_U3CParameterValueU3Ek__BackingField_0() const { return ___U3CParameterValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CParameterValueU3Ek__BackingField_0() { return &___U3CParameterValueU3Ek__BackingField_0; }
	inline void set_U3CParameterValueU3Ek__BackingField_0(bool value)
	{
		___U3CParameterValueU3Ek__BackingField_0 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE4311013D7C73B72D302DD68C3822E4120A896EB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_tA67130F2FCFEBE0981A6739D9A4772F172F441DA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t4733887CB9A02CE9E78ADF623C64F26A76C7E606  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CReturnValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaybeNullWhenAttribute_t4733887CB9A02CE9E78ADF623C64F26A76C7E606, ___U3CReturnValueU3Ek__BackingField_0)); }
	inline bool get_U3CReturnValueU3Ek__BackingField_0() const { return ___U3CReturnValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReturnValueU3Ek__BackingField_0() { return &___U3CReturnValueU3Ek__BackingField_0; }
	inline void set_U3CReturnValueU3Ek__BackingField_0(bool value)
	{
		___U3CReturnValueU3Ek__BackingField_0 = value;
	}
};


// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::<Members>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CMembersU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8, ___U3CMembersU3Ek__BackingField_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CMembersU3Ek__BackingField_0() const { return ___U3CMembersU3Ek__BackingField_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CMembersU3Ek__BackingField_0() { return &___U3CMembersU3Ek__BackingField_0; }
	inline void set_U3CMembersU3Ek__BackingField_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CMembersU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMembersU3Ek__BackingField_0), (void*)value);
	}
};


// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<Members>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CMembersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReturnValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C, ___U3CReturnValueU3Ek__BackingField_0)); }
	inline bool get_U3CReturnValueU3Ek__BackingField_0() const { return ___U3CReturnValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReturnValueU3Ek__BackingField_0() { return &___U3CReturnValueU3Ek__BackingField_0; }
	inline void set_U3CReturnValueU3Ek__BackingField_0(bool value)
	{
		___U3CReturnValueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C, ___U3CMembersU3Ek__BackingField_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CMembersU3Ek__BackingField_1() const { return ___U3CMembersU3Ek__BackingField_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CMembersU3Ek__BackingField_1() { return &___U3CMembersU3Ek__BackingField_1; }
	inline void set_U3CMembersU3Ek__BackingField_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CMembersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMembersU3Ek__BackingField_1), (void*)value);
	}
};


// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_tA9CED7D7337BEB19E01F02B73F821FE6E9EFBFB9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_t010E1087CC8ACB2D830CB80EA8814AA169EF7923  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CParameterNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NotNullIfNotNullAttribute_t010E1087CC8ACB2D830CB80EA8814AA169EF7923, ___U3CParameterNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterNameU3Ek__BackingField_0() const { return ___U3CParameterNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterNameU3Ek__BackingField_0() { return &___U3CParameterNameU3Ek__BackingField_0; }
	inline void set_U3CParameterNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterNameU3Ek__BackingField_0), (void*)value);
	}
};


// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t3CB95A3FB5C21870439610B1DE7DFCF51A772D56  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CReturnValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NotNullWhenAttribute_t3CB95A3FB5C21870439610B1DE7DFCF51A772D56, ___U3CReturnValueU3Ek__BackingField_0)); }
	inline bool get_U3CReturnValueU3Ek__BackingField_0() const { return ___U3CReturnValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReturnValueU3Ek__BackingField_0() { return &___U3CReturnValueU3Ek__BackingField_0; }
	inline void set_U3CReturnValueU3Ek__BackingField_0(bool value)
	{
		___U3CReturnValueU3Ek__BackingField_0 = value;
	}
};


// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t8152C5DBAC91FA53BFC27ADD2749181124068121  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_t8152C5DBAC91FA53BFC27ADD2749181124068121, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t6002A8AE05552509789A997DE263F679F5300B71  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_t6002A8AE05552509789A997DE263F679F5300B71, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t054E2BAB4AF55B53FEF49696A798B1A39259D56E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;

public:
	inline static int32_t get_offset_of_IncludesInternals_0() { return static_cast<int32_t>(offsetof(NullablePublicOnlyAttribute_t054E2BAB4AF55B53FEF49696A798B1A39259D56E, ___IncludesInternals_0)); }
	inline bool get_IncludesInternals_0() const { return ___IncludesInternals_0; }
	inline bool* get_address_of_IncludesInternals_0() { return &___IncludesInternals_0; }
	inline void set_IncludesInternals_0(bool value)
	{
		___IncludesInternals_0 = value;
	}
};


// Internal.PaddingFor32
struct PaddingFor32_t847A8083720CD028CF473F64A4C89993464D891D 
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
		uint8_t PaddingFor32_t847A8083720CD028CF473F64A4C89993464D891D__padding[124];
	};

public:
};


// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC  : public ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9
{
public:

public:
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


// System.VoidResult
struct VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F__padding[1];
	};

public:
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


// System.Threading.Channels.BoundedChannelFullMode
struct BoundedChannelFullMode_t11D6E60CDBF8CD1BB18ECB1D00609ABA81684B7F 
{
public:
	// System.Int32 System.Threading.Channels.BoundedChannelFullMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundedChannelFullMode_t11D6E60CDBF8CD1BB18ECB1D00609ABA81684B7F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
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


// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720  : public AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71
{
public:
	// System.Threading.CancellationTokenRegistration System.Threading.Channels.AsyncOperation`1::_registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ____registration_2;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_pooled
	bool ____pooled_3;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_runContinuationsAsynchronously
	bool ____runContinuationsAsynchronously_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Channels.AsyncOperation`1::_completionReserved
	int32_t ____completionReserved_5;
	// TResult System.Threading.Channels.AsyncOperation`1::_result
	bool ____result_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Channels.AsyncOperation`1::_error
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ____error_7;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation`1::_continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____continuation_8;
	// System.Object System.Threading.Channels.AsyncOperation`1::_continuationState
	RuntimeObject * ____continuationState_9;
	// System.Object System.Threading.Channels.AsyncOperation`1::_schedulingContext
	RuntimeObject * ____schedulingContext_10;
	// System.Threading.ExecutionContext System.Threading.Channels.AsyncOperation`1::_executionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____executionContext_11;
	// System.Int16 System.Threading.Channels.AsyncOperation`1::_currentId
	int16_t ____currentId_12;
	// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1::<Next>k__BackingField
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * ___U3CNextU3Ek__BackingField_13;
	// System.Threading.CancellationToken System.Threading.Channels.AsyncOperation`1::<CancellationToken>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CCancellationTokenU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__registration_2() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____registration_2)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get__registration_2() const { return ____registration_2; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of__registration_2() { return &____registration_2; }
	inline void set__registration_2(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		____registration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____registration_2))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____registration_2))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__pooled_3() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____pooled_3)); }
	inline bool get__pooled_3() const { return ____pooled_3; }
	inline bool* get_address_of__pooled_3() { return &____pooled_3; }
	inline void set__pooled_3(bool value)
	{
		____pooled_3 = value;
	}

	inline static int32_t get_offset_of__runContinuationsAsynchronously_4() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____runContinuationsAsynchronously_4)); }
	inline bool get__runContinuationsAsynchronously_4() const { return ____runContinuationsAsynchronously_4; }
	inline bool* get_address_of__runContinuationsAsynchronously_4() { return &____runContinuationsAsynchronously_4; }
	inline void set__runContinuationsAsynchronously_4(bool value)
	{
		____runContinuationsAsynchronously_4 = value;
	}

	inline static int32_t get_offset_of__completionReserved_5() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____completionReserved_5)); }
	inline int32_t get__completionReserved_5() const { return ____completionReserved_5; }
	inline int32_t* get_address_of__completionReserved_5() { return &____completionReserved_5; }
	inline void set__completionReserved_5(int32_t value)
	{
		____completionReserved_5 = value;
	}

	inline static int32_t get_offset_of__result_6() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____result_6)); }
	inline bool get__result_6() const { return ____result_6; }
	inline bool* get_address_of__result_6() { return &____result_6; }
	inline void set__result_6(bool value)
	{
		____result_6 = value;
	}

	inline static int32_t get_offset_of__error_7() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____error_7)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get__error_7() const { return ____error_7; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of__error_7() { return &____error_7; }
	inline void set__error_7(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		____error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_7), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_8() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____continuation_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__continuation_8() const { return ____continuation_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__continuation_8() { return &____continuation_8; }
	inline void set__continuation_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____continuation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_8), (void*)value);
	}

	inline static int32_t get_offset_of__continuationState_9() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____continuationState_9)); }
	inline RuntimeObject * get__continuationState_9() const { return ____continuationState_9; }
	inline RuntimeObject ** get_address_of__continuationState_9() { return &____continuationState_9; }
	inline void set__continuationState_9(RuntimeObject * value)
	{
		____continuationState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuationState_9), (void*)value);
	}

	inline static int32_t get_offset_of__schedulingContext_10() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____schedulingContext_10)); }
	inline RuntimeObject * get__schedulingContext_10() const { return ____schedulingContext_10; }
	inline RuntimeObject ** get_address_of__schedulingContext_10() { return &____schedulingContext_10; }
	inline void set__schedulingContext_10(RuntimeObject * value)
	{
		____schedulingContext_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schedulingContext_10), (void*)value);
	}

	inline static int32_t get_offset_of__executionContext_11() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____executionContext_11)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get__executionContext_11() const { return ____executionContext_11; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of__executionContext_11() { return &____executionContext_11; }
	inline void set__executionContext_11(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		____executionContext_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____executionContext_11), (void*)value);
	}

	inline static int32_t get_offset_of__currentId_12() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ____currentId_12)); }
	inline int16_t get__currentId_12() const { return ____currentId_12; }
	inline int16_t* get_address_of__currentId_12() { return &____currentId_12; }
	inline void set__currentId_12(int16_t value)
	{
		____currentId_12 = value;
	}

	inline static int32_t get_offset_of_U3CNextU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ___U3CNextU3Ek__BackingField_13)); }
	inline AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * get_U3CNextU3Ek__BackingField_13() const { return ___U3CNextU3Ek__BackingField_13; }
	inline AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** get_address_of_U3CNextU3Ek__BackingField_13() { return &___U3CNextU3Ek__BackingField_13; }
	inline void set_U3CNextU3Ek__BackingField_13(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * value)
	{
		___U3CNextU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNextU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCancellationTokenU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720, ___U3CCancellationTokenU3Ek__BackingField_14)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CCancellationTokenU3Ek__BackingField_14() const { return ___U3CCancellationTokenU3Ek__BackingField_14; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CCancellationTokenU3Ek__BackingField_14() { return &___U3CCancellationTokenU3Ek__BackingField_14; }
	inline void set_U3CCancellationTokenU3Ek__BackingField_14(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CCancellationTokenU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCancellationTokenU3Ek__BackingField_14))->___m_source_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Channels.BoundedChannelOptions
struct BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F  : public ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9
{
public:
	// System.Int32 System.Threading.Channels.BoundedChannelOptions::_capacity
	int32_t ____capacity_3;
	// System.Threading.Channels.BoundedChannelFullMode System.Threading.Channels.BoundedChannelOptions::_mode
	int32_t ____mode_4;

public:
	inline static int32_t get_offset_of__capacity_3() { return static_cast<int32_t>(offsetof(BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F, ____capacity_3)); }
	inline int32_t get__capacity_3() const { return ____capacity_3; }
	inline int32_t* get_address_of__capacity_3() { return &____capacity_3; }
	inline void set__capacity_3(int32_t value)
	{
		____capacity_3 = value;
	}

	inline static int32_t get_offset_of__mode_4() { return static_cast<int32_t>(offsetof(BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F, ____mode_4)); }
	inline int32_t get__mode_4() const { return ____mode_4; }
	inline int32_t* get_address_of__mode_4() { return &____mode_4; }
	inline void set__mode_4(int32_t value)
	{
		____mode_4 = value;
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

// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___ResourceSets_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____resourceSets_2)); }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____satelliteContractVersion_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C_gshared (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969_gshared (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2_gshared (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F  ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_gshared_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * ___value0, const RuntimeMethod* method);
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_gshared_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B_gshared (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, bool ___item0, const RuntimeMethod* method);
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334_gshared (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Boolean>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_gshared (bool ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_mAE7F7F36029BCE39C7E603841EB51B3C3EAD5B06 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m094636B7B35E76FE686AEF5C69230CF4296D5992 (const RuntimeMethod* method);
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_mF2883AEE1F38FE3CEA3ED8CF05EAA9D3DF75E16D (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m4E0E12E785883CFCCA66CEE868F5F72E492BFC97 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Channels.BoundedChannelOptions::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_Capacity_mC6DFAA9C48B430F111C6E61BB8778445DADBC0A8 (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m35FA85C64CAB981B7A5A3BB72AE1D8FF7963908E (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
inline bool TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C_gshared)(__this, ___cancellationToken0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969 (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2 (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * __this, VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F  ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 *, VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F , const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
inline void AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *, AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *, const RuntimeMethod*))AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_gshared_inline)(__this, ___value0, method);
}
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
inline AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * (*) (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *, const RuntimeMethod*))AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
inline bool AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, bool ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *, bool, const RuntimeMethod*))AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
inline bool AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334 (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *, Exception_t *, const RuntimeMethod*))AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mA2AC7155915505FD89F6F5483750BCEB8580AEF6 (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m573FFE03403DB9FF70619B40725315FF24DCCD04 (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, Exception_t * ___innerException0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Boolean>(!!0)
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41 (bool ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_gshared)(___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline)(__this, method);
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2 (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m452DFD02B33403094DEB86FCF944347C7DEAD3DD (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
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
// System.Void System.Diagnostics.CodeAnalysis.AllowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowNullAttribute__ctor_m018180DEE58CE1E3B6C08E439241E0BC228E9EC0 (AllowNullAttribute_tB9405541D98030886794675C49B7F3FB2E77ACA8 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.AsyncOperation::AvailableSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_AvailableSentinel_m7ABDFFDAA4F5A6DAB69CD963E4BD464DB3D34B90 (RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::CompletedSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_CompletedSentinel_m7F77EEF7F1405EFB2D02CC65CFBC97EF949E9745 (RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncompleteOperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncompleteOperationException_mB7CFC30753F917BC5B92C44A2BFAC8E57BFC08A9 (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncompleteAsyncOperation_mAE7F7F36029BCE39C7E603841EB51B3C3EAD5B06(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncompleteOperationException_mB7CFC30753F917BC5B92C44A2BFAC8E57BFC08A9_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowMultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowMultipleContinuations_mE46D05BAD27A5D402B4153B5847DABC7E038A662 (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_MultipleContinuations_m094636B7B35E76FE686AEF5C69230CF4296D5992(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowMultipleContinuations_mE46D05BAD27A5D402B4153B5847DABC7E038A662_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncorrectCurrentIdException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncorrectCurrentIdException_m644C22B1AC099436F12C24B3B137D05827C837BF (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncorrectToken_mF2883AEE1F38FE3CEA3ED8CF05EAA9D3DF75E16D(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncorrectCurrentIdException_m644C22B1AC099436F12C24B3B137D05827C837BF_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m5116EA1D21A9C9FDDFFE4EAF924A41525F9F134C (AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__cctor_m6373FFE31FEF9CE467E07A15AA829C525C0BD088 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_AvailableSentinel_m7ABDFFDAA4F5A6DAB69CD963E4BD464DB3D34B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_CompletedSentinel_m7F77EEF7F1405EFB2D02CC65CFBC97EF949E9745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, NULL, (intptr_t)((intptr_t)AsyncOperation_AvailableSentinel_m7ABDFFDAA4F5A6DAB69CD963E4BD464DB3D34B90_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_il2cpp_TypeInfo_var))->set_s_availableSentinel_0(L_0);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, NULL, (intptr_t)((intptr_t)AsyncOperation_CompletedSentinel_m7F77EEF7F1405EFB2D02CC65CFBC97EF949E9745_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tAFD1FB5A5A5677080AF6B45F0FC68B6A22AAEC71_il2cpp_TypeInfo_var))->set_s_completedSentinel_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Channels.BoundedChannelOptions::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions__ctor_m18DFD73CACBC0A714558E84A1B013E1A2D54E10F (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	{
		ChannelOptions__ctor_m4E0E12E785883CFCCA66CEE868F5F72E492BFC97(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions__ctor_m18DFD73CACBC0A714558E84A1B013E1A2D54E10F_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_2 = ___capacity0;
		BoundedChannelOptions_set_Capacity_mC6DFAA9C48B430F111C6E61BB8778445DADBC0A8(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Channels.BoundedChannelOptions::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedChannelOptions_get_Capacity_m74433EF6E69912116FD38F671F01371E19ECE3E7 (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__capacity_3();
		return L_0;
	}
}
// System.Void System.Threading.Channels.BoundedChannelOptions::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_Capacity_mC6DFAA9C48B430F111C6E61BB8778445DADBC0A8 (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions_set_Capacity_mC6DFAA9C48B430F111C6E61BB8778445DADBC0A8_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___value0;
		__this->set__capacity_3(L_2);
		return;
	}
}
// System.Threading.Channels.BoundedChannelFullMode System.Threading.Channels.BoundedChannelOptions::get_FullMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedChannelOptions_get_FullMode_mBA741E24729F437184CC693DA7A39AD73CA60421 (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__mode_4();
		return L_0;
	}
}
// System.Void System.Threading.Channels.BoundedChannelOptions::set_FullMode(System.Threading.Channels.BoundedChannelFullMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_FullMode_mCF09BBEDF34DC2629D30AD76AD67D4EECCB191E9 (BoundedChannelOptions_tE8C4EEC604C3242B47A3521A1223E1FAF410A57F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)3))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->set__mode_4(L_1);
		return;
	}

IL_000c:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions_set_FullMode_mCF09BBEDF34DC2629D30AD76AD67D4EECCB191E9_RuntimeMethod_var)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mA2AC7155915505FD89F6F5483750BCEB8580AEF6 (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m35FA85C64CAB981B7A5A3BB72AE1D8FF7963908E(/*hidden argument*/NULL);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m528856316FAC0B613A85064A1F1A534A3DBAD916 (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m573FFE03403DB9FF70619B40725315FF24DCCD04 (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, Exception_t * ___innerException0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m35FA85C64CAB981B7A5A3BB72AE1D8FF7963908E(/*hidden argument*/NULL);
		Exception_t * L_1 = ___innerException0;
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mE9450B8E01E286023BCEE8488D3FBCEEB901931E (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleWriter_m8F8613BFA3B590E36CE0DD30385125E09D45A393 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSingleWriterU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleWriter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleWriter_m2B6448A387D2CAFB9CB55510BB775C6C49AC01AD (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSingleWriterU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleReader_m70EBA453A94A2068938DE81679607BED3B30CBD3 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSingleReaderU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleReader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleReader_m170B5C5FAA8E9BA57E3932A470A41F0F189F8391 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSingleReaderU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_AllowSynchronousContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_AllowSynchronousContinuations_m46D6EEEC45325A3728B4426B2BAE147FDB0FC856 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowSynchronousContinuationsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_AllowSynchronousContinuations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_AllowSynchronousContinuations_m4F40D9555DA5261EBB486BDBE91A0BAB6CE71311 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowSynchronousContinuationsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m4E0E12E785883CFCCA66CEE868F5F72E492BFC97 (ChannelOptions_t99A1232F1452FE29149F226BF8F857BBB1CACEE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.ChannelUtilities::Complete(System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_Complete_m080A76E08DA8D63887A7A41CFEB25099DA3E4947 (TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * ___tcs0, Exception_t * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * V_0 = NULL;
	VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Exception_t * L_0 = ___error1;
		V_0 = ((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var));
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * L_2 = ___tcs0;
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C(L_2, L_4, /*hidden argument*/TaskCompletionSource_1_TrySetCanceled_mC77E362397C74D38821E786F2CF9364B080E5F1C_RuntimeMethod_var);
		return;
	}

IL_0018:
	{
		Exception_t * L_6 = ___error1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t * L_7 = ___error1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var);
		Exception_t * L_8 = ((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->get_s_doneWritingSentinel_0();
		if ((((RuntimeObject*)(Exception_t *)L_7) == ((RuntimeObject*)(Exception_t *)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * L_9 = ___tcs0;
		Exception_t * L_10 = ___error1;
		NullCheck(L_9);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_TrySetException_m542272CA235101E655A7A38CD314344D92234969_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		TaskCompletionSource_1_tB51CE293AF96AF371E6359CBF13F09F29FA90068 * L_12 = ___tcs0;
		il2cpp_codegen_initobj((&V_1), sizeof(VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F ));
		VoidResult_tF64E6DCD5A4EB4F1C42F89895D4A3F56B2EEE44F  L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2(L_12, L_13, /*hidden argument*/TaskCompletionSource_1_TrySetResult_mA63ED15F439ECF5622F03CF219617C2F1527FDD2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::QueueWaiter(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Threading.Channels.AsyncOperation`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_QueueWaiter_m8E3CA705CAD5757C0795497747E81EABE5DA47E1 (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** ___tail0, AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * ___waiter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * V_0 = NULL;
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** L_0 = ___tail0;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_1 = *((AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 **)L_0);
		V_0 = L_1;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_3 = ___waiter1;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_4 = ___waiter1;
		NullCheck(L_3);
		AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_inline(L_3, L_4, /*hidden argument*/AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
		goto IL_0022;
	}

IL_000f:
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_5 = ___waiter1;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_6 = V_0;
		NullCheck(L_6);
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_7;
		L_7 = AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_inline(L_6, /*hidden argument*/AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_inline(L_5, L_7, /*hidden argument*/AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_8 = V_0;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_9 = ___waiter1;
		NullCheck(L_8);
		AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_inline(L_8, L_9, /*hidden argument*/AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
	}

IL_0022:
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** L_10 = ___tail0;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_11 = ___waiter1;
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_11);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::WakeUpWaiters(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_WakeUpWaiters_m2A90020EC9DA710C706B95B239998144CD326E1A (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** ___listTail0, bool ___result1, Exception_t * ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * V_0 = NULL;
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * V_1 = NULL;
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * V_2 = NULL;
	AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * V_3 = NULL;
	bool V_4 = false;
	bool G_B5_0 = false;
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** L_0 = ___listTail0;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_1 = *((AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 **)L_0);
		V_0 = L_1;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 ** L_3 = ___listTail0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_4 = V_0;
		NullCheck(L_4);
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_5;
		L_5 = AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_inline(L_4, /*hidden argument*/AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var);
		V_1 = L_5;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_6 = V_1;
		V_2 = L_6;
	}

IL_0012:
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_7 = V_2;
		NullCheck(L_7);
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_8;
		L_8 = AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_inline(L_7, /*hidden argument*/AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_RuntimeMethod_var);
		V_3 = L_8;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_9 = V_2;
		NullCheck(L_9);
		AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_inline(L_9, (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *)NULL, /*hidden argument*/AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_RuntimeMethod_var);
		Exception_t * L_10 = ___error2;
		if (L_10)
		{
			goto IL_002c;
		}
	}
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_11 = V_2;
		bool L_12 = ___result1;
		NullCheck(L_11);
		bool L_13;
		L_13 = AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B(L_11, L_12, /*hidden argument*/AsyncOperation_1_TrySetResult_mDBF951C8CF1467537E93F7332A4AE525F12ECD3B_RuntimeMethod_var);
		G_B5_0 = L_13;
		goto IL_0033;
	}

IL_002c:
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_14 = V_2;
		Exception_t * L_15 = ___error2;
		NullCheck(L_14);
		bool L_16;
		L_16 = AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334(L_14, L_15, /*hidden argument*/AsyncOperation_1_TrySetException_mEB268BF67B2AF00D263825D7ADB1483478EE5334_RuntimeMethod_var);
		G_B5_0 = L_16;
	}

IL_0033:
	{
		V_4 = G_B5_0;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_17 = V_3;
		V_2 = L_17;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_18 = V_2;
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_19 = V_1;
		if ((!(((RuntimeObject*)(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *)L_18) == ((RuntimeObject*)(AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *)L_19))))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Exception System.Threading.Channels.ChannelUtilities::CreateInvalidCompletionException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ChannelUtilities_CreateInvalidCompletionException_m6853FBA16B0238CDD0690E70AB6B6533247B4D83 (Exception_t * ___inner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___inner0;
		if (((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_1 = ___inner0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t * L_2 = ___inner0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var);
		Exception_t * L_3 = ((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->get_s_doneWritingSentinel_0();
		if ((!(((RuntimeObject*)(Exception_t *)L_2) == ((RuntimeObject*)(Exception_t *)L_3))))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * L_4 = (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 *)il2cpp_codegen_object_new(ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989_il2cpp_TypeInfo_var);
		ChannelClosedException__ctor_mA2AC7155915505FD89F6F5483750BCEB8580AEF6(L_4, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		Exception_t * L_5 = ___inner0;
		ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 * L_6 = (ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989 *)il2cpp_codegen_object_new(ChannelClosedException_t7B0C1FAFF253D5E80AAEA8EDB90BF6361740D989_il2cpp_TypeInfo_var);
		ChannelClosedException__ctor_m573FFE03403DB9FF70619B40725315FF24DCCD04(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		Exception_t * L_7 = ___inner0;
		return L_7;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities__cctor_m48C02BB253EE70D91E6B125FC1A711A0F6BA339C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904, /*hidden argument*/NULL);
		((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->set_s_doneWritingSentinel_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_1;
		L_1 = Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41((bool)1, /*hidden argument*/Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_RuntimeMethod_var);
		((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->set_s_trueTask_1(L_1);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_2;
		L_2 = Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41((bool)0, /*hidden argument*/Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3EFA7B6F897E9C163385E40C4A44069D6BF70F41_RuntimeMethod_var);
		((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->set_s_falseTask_2(L_2);
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_3 = (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		NullCheck(L_3);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4;
		L_4 = TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		((ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_tB45BC1B34000AA1CA940BE20DBB947EBEDD995FF_il2cpp_TypeInfo_var))->set_s_neverCompletingTask_3(L_4);
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
// System.Void System.Diagnostics.CodeAnalysis.DisallowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisallowNullAttribute__ctor_m5F2FC952C9874CDBA8658F87EF516AE1B63F6253 (DisallowNullAttribute_tD7E3663F614D05241EF3003ED234F7D8A68B80C5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_m1F01F29A708F122BB042B63E8D5B69DDA1DEC9B0 (DoesNotReturnAttribute_t995D4964348790B509887466D75A2964279D7943 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnIfAttribute__ctor_mC8E114BA8622A105CF475D8D9465CF73BC413217 (DoesNotReturnIfAttribute_t2EDFDF766670E57F76D1B0B487888240991021A7 * __this, bool ___parameterValue0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___parameterValue0;
		__this->set_U3CParameterValueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::get_ParameterValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoesNotReturnIfAttribute_get_ParameterValue_mF1395D289E9B8BE718DD0F553B958C0EAFEC88EE (DoesNotReturnIfAttribute_t2EDFDF766670E57F76D1B0B487888240991021A7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CParameterValueU3Ek__BackingField_0();
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m466C0B3FE0353C088DFDDE4BC0596EDE3362CFB4 (EmbeddedAttribute_tE4311013D7C73B72D302DD68C3822E4120A896EB * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullAttribute__ctor_m3185B4EAE51604785B2F85D239D3B9A6B621007D (MaybeNullAttribute_tA67130F2FCFEBE0981A6739D9A4772F172F441DA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullWhenAttribute__ctor_mDF0294E72584A42766CA4D31519BF9D9379D4E86 (MaybeNullWhenAttribute_t4733887CB9A02CE9E78ADF623C64F26A76C7E606 * __this, bool ___returnValue0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___returnValue0;
		__this->set_U3CReturnValueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeNullWhenAttribute_get_ReturnValue_m3E80D8BE7C432BF4E94514A8A298909BA4336640 (MaybeNullWhenAttribute_t4733887CB9A02CE9E78ADF623C64F26A76C7E606 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CReturnValueU3Ek__BackingField_0();
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_m6C354700E528155356382B5189200F797644E3C1 (MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8 * __this, String_t* ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2 = ___member0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		__this->set_U3CMembersU3Ek__BackingField_0(L_1);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_m27DA733132D543E3CC58A5C483DFFDE60C3F05E5 (MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___members0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___members0;
		__this->set_U3CMembersU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* MemberNotNullAttribute_get_Members_mA8AE3D35F80575BD52EADEBC0440E75C670B3F89 (MemberNotNullAttribute_t175508EBB12EACBDBBAA628E5A9AE665102AADC8 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CMembersU3Ek__BackingField_0();
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m2F7DB3F90C7D38EE2CD32B806E9B4864408FF0FB (MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C * __this, bool ___returnValue0, String_t* ___member1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___returnValue0;
		__this->set_U3CReturnValueU3Ek__BackingField_0(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___member1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		__this->set_U3CMembersU3Ek__BackingField_1(L_2);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m3CC15DB38717E48C5FFF963ADAEEA41ACD9260E5 (MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C * __this, bool ___returnValue0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___members1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___returnValue0;
		__this->set_U3CReturnValueU3Ek__BackingField_0(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___members1;
		__this->set_U3CMembersU3Ek__BackingField_1(L_1);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberNotNullWhenAttribute_get_ReturnValue_m4CADFCEAF8D50683C6D01C81F6B958893D553A00 (MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CReturnValueU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* MemberNotNullWhenAttribute_get_Members_m1515B0A8F4D6E95DA8410D2CC459DC060CE76AA1 (MemberNotNullWhenAttribute_tAB91E172A391F683E7EC79D5CF54D33B963EF37C * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CMembersU3Ek__BackingField_1();
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m4AC7A6A5521FB9908547C9006E323CBA5264CABF (NotNullAttribute_tA9CED7D7337BEB19E01F02B73F821FE6E9EFBFB9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullIfNotNullAttribute__ctor_m90FB3575F6B89CB6B7DD3A612A3E22AE9FF4321E (NotNullIfNotNullAttribute_t010E1087CC8ACB2D830CB80EA8814AA169EF7923 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameterName0;
		__this->set_U3CParameterNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullIfNotNullAttribute_get_ParameterName_m072EF9E8B518C28EED5B39AF38773276E9BC484E (NotNullIfNotNullAttribute_t010E1087CC8ACB2D830CB80EA8814AA169EF7923 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CParameterNameU3Ek__BackingField_0();
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_mD5179BEE8E3CBB90E377FF1742F3A821C94A88AA (NotNullWhenAttribute_t3CB95A3FB5C21870439610B1DE7DFCF51A772D56 * __this, bool ___returnValue0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___returnValue0;
		__this->set_U3CReturnValueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotNullWhenAttribute_get_ReturnValue_mDDFC6975F1F9C9594C944187E384985754FF00F9 (NotNullWhenAttribute_t3CB95A3FB5C21870439610B1DE7DFCF51A772D56 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CReturnValueU3Ek__BackingField_0();
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m92558BEFF78FBCEEAB262660D16ED990E32EF274 (NullableAttribute_t8152C5DBAC91FA53BFC27ADD2749181124068121 * __this, uint8_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->set_NullableFlags_0(L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mD72CBD04192E2CAFA1023538A1482A3EB4EB942B (NullableAttribute_t8152C5DBAC91FA53BFC27ADD2749181124068121 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		__this->set_NullableFlags_0(L_0);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m747A34B4B664773C0987F8649FDB73EA5EFCCAE6 (NullableContextAttribute_t6002A8AE05552509789A997DE263F679F5300B71 * __this, uint8_t p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		uint8_t L_0 = p0;
		__this->set_Flag_0(L_0);
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m531075848FF0E89499C3E21CD01814A62340A0A1 (NullablePublicOnlyAttribute_t054E2BAB4AF55B53FEF49696A798B1A39259D56E * __this, bool p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = p0;
		__this->set_IncludesInternals_0(L_0);
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___defaultString1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		String_t* L_3 = ___resourceKey0;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		return G_B3_0;
	}

IL_000e:
	{
		V_0 = (String_t*)NULL;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4;
		L_4 = SR_get_ResourceManager_m452DFD02B33403094DEB86FCF944347C7DEAD3DD(/*hidden argument*/NULL);
		String_t* L_5 = ___resourceKey0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(8 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_4, L_5);
		V_0 = L_6;
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		String_t* L_7 = ___defaultString1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_8 = ___resourceKey0;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_11 = ___defaultString1;
		return L_11;
	}

IL_002f:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mEC5B4B74D45D6638D44C519F0D789F6089099C89 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject * L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mABF8BFBE4557BA0534BD9DDDC0715EE08E25FD1F (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		RuntimeObject * L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8;
		L_8 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, /*hidden argument*/NULL);
		return L_8;
	}

IL_0024:
	{
		String_t* L_9 = ___resourceFormat0;
		RuntimeObject * L_10 = ___p11;
		RuntimeObject * L_11 = ___p22;
		String_t* L_12;
		L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4C3AA3E7A8F9DCE7CA509B44AEB4D401ED3460D0 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		RuntimeObject * L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		RuntimeObject * L_9 = ___p33;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, /*hidden argument*/NULL);
		return L_10;
	}

IL_0028:
	{
		String_t* L_11 = ___resourceFormat0;
		RuntimeObject * L_12 = ___p11;
		RuntimeObject * L_13 = ___p22;
		RuntimeObject * L_14 = ___p33;
		String_t* L_15;
		L_15 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String System.SR::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m031539F40FE7864AB2A546BB2B49557F2286FCC3 (String_t* ___resourceFormat0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args1;
		String_t* L_4;
		L_4 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0021:
	{
		String_t* L_6 = ___resourceFormat0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___args1;
		String_t* L_8;
		L_8 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		String_t* L_9 = ___resourceFormat0;
		return L_9;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m66C5BE5824B0B40EC099F4FCDED4E32906DC3B0A (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___provider0;
		String_t* L_8 = ___resourceFormat1;
		RuntimeObject * L_9 = ___p12;
		String_t* L_10;
		L_10 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB194381D3682E746A60E0FD7828670556890812F (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		RuntimeObject * L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8;
		L_8 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, /*hidden argument*/NULL);
		return L_8;
	}

IL_0024:
	{
		RuntimeObject* L_9 = ___provider0;
		String_t* L_10 = ___resourceFormat1;
		RuntimeObject * L_11 = ___p12;
		RuntimeObject * L_12 = ___p23;
		String_t* L_13;
		L_13 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m844764D92C306DCA576ED13EFD21C59357DFC984 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, RuntimeObject * ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		RuntimeObject * L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		RuntimeObject * L_9 = ___p34;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, /*hidden argument*/NULL);
		return L_10;
	}

IL_0029:
	{
		RuntimeObject* L_11 = ___provider0;
		String_t* L_12 = ___resourceFormat1;
		RuntimeObject * L_13 = ___p12;
		RuntimeObject * L_14 = ___p23;
		RuntimeObject * L_15 = ___p34;
		String_t* L_16;
		L_16 = String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B(L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m54C3811D904B81E3361E3432AC88BDE4C340BE9A (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args2;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		bool L_1;
		L_1 = SR_UsingResourceKeys_m5A54A07FDC26A74436864A2F9AE8CA1D40FDACA2(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args2;
		String_t* L_4;
		L_4 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0021:
	{
		RuntimeObject* L_6 = ___provider0;
		String_t* L_7 = ___resourceFormat1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = ___args2;
		String_t* L_9;
		L_9 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002a:
	{
		String_t* L_10 = ___resourceFormat1;
		return L_10;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m452DFD02B33403094DEB86FCF944347C7DEAD3DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t31581AF408CCC3F042760F020110580FCA6A1D9E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tF64EAD601E4F24C8A3610770606291CC09D28393_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_tF64EAD601E4F24C8A3610770606291CC09D28393_StaticFields*)il2cpp_codegen_static_fields_for(SR_tF64EAD601E4F24C8A3610770606291CC09D28393_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_t31581AF408CCC3F042760F020110580FCA6A1D9E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_tF64EAD601E4F24C8A3610770606291CC09D28393_StaticFields*)il2cpp_codegen_static_fields_for(SR_tF64EAD601E4F24C8A3610770606291CC09D28393_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m35FA85C64CAB981B7A5A3BB72AE1D8FF7963908E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A(_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_mAE7F7F36029BCE39C7E603841EB51B3C3EAD5B06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A(_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m094636B7B35E76FE686AEF5C69230CF4296D5992 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A(_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_mF2883AEE1F38FE3CEA3ED8CF05EAA9D3DF75E16D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m068B39740371118883AA8DD93E1F6826EE90E02A(_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.UnboundedChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnboundedChannelOptions__ctor_m0C6D655CBA98191FC4F1F28AC8043364B6E6F729 (UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC * __this, const RuntimeMethod* method)
{
	{
		ChannelOptions__ctor_m4E0E12E785883CFCCA66CEE868F5F72E492BFC97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get__cancellationToken_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_m182D6E2D687B873A705B313D1A74E1CFDA45CFE7_gshared_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * ___value0, const RuntimeMethod* method)
{
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_0 = ___value0;
		__this->set_U3CNextU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * AsyncOperation_1_get_Next_m99BF46CD4A7068658B6382222D8CF7FB15E81202_gshared_inline (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 * L_0 = (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *)__this->get_U3CNextU3Ek__BackingField_13();
		return (AsyncOperation_1_tFF2731CC08C85EEF349C72AA836CCA696CB8E720 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_0;
	}
}
