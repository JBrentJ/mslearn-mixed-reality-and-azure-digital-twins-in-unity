#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object[]>
struct Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.Object,System.Exception>
struct Action_3_tA306B09D89AB4B8D7C957BC4BC70925028BD449E;
// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception>
struct Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_t40CAA9C4849DA1712B1B6ECA55C18E0C0DFEBE4C;
// System.Threading.Channels.ChannelReader`1<System.Object>
struct ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD;
// System.Threading.Channels.ChannelWriter`1<System.Object>
struct ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E;
// System.Threading.Channels.Channel`1<System.Object>
struct Channel_1_t50428A98313010C432711327973DBF3B359AC03A;
// System.Threading.Channels.Channel`2<System.Object,System.Object>
struct Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList>
struct ConcurrentDictionary_2_tDEBA1FFAB10622E162A901CD1EDA3362B067A530;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest>
struct Dictionary_2_tBE675F3C6FB3E756A7492FC9751A61914176FD24;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Pipelines.FlushResult>>
struct Func_2_tA2BC194AC81B0DC565826460BAD43D0080200A81;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>>
struct Func_2_tC4C3A45F64BC0F51BBA59C14E94FDA1D62141FD6;
// System.Func`2<System.Object[],System.Threading.Tasks.Task>
struct Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024;
// System.Func`2<System.Exception,System.Threading.Tasks.Task>
struct Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<System.String,System.Threading.Tasks.Task>
struct Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`3<System.Object[],System.Object,System.Threading.Tasks.Task>
struct Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// Microsoft.Extensions.Logging.ILogger`1<System.Object>
struct ILogger_1_t1FEFA40D240AB32754C73F0585A2CEFCECC2AF62;
// Microsoft.Extensions.Logging.ILogger`1<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming>
struct ILogger_1_t981901F0083F234D1137A23816200FE3B40B0688;
// Microsoft.Extensions.Logging.ILogger`1<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming>
struct ILogger_1_t7A8A47C21CE3A18834C37A8FEE77AAAF00448C8B;
// System.Collections.Generic.List`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler>
struct List_1_t7B16A1ABA9E74FF71B63C52BA429713F14CB6070;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.IO.Pipelines.FlushResult>
struct TaskFactory_1_t95E23D4BDD15458ED97B10DB13E98CA4F710A7F5;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>
struct TaskFactory_1_tE3D41C15A7E79140F44988A2D8C5CA541B94F9BD;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.IO.Pipelines.FlushResult>
struct Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Threading.Tasks.Task`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>
struct Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.WeakReference`1<Microsoft.AspNetCore.Internal.TimerAwaitable>
struct WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler[]
struct InvocationHandlerU5BU5D_tF253C43AB8E2C18A532D2D0AEC0E9EA013C89FD9;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage
struct CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71;
// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2;
// Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope
struct ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// Microsoft.AspNetCore.SignalR.Client.HubConnection
struct HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF;
// Microsoft.AspNetCore.SignalR.HubException
struct HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506;
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage
struct HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.AspNetCore.Connections.IConnectionFactory
struct IConnectionFactory_t7F154EA24239B691F57BF8B5E573A39F6AF36FB7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.AspNetCore.SignalR.Protocol.IHubProtocol
struct IHubProtocol_t5D7A53884575FD8E570642476FC379EF3FBEB217;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_tEAA0D727D491847F2FE185047B16B6C5B185AF53;
// Microsoft.Extensions.Logging.ILoggerFactory
struct ILoggerFactory_tEE16BF0C488E1AE91D358D22D46EE031FA81C322;
// Microsoft.AspNetCore.SignalR.Client.IRetryPolicy
struct IRetryPolicy_tD376D8141164A1186CC8D7937C94AF33982ECAAD;
// System.IServiceProvider
struct IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest
struct InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// System.IO.Pipelines.PipeReaderStream
struct PipeReaderStream_t39F0BA517D5A8DE15FBFDA5480C374465A3759DD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
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
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// Microsoft.AspNetCore.Internal.TimerAwaitable
struct TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0
struct U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState
struct ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList
struct InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState
struct ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription
struct Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C;
// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c
struct U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370;
// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t2B1F988ED544514624BC5D1B63D7A968A48244D1;
// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t0B284EF84106379E86BDCA54CB106587365E8046;
// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c
struct U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA;
// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming
struct NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD;
// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming
struct Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2;
// Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c
struct U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.AspNetCore.Internal.TimerAwaitable/<>c
struct U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3;
// Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c
struct U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDuplexPipe_tBEA5669B11F185DBDDADA2FB3B307340A9334428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03C300D9EAC27EC18675FF197465F048241BABD1;
IL2CPP_EXTERN_C String_t* _stringLiteral0B3EA2D17DBC997A49C6FCE86E72B92626BF2E7A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE169EE2CA8D3255D94D7C35B3CF3FA226F59CE;
IL2CPP_EXTERN_C String_t* _stringLiteral25B7EFA7420061D5507930E09882145BE12CAA39;
IL2CPP_EXTERN_C String_t* _stringLiteral3DC89305897405683D064BC41C74122DECFFC0B6;
IL2CPP_EXTERN_C String_t* _stringLiteral3EFC364B121CDB6871FB4F9147D2C3827D4FDB92;
IL2CPP_EXTERN_C String_t* _stringLiteral4939586136957A313F8C3DCB2A454CF23C62FC0B;
IL2CPP_EXTERN_C String_t* _stringLiteral51685695AEA7DCE07BCC3ED2A45C90BB27DCB04C;
IL2CPP_EXTERN_C String_t* _stringLiteral568B62B607C525710B68A7572FD973E8682EB729;
IL2CPP_EXTERN_C String_t* _stringLiteral63FDB7D98FC465E78183087AE8CB5630DC6395D7;
IL2CPP_EXTERN_C String_t* _stringLiteral72C398584F3A453B2DBC23A0B283A36F645D3617;
IL2CPP_EXTERN_C String_t* _stringLiteral7380EC6C0227812B49842E72FE4A6D0571B742B9;
IL2CPP_EXTERN_C String_t* _stringLiteral79B3C9F38638D03EE70FB25DA9ACE51CDDC1AA7E;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADEB49EC16804A35BDD36EDC31F11F88FFEF8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral9211BE42BED768221B18E2AB0C09DDAD2C98179A;
IL2CPP_EXTERN_C String_t* _stringLiteral99325953D41C91CB0C7B4260A371C5AA2A8DAD16;
IL2CPP_EXTERN_C String_t* _stringLiteralB6FD80B96EE8AFEB43FB1CBF0786A26CF4392DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC9BEA57067944EDEBC7056BF2331DD3242448562;
IL2CPP_EXTERN_C String_t* _stringLiteralD836A9A98C367482F0CF97D7C19B4E5F385F202D;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE83FB302D5C29FFFC300BEEC3383B7826A227FA2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6CD3D4FA8833ECB4B6C3F31E10E93BB0578750;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD2169485F6E9DE862254E0FBA5F81395EA677859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m8503972C8585F6650C1089D74236B2E56B6A440F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m7958EE4B8F422C7B8D9326AAE57731BB873E1B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mAD88487D21D32FD01079EA42FEAF7D846BC97D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4A759D3E59422E6F9BC1A99B0B7E0A9060C4A2A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mA97741BD9AA0862F3182A7C9A36A7D537DDC632B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mC0FCD9A7CF780509D5B3EA15E76EBBC30AEC0451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m1168FC7BC1499C3748E432032B5D999DD5D7A250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_m13458FE555A87EB68592507526487171109A5517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m0D72D8C90B9FBB99A53613954D4F5D8FE8D31B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m16FC2E016A1789C7134EE3B3C52A69C305237F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerFactoryExtensions_CreateLogger_TisNonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD_m929FAE7778B51A779C37C4EEE0162ED5EFC5BEBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerFactoryExtensions_CreateLogger_TisStreaming_t799B3F7CD7350548CAAE08A50923C046E17176F2_mBA4D1938BF9F6D260FF9F903A464A63B1E0E50DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReconnectingConnectionState_ChangeState_m90AC42871F3ABD8C8E5924A04F4489527443A5EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m363CACE6CD55DBB7F8F47ABF443C832E08B957CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IAsyncEnumerable_1_t55262332820F5448EA674D386C24DF538123B177_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Threading.Channels.ChannelReader`1<System.Object>
struct ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD  : public RuntimeObject
{
public:

public:
};


// System.Threading.Channels.ChannelWriter`1<System.Object>
struct ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E  : public RuntimeObject
{
public:

public:
};


// System.Threading.Channels.Channel`2<System.Object,System.Object>
struct Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012  : public RuntimeObject
{
public:
	// System.Threading.Channels.ChannelReader`1<TRead> System.Threading.Channels.Channel`2::<Reader>k__BackingField
	ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * ___U3CReaderU3Ek__BackingField_0;
	// System.Threading.Channels.ChannelWriter`1<TWrite> System.Threading.Channels.Channel`2::<Writer>k__BackingField
	ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * ___U3CWriterU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012, ___U3CReaderU3Ek__BackingField_0)); }
	inline ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * get_U3CReaderU3Ek__BackingField_0() const { return ___U3CReaderU3Ek__BackingField_0; }
	inline ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD ** get_address_of_U3CReaderU3Ek__BackingField_0() { return &___U3CReaderU3Ek__BackingField_0; }
	inline void set_U3CReaderU3Ek__BackingField_0(ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * value)
	{
		___U3CReaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReaderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWriterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012, ___U3CWriterU3Ek__BackingField_1)); }
	inline ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * get_U3CWriterU3Ek__BackingField_1() const { return ___U3CWriterU3Ek__BackingField_1; }
	inline ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E ** get_address_of_U3CWriterU3Ek__BackingField_1() { return &___U3CWriterU3Ek__BackingField_1; }
	inline void set_U3CWriterU3Ek__BackingField_1(ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * value)
	{
		___U3CWriterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWriterU3Ek__BackingField_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope
struct ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708  : public RuntimeObject
{
public:
	// System.String Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope::_cachedToString
	String_t* ____cachedToString_1;
	// System.String Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope::_connectionId
	String_t* ____connectionId_2;

public:
	inline static int32_t get_offset_of__cachedToString_1() { return static_cast<int32_t>(offsetof(ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708, ____cachedToString_1)); }
	inline String_t* get__cachedToString_1() const { return ____cachedToString_1; }
	inline String_t** get_address_of__cachedToString_1() { return &____cachedToString_1; }
	inline void set__cachedToString_1(String_t* value)
	{
		____cachedToString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedToString_1), (void*)value);
	}

	inline static int32_t get_offset_of__connectionId_2() { return static_cast<int32_t>(offsetof(ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708, ____connectionId_2)); }
	inline String_t* get__connectionId_2() const { return ____connectionId_2; }
	inline String_t** get_address_of__connectionId_2() { return &____connectionId_2; }
	inline void set__connectionId_2(String_t* value)
	{
		____connectionId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionId_2), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.HubMessage
struct HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.IO.Pipelines.PipeReader
struct PipeReader_t9AB049F18B590B0C1B370EAA2D1BBE5923D02CA5  : public RuntimeObject
{
public:
	// System.IO.Pipelines.PipeReaderStream System.IO.Pipelines.PipeReader::_stream
	PipeReaderStream_t39F0BA517D5A8DE15FBFDA5480C374465A3759DD * ____stream_0;

public:
	inline static int32_t get_offset_of__stream_0() { return static_cast<int32_t>(offsetof(PipeReader_t9AB049F18B590B0C1B370EAA2D1BBE5923D02CA5, ____stream_0)); }
	inline PipeReaderStream_t39F0BA517D5A8DE15FBFDA5480C374465A3759DD * get__stream_0() const { return ____stream_0; }
	inline PipeReaderStream_t39F0BA517D5A8DE15FBFDA5480C374465A3759DD ** get_address_of__stream_0() { return &____stream_0; }
	inline void set__stream_0(PipeReaderStream_t39F0BA517D5A8DE15FBFDA5480C374465A3759DD * value)
	{
		____stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_0), (void*)value);
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

// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.SignalR.Client.HubConnection Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0::<>4__this
	HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___U3CU3E4__this_0;
	// System.Func`2<System.Exception,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0::closed
	Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * ___closed_1;
	// System.Exception Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0::closeException
	Exception_t * ___closeException_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D, ___U3CU3E4__this_0)); }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_closed_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D, ___closed_1)); }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * get_closed_1() const { return ___closed_1; }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B ** get_address_of_closed_1() { return &___closed_1; }
	inline void set_closed_1(Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * value)
	{
		___closed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closed_1), (void*)value);
	}

	inline static int32_t get_offset_of_closeException_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D, ___closeException_2)); }
	inline Exception_t * get_closeException_2() const { return ___closeException_2; }
	inline Exception_t ** get_address_of_closeException_2() { return &___closeException_2; }
	inline void set_closeException_2(Exception_t * value)
	{
		___closeException_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeException_2), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601  : public RuntimeObject
{
public:
	// System.Func`2<System.Exception,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0::reconnecting
	Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * ___reconnecting_0;
	// System.Exception Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0::closeException
	Exception_t * ___closeException_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0::<>4__this
	HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_reconnecting_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601, ___reconnecting_0)); }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * get_reconnecting_0() const { return ___reconnecting_0; }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B ** get_address_of_reconnecting_0() { return &___reconnecting_0; }
	inline void set_reconnecting_0(Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * value)
	{
		___reconnecting_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reconnecting_0), (void*)value);
	}

	inline static int32_t get_offset_of_closeException_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601, ___closeException_1)); }
	inline Exception_t * get_closeException_1() const { return ___closeException_1; }
	inline Exception_t ** get_address_of_closeException_1() { return &___closeException_1; }
	inline void set_closeException_1(Exception_t * value)
	{
		___closeException_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeException_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601, ___U3CU3E4__this_2)); }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0
struct U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF  : public RuntimeObject
{
public:
	// System.Func`2<System.String,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0::reconnected
	Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * ___reconnected_0;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0::<>4__this
	HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_reconnected_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF, ___reconnected_0)); }
	inline Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * get_reconnected_0() const { return ___reconnected_0; }
	inline Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC ** get_address_of_reconnected_0() { return &___reconnected_0; }
	inline void set_reconnected_0(Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * value)
	{
		___reconnected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reconnected_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF, ___U3CU3E4__this_1)); }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList
struct InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler> Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList::_invocationHandlers
	List_1_t7B16A1ABA9E74FF71B63C52BA429713F14CB6070 * ____invocationHandlers_0;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler[] Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList::_copiedHandlers
	InvocationHandlerU5BU5D_tF253C43AB8E2C18A532D2D0AEC0E9EA013C89FD9* ____copiedHandlers_1;

public:
	inline static int32_t get_offset_of__invocationHandlers_0() { return static_cast<int32_t>(offsetof(InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F, ____invocationHandlers_0)); }
	inline List_1_t7B16A1ABA9E74FF71B63C52BA429713F14CB6070 * get__invocationHandlers_0() const { return ____invocationHandlers_0; }
	inline List_1_t7B16A1ABA9E74FF71B63C52BA429713F14CB6070 ** get_address_of__invocationHandlers_0() { return &____invocationHandlers_0; }
	inline void set__invocationHandlers_0(List_1_t7B16A1ABA9E74FF71B63C52BA429713F14CB6070 * value)
	{
		____invocationHandlers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invocationHandlers_0), (void*)value);
	}

	inline static int32_t get_offset_of__copiedHandlers_1() { return static_cast<int32_t>(offsetof(InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F, ____copiedHandlers_1)); }
	inline InvocationHandlerU5BU5D_tF253C43AB8E2C18A532D2D0AEC0E9EA013C89FD9* get__copiedHandlers_1() const { return ____copiedHandlers_1; }
	inline InvocationHandlerU5BU5D_tF253C43AB8E2C18A532D2D0AEC0E9EA013C89FD9** get_address_of__copiedHandlers_1() { return &____copiedHandlers_1; }
	inline void set__copiedHandlers_1(InvocationHandlerU5BU5D_tF253C43AB8E2C18A532D2D0AEC0E9EA013C89FD9* value)
	{
		____copiedHandlers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____copiedHandlers_1), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c
struct U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::<>9
	U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * ___U3CU3E9_0;
	// System.Func`3<System.Object[],System.Object,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::<>9__0_0
	Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * ___U3CU3E9__0_0_1;
	// System.Func`3<System.Object[],System.Object,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::<>9__10_0
	Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * ___U3CU3E9__10_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_StaticFields, ___U3CU3E9__10_0_2)); }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * get_U3CU3E9__10_0_2() const { return ___U3CU3E9__10_0_2; }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 ** get_address_of_U3CU3E9__10_0_2() { return &___U3CU3E9__10_0_2; }
	inline void set_U3CU3E9__10_0_2(Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * value)
	{
		___U3CU3E9__10_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_2), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t2B1F988ED544514624BC5D1B63D7A968A48244D1  : public RuntimeObject
{
public:
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass11_0::handler
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___handler_0;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t2B1F988ED544514624BC5D1B63D7A968A48244D1, ___handler_0)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_handler_0() const { return ___handler_0; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t0B284EF84106379E86BDCA54CB106587365E8046  : public RuntimeObject
{
public:
	// System.Action Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass1_0::handler
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler_0;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t0B284EF84106379E86BDCA54CB106587365E8046, ___handler_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_handler_0() const { return ___handler_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c
struct U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::<>9
	U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * ___U3CU3E9_0;
	// System.Action`1<System.Object> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::<>9__17_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_1), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log
struct Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD  : public RuntimeObject
{
public:

public:
};

struct Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields
{
public:
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_invocationCreated
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____invocationCreated_0;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_invocationDisposed
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____invocationDisposed_1;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_invocationCompleted
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____invocationCompleted_2;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_invocationFailed
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____invocationFailed_3;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_errorWritingStreamItem
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____errorWritingStreamItem_4;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_receivedUnexpectedComplete
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____receivedUnexpectedComplete_5;
	// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::_streamItemOnNonStreamInvocation
	Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * ____streamItemOnNonStreamInvocation_6;

public:
	inline static int32_t get_offset_of__invocationCreated_0() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____invocationCreated_0)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__invocationCreated_0() const { return ____invocationCreated_0; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__invocationCreated_0() { return &____invocationCreated_0; }
	inline void set__invocationCreated_0(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____invocationCreated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invocationCreated_0), (void*)value);
	}

	inline static int32_t get_offset_of__invocationDisposed_1() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____invocationDisposed_1)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__invocationDisposed_1() const { return ____invocationDisposed_1; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__invocationDisposed_1() { return &____invocationDisposed_1; }
	inline void set__invocationDisposed_1(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____invocationDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invocationDisposed_1), (void*)value);
	}

	inline static int32_t get_offset_of__invocationCompleted_2() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____invocationCompleted_2)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__invocationCompleted_2() const { return ____invocationCompleted_2; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__invocationCompleted_2() { return &____invocationCompleted_2; }
	inline void set__invocationCompleted_2(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____invocationCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invocationCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of__invocationFailed_3() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____invocationFailed_3)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__invocationFailed_3() const { return ____invocationFailed_3; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__invocationFailed_3() { return &____invocationFailed_3; }
	inline void set__invocationFailed_3(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____invocationFailed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invocationFailed_3), (void*)value);
	}

	inline static int32_t get_offset_of__errorWritingStreamItem_4() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____errorWritingStreamItem_4)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__errorWritingStreamItem_4() const { return ____errorWritingStreamItem_4; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__errorWritingStreamItem_4() { return &____errorWritingStreamItem_4; }
	inline void set__errorWritingStreamItem_4(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____errorWritingStreamItem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errorWritingStreamItem_4), (void*)value);
	}

	inline static int32_t get_offset_of__receivedUnexpectedComplete_5() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____receivedUnexpectedComplete_5)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__receivedUnexpectedComplete_5() const { return ____receivedUnexpectedComplete_5; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__receivedUnexpectedComplete_5() { return &____receivedUnexpectedComplete_5; }
	inline void set__receivedUnexpectedComplete_5(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____receivedUnexpectedComplete_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivedUnexpectedComplete_5), (void*)value);
	}

	inline static int32_t get_offset_of__streamItemOnNonStreamInvocation_6() { return static_cast<int32_t>(offsetof(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields, ____streamItemOnNonStreamInvocation_6)); }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * get__streamItemOnNonStreamInvocation_6() const { return ____streamItemOnNonStreamInvocation_6; }
	inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 ** get_address_of__streamItemOnNonStreamInvocation_6() { return &____streamItemOnNonStreamInvocation_6; }
	inline void set__streamItemOnNonStreamInvocation_6(Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * value)
	{
		____streamItemOnNonStreamInvocation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamItemOnNonStreamInvocation_6), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c
struct U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::<>9
	U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::<>9__1_0
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Internal.TimerAwaitable/<>c
struct U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_StaticFields
{
public:
	// Microsoft.AspNetCore.Internal.TimerAwaitable/<>c Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::<>9
	U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * ___U3CU3E9_0;
	// System.Threading.TimerCallback Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::<>9__9_0
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_StaticFields, ___U3CU3E9__9_0_1)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c
struct U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::<>9
	U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::<>9__83_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__83_0_1;
	// System.Func`2<System.Object,System.String> Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::<>9__87_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__87_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__83_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_StaticFields, ___U3CU3E9__83_0_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__83_0_1() const { return ___U3CU3E9__83_0_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__83_0_1() { return &___U3CU3E9__83_0_1; }
	inline void set_U3CU3E9__83_0_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__83_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__83_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__87_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_StaticFields, ___U3CU3E9__87_0_2)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__87_0_2() const { return ___U3CU3E9__87_0_2; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__87_0_2() { return &___U3CU3E9__87_0_2; }
	inline void set_U3CU3E9__87_0_2(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__87_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__87_0_2), (void*)value);
	}
};


// System.Threading.Channels.Channel`1<System.Object>
struct Channel_1_t50428A98313010C432711327973DBF3B359AC03A  : public Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012
{
public:

public:
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


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Pipelines.FlushResult>
struct TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C, ___m_task_0)); }
	inline Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.ValueTask`1<System.Boolean>
struct ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC 
{
public:
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject * ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	bool ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;

public:
	inline static int32_t get_offset_of__obj_1() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____obj_1)); }
	inline RuntimeObject * get__obj_1() const { return ____obj_1; }
	inline RuntimeObject ** get_address_of__obj_1() { return &____obj_1; }
	inline void set__obj_1(RuntimeObject * value)
	{
		____obj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_1), (void*)value);
	}

	inline static int32_t get_offset_of__result_2() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____result_2)); }
	inline bool get__result_2() const { return ____result_2; }
	inline bool* get_address_of__result_2() { return &____result_2; }
	inline void set__result_2(bool value)
	{
		____result_2 = value;
	}

	inline static int32_t get_offset_of__token_3() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____token_3)); }
	inline int16_t get__token_3() const { return ____token_3; }
	inline int16_t* get_address_of__token_3() { return &____token_3; }
	inline void set__token_3(int16_t value)
	{
		____token_3 = value;
	}

	inline static int32_t get_offset_of__continueOnCapturedContext_4() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____continueOnCapturedContext_4)); }
	inline bool get__continueOnCapturedContext_4() const { return ____continueOnCapturedContext_4; }
	inline bool* get_address_of__continueOnCapturedContext_4() { return &____continueOnCapturedContext_4; }
	inline void set__continueOnCapturedContext_4(bool value)
	{
		____continueOnCapturedContext_4 = value;
	}
};

struct ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_canceledTask_0;

public:
	inline static int32_t get_offset_of_s_canceledTask_0() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC_StaticFields, ___s_canceledTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_canceledTask_0() const { return ___s_canceledTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_canceledTask_0() { return &___s_canceledTask_0; }
	inline void set_s_canceledTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_canceledTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_canceledTask_0), (void*)value);
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

// Microsoft.Extensions.Logging.EventId
struct EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 
{
public:
	// System.Int32 Microsoft.Extensions.Logging.EventId::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Microsoft.Extensions.Logging.EventId::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_pinvoke
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_com
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage
struct HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2  : public HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage::<Headers>k__BackingField
	RuntimeObject* ___U3CHeadersU3Ek__BackingField_0;
	// System.String Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage::<InvocationId>k__BackingField
	String_t* ___U3CInvocationIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2, ___U3CHeadersU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CHeadersU3Ek__BackingField_0() const { return ___U3CHeadersU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CHeadersU3Ek__BackingField_0() { return &___U3CHeadersU3Ek__BackingField_0; }
	inline void set_U3CHeadersU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CHeadersU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInvocationIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2, ___U3CInvocationIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CInvocationIdU3Ek__BackingField_1() const { return ___U3CInvocationIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CInvocationIdU3Ek__BackingField_1() { return &___U3CInvocationIdU3Ek__BackingField_1; }
	inline void set_U3CInvocationIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CInvocationIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInvocationIdU3Ek__BackingField_1), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// Microsoft.AspNetCore.SignalR.Protocol.PingMessage
struct PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3  : public HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB
{
public:

public:
};

struct PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Protocol.PingMessage Microsoft.AspNetCore.SignalR.Protocol.PingMessage::Instance
	PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_StaticFields, ___Instance_0)); }
	inline PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * get_Instance_0() const { return ___Instance_0; }
	inline PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
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


// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable
struct Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7__padding[1];
	};

public:
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler
struct InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800 
{
public:
	// System.Type[] Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler::<ParameterTypes>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CParameterTypesU3Ek__BackingField_0;
	// System.Func`3<System.Object[],System.Object,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler::_callback
	Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * ____callback_1;
	// System.Object Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler::_state
	RuntimeObject * ____state_2;

public:
	inline static int32_t get_offset_of_U3CParameterTypesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800, ___U3CParameterTypesU3Ek__BackingField_0)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CParameterTypesU3Ek__BackingField_0() const { return ___U3CParameterTypesU3Ek__BackingField_0; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CParameterTypesU3Ek__BackingField_0() { return &___U3CParameterTypesU3Ek__BackingField_0; }
	inline void set_U3CParameterTypesU3Ek__BackingField_0(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CParameterTypesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterTypesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of__callback_1() { return static_cast<int32_t>(offsetof(InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800, ____callback_1)); }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * get__callback_1() const { return ____callback_1; }
	inline Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 ** get_address_of__callback_1() { return &____callback_1; }
	inline void set__callback_1(Func_3_t576BE12314B40FF13C1C8CF7084705EFFBBD3732 * value)
	{
		____callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800, ____state_2)); }
	inline RuntimeObject * get__state_2() const { return ____state_2; }
	inline RuntimeObject ** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(RuntimeObject * value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler
struct InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800_marshaled_pinvoke
{
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CParameterTypesU3Ek__BackingField_0;
	Il2CppMethodPointer ____callback_1;
	Il2CppIUnknown* ____state_2;
};
// Native definition for COM marshalling of Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler
struct InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800_marshaled_com
{
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CParameterTypesU3Ek__BackingField_0;
	Il2CppMethodPointer ____callback_1;
	Il2CppIUnknown* ____state_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>
struct AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735, ___m_task_2)); }
	inline Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>
struct ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D 
{
public:
	// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.ValueTaskAwaiter`1::_value
	ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D, ____value_0)); }
	inline ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  get__value_0() const { return ____value_0; }
	inline ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->____obj_1), (void*)NULL);
	}
};


// System.WeakReference`1<Microsoft.AspNetCore.Internal.TimerAwaitable>
struct WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// Microsoft.AspNetCore.Connections.BaseConnectionContext
struct BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.BaseConnectionContext::<ConnectionClosed>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CConnectionClosedU3Ek__BackingField_0;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::<LocalEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CLocalEndPointU3Ek__BackingField_1;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::<RemoteEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CRemoteEndPointU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionClosedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704, ___U3CConnectionClosedU3Ek__BackingField_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CConnectionClosedU3Ek__BackingField_0() const { return ___U3CConnectionClosedU3Ek__BackingField_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CConnectionClosedU3Ek__BackingField_0() { return &___U3CConnectionClosedU3Ek__BackingField_0; }
	inline void set_U3CConnectionClosedU3Ek__BackingField_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CConnectionClosedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CConnectionClosedU3Ek__BackingField_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CLocalEndPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704, ___U3CLocalEndPointU3Ek__BackingField_1)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CLocalEndPointU3Ek__BackingField_1() const { return ___U3CLocalEndPointU3Ek__BackingField_1; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CLocalEndPointU3Ek__BackingField_1() { return &___U3CLocalEndPointU3Ek__BackingField_1; }
	inline void set_U3CLocalEndPointU3Ek__BackingField_1(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CLocalEndPointU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalEndPointU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRemoteEndPointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704, ___U3CRemoteEndPointU3Ek__BackingField_2)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CRemoteEndPointU3Ek__BackingField_2() const { return ___U3CRemoteEndPointU3Ek__BackingField_2; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CRemoteEndPointU3Ek__BackingField_2() { return &___U3CRemoteEndPointU3Ek__BackingField_2; }
	inline void set_U3CRemoteEndPointU3Ek__BackingField_2(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CRemoteEndPointU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRemoteEndPointU3Ek__BackingField_2), (void*)value);
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

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage
struct CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71  : public HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2
{
public:
	// System.String Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Object Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::<Result>k__BackingField
	RuntimeObject * ___U3CResultU3Ek__BackingField_3;
	// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::<HasResult>k__BackingField
	bool ___U3CHasResultU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71, ___U3CResultU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CResultU3Ek__BackingField_3() const { return ___U3CResultU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CResultU3Ek__BackingField_3() { return &___U3CResultU3Ek__BackingField_3; }
	inline void set_U3CResultU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CResultU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasResultU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71, ___U3CHasResultU3Ek__BackingField_4)); }
	inline bool get_U3CHasResultU3Ek__BackingField_4() const { return ___U3CHasResultU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasResultU3Ek__BackingField_4() { return &___U3CHasResultU3Ek__BackingField_4; }
	inline void set_U3CHasResultU3Ek__BackingField_4(bool value)
	{
		___U3CHasResultU3Ek__BackingField_4 = value;
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

// Microsoft.AspNetCore.SignalR.Client.HubConnectionState
struct HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Extensions.Logging.LogLevel
struct LogLevel_t23382BCAC93B8E023D5D6DE83BCD41312B4CB20C 
{
public:
	// System.Int32 Microsoft.Extensions.Logging.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t23382BCAC93B8E023D5D6DE83BCD41312B4CB20C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Pipelines.ResultFlags
struct ResultFlags_t4CC1754BFB2DFCC9DB680E7CDBB2288C447B32FD 
{
public:
	// System.Byte System.IO.Pipelines.ResultFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultFlags_t4CC1754BFB2DFCC9DB680E7CDBB2288C447B32FD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_currentCount
	int32_t ___m_currentCount_0;
	// System.Int32 System.Threading.SemaphoreSlim::m_maxCount
	int32_t ___m_maxCount_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitCount
	int32_t ___m_waitCount_2;
	// System.Object System.Threading.SemaphoreSlim::m_lockObj
	RuntimeObject * ___m_lockObj_3;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_waitHandle_4;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncHead
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___m_asyncHead_5;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncTail
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___m_asyncTail_6;

public:
	inline static int32_t get_offset_of_m_currentCount_0() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_currentCount_0)); }
	inline int32_t get_m_currentCount_0() const { return ___m_currentCount_0; }
	inline int32_t* get_address_of_m_currentCount_0() { return &___m_currentCount_0; }
	inline void set_m_currentCount_0(int32_t value)
	{
		___m_currentCount_0 = value;
	}

	inline static int32_t get_offset_of_m_maxCount_1() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_maxCount_1)); }
	inline int32_t get_m_maxCount_1() const { return ___m_maxCount_1; }
	inline int32_t* get_address_of_m_maxCount_1() { return &___m_maxCount_1; }
	inline void set_m_maxCount_1(int32_t value)
	{
		___m_maxCount_1 = value;
	}

	inline static int32_t get_offset_of_m_waitCount_2() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_waitCount_2)); }
	inline int32_t get_m_waitCount_2() const { return ___m_waitCount_2; }
	inline int32_t* get_address_of_m_waitCount_2() { return &___m_waitCount_2; }
	inline void set_m_waitCount_2(int32_t value)
	{
		___m_waitCount_2 = value;
	}

	inline static int32_t get_offset_of_m_lockObj_3() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_lockObj_3)); }
	inline RuntimeObject * get_m_lockObj_3() const { return ___m_lockObj_3; }
	inline RuntimeObject ** get_address_of_m_lockObj_3() { return &___m_lockObj_3; }
	inline void set_m_lockObj_3(RuntimeObject * value)
	{
		___m_lockObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lockObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_waitHandle_4() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_waitHandle_4)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_waitHandle_4() const { return ___m_waitHandle_4; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_waitHandle_4() { return &___m_waitHandle_4; }
	inline void set_m_waitHandle_4(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_waitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_waitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_asyncHead_5() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_asyncHead_5)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_m_asyncHead_5() const { return ___m_asyncHead_5; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_m_asyncHead_5() { return &___m_asyncHead_5; }
	inline void set_m_asyncHead_5(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___m_asyncHead_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_asyncHead_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_asyncTail_6() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_asyncTail_6)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_m_asyncTail_6() const { return ___m_asyncTail_6; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_m_asyncTail_6() { return &___m_asyncTail_6; }
	inline void set_m_asyncTail_6(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___m_asyncTail_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_asyncTail_6), (void*)value);
	}
};

struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_trueTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_trueTask_7;
	// System.Action`1<System.Object> System.Threading.SemaphoreSlim::s_cancellationTokenCanceledEventHandler
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCanceledEventHandler_9;

public:
	inline static int32_t get_offset_of_s_trueTask_7() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields, ___s_trueTask_7)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_trueTask_7() const { return ___s_trueTask_7; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_trueTask_7() { return &___s_trueTask_7; }
	inline void set_s_trueTask_7(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_trueTask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_trueTask_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_cancellationTokenCanceledEventHandler_9() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields, ___s_cancellationTokenCanceledEventHandler_9)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCanceledEventHandler_9() const { return ___s_cancellationTokenCanceledEventHandler_9; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCanceledEventHandler_9() { return &___s_cancellationTokenCanceledEventHandler_9; }
	inline void set_s_cancellationTokenCanceledEventHandler_9(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCanceledEventHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCanceledEventHandler_9), (void*)value);
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


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Threading.Tasks.Sources.ValueTaskSourceStatus
struct ValueTaskSourceStatus_tC800AD7A2142DFCF7C86A92B2698E1B9F2AC5C5B 
{
public:
	// System.Int32 System.Threading.Tasks.Sources.ValueTaskSourceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueTaskSourceStatus_tC800AD7A2142DFCF7C86A92B2698E1B9F2AC5C5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState
struct ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.SignalR.Client.HubConnection Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_hubConnection
	HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ____hubConnection_0;
	// Microsoft.Extensions.Logging.ILogger Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_logger
	RuntimeObject* ____logger_1;
	// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_hasInherentKeepAlive
	bool ____hasInherentKeepAlive_2;
	// System.Object Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_lock
	RuntimeObject * ____lock_3;
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest> Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_pendingCalls
	Dictionary_2_tBE675F3C6FB3E756A7492FC9751A61914176FD24 * ____pendingCalls_4;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_stopTcs
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ____stopTcs_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_stopping
	bool ____stopping_6;
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_nextInvocationId
	int32_t ____nextInvocationId_7;
	// System.Int64 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_nextActivationServerTimeout
	int64_t ____nextActivationServerTimeout_8;
	// System.Int64 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::_nextActivationSendPing
	int64_t ____nextActivationSendPing_9;
	// Microsoft.AspNetCore.Connections.ConnectionContext Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::<Connection>k__BackingField
	ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___U3CConnectionU3Ek__BackingField_10;
	// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::<ReceiveTask>k__BackingField
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CReceiveTaskU3Ek__BackingField_11;
	// System.Exception Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::<CloseException>k__BackingField
	Exception_t * ___U3CCloseExceptionU3Ek__BackingField_12;
	// System.Threading.CancellationToken Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::<UploadStreamToken>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CUploadStreamTokenU3Ek__BackingField_13;
	// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::<InvocationMessageReceiveTask>k__BackingField
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__hubConnection_0() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____hubConnection_0)); }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * get__hubConnection_0() const { return ____hubConnection_0; }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF ** get_address_of__hubConnection_0() { return &____hubConnection_0; }
	inline void set__hubConnection_0(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * value)
	{
		____hubConnection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hubConnection_0), (void*)value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____logger_1)); }
	inline RuntimeObject* get__logger_1() const { return ____logger_1; }
	inline RuntimeObject** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(RuntimeObject* value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_1), (void*)value);
	}

	inline static int32_t get_offset_of__hasInherentKeepAlive_2() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____hasInherentKeepAlive_2)); }
	inline bool get__hasInherentKeepAlive_2() const { return ____hasInherentKeepAlive_2; }
	inline bool* get_address_of__hasInherentKeepAlive_2() { return &____hasInherentKeepAlive_2; }
	inline void set__hasInherentKeepAlive_2(bool value)
	{
		____hasInherentKeepAlive_2 = value;
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____lock_3)); }
	inline RuntimeObject * get__lock_3() const { return ____lock_3; }
	inline RuntimeObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(RuntimeObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_3), (void*)value);
	}

	inline static int32_t get_offset_of__pendingCalls_4() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____pendingCalls_4)); }
	inline Dictionary_2_tBE675F3C6FB3E756A7492FC9751A61914176FD24 * get__pendingCalls_4() const { return ____pendingCalls_4; }
	inline Dictionary_2_tBE675F3C6FB3E756A7492FC9751A61914176FD24 ** get_address_of__pendingCalls_4() { return &____pendingCalls_4; }
	inline void set__pendingCalls_4(Dictionary_2_tBE675F3C6FB3E756A7492FC9751A61914176FD24 * value)
	{
		____pendingCalls_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingCalls_4), (void*)value);
	}

	inline static int32_t get_offset_of__stopTcs_5() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____stopTcs_5)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get__stopTcs_5() const { return ____stopTcs_5; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of__stopTcs_5() { return &____stopTcs_5; }
	inline void set__stopTcs_5(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		____stopTcs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stopTcs_5), (void*)value);
	}

	inline static int32_t get_offset_of__stopping_6() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____stopping_6)); }
	inline bool get__stopping_6() const { return ____stopping_6; }
	inline bool* get_address_of__stopping_6() { return &____stopping_6; }
	inline void set__stopping_6(bool value)
	{
		____stopping_6 = value;
	}

	inline static int32_t get_offset_of__nextInvocationId_7() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____nextInvocationId_7)); }
	inline int32_t get__nextInvocationId_7() const { return ____nextInvocationId_7; }
	inline int32_t* get_address_of__nextInvocationId_7() { return &____nextInvocationId_7; }
	inline void set__nextInvocationId_7(int32_t value)
	{
		____nextInvocationId_7 = value;
	}

	inline static int32_t get_offset_of__nextActivationServerTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____nextActivationServerTimeout_8)); }
	inline int64_t get__nextActivationServerTimeout_8() const { return ____nextActivationServerTimeout_8; }
	inline int64_t* get_address_of__nextActivationServerTimeout_8() { return &____nextActivationServerTimeout_8; }
	inline void set__nextActivationServerTimeout_8(int64_t value)
	{
		____nextActivationServerTimeout_8 = value;
	}

	inline static int32_t get_offset_of__nextActivationSendPing_9() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ____nextActivationSendPing_9)); }
	inline int64_t get__nextActivationSendPing_9() const { return ____nextActivationSendPing_9; }
	inline int64_t* get_address_of__nextActivationSendPing_9() { return &____nextActivationSendPing_9; }
	inline void set__nextActivationSendPing_9(int64_t value)
	{
		____nextActivationSendPing_9 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ___U3CConnectionU3Ek__BackingField_10)); }
	inline ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * get_U3CConnectionU3Ek__BackingField_10() const { return ___U3CConnectionU3Ek__BackingField_10; }
	inline ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 ** get_address_of_U3CConnectionU3Ek__BackingField_10() { return &___U3CConnectionU3Ek__BackingField_10; }
	inline void set_U3CConnectionU3Ek__BackingField_10(ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * value)
	{
		___U3CConnectionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceiveTaskU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ___U3CReceiveTaskU3Ek__BackingField_11)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CReceiveTaskU3Ek__BackingField_11() const { return ___U3CReceiveTaskU3Ek__BackingField_11; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CReceiveTaskU3Ek__BackingField_11() { return &___U3CReceiveTaskU3Ek__BackingField_11; }
	inline void set_U3CReceiveTaskU3Ek__BackingField_11(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CReceiveTaskU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceiveTaskU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseExceptionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ___U3CCloseExceptionU3Ek__BackingField_12)); }
	inline Exception_t * get_U3CCloseExceptionU3Ek__BackingField_12() const { return ___U3CCloseExceptionU3Ek__BackingField_12; }
	inline Exception_t ** get_address_of_U3CCloseExceptionU3Ek__BackingField_12() { return &___U3CCloseExceptionU3Ek__BackingField_12; }
	inline void set_U3CCloseExceptionU3Ek__BackingField_12(Exception_t * value)
	{
		___U3CCloseExceptionU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloseExceptionU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUploadStreamTokenU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ___U3CUploadStreamTokenU3Ek__BackingField_13)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CUploadStreamTokenU3Ek__BackingField_13() const { return ___U3CUploadStreamTokenU3Ek__BackingField_13; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CUploadStreamTokenU3Ek__BackingField_13() { return &___U3CUploadStreamTokenU3Ek__BackingField_13; }
	inline void set_U3CUploadStreamTokenU3Ek__BackingField_13(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CUploadStreamTokenU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CUploadStreamTokenU3Ek__BackingField_13))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CInvocationMessageReceiveTaskU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1, ___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CInvocationMessageReceiveTaskU3Ek__BackingField_14() const { return ___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CInvocationMessageReceiveTaskU3Ek__BackingField_14() { return &___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14; }
	inline void set_U3CInvocationMessageReceiveTaskU3Ek__BackingField_14(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInvocationMessageReceiveTaskU3Ek__BackingField_14), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription
struct Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription::_handler
	InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  ____handler_0;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription::_handlerList
	InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * ____handlerList_1;

public:
	inline static int32_t get_offset_of__handler_0() { return static_cast<int32_t>(offsetof(Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C, ____handler_0)); }
	inline InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  get__handler_0() const { return ____handler_0; }
	inline InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800 * get_address_of__handler_0() { return &____handler_0; }
	inline void set__handler_0(InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  value)
	{
		____handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____handler_0))->___U3CParameterTypesU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____handler_0))->____callback_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____handler_0))->____state_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__handlerList_1() { return static_cast<int32_t>(offsetof(Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C, ____handlerList_1)); }
	inline InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * get__handlerList_1() const { return ____handlerList_1; }
	inline InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F ** get_address_of__handlerList_1() { return &____handlerList_1; }
	inline void set__handlerList_1(InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * value)
	{
		____handlerList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handlerList_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>
struct AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_methodBuilder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ____methodBuilder_0;
	// TResult System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_result
	bool ____result_1;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_haveResult
	bool ____haveResult_2;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::_useBuilder
	bool ____useBuilder_3;

public:
	inline static int32_t get_offset_of__methodBuilder_0() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958, ____methodBuilder_0)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get__methodBuilder_0() const { return ____methodBuilder_0; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of__methodBuilder_0() { return &____methodBuilder_0; }
	inline void set__methodBuilder_0(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		____methodBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____methodBuilder_0))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____methodBuilder_0))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____methodBuilder_0))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__result_1() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958, ____result_1)); }
	inline bool get__result_1() const { return ____result_1; }
	inline bool* get_address_of__result_1() { return &____result_1; }
	inline void set__result_1(bool value)
	{
		____result_1 = value;
	}

	inline static int32_t get_offset_of__haveResult_2() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958, ____haveResult_2)); }
	inline bool get__haveResult_2() const { return ____haveResult_2; }
	inline bool* get_address_of__haveResult_2() { return &____haveResult_2; }
	inline void set__haveResult_2(bool value)
	{
		____haveResult_2 = value;
	}

	inline static int32_t get_offset_of__useBuilder_3() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958, ____useBuilder_3)); }
	inline bool get__useBuilder_3() const { return ____useBuilder_3; }
	inline bool* get_address_of__useBuilder_3() { return &____useBuilder_3; }
	inline void set__useBuilder_3(bool value)
	{
		____useBuilder_3 = value;
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


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>
struct Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C, ___m_result_40)); }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * get_m_result_40() const { return ___m_result_40; }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE3D41C15A7E79140F44988A2D8C5CA541B94F9BD * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC4C3A45F64BC0F51BBA59C14E94FDA1D62141FD6 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tE3D41C15A7E79140F44988A2D8C5CA541B94F9BD * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tE3D41C15A7E79140F44988A2D8C5CA541B94F9BD ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tE3D41C15A7E79140F44988A2D8C5CA541B94F9BD * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC4C3A45F64BC0F51BBA59C14E94FDA1D62141FD6 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC4C3A45F64BC0F51BBA59C14E94FDA1D62141FD6 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC4C3A45F64BC0F51BBA59C14E94FDA1D62141FD6 * value)
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

// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2  : public BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704
{
public:

public:
};


// System.IO.Pipelines.FlushResult
struct FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E 
{
public:
	// System.IO.Pipelines.ResultFlags System.IO.Pipelines.FlushResult::_resultFlags
	uint8_t ____resultFlags_0;

public:
	inline static int32_t get_offset_of__resultFlags_0() { return static_cast<int32_t>(offsetof(FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E, ____resultFlags_0)); }
	inline uint8_t get__resultFlags_0() const { return ____resultFlags_0; }
	inline uint8_t* get_address_of__resultFlags_0() { return &____resultFlags_0; }
	inline void set__resultFlags_0(uint8_t value)
	{
		____resultFlags_0 = value;
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection
struct HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF  : public RuntimeObject
{
public:
	// System.Threading.SemaphoreSlim Microsoft.AspNetCore.SignalR.Client.HubConnection::_connectionLock
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____connectionLock_3;
	// Microsoft.Extensions.Logging.ILoggerFactory Microsoft.AspNetCore.SignalR.Client.HubConnection::_loggerFactory
	RuntimeObject* ____loggerFactory_7;
	// Microsoft.Extensions.Logging.ILogger Microsoft.AspNetCore.SignalR.Client.HubConnection::_logger
	RuntimeObject* ____logger_8;
	// Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope Microsoft.AspNetCore.SignalR.Client.HubConnection::_logScope
	ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 * ____logScope_9;
	// Microsoft.AspNetCore.SignalR.Protocol.IHubProtocol Microsoft.AspNetCore.SignalR.Client.HubConnection::_protocol
	RuntimeObject* ____protocol_10;
	// System.IServiceProvider Microsoft.AspNetCore.SignalR.Client.HubConnection::_serviceProvider
	RuntimeObject* ____serviceProvider_11;
	// Microsoft.AspNetCore.Connections.IConnectionFactory Microsoft.AspNetCore.SignalR.Client.HubConnection::_connectionFactory
	RuntimeObject* ____connectionFactory_12;
	// Microsoft.AspNetCore.SignalR.Client.IRetryPolicy Microsoft.AspNetCore.SignalR.Client.HubConnection::_reconnectPolicy
	RuntimeObject* ____reconnectPolicy_13;
	// System.Net.EndPoint Microsoft.AspNetCore.SignalR.Client.HubConnection::_endPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ____endPoint_14;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList> Microsoft.AspNetCore.SignalR.Client.HubConnection::_handlers
	ConcurrentDictionary_2_tDEBA1FFAB10622E162A901CD1EDA3362B067A530 * ____handlers_15;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection::_state
	ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * ____state_16;
	// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection::_disposed
	bool ____disposed_17;
	// System.Func`2<System.Exception,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection::Closed
	Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * ___Closed_18;
	// System.Func`2<System.Exception,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection::Reconnecting
	Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * ___Reconnecting_19;
	// System.Func`2<System.String,System.Threading.Tasks.Task> Microsoft.AspNetCore.SignalR.Client.HubConnection::Reconnected
	Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * ___Reconnected_20;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::<TickRate>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CTickRateU3Ek__BackingField_21;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::<ServerTimeout>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CServerTimeoutU3Ek__BackingField_22;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::<KeepAliveInterval>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CKeepAliveIntervalU3Ek__BackingField_23;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::<HandshakeTimeout>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CHandshakeTimeoutU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__connectionLock_3() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____connectionLock_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__connectionLock_3() const { return ____connectionLock_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__connectionLock_3() { return &____connectionLock_3; }
	inline void set__connectionLock_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____connectionLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionLock_3), (void*)value);
	}

	inline static int32_t get_offset_of__loggerFactory_7() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____loggerFactory_7)); }
	inline RuntimeObject* get__loggerFactory_7() const { return ____loggerFactory_7; }
	inline RuntimeObject** get_address_of__loggerFactory_7() { return &____loggerFactory_7; }
	inline void set__loggerFactory_7(RuntimeObject* value)
	{
		____loggerFactory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loggerFactory_7), (void*)value);
	}

	inline static int32_t get_offset_of__logger_8() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____logger_8)); }
	inline RuntimeObject* get__logger_8() const { return ____logger_8; }
	inline RuntimeObject** get_address_of__logger_8() { return &____logger_8; }
	inline void set__logger_8(RuntimeObject* value)
	{
		____logger_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_8), (void*)value);
	}

	inline static int32_t get_offset_of__logScope_9() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____logScope_9)); }
	inline ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 * get__logScope_9() const { return ____logScope_9; }
	inline ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 ** get_address_of__logScope_9() { return &____logScope_9; }
	inline void set__logScope_9(ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 * value)
	{
		____logScope_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logScope_9), (void*)value);
	}

	inline static int32_t get_offset_of__protocol_10() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____protocol_10)); }
	inline RuntimeObject* get__protocol_10() const { return ____protocol_10; }
	inline RuntimeObject** get_address_of__protocol_10() { return &____protocol_10; }
	inline void set__protocol_10(RuntimeObject* value)
	{
		____protocol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocol_10), (void*)value);
	}

	inline static int32_t get_offset_of__serviceProvider_11() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____serviceProvider_11)); }
	inline RuntimeObject* get__serviceProvider_11() const { return ____serviceProvider_11; }
	inline RuntimeObject** get_address_of__serviceProvider_11() { return &____serviceProvider_11; }
	inline void set__serviceProvider_11(RuntimeObject* value)
	{
		____serviceProvider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serviceProvider_11), (void*)value);
	}

	inline static int32_t get_offset_of__connectionFactory_12() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____connectionFactory_12)); }
	inline RuntimeObject* get__connectionFactory_12() const { return ____connectionFactory_12; }
	inline RuntimeObject** get_address_of__connectionFactory_12() { return &____connectionFactory_12; }
	inline void set__connectionFactory_12(RuntimeObject* value)
	{
		____connectionFactory_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionFactory_12), (void*)value);
	}

	inline static int32_t get_offset_of__reconnectPolicy_13() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____reconnectPolicy_13)); }
	inline RuntimeObject* get__reconnectPolicy_13() const { return ____reconnectPolicy_13; }
	inline RuntimeObject** get_address_of__reconnectPolicy_13() { return &____reconnectPolicy_13; }
	inline void set__reconnectPolicy_13(RuntimeObject* value)
	{
		____reconnectPolicy_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reconnectPolicy_13), (void*)value);
	}

	inline static int32_t get_offset_of__endPoint_14() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____endPoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get__endPoint_14() const { return ____endPoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of__endPoint_14() { return &____endPoint_14; }
	inline void set__endPoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		____endPoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPoint_14), (void*)value);
	}

	inline static int32_t get_offset_of__handlers_15() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____handlers_15)); }
	inline ConcurrentDictionary_2_tDEBA1FFAB10622E162A901CD1EDA3362B067A530 * get__handlers_15() const { return ____handlers_15; }
	inline ConcurrentDictionary_2_tDEBA1FFAB10622E162A901CD1EDA3362B067A530 ** get_address_of__handlers_15() { return &____handlers_15; }
	inline void set__handlers_15(ConcurrentDictionary_2_tDEBA1FFAB10622E162A901CD1EDA3362B067A530 * value)
	{
		____handlers_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handlers_15), (void*)value);
	}

	inline static int32_t get_offset_of__state_16() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____state_16)); }
	inline ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * get__state_16() const { return ____state_16; }
	inline ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 ** get_address_of__state_16() { return &____state_16; }
	inline void set__state_16(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * value)
	{
		____state_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_16), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_17() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ____disposed_17)); }
	inline bool get__disposed_17() const { return ____disposed_17; }
	inline bool* get_address_of__disposed_17() { return &____disposed_17; }
	inline void set__disposed_17(bool value)
	{
		____disposed_17 = value;
	}

	inline static int32_t get_offset_of_Closed_18() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___Closed_18)); }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * get_Closed_18() const { return ___Closed_18; }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B ** get_address_of_Closed_18() { return &___Closed_18; }
	inline void set_Closed_18(Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * value)
	{
		___Closed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Closed_18), (void*)value);
	}

	inline static int32_t get_offset_of_Reconnecting_19() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___Reconnecting_19)); }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * get_Reconnecting_19() const { return ___Reconnecting_19; }
	inline Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B ** get_address_of_Reconnecting_19() { return &___Reconnecting_19; }
	inline void set_Reconnecting_19(Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * value)
	{
		___Reconnecting_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reconnecting_19), (void*)value);
	}

	inline static int32_t get_offset_of_Reconnected_20() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___Reconnected_20)); }
	inline Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * get_Reconnected_20() const { return ___Reconnected_20; }
	inline Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC ** get_address_of_Reconnected_20() { return &___Reconnected_20; }
	inline void set_Reconnected_20(Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * value)
	{
		___Reconnected_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reconnected_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTickRateU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___U3CTickRateU3Ek__BackingField_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CTickRateU3Ek__BackingField_21() const { return ___U3CTickRateU3Ek__BackingField_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CTickRateU3Ek__BackingField_21() { return &___U3CTickRateU3Ek__BackingField_21; }
	inline void set_U3CTickRateU3Ek__BackingField_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CTickRateU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CServerTimeoutU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___U3CServerTimeoutU3Ek__BackingField_22)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CServerTimeoutU3Ek__BackingField_22() const { return ___U3CServerTimeoutU3Ek__BackingField_22; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CServerTimeoutU3Ek__BackingField_22() { return &___U3CServerTimeoutU3Ek__BackingField_22; }
	inline void set_U3CServerTimeoutU3Ek__BackingField_22(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CServerTimeoutU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CKeepAliveIntervalU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___U3CKeepAliveIntervalU3Ek__BackingField_23)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CKeepAliveIntervalU3Ek__BackingField_23() const { return ___U3CKeepAliveIntervalU3Ek__BackingField_23; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CKeepAliveIntervalU3Ek__BackingField_23() { return &___U3CKeepAliveIntervalU3Ek__BackingField_23; }
	inline void set_U3CKeepAliveIntervalU3Ek__BackingField_23(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CKeepAliveIntervalU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CHandshakeTimeoutU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF, ___U3CHandshakeTimeoutU3Ek__BackingField_24)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CHandshakeTimeoutU3Ek__BackingField_24() const { return ___U3CHandshakeTimeoutU3Ek__BackingField_24; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CHandshakeTimeoutU3Ek__BackingField_24() { return &___U3CHandshakeTimeoutU3Ek__BackingField_24; }
	inline void set_U3CHandshakeTimeoutU3Ek__BackingField_24(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CHandshakeTimeoutU3Ek__BackingField_24 = value;
	}
};

struct HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields
{
public:
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::DefaultServerTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultServerTimeout_0;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::DefaultHandshakeTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultHandshakeTimeout_1;
	// System.TimeSpan Microsoft.AspNetCore.SignalR.Client.HubConnection::DefaultKeepAliveInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultKeepAliveInterval_2;
	// System.Threading.Channels.UnboundedChannelOptions Microsoft.AspNetCore.SignalR.Client.HubConnection::_receiveLoopOptions
	UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC * ____receiveLoopOptions_4;
	// System.Reflection.MethodInfo Microsoft.AspNetCore.SignalR.Client.HubConnection::_sendStreamItemsMethod
	MethodInfo_t * ____sendStreamItemsMethod_5;
	// System.Reflection.MethodInfo Microsoft.AspNetCore.SignalR.Client.HubConnection::_sendIAsyncStreamItemsMethod
	MethodInfo_t * ____sendIAsyncStreamItemsMethod_6;

public:
	inline static int32_t get_offset_of_DefaultServerTimeout_0() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ___DefaultServerTimeout_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultServerTimeout_0() const { return ___DefaultServerTimeout_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultServerTimeout_0() { return &___DefaultServerTimeout_0; }
	inline void set_DefaultServerTimeout_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultServerTimeout_0 = value;
	}

	inline static int32_t get_offset_of_DefaultHandshakeTimeout_1() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ___DefaultHandshakeTimeout_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultHandshakeTimeout_1() const { return ___DefaultHandshakeTimeout_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultHandshakeTimeout_1() { return &___DefaultHandshakeTimeout_1; }
	inline void set_DefaultHandshakeTimeout_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultHandshakeTimeout_1 = value;
	}

	inline static int32_t get_offset_of_DefaultKeepAliveInterval_2() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ___DefaultKeepAliveInterval_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultKeepAliveInterval_2() const { return ___DefaultKeepAliveInterval_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultKeepAliveInterval_2() { return &___DefaultKeepAliveInterval_2; }
	inline void set_DefaultKeepAliveInterval_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultKeepAliveInterval_2 = value;
	}

	inline static int32_t get_offset_of__receiveLoopOptions_4() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ____receiveLoopOptions_4)); }
	inline UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC * get__receiveLoopOptions_4() const { return ____receiveLoopOptions_4; }
	inline UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC ** get_address_of__receiveLoopOptions_4() { return &____receiveLoopOptions_4; }
	inline void set__receiveLoopOptions_4(UnboundedChannelOptions_t7F41C8AC86B21D8D4096A995F8A27492FFBB92CC * value)
	{
		____receiveLoopOptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receiveLoopOptions_4), (void*)value);
	}

	inline static int32_t get_offset_of__sendStreamItemsMethod_5() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ____sendStreamItemsMethod_5)); }
	inline MethodInfo_t * get__sendStreamItemsMethod_5() const { return ____sendStreamItemsMethod_5; }
	inline MethodInfo_t ** get_address_of__sendStreamItemsMethod_5() { return &____sendStreamItemsMethod_5; }
	inline void set__sendStreamItemsMethod_5(MethodInfo_t * value)
	{
		____sendStreamItemsMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendStreamItemsMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of__sendIAsyncStreamItemsMethod_6() { return static_cast<int32_t>(offsetof(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF_StaticFields, ____sendIAsyncStreamItemsMethod_6)); }
	inline MethodInfo_t * get__sendIAsyncStreamItemsMethod_6() const { return ____sendIAsyncStreamItemsMethod_6; }
	inline MethodInfo_t ** get_address_of__sendIAsyncStreamItemsMethod_6() { return &____sendIAsyncStreamItemsMethod_6; }
	inline void set__sendIAsyncStreamItemsMethod_6(MethodInfo_t * value)
	{
		____sendIAsyncStreamItemsMethod_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendIAsyncStreamItemsMethod_6), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.HubException
struct HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506  : public Exception_t
{
public:

public:
};


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest
struct InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenRegistration Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::_cancellationTokenRegistration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ____cancellationTokenRegistration_0;
	// Microsoft.Extensions.Logging.ILogger Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_1;
	// System.Type Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::<ResultType>k__BackingField
	Type_t * ___U3CResultTypeU3Ek__BackingField_2;
	// System.Threading.CancellationToken Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::<CancellationToken>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CCancellationTokenU3Ek__BackingField_3;
	// System.String Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::<InvocationId>k__BackingField
	String_t* ___U3CInvocationIdU3Ek__BackingField_4;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::<HubConnection>k__BackingField
	HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___U3CHubConnectionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__cancellationTokenRegistration_0() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ____cancellationTokenRegistration_0)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get__cancellationTokenRegistration_0() const { return ____cancellationTokenRegistration_0; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of__cancellationTokenRegistration_0() { return &____cancellationTokenRegistration_0; }
	inline void set__cancellationTokenRegistration_0(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		____cancellationTokenRegistration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationTokenRegistration_0))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____cancellationTokenRegistration_0))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ___U3CLoggerU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoggerU3Ek__BackingField_1() const { return ___U3CLoggerU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoggerU3Ek__BackingField_1() { return &___U3CLoggerU3Ek__BackingField_1; }
	inline void set_U3CLoggerU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoggerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ___U3CResultTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CResultTypeU3Ek__BackingField_2() const { return ___U3CResultTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CResultTypeU3Ek__BackingField_2() { return &___U3CResultTypeU3Ek__BackingField_2; }
	inline void set_U3CResultTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CResultTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultTypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCancellationTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ___U3CCancellationTokenU3Ek__BackingField_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CCancellationTokenU3Ek__BackingField_3() const { return ___U3CCancellationTokenU3Ek__BackingField_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CCancellationTokenU3Ek__BackingField_3() { return &___U3CCancellationTokenU3Ek__BackingField_3; }
	inline void set_U3CCancellationTokenU3Ek__BackingField_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CCancellationTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCancellationTokenU3Ek__BackingField_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CInvocationIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ___U3CInvocationIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CInvocationIdU3Ek__BackingField_4() const { return ___U3CInvocationIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CInvocationIdU3Ek__BackingField_4() { return &___U3CInvocationIdU3Ek__BackingField_4; }
	inline void set_U3CInvocationIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CInvocationIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInvocationIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHubConnectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A, ___U3CHubConnectionU3Ek__BackingField_5)); }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * get_U3CHubConnectionU3Ek__BackingField_5() const { return ___U3CHubConnectionU3Ek__BackingField_5; }
	inline HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF ** get_address_of_U3CHubConnectionU3Ek__BackingField_5() { return &___U3CHubConnectionU3Ek__BackingField_5; }
	inline void set_U3CHubConnectionU3Ek__BackingField_5(HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * value)
	{
		___U3CHubConnectionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHubConnectionU3Ek__BackingField_5), (void*)value);
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.AspNetCore.Internal.TimerAwaitable
struct TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0  : public RuntimeObject
{
public:
	// System.Threading.Timer Microsoft.AspNetCore.Internal.TimerAwaitable::_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ____timer_0;
	// System.Action Microsoft.AspNetCore.Internal.TimerAwaitable::_callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____callback_1;
	// System.TimeSpan Microsoft.AspNetCore.Internal.TimerAwaitable::_period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____period_3;
	// System.TimeSpan Microsoft.AspNetCore.Internal.TimerAwaitable::_dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____dueTime_4;
	// System.Boolean Microsoft.AspNetCore.Internal.TimerAwaitable::_disposed
	bool ____disposed_5;
	// System.Boolean Microsoft.AspNetCore.Internal.TimerAwaitable::_running
	bool ____running_6;
	// System.Object Microsoft.AspNetCore.Internal.TimerAwaitable::_lockObj
	RuntimeObject * ____lockObj_7;

public:
	inline static int32_t get_offset_of__timer_0() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____timer_0)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get__timer_0() const { return ____timer_0; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of__timer_0() { return &____timer_0; }
	inline void set__timer_0(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		____timer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timer_0), (void*)value);
	}

	inline static int32_t get_offset_of__callback_1() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____callback_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__callback_1() const { return ____callback_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__callback_1() { return &____callback_1; }
	inline void set__callback_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_1), (void*)value);
	}

	inline static int32_t get_offset_of__period_3() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____period_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__period_3() const { return ____period_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__period_3() { return &____period_3; }
	inline void set__period_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____period_3 = value;
	}

	inline static int32_t get_offset_of__dueTime_4() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____dueTime_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__dueTime_4() const { return ____dueTime_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__dueTime_4() { return &____dueTime_4; }
	inline void set__dueTime_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____dueTime_4 = value;
	}

	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__running_6() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____running_6)); }
	inline bool get__running_6() const { return ____running_6; }
	inline bool* get_address_of__running_6() { return &____running_6; }
	inline void set__running_6(bool value)
	{
		____running_6 = value;
	}

	inline static int32_t get_offset_of__lockObj_7() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0, ____lockObj_7)); }
	inline RuntimeObject * get__lockObj_7() const { return ____lockObj_7; }
	inline RuntimeObject ** get_address_of__lockObj_7() { return &____lockObj_7; }
	inline void set__lockObj_7(RuntimeObject * value)
	{
		____lockObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockObj_7), (void*)value);
	}
};

struct TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_StaticFields
{
public:
	// System.Action Microsoft.AspNetCore.Internal.TimerAwaitable::_callbackCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____callbackCompleted_2;

public:
	inline static int32_t get_offset_of__callbackCompleted_2() { return static_cast<int32_t>(offsetof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_StaticFields, ____callbackCompleted_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__callbackCompleted_2() const { return ____callbackCompleted_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__callbackCompleted_2() { return &____callbackCompleted_2; }
	inline void set__callbackCompleted_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____callbackCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbackCompleted_2), (void*)value);
	}
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


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState
struct ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55  : public RuntimeObject
{
public:
	// System.Threading.SemaphoreSlim Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::_connectionLock
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____connectionLock_0;
	// Microsoft.Extensions.Logging.ILogger Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::_logger
	RuntimeObject* ____logger_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::<CurrentConnectionStateUnsynchronized>k__BackingField
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2;
	// Microsoft.AspNetCore.SignalR.Client.HubConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::<OverallState>k__BackingField
	int32_t ___U3COverallStateU3Ek__BackingField_3;
	// System.Threading.CancellationTokenSource Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::<StopCts>k__BackingField
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U3CStopCtsU3Ek__BackingField_4;
	// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::<ReconnectTask>k__BackingField
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CReconnectTaskU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__connectionLock_0() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ____connectionLock_0)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__connectionLock_0() const { return ____connectionLock_0; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__connectionLock_0() { return &____connectionLock_0; }
	inline void set__connectionLock_0(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____connectionLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ____logger_1)); }
	inline RuntimeObject* get__logger_1() const { return ____logger_1; }
	inline RuntimeObject** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(RuntimeObject* value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2)); }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * get_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2() const { return ___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2; }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 ** get_address_of_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2() { return &___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2; }
	inline void set_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * value)
	{
		___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COverallStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ___U3COverallStateU3Ek__BackingField_3)); }
	inline int32_t get_U3COverallStateU3Ek__BackingField_3() const { return ___U3COverallStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COverallStateU3Ek__BackingField_3() { return &___U3COverallStateU3Ek__BackingField_3; }
	inline void set_U3COverallStateU3Ek__BackingField_3(int32_t value)
	{
		___U3COverallStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CStopCtsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ___U3CStopCtsU3Ek__BackingField_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U3CStopCtsU3Ek__BackingField_4() const { return ___U3CStopCtsU3Ek__BackingField_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U3CStopCtsU3Ek__BackingField_4() { return &___U3CStopCtsU3Ek__BackingField_4; }
	inline void set_U3CStopCtsU3Ek__BackingField_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U3CStopCtsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStopCtsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReconnectTaskU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55, ___U3CReconnectTaskU3Ek__BackingField_5)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CReconnectTaskU3Ek__BackingField_5() const { return ___U3CReconnectTaskU3Ek__BackingField_5; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CReconnectTaskU3Ek__BackingField_5() { return &___U3CReconnectTaskU3Ek__BackingField_5; }
	inline void set_U3CReconnectTaskU3Ek__BackingField_5(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CReconnectTaskU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReconnectTaskU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25
struct U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState> Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::<>4__this
	ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::token
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token_3;
	// System.String Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::methodName
	String_t* ___methodName_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  value)
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___U3CU3E4__this_2)); }
	inline ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___token_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_token_3() const { return ___token_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___token_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_methodName_4() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___methodName_4)); }
	inline String_t* get_methodName_4() const { return ___methodName_4; }
	inline String_t** get_address_of_methodName_4() { return &___methodName_4; }
	inline void set_methodName_4(String_t* value)
	{
		___methodName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Object[]>
struct Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception>
struct Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object[],System.Threading.Tasks.Task>
struct Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Exception,System.Threading.Tasks.Task>
struct Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Threading.Tasks.Task>
struct Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Pipelines.FlushResult>
struct Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0, ___m_result_40)); }
	inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  get_m_result_40() const { return ___m_result_40; }
	inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t95E23D4BDD15458ED97B10DB13E98CA4F710A7F5 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA2BC194AC81B0DC565826460BAD43D0080200A81 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t95E23D4BDD15458ED97B10DB13E98CA4F710A7F5 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t95E23D4BDD15458ED97B10DB13E98CA4F710A7F5 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t95E23D4BDD15458ED97B10DB13E98CA4F710A7F5 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tA2BC194AC81B0DC565826460BAD43D0080200A81 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tA2BC194AC81B0DC565826460BAD43D0080200A81 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tA2BC194AC81B0DC565826460BAD43D0080200A81 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>
struct ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 
{
public:
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject * ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;

public:
	inline static int32_t get_offset_of__obj_1() { return static_cast<int32_t>(offsetof(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845, ____obj_1)); }
	inline RuntimeObject * get__obj_1() const { return ____obj_1; }
	inline RuntimeObject ** get_address_of__obj_1() { return &____obj_1; }
	inline void set__obj_1(RuntimeObject * value)
	{
		____obj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_1), (void*)value);
	}

	inline static int32_t get_offset_of__result_2() { return static_cast<int32_t>(offsetof(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845, ____result_2)); }
	inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  get__result_2() const { return ____result_2; }
	inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E * get_address_of__result_2() { return &____result_2; }
	inline void set__result_2(FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  value)
	{
		____result_2 = value;
	}

	inline static int32_t get_offset_of__token_3() { return static_cast<int32_t>(offsetof(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845, ____token_3)); }
	inline int16_t get__token_3() const { return ____token_3; }
	inline int16_t* get_address_of__token_3() { return &____token_3; }
	inline void set__token_3(int16_t value)
	{
		____token_3 = value;
	}

	inline static int32_t get_offset_of__continueOnCapturedContext_4() { return static_cast<int32_t>(offsetof(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845, ____continueOnCapturedContext_4)); }
	inline bool get__continueOnCapturedContext_4() const { return ____continueOnCapturedContext_4; }
	inline bool* get_address_of__continueOnCapturedContext_4() { return &____continueOnCapturedContext_4; }
	inline void set__continueOnCapturedContext_4(bool value)
	{
		____continueOnCapturedContext_4 = value;
	}
};

struct ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * ___s_canceledTask_0;

public:
	inline static int32_t get_offset_of_s_canceledTask_0() { return static_cast<int32_t>(offsetof(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845_StaticFields, ___s_canceledTask_0)); }
	inline Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * get_s_canceledTask_0() const { return ___s_canceledTask_0; }
	inline Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 ** get_address_of_s_canceledTask_0() { return &___s_canceledTask_0; }
	inline void set_s_canceledTask_0(Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * value)
	{
		___s_canceledTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_canceledTask_0), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming
struct NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD  : public InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::_completionSource
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ____completionSource_6;

public:
	inline static int32_t get_offset_of__completionSource_6() { return static_cast<int32_t>(offsetof(NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD, ____completionSource_6)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get__completionSource_6() const { return ____completionSource_6; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of__completionSource_6() { return &____completionSource_6; }
	inline void set__completionSource_6(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		____completionSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completionSource_6), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming
struct Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2  : public InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A
{
public:
	// System.Threading.Channels.Channel`1<System.Object> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::_channel
	Channel_1_t50428A98313010C432711327973DBF3B359AC03A * ____channel_6;

public:
	inline static int32_t get_offset_of__channel_6() { return static_cast<int32_t>(offsetof(Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2, ____channel_6)); }
	inline Channel_1_t50428A98313010C432711327973DBF3B359AC03A * get__channel_6() const { return ____channel_6; }
	inline Channel_1_t50428A98313010C432711327973DBF3B359AC03A ** get_address_of__channel_6() { return &____channel_6; }
	inline void set__channel_6(Channel_1_t50428A98313010C432711327973DBF3B359AC03A * value)
	{
		____channel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channel_6), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d
struct U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::<>4__this
	U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * ___U3CU3E4__this_2;
	// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::<>u__1
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A, ___U3CU3Eu__1_3)); }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d
struct U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::<>4__this
	U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * ___U3CU3E4__this_2;
	// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::<>u__1
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9, ___U3CU3Eu__1_3)); }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d
struct U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0 Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::<>4__this
	U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * ___U3CU3E4__this_2;
	// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::<>u__1
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2, ___U3CU3Eu__1_3)); }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43
struct U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::<>4__this
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176, ___U3CU3E4__this_2)); }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39
struct U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::<>4__this
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7, ___U3CU3E4__this_2)); }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40
struct U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>4__this
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___U3CU3E4__this_2;
	// Microsoft.AspNetCore.Internal.TimerAwaitable Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::timer
	TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * ___timer_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;
	// Microsoft.AspNetCore.Internal.TimerAwaitable Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>7__wrap1
	TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * ___U3CU3E7__wrap1_5;
	// System.Object Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::<>u__2
	RuntimeObject * ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3E4__this_2)); }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___timer_3)); }
	inline TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * get_timer_3() const { return ___timer_3; }
	inline TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 ** get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * value)
	{
		___timer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3E7__wrap1_5)); }
	inline TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 ** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2, ___U3CU3Eu__2_6)); }
	inline RuntimeObject * get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(RuntimeObject * value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__2_6), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6
struct U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 
{
public:
	// System.Int32 Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::<>t__builder
	AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  ___U3CU3Et__builder_1;
	// Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::<>4__this
	Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * ___U3CU3E4__this_2;
	// System.Object Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::item
	RuntimeObject * ___item_3;
	// System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::<>u__1
	ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697, ___U3CU3Et__builder_1)); }
	inline AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->____methodBuilder_0))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697, ___U3CU3E4__this_2)); }
	inline Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_item_3() { return static_cast<int32_t>(offsetof(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697, ___item_3)); }
	inline RuntimeObject * get_item_3() const { return ___item_3; }
	inline RuntimeObject ** get_address_of_item_3() { return &___item_3; }
	inline void set_item_3(RuntimeObject * value)
	{
		___item_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697, ___U3CU3Eu__1_4)); }
	inline ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->____value_0))->____obj_1), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>
struct ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB 
{
public:
	// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.ValueTaskAwaiter`1::_value
	ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB, ____value_0)); }
	inline ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  get__value_0() const { return ____value_0; }
	inline ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->____obj_1), (void*)NULL);
	}
};


// System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d
struct U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A 
{
public:
	// System.Int32 System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::<>t__builder
	AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE  ___U3CU3Et__builder_1;
	// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::flushTask
	ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  ___flushTask_2;
	// System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::<>u__1
	ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_flushTask_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A, ___flushTask_2)); }
	inline ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  get_flushTask_2() const { return ___flushTask_2; }
	inline ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * get_address_of_flushTask_2() { return &___flushTask_2; }
	inline void set_flushTask_2(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  value)
	{
		___flushTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___flushTask_2))->____obj_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A, ___U3CU3Eu__1_3)); }
	inline ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->____value_0))->____obj_1), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m560491EAF6E691A179DEF077EFDDC7B5F9DD28F2_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m58A19599B77306FC23E97C772E1EED6B0EDF55E6_gshared (Action_3_t40CAA9C4849DA1712B1B6ECA55C18E0C0DFEBE4C * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// System.Action`3<Microsoft.Extensions.Logging.ILogger,!!0,System.Exception> Microsoft.Extensions.Logging.LoggerMessage::Define<System.Object>(Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_3_tA306B09D89AB4B8D7C957BC4BC70925028BD449E * LoggerMessage_Define_TisRuntimeObject_m1B08514019F97A277FAE49C4FA926BF873A2B5BA_gshared (int32_t ___logLevel0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___formatString2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, int32_t ___creationOptions0, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.ILogger`1<!!0> Microsoft.Extensions.Logging.LoggerFactoryExtensions::CreateLogger<System.Object>(Microsoft.Extensions.Logging.ILoggerFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerFactoryExtensions_CreateLogger_TisRuntimeObject_mF38DCD6F1DD897EA19853534C6C40DF7F1BCFB48_gshared (RuntimeObject* ___factory0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ValueTask`1<System.Boolean>::.ctor(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, bool ___result0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Threading.Channels.Channel`1<!!0> System.Threading.Channels.Channel::CreateUnbounded<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Channel_1_t50428A98313010C432711327973DBF3B359AC03A * Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C_gshared (const RuntimeMethod* method);
// System.Threading.Channels.ChannelReader`1<!1> System.Threading.Channels.Channel`2<System.Object,System.Object>::get_Reader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_gshared_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method);
// System.Threading.Channels.ChannelWriter`1<!0> System.Threading.Channels.Channel`2<System.Object,System.Object>::get_Writer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_gshared_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_gshared_inline (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.ValueTask`1<!0> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02_gshared (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ValueTaskAwaiter`1<!0> System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>,System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D_gshared (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * ___awaiter0, U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method);
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mB03F09E73BD2F076E589B70D7142D839CAA04142_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mBA11924419A9E4E1C2B514448BFDC65ECBACEDDE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ValueTaskAwaiter`1<!0> System.Threading.Tasks.ValueTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>,Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD_gshared (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * ___awaiter0, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D_gshared (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF_gshared (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968_gshared (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mDB21B98292003FA25BF87680BF6E0C1AAC6CB378_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m426403C7CCB38EB72AFEEF0A616093C0A427A321_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_mCA87991E121263EA60685B337590A5B3C11C2504_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTask_1_get_Result_m580274E8A0AE7A09A2315DBBD5B1AED4F6089659_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m6B7607EA893922DC28684336B8DA80B680E54590_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.ValueTask`1<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m1F05676C21E143D87245F9432AE73E5E2D64DB41_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.ValueTask`1<System.Boolean>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_Result_m747E1154CBC296CDE24AEE4E1E36F7635E6C1DA4_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Pipelines.FlushResult>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  TaskAwaiter_1_GetResult_mAC580EC6B667FF1FC7AD5F70B70E7CEDF6EBB163_gshared (TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C * __this, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);

// System.Void System.Threading.SemaphoreSlim::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SemaphoreSlim__ctor_mFD9960D1EA303B586DF0D46ACA028B8964C354AC (SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * __this, int32_t ___initialCount0, int32_t ___maxCount1, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_StopCts(System.Threading.CancellationTokenSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_StopCts_m24A7DD2C8D17EAC78AB5BD779CEE59019524CC4E_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_ReconnectTask(System.Threading.Tasks.Task)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_ReconnectTask_m2E8B26DBFDF08FE563CAEDE68EC42E1A2A48D689_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::TryChangeState(Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReconnectingConnectionState_TryChangeState_m0FFF7CAE7CE88BA07854FEE5066D78F33BB35A7E (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___expectedState0, int32_t ___newState1, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Client.HubConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_OverallState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::StateTransitionFailed(Microsoft.Extensions.Logging.ILogger,Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_StateTransitionFailed_m55A2EA9BCB156B095A1DB75CECC61762578E6A0B (RuntimeObject* ___logger0, int32_t ___expectedState1, int32_t ___newState2, int32_t ___actualState3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::AttemptingStateTransition(Microsoft.Extensions.Logging.ILogger,Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_AttemptingStateTransition_m6AAB42BD04C9391B607CC7D0FC0EBFA7E0DBCB49 (RuntimeObject* ___logger0, int32_t ___expectedState1, int32_t ___newState2, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_OverallState(Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_OverallState_m4676CCA3925365E1794213D9BA6B96FEEC235CF8_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::WaitingOnConnectionLock(Microsoft.Extensions.Logging.ILogger,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WaitingOnConnectionLock_m91278D1FD43D46266783602D62E1090992145FF3 (RuntimeObject* ___logger0, String_t* ___memberName1, String_t* ___filePath2, int32_t ___lineNumber3, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.SemaphoreSlim::WaitAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SemaphoreSlim_WaitAsync_mFA8FA0329432FC1DA1A286F12FF054029A8EDF24 (SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Boolean System.Threading.SemaphoreSlim::Wait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SemaphoreSlim_Wait_m4FFCAB7ACD1654A215E10FFE8C2E6EC8937821BE (SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::Create()
inline AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  AsyncTaskMethodBuilder_1_Create_m7958EE4B8F422C7B8D9326AAE57731BB873E1B0B (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::Start<Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mC0FCD9A7CF780509D5B3EA15E76EBBC30AEC0451 (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m560491EAF6E691A179DEF077EFDDC7B5F9DD28F2_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::get_Task()
inline Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * AsyncTaskMethodBuilder_1_get_Task_m1168FC7BC1499C3748E432032B5D999DD5D7A250 (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::ReleasingConnectionLock(Microsoft.Extensions.Logging.ILogger,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ReleasingConnectionLock_m4CBFE0CB930E513AFBB1D0EF36B844C3E2489AD4 (RuntimeObject* ___logger0, String_t* ___memberName1, String_t* ___filePath2, int32_t ___lineNumber3, const RuntimeMethod* method);
// System.Int32 System.Threading.SemaphoreSlim::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SemaphoreSlim_Release_m219D3186074599681AF919E9F8AAE1EE6D23B538 (SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList::Remove(Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationHandlerList_Remove_m9FAA696DC5043139B9C0F91C63B659707DC50A1B (InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * __this, InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  ___handler0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F665C10A81EF551B7B1402D8B8826F6C8698256 (U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object[]>::Invoke(!0)
inline void Action_1_Invoke_mD2169485F6E9DE862254E0FBA5F81395EA677859 (Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// !1 System.Func`2<System.Object[],System.Threading.Tasks.Task>::Invoke(!0)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_2_Invoke_m16FC2E016A1789C7134EE3B3C52A69C305237F70 (Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arg0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m38ECC4B135799CBDBD89638E3AFE91ED4AA461BE (U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * __this, const RuntimeMethod* method);
// System.Void System.Action`3<Microsoft.Extensions.Logging.ILogger,System.String,System.Exception>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E (Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * __this, RuntimeObject* ___arg10, String_t* ___arg21, Exception_t * ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 *, RuntimeObject*, String_t*, Exception_t *, const RuntimeMethod*))Action_3_Invoke_m58A19599B77306FC23E97C772E1EED6B0EDF55E6_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method);
// System.Action`3<Microsoft.Extensions.Logging.ILogger,!!0,System.Exception> Microsoft.Extensions.Logging.LoggerMessage::Define<System.String>(Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String)
inline Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993 (int32_t ___logLevel0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___formatString2, const RuntimeMethod* method)
{
	return ((  Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * (*) (int32_t, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 , String_t*, const RuntimeMethod*))LoggerMessage_Define_TisRuntimeObject_m1B08514019F97A277FAE49C4FA926BF873A2B5BA_gshared)(___logLevel0, ___eventId1, ___formatString2, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396 (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, int32_t ___creationOptions0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396_gshared)(__this, ___creationOptions0, method);
}
// Microsoft.Extensions.Logging.ILogger`1<!!0> Microsoft.Extensions.Logging.LoggerFactoryExtensions::CreateLogger<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming>(Microsoft.Extensions.Logging.ILoggerFactory)
inline RuntimeObject* LoggerFactoryExtensions_CreateLogger_TisNonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD_m929FAE7778B51A779C37C4EEE0162ED5EFC5BEBF (RuntimeObject* ___factory0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))LoggerFactoryExtensions_CreateLogger_TisRuntimeObject_mF38DCD6F1DD897EA19853534C6C40DF7F1BCFB48_gshared)(___factory0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::.ctor(System.Threading.CancellationToken,System.Type,System.String,Microsoft.Extensions.Logging.ILogger,Microsoft.AspNetCore.SignalR.Client.HubConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationRequest__ctor_m9444468A85265D52AB77EFCF31BF6215906A1582 (InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, Type_t * ___resultType1, String_t* ___invocationId2, RuntimeObject* ___logger3, HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___hubConnection4, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.String Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.HubException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HubException__ctor_mB7AB119BFDB79C0AD43DF948046DD846C957C3E0 (HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506 * __this, String_t* ___message0, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.ILogger Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline (InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::get_InvocationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline (InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationCompleted(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationCompleted_m4765A89B64610CD03D79ECE9608816D72CCE234C (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method);
// System.Object Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71 (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, RuntimeObject *, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationFailed(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationFailed_m92D3897A9120D334D72A7F0A9470C5A55FF7BC2F (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89 (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_gshared)(__this, ___exception0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::StreamItemOnNonStreamInvocation(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_StreamItemOnNonStreamInvocation_m93E4A32EF8C07C83EB931E9D376726E74A6CF61A (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ValueTask`1<System.Boolean>::.ctor(!0)
inline void ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *, bool, const RuntimeMethod*))ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_gshared_inline)(__this, ___result0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
inline bool TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95 (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95_gshared)(__this, method);
}
// System.Threading.Channels.Channel`1<!!0> System.Threading.Channels.Channel::CreateUnbounded<System.Object>()
inline Channel_1_t50428A98313010C432711327973DBF3B359AC03A * Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C (const RuntimeMethod* method)
{
	return ((  Channel_1_t50428A98313010C432711327973DBF3B359AC03A * (*) (const RuntimeMethod*))Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C_gshared)(method);
}
// Microsoft.Extensions.Logging.ILogger`1<!!0> Microsoft.Extensions.Logging.LoggerFactoryExtensions::CreateLogger<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming>(Microsoft.Extensions.Logging.ILoggerFactory)
inline RuntimeObject* LoggerFactoryExtensions_CreateLogger_TisStreaming_t799B3F7CD7350548CAAE08A50923C046E17176F2_mBA4D1938BF9F6D260FF9F903A464A63B1E0E50DE (RuntimeObject* ___factory0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))LoggerFactoryExtensions_CreateLogger_TisRuntimeObject_mF38DCD6F1DD897EA19853534C6C40DF7F1BCFB48_gshared)(___factory0, method);
}
// System.Threading.Channels.ChannelReader`1<!1> System.Threading.Channels.Channel`2<System.Object,System.Object>::get_Reader()
inline ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method)
{
	return ((  ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * (*) (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 *, const RuntimeMethod*))Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_gshared_inline)(__this, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::ReceivedUnexpectedComplete(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ReceivedUnexpectedComplete_m8A4F7F364FDA5FCB0415519643F3F2401F73AEA7 (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method);
// System.Threading.Channels.ChannelWriter`1<!0> System.Threading.Channels.Channel`2<System.Object,System.Object>::get_Writer()
inline ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method)
{
	return ((  ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * (*) (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 *, const RuntimeMethod*))Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A (const RuntimeMethod* method)
{
	return ((  AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  (*) (const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&)
inline void AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_inline (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.ValueTask`1<!0> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::get_Task()
inline ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02 (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, const RuntimeMethod* method)
{
	return ((  ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02_gshared)(__this, method);
}
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m48C1169AD81D51B28826AC875BC850AD952AFA22 (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ValueTaskAwaiter`1<!0> System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::GetAwaiter()
inline ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	return ((  ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  (*) (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *, const RuntimeMethod*))ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::get_IsCompleted()
inline bool ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *, const RuntimeMethod*))ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>,System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d>(!!0&,!!1&)
inline void AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * ___awaiter0, U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *, ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *, U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::GetResult()
inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method)
{
	return ((  FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  (*) (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *, const RuntimeMethod*))ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_gshared_inline)(__this, method);
}
// System.Boolean System.IO.Pipelines.FlushResult::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlushResult_get_IsCanceled_m865347B601904A45E5FB0896DD196A5F5FACE8DC (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_mD4AB399A1E02077235B459D35DCF258444B55BD7 (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m4C3CDE4851C1C6765FDEB1D95E0892A010AE406E (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, const RuntimeMethod* method);
// System.Void System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7 (U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m23A84E8836D1C29F136ACED56FAB5D9925D64E13 (AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_SetStateMachine_mFCF135CB509F16E98E979CCEA048B40C78E3BDF5 (U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m114A4CABEA4DA26FA0EDCE53961CE75AEA963549 (U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB942D9D941ADF06D87CCDC6731AE18FA2CFA1B8D (U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * __this, const RuntimeMethod* method);
// System.Boolean System.WeakReference`1<Microsoft.AspNetCore.Internal.TimerAwaitable>::TryGetTarget(!0&)
inline bool WeakReference_1_TryGetTarget_m363CACE6CD55DBB7F8F47ABF443C832E08B957CF (WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2 * __this, TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 ** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2 *, TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 **, const RuntimeMethod*))WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared)(__this, ___target0, method);
}
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerAwaitable_Tick_m6106EB6CD16EB81124BA1CB225F60FACABE08292 (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * __this, const RuntimeMethod* method);
// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable Microsoft.AspNetCore.Internal.AwaitableThreadPool::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  AwaitableThreadPool_Yield_mD31FC97B11C4CBFF595499EA4DEB839825C21BC9 (const RuntimeMethod* method);
// Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  Awaitable_GetAwaiter_m19C7C362456CFB507AB1E63F6C31392873B2D0FA (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaitable_get_IsCompleted_m8F9472F3BDEAAF9CBDE7B6F81CFFB18F85E97527 (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaitable_GetResult_mE214E95AC03157B16BAF0D8E4FFBB0923C7355A3 (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::InvokingClosedEventHandler(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvokingClosedEventHandler_m4FEB9D588675122136C1B450C9BF05AC8B543A8C (RuntimeObject* ___logger0, const RuntimeMethod* method);
// !1 System.Func`2<System.Exception,System.Threading.Tasks.Task>::Invoke(!0)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2 (Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * __this, Exception_t * ___arg0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B *, Exception_t *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::ErrorDuringClosedEvent(Microsoft.Extensions.Logging.ILogger,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorDuringClosedEvent_m6FFFD359BB2DDD9D1D88DEB98E0BABED5EDC59ED (RuntimeObject* ___logger0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_MoveNext_mEAC240C74F66B7F88CD60C9169A87FA7BC1C50BC (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_SetStateMachine_mEF9629DF0171965A5A0BBD313AAC98403860F84C (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::ErrorDuringReconnectingEvent(Microsoft.Extensions.Logging.ILogger,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorDuringReconnectingEvent_mB20044F1E5AB02015C75B0E081C6BE91D8921F03 (RuntimeObject* ___logger0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_MoveNext_m6F0D06697487005DE2093419B9E0446B92738F5E (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_SetStateMachine_m8598B15D13492C571274D5CA14C74299A99E234D (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.AwaitableThreadPool/Awaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * ___awaiter0, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Microsoft.AspNetCore.SignalR.Client.HubConnection::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HubConnection_get_ConnectionId_m870CD170CDDF990E731535DD675C1FD0E63C20BA (HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.String,System.Threading.Tasks.Task>::Invoke(!0)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_2_Invoke_m0D72D8C90B9FBB99A53613954D4F5D8FE8D31B0A (Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC *, String_t*, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::ErrorDuringReconnectedEvent(Microsoft.Extensions.Logging.ILogger,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorDuringReconnectedEvent_m49C16CA2759DABF8CADEA2724CDDA2F67D27B544 (RuntimeObject* ___logger0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_MoveNext_mAA0C56BBF93B9F4DBA6760A220AAE108EE94F2B4 (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_SetStateMachine_mF4B712EEAE64BCBF91CC303CA134B3148704F476 (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::OnServerTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionState_OnServerTimeout_mCD72026BC7CDD40423F2C184D9EC777DF21B2ABE (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::get_Stopping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionState_get_Stopping_m08A498268999079438C45F5E04D46D05E1F27778 (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::TryAcquireConnectionLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReconnectingConnectionState_TryAcquireConnectionLock_m1F90BFA22C730C5ABD052B04B828E0F28488F9C0 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::UnableToAcquireConnectionLockForPing(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_UnableToAcquireConnectionLockForPing_m62E1D4A57D7D2D566D18469318977973892A50D3 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::AcquiredConnectionLockForPing(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_AcquiredConnectionLockForPing_mE64DFDFDCCA64C247C26FC0C6C11C60F11DDC2D8 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_CurrentConnectionStateUnsynchronized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection::SendHubMessage(Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState,Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * HubConnection_SendHubMessage_mA44E5EF6C3BB946348B901A9159CEBDCC6DFEABE (HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * __this, ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___connectionState0, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___hubMessage1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::ReleaseConnectionLock(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_ReleaseConnectionLock_m7B15219F39B51C879030B7F5D11983C872D1D7FC (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, String_t* ___memberName0, String_t* ___filePath1, int32_t ___lineNumber2, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTimerActionsU3Ed__43_MoveNext_m068B1C03A533395E9355C79AB88580F13CF0BBE2 (U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTimerActionsU3Ed__43_SetStateMachine_m5892243C4EDF4564E6E00A2F21E9B3BA543E6723 (U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::Stopping(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Stopping_mC62AEDF2B394038556174075D9937E5B628495B7 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::TerminatingReceiveLoop(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TerminatingReceiveLoop_m670123DD852D57DCDCD1DE07BC4A734733F7DB04 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// Microsoft.AspNetCore.Connections.ConnectionContext Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::get_Connection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ConnectionState_get_Connection_m42F14B87BC8BF9B83DC13ABCE20792C21BD0322E_inline (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::WaitingForReceiveLoopToTerminate(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WaitingForReceiveLoopToTerminate_m727CE32C77EE531D389E183C1648B45E9BF5F44C (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::get_ReceiveTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionState_get_ReceiveTask_mF8A50B1B00603ADA6D69F6CABBA84A83AFFF8B13_inline (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log::Stopped(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Stopped_mFAFF00FC793411ED56C0D2E82962F47990998661 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.ConnectionLogScope::set_ConnectionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionLogScope_set_ConnectionId_m7BED18FB2EB77EC0116B81BC099CE6ADA97D9411 (ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAsyncCoreU3Ed__39_MoveNext_m4B22A43469A567C89A6FA0F1E1573CAF161A31A9 (U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAsyncCoreU3Ed__39_SetStateMachine_mA9615669116DDB911B6CB6D86FAE8CCE7ABA0B58 (U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerAwaitable_Start_m8EBD8625CD5D44C354D812BAB6D32DDA0E84DEA7 (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::ResetTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionState_ResetTimeout_mB09064E3329F93475F58AF306E03855F1B830349 (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::ResetSendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionState_ResetSendPing_mA3DE47DA5DAF29EA0FD6C9F34FFE724035F8187E (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState::RunTimerActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionState_RunTimerActions_mEA66C688DFFE15B3AAD8C27F0F4AC459B08D0515 (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method);
// Microsoft.AspNetCore.Internal.TimerAwaitable Microsoft.AspNetCore.Internal.TimerAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * TimerAwaitable_GetAwaiter_m6D562A90B17F018BCEB0E9AA473267C162DB6DB1 (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.Internal.TimerAwaitable::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerAwaitable_get_IsCompleted_m462AF2D5BE5A39A026C8F0E1F957A88B6A868681 (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Microsoft.AspNetCore.Internal.TimerAwaitable,Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_m13458FE555A87EB68592507526487171109A5517 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 ** ___awaiter0, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 **, U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mB03F09E73BD2F076E589B70D7142D839CAA04142_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean Microsoft.AspNetCore.Internal.TimerAwaitable::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerAwaitable_GetResult_mC8101EE4F490D0A866257D8C6AE1F8170F5B67F3 (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerLoopU3Ed__40_MoveNext_m0EF18066C3DEEB7DCAE4F2BD90FB7B535B0A29F5 (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerLoopU3Ed__40_SetStateMachine_mEF6E4E8CB12DE8B99523F4908FE6008A07FEDEA2 (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0943EB7C7DF1ABCCA0A1CE2CC83B5F6C976395DB (U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::WaitConnectionLockAsync(System.Threading.CancellationToken,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ReconnectingConnectionState_WaitConnectionLockAsync_m9E0051BDE0C2F8CCA907FD182A4A78B21FC51899 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token0, String_t* ___memberName1, String_t* ___filePath2, int32_t ___lineNumber3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m8503972C8585F6650C1089D74236B2E56B6A440F (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mBA11924419A9E4E1C2B514448BFDC65ECBACEDDE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mAD88487D21D32FD01079EA42FEAF7D846BC97D05 (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m4A759D3E59422E6F9BC1A99B0B7E0A9060C4A2A8 (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8 (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mA97741BD9AA0862F3182A7C9A36A7D537DDC632B (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForActiveConnectionAsyncU3Ed__25_SetStateMachine_mCA717D1D426AFD8001DDB064E468EBB83C02C9D9 (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ValueTaskAwaiter`1<!0> System.Threading.Tasks.ValueTask`1<System.Boolean>::GetAwaiter()
inline ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	return ((  ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  (*) (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *, const RuntimeMethod*))ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *, const RuntimeMethod*))ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>,Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&,!!1&)
inline void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * ___awaiter0, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::GetResult()
inline bool ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *, const RuntimeMethod*))ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_gshared_inline)(__this, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::ErrorWritingStreamItem(Microsoft.Extensions.Logging.ILogger,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorWritingStreamItem_m9ACCE86D9CC7D4D4F13A7BB22C0910662E42F8FF (RuntimeObject* ___logger0, String_t* ___invocationId1, Exception_t * ___exception2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, Exception_t *, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, bool, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamItemU3Ed__6_MoveNext_mA7928C466260DEDF8828DDE91DB401F28D4F4DBC (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968 (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *, RuntimeObject*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamItemU3Ed__6_SetStateMachine_mA4AB0A429801D54333661D2F8F6ECB77A2CE4A17 (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mDB21B98292003FA25BF87680BF6E0C1AAC6CB378 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mDB21B98292003FA25BF87680BF6E0C1AAC6CB378_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.IO.Pipelines.FlushResult>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
inline void ValueTaskAwaiter_1__ctor_m426403C7CCB38EB72AFEEF0A616093C0A427A321_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *, ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 , const RuntimeMethod*))ValueTaskAwaiter_1__ctor_m426403C7CCB38EB72AFEEF0A616093C0A427A321_gshared_inline)(__this, ___value0, method);
}
// System.Boolean System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::get_IsCompleted()
inline bool ValueTask_1_get_IsCompleted_mCA87991E121263EA60685B337590A5B3C11C2504_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *, const RuntimeMethod*))ValueTask_1_get_IsCompleted_mCA87991E121263EA60685B337590A5B3C11C2504_gshared_inline)(__this, method);
}
// TResult System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::get_Result()
inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTask_1_get_Result_m580274E8A0AE7A09A2315DBBD5B1AED4F6089659_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	return ((  FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  (*) (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *, const RuntimeMethod*))ValueTask_1_get_Result_m580274E8A0AE7A09A2315DBBD5B1AED4F6089659_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.ValueTask`1<TResult>)
inline void ValueTaskAwaiter_1__ctor_m6B7607EA893922DC28684336B8DA80B680E54590_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *, ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC , const RuntimeMethod*))ValueTaskAwaiter_1__ctor_m6B7607EA893922DC28684336B8DA80B680E54590_gshared_inline)(__this, ___value0, method);
}
// System.Boolean System.Threading.Tasks.ValueTask`1<System.Boolean>::get_IsCompleted()
inline bool ValueTask_1_get_IsCompleted_m1F05676C21E143D87245F9432AE73E5E2D64DB41_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *, const RuntimeMethod*))ValueTask_1_get_IsCompleted_m1F05676C21E143D87245F9432AE73E5E2D64DB41_gshared_inline)(__this, method);
}
// TResult System.Threading.Tasks.ValueTask`1<System.Boolean>::get_Result()
inline bool ValueTask_1_get_Result_m747E1154CBC296CDE24AEE4E1E36F7635E6C1DA4_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *, const RuntimeMethod*))ValueTask_1_get_Result_m747E1154CBC296CDE24AEE4E1E36F7635E6C1DA4_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Pipelines.FlushResult>::GetResult()
inline FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  TaskAwaiter_1_GetResult_mAC580EC6B667FF1FC7AD5F70B70E7CEDF6EBB163 (TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C * __this, const RuntimeMethod* method)
{
	return ((  FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  (*) (TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mAC580EC6B667FF1FC7AD5F70B70E7CEDF6EBB163_gshared)(__this, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::.ctor(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState__ctor_m1B08C9AFDF98D7E6EC189BEDD6B81D3B91A99989 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, RuntimeObject* ___logger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * L_0 = (SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 *)il2cpp_codegen_object_new(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_il2cpp_TypeInfo_var);
		SemaphoreSlim__ctor_mFD9960D1EA303B586DF0D46ACA028B8964C354AC(L_0, 1, 1, /*hidden argument*/NULL);
		__this->set__connectionLock_0(L_0);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_1 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_1, /*hidden argument*/NULL);
		__this->set_U3CStopCtsU3Ek__BackingField_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		__this->set_U3CReconnectTaskU3Ek__BackingField_5(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___logger0;
		__this->set__logger_1(L_3);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_4 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_4, /*hidden argument*/NULL);
		ReconnectingConnectionState_set_StopCts_m24A7DD2C8D17EAC78AB5BD779CEE59019524CC4E_inline(__this, L_4, /*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		ReconnectingConnectionState_set_ReconnectTask_m2E8B26DBFDF08FE563CAEDE68EC42E1A2A48D689_inline(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_CurrentConnectionStateUnsynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_0 = __this->get_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_CurrentConnectionStateUnsynchronized(Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_CurrentConnectionStateUnsynchronized_m8C76786E7E513821053A8CBAD4C920A0E8F408E2 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ___value0, const RuntimeMethod* method)
{
	{
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_0 = ___value0;
		__this->set_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2(L_0);
		return;
	}
}
// Microsoft.AspNetCore.SignalR.Client.HubConnectionState Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_OverallState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COverallStateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_OverallState(Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_OverallState_m4676CCA3925365E1794213D9BA6B96FEEC235CF8 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COverallStateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Threading.CancellationTokenSource Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_StopCts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ReconnectingConnectionState_get_StopCts_mBE31EB4A848435FCC75710D79F8B677986607E3A (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = __this->get_U3CStopCtsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_StopCts(System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_StopCts_m24A7DD2C8D17EAC78AB5BD779CEE59019524CC4E (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___value0, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = ___value0;
		__this->set_U3CStopCtsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::get_ReconnectTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ReconnectingConnectionState_get_ReconnectTask_m1B5654C6B94034F6CF896712AB3DA848DF4478A6 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = __this->get_U3CReconnectTaskU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::set_ReconnectTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_ReconnectTask_m2E8B26DBFDF08FE563CAEDE68EC42E1A2A48D689 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___value0, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___value0;
		__this->set_U3CReconnectTaskU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::ChangeState(Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_ChangeState_m90AC42871F3ABD8C8E5924A04F4489527443A5EB (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___expectedState0, int32_t ___newState1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___expectedState0;
		int32_t L_1 = ___newState1;
		bool L_2;
		L_2 = ReconnectingConnectionState_TryChangeState_m0FFF7CAE7CE88BA07854FEE5066D78F33BB35A7E(__this, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_3 = __this->get__logger_1();
		int32_t L_4 = ___expectedState0;
		int32_t L_5 = ___newState1;
		int32_t L_6;
		L_6 = ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var)));
		Log_StateTransitionFailed_m55A2EA9BCB156B095A1DB75CECC61762578E6A0B(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___expectedState0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748_il2cpp_TypeInfo_var)), &L_8);
		int32_t L_10 = ___newState1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748_il2cpp_TypeInfo_var)), &L_11);
		int32_t L_13;
		L_13 = ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HubConnectionState_tBBA6B9DC8DDE7D3D2357F6E9810A52CE495E4748_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51685695AEA7DCE07BCC3ED2A45C90BB27DCB04C)), L_9, L_12, L_15, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReconnectingConnectionState_ChangeState_m90AC42871F3ABD8C8E5924A04F4489527443A5EB_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::TryChangeState(Microsoft.AspNetCore.SignalR.Client.HubConnectionState,Microsoft.AspNetCore.SignalR.Client.HubConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReconnectingConnectionState_TryChangeState_m0FFF7CAE7CE88BA07854FEE5066D78F33BB35A7E (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___expectedState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__logger_1();
		int32_t L_1 = ___expectedState0;
		int32_t L_2 = ___newState1;
		IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		Log_AttemptingStateTransition_m6AAB42BD04C9391B607CC7D0FC0EBFA7E0DBCB49(L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___expectedState0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		int32_t L_5 = ___newState1;
		ReconnectingConnectionState_set_OverallState_m4676CCA3925365E1794213D9BA6B96FEEC235CF8_inline(__this, L_5, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::AssertInConnectionLock(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_AssertInConnectionLock_m0A9D9DA7BE01D1283502394689C6A85F3F806895 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, String_t* ___memberName0, String_t* ___fileName1, int32_t ___lineNumber2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::AssertConnectionValid(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_AssertConnectionValid_m9D7F8E7360ACC075974EA9564A1901A87D54BD56 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, String_t* ___memberName0, String_t* ___fileName1, int32_t ___lineNumber2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::WaitConnectionLockAsync(System.Threading.CancellationToken,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ReconnectingConnectionState_WaitConnectionLockAsync_m9E0051BDE0C2F8CCA907FD182A4A78B21FC51899 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token0, String_t* ___memberName1, String_t* ___filePath2, int32_t ___lineNumber3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__logger_1();
		String_t* L_1 = ___memberName1;
		String_t* L_2 = ___filePath2;
		int32_t L_3 = ___lineNumber3;
		IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		Log_WaitingOnConnectionLock_m91278D1FD43D46266783602D62E1090992145FF3(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * L_4 = __this->get__connectionLock_0();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5 = ___token0;
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = SemaphoreSlim_WaitAsync_mFA8FA0329432FC1DA1A286F12FF054029A8EDF24(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::TryAcquireConnectionLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReconnectingConnectionState_TryAcquireConnectionLock_m1F90BFA22C730C5ABD052B04B828E0F28488F9C0 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * L_0 = __this->get__connectionLock_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = SemaphoreSlim_Wait_m4FFCAB7ACD1654A215E10FFE8C2E6EC8937821BE(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState> Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::WaitForActiveConnectionAsync(System.String,System.Threading.CancellationToken,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * ReconnectingConnectionState_WaitForActiveConnectionAsync_m8D70CF86E39F25F1485E2F6AEF5165D1BA7D9E48 (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, String_t* ___methodName0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token1, String_t* ___memberName2, String_t* ___filePath3, int32_t ___lineNumber4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m7958EE4B8F422C7B8D9326AAE57731BB873E1B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mC0FCD9A7CF780509D5B3EA15E76EBBC30AEC0451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m1168FC7BC1499C3748E432032B5D999DD5D7A250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___methodName0;
		(&V_0)->set_methodName_4(L_0);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___token1;
		(&V_0)->set_token_3(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m7958EE4B8F422C7B8D9326AAE57731BB873E1B0B(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m7958EE4B8F422C7B8D9326AAE57731BB873E1B0B_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mC0FCD9A7CF780509D5B3EA15E76EBBC30AEC0451((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_3, (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_mC0FCD9A7CF780509D5B3EA15E76EBBC30AEC0451_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t0BC6D8C38B94DDDC1B9C3574820D66A60994486C * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m1168FC7BC1499C3748E432032B5D999DD5D7A250((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m1168FC7BC1499C3748E432032B5D999DD5D7A250_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState::ReleaseConnectionLock(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectingConnectionState_ReleaseConnectionLock_m7B15219F39B51C879030B7F5D11983C872D1D7FC (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, String_t* ___memberName0, String_t* ___filePath1, int32_t ___lineNumber2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__logger_1();
		String_t* L_1 = ___memberName0;
		String_t* L_2 = ___filePath1;
		int32_t L_3 = ___lineNumber2;
		IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		Log_ReleasingConnectionLock_m4CBFE0CB930E513AFBB1D0EF36B844C3E2489AD4(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * L_4 = __this->get__connectionLock_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SemaphoreSlim_Release_m219D3186074599681AF919E9F8AAE1EE6D23B538(L_4, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription::.ctor(Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandler,Microsoft.AspNetCore.SignalR.Client.HubConnection/InvocationHandlerList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscription__ctor_m3A4D751FEA622FD31F9C7CBBF9FE5CE55C2505F3 (Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C * __this, InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  ___handler0, InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * ___handlerList1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  L_0 = ___handler0;
		__this->set__handler_0(L_0);
		InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * L_1 = ___handlerList1;
		__this->set__handlerList_1(L_1);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Subscription::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscription_Dispose_mD801490E8AAA676328E65FE7BFEE65AA8E359227 (Subscription_tC95648CF150892E29ECC53F1F099A41DBEE8522C * __this, const RuntimeMethod* method)
{
	{
		InvocationHandlerList_tDFFFE11B2DBD5CAC960E9873E90E5C2AA7096F0F * L_0 = __this->get__handlerList_1();
		InvocationHandler_tAA127BCFCE425989C91C249D851CD9D93D42B800  L_1 = __this->get__handler_0();
		NullCheck(L_0);
		InvocationHandlerList_Remove_m9FAA696DC5043139B9C0F91C63B659707DC50A1B(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9FE131EA6C10FD2E594341B1D0536E6AE6821E80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * L_0 = (U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 *)il2cpp_codegen_object_new(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1F665C10A81EF551B7B1402D8B8826F6C8698256(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F665C10A81EF551B7B1402D8B8826F6C8698256 (U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::<On>b__0_0(System.Object[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec_U3COnU3Eb__0_0_m1E05A83B1AC2CA44445EBE84D58AEC8A1574D17E (U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD2169485F6E9DE862254E0FBA5F81395EA677859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
		NullCheck(((Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B *)CastclassSealed((RuntimeObject*)L_0, Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B_il2cpp_TypeInfo_var)));
		Action_1_Invoke_mD2169485F6E9DE862254E0FBA5F81395EA677859(((Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B *)CastclassSealed((RuntimeObject*)L_0, Action_1_t56AEDBE8D21C4495322C57FFC0158ADAE68CB87B_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/Action_1_Invoke_mD2169485F6E9DE862254E0FBA5F81395EA677859_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c::<On>b__10_0(System.Object[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec_U3COnU3Eb__10_0_mEDA416EC03A8D9458419351B65D3B3E386BCFFF5 (U3CU3Ec_tDA1CE9537C796E7FC18CA44F8EBF0E1285FB0370 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m16FC2E016A1789C7134EE3B3C52A69C305237F70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
		NullCheck(((Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024 *)CastclassSealed((RuntimeObject*)L_0, Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024_il2cpp_TypeInfo_var)));
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Func_2_Invoke_m16FC2E016A1789C7134EE3B3C52A69C305237F70(((Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024 *)CastclassSealed((RuntimeObject*)L_0, Func_2_t827A3E8F07409D484875359FDD1F8101A60D1024_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/Func_2_Invoke_m16FC2E016A1789C7134EE3B3C52A69C305237F70_RuntimeMethod_var);
		return L_2;
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mCCCD9FD54F029A83C07635E67987870864587BDB (U3CU3Ec__DisplayClass11_0_t2B1F988ED544514624BC5D1B63D7A968A48244D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass11_0::<On>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass11_0_U3COnU3Eb__0_mDA76591C088E35AB34199088000CD24B99E249A2 (U3CU3Ec__DisplayClass11_0_t2B1F988ED544514624BC5D1B63D7A968A48244D1 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_0 = __this->get_handler_0();
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF(L_0, /*hidden argument*/Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m59B709459E9CFBBDDD5ACB5FED6A707D68A8DEC8 (U3CU3Ec__DisplayClass1_0_t0B284EF84106379E86BDCA54CB106587365E8046 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnectionExtensions/<>c__DisplayClass1_0::<On>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3COnU3Eb__0_mABB0898C5E78CD332262727375C9AC7F510A0D77 (U3CU3Ec__DisplayClass1_0_t0B284EF84106379E86BDCA54CB106587365E8046 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_handler_0();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBD4087E0C929D25B5C531C0EFEAF35F148BF76DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * L_0 = (U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA *)il2cpp_codegen_object_new(U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m38ECC4B135799CBDBD89638E3AFE91ED4AA461BE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m38ECC4B135799CBDBD89638E3AFE91ED4AA461BE (U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/<>c::<.ctor>b__17_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__17_0_mF6AD5492DF10BEC8B0F5359914DE57635D9E667E (U3CU3Ec_t2CBB1BF6426B33C68A82A9AF25F502FBB576B8AA * __this, RuntimeObject * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___self0;
		NullCheck(((InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A *)CastclassClass((RuntimeObject*)L_0, InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::Cancel() */, ((InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A *)CastclassClass((RuntimeObject*)L_0, InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A_il2cpp_TypeInfo_var)));
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
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationCreated(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationCreated_mBA9D28C8B3E8E5EF8C5419FD54172763D0D0F3BA (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__invocationCreated_0();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationDisposed(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationDisposed_mA4448F446035D10A1D69313D8FC8A9F1FCC2587C (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__invocationDisposed_1();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationCompleted(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationCompleted_m4765A89B64610CD03D79ECE9608816D72CCE234C (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__invocationCompleted_2();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::InvocationFailed(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InvocationFailed_m92D3897A9120D334D72A7F0A9470C5A55FF7BC2F (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__invocationFailed_3();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::ErrorWritingStreamItem(Microsoft.Extensions.Logging.ILogger,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorWritingStreamItem_m9ACCE86D9CC7D4D4F13A7BB22C0910662E42F8FF (RuntimeObject* ___logger0, String_t* ___invocationId1, Exception_t * ___exception2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__errorWritingStreamItem_4();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		Exception_t * L_3 = ___exception2;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, L_3, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::ReceivedUnexpectedComplete(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ReceivedUnexpectedComplete_m8A4F7F364FDA5FCB0415519643F3F2401F73AEA7 (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__receivedUnexpectedComplete_5();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::StreamItemOnNonStreamInvocation(Microsoft.Extensions.Logging.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_StreamItemOnNonStreamInvocation_m93E4A32EF8C07C83EB931E9D376726E74A6CF61A (RuntimeObject* ___logger0, String_t* ___invocationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_0 = ((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->get__streamItemOnNonStreamInvocation_6();
		RuntimeObject* L_1 = ___logger0;
		String_t* L_2 = ___invocationId1;
		NullCheck(L_0);
		Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E(L_0, L_1, L_2, (Exception_t *)NULL, /*hidden argument*/Action_3_Invoke_m54CD281851A0E0ECC6B33C28872ED173757E0F6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Log::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m1B3F60309AAFD8BC85F95B62EA83D4A6C551A58A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03C300D9EAC27EC18675FF197465F048241BABD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B3EA2D17DBC997A49C6FCE86E72B92626BF2E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B7EFA7420061D5507930E09882145BE12CAA39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EFC364B121CDB6871FB4F9147D2C3827D4FDB92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4939586136957A313F8C3DCB2A454CF23C62FC0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63FDB7D98FC465E78183087AE8CB5630DC6395D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72C398584F3A453B2DBC23A0B283A36F645D3617);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7380EC6C0227812B49842E72FE4A6D0571B742B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B3C9F38638D03EE70FB25DA9ACE51CDDC1AA7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9211BE42BED768221B18E2AB0C09DDAD2C98179A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99325953D41C91CB0C7B4260A371C5AA2A8DAD16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6FD80B96EE8AFEB43FB1CBF0786A26CF4392DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD836A9A98C367482F0CF97D7C19B4E5F385F202D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83FB302D5C29FFFC300BEEC3383B7826A227FA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_0;
		memset((&L_0), 0, sizeof(L_0));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_0), 1, _stringLiteral72C398584F3A453B2DBC23A0B283A36F645D3617, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_1;
		L_1 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(0, L_0, _stringLiteral79B3C9F38638D03EE70FB25DA9ACE51CDDC1AA7E, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__invocationCreated_0(L_1);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_2;
		memset((&L_2), 0, sizeof(L_2));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_2), 2, _stringLiteral3EFC364B121CDB6871FB4F9147D2C3827D4FDB92, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_3;
		L_3 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(0, L_2, _stringLiteral99325953D41C91CB0C7B4260A371C5AA2A8DAD16, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__invocationDisposed_1(L_3);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_4;
		memset((&L_4), 0, sizeof(L_4));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_4), 3, _stringLiteral0B3EA2D17DBC997A49C6FCE86E72B92626BF2E7A, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_5;
		L_5 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(0, L_4, _stringLiteralB6FD80B96EE8AFEB43FB1CBF0786A26CF4392DE5, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__invocationCompleted_2(L_5);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_6;
		memset((&L_6), 0, sizeof(L_6));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_6), 4, _stringLiteral7380EC6C0227812B49842E72FE4A6D0571B742B9, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_7;
		L_7 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(0, L_6, _stringLiteral4939586136957A313F8C3DCB2A454CF23C62FC0B, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__invocationFailed_3(L_7);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_8;
		memset((&L_8), 0, sizeof(L_8));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_8), 5, _stringLiteral25B7EFA7420061D5507930E09882145BE12CAA39, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_9;
		L_9 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(4, L_8, _stringLiteral63FDB7D98FC465E78183087AE8CB5630DC6395D7, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__errorWritingStreamItem_4(L_9);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_10;
		memset((&L_10), 0, sizeof(L_10));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_10), 6, _stringLiteral03C300D9EAC27EC18675FF197465F048241BABD1, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_11;
		L_11 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(4, L_10, _stringLiteralD836A9A98C367482F0CF97D7C19B4E5F385F202D, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__receivedUnexpectedComplete_5(L_11);
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_12;
		memset((&L_12), 0, sizeof(L_12));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_12), 5, _stringLiteral9211BE42BED768221B18E2AB0C09DDAD2C98179A, /*hidden argument*/NULL);
		Action_3_t98276BE60731F6DC531F6D4040A9720F4C6B1AD6 * L_13;
		L_13 = LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993(4, L_12, _stringLiteralE83FB302D5C29FFFC300BEEC3383B7826A227FA2, /*hidden argument*/LoggerMessage_Define_TisString_t_m6A8DFB984263D5B097ECF779F1EF75557D188993_RuntimeMethod_var);
		((Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_StaticFields*)il2cpp_codegen_static_fields_for(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var))->set__streamItemOnNonStreamInvocation_6(L_13);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::.ctor(System.Threading.CancellationToken,System.Type,System.String,Microsoft.Extensions.Logging.ILoggerFactory,Microsoft.AspNetCore.SignalR.Client.HubConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonStreaming__ctor_mECD8E9FF23FE4F2285BED9F0E5A3BC8C50AAD390 (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, Type_t * ___resultType1, String_t* ___invocationId2, RuntimeObject* ___loggerFactory3, HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___hubConnection4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_TisNonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD_m929FAE7778B51A779C37C4EEE0162ED5EFC5BEBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_0 = (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396(L_0, ((int32_t)64), /*hidden argument*/TaskCompletionSource_1__ctor_mBCC327C566D553CB330E096BF8D4C7FD42BBA396_RuntimeMethod_var);
		__this->set__completionSource_6(L_0);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___cancellationToken0;
		Type_t * L_2 = ___resultType1;
		String_t* L_3 = ___invocationId2;
		RuntimeObject* L_4 = ___loggerFactory3;
		RuntimeObject* L_5;
		L_5 = LoggerFactoryExtensions_CreateLogger_TisNonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD_m929FAE7778B51A779C37C4EEE0162ED5EFC5BEBF(L_4, /*hidden argument*/LoggerFactoryExtensions_CreateLogger_TisNonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD_m929FAE7778B51A779C37C4EEE0162ED5EFC5BEBF_RuntimeMethod_var);
		HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_6 = ___hubConnection4;
		InvocationRequest__ctor_m9444468A85265D52AB77EFCF31BF6215906A1582(__this, L_1, L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Object> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * NonStreaming_get_Result_mAC42284D3FEBEAAA44066A8E459474BE71ED9779 (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_0 = __this->get__completionSource_6();
		NullCheck(L_0);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_1;
		L_1 = TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_inline(L_0, /*hidden argument*/TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::Complete(Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonStreaming_Complete_mFD979FD6E720205759C268C4A98068BE2EE2F773 (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * ___completionMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_0 = ___completionMessage0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_3 = ___completionMessage0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_3, /*hidden argument*/NULL);
		HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506 * L_5 = (HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506 *)il2cpp_codegen_object_new(HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506_il2cpp_TypeInfo_var);
		HubException__ctor_mB7AB119BFDB79C0AD43DF948046DD846C957C3E0(L_5, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< Exception_t * >::Invoke(5 /* System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::Fail(System.Exception) */, __this, L_5);
		return;
	}

IL_001f:
	{
		RuntimeObject* L_6;
		L_6 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_InvocationCompleted_m4765A89B64610CD03D79ECE9608816D72CCE234C(L_6, L_7, /*hidden argument*/NULL);
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_8 = __this->get__completionSource_6();
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_9 = ___completionMessage0;
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71(L_8, L_10, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonStreaming_Fail_m2CBA5E35BC703C62B125812E6C7D3B720BB059A2 (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_InvocationFailed_m92D3897A9120D334D72A7F0A9470C5A55FF7BC2F(L_0, L_1, /*hidden argument*/NULL);
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_2 = __this->get__completionSource_6();
		Exception_t * L_3 = ___exception0;
		NullCheck(L_2);
		bool L_4;
		L_4 = TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89(L_2, L_3, /*hidden argument*/TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Boolean> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::StreamItem(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  NonStreaming_StreamItem_mA3F38F6CC2895039213C43F3A19D43875BAB2C08 (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DC89305897405683D064BC41C74122DECFFC0B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_StreamItemOnNonStreamInvocation_m93E4A32EF8C07C83EB931E9D376726E74A6CF61A(L_0, L_1, /*hidden argument*/NULL);
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_2 = __this->get__completionSource_6();
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, _stringLiteral3DC89305897405683D064BC41C74122DECFFC0B6, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89(L_2, L_3, /*hidden argument*/TaskCompletionSource_1_TrySetException_m5BCBBA01FB0D8C18C40330F97368E5390FDBFB89_RuntimeMethod_var);
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_inline((&L_5), (bool)1, /*hidden argument*/ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/NonStreaming::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonStreaming_Cancel_m8E955C6204DD62AA50A30308139EE4B2FC7DC78B (NonStreaming_t865558561A28CD836DC64325D1F3C35DC6813ECD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_0 = __this->get__completionSource_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95(L_0, /*hidden argument*/TaskCompletionSource_1_TrySetCanceled_m3EEF6719EA0FAD501D47D58905EE5B3EF1630E95_RuntimeMethod_var);
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
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::.ctor(System.Threading.CancellationToken,System.Type,System.String,Microsoft.Extensions.Logging.ILoggerFactory,Microsoft.AspNetCore.SignalR.Client.HubConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Streaming__ctor_m2111E92BF174A9F9B833192E12EBC15FE2080C4B (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, Type_t * ___resultType1, String_t* ___invocationId2, RuntimeObject* ___loggerFactory3, HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * ___hubConnection4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_TisStreaming_t799B3F7CD7350548CAAE08A50923C046E17176F2_mBA4D1938BF9F6D260FF9F903A464A63B1E0E50DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_0;
		L_0 = Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C(/*hidden argument*/Channel_CreateUnbounded_TisRuntimeObject_mEBFA2CD19D2B1962AC8439C32BD0AC39E6834A0C_RuntimeMethod_var);
		__this->set__channel_6(L_0);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___cancellationToken0;
		Type_t * L_2 = ___resultType1;
		String_t* L_3 = ___invocationId2;
		RuntimeObject* L_4 = ___loggerFactory3;
		RuntimeObject* L_5;
		L_5 = LoggerFactoryExtensions_CreateLogger_TisStreaming_t799B3F7CD7350548CAAE08A50923C046E17176F2_mBA4D1938BF9F6D260FF9F903A464A63B1E0E50DE(L_4, /*hidden argument*/LoggerFactoryExtensions_CreateLogger_TisStreaming_t799B3F7CD7350548CAAE08A50923C046E17176F2_mBA4D1938BF9F6D260FF9F903A464A63B1E0E50DE_RuntimeMethod_var);
		HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_6 = ___hubConnection4;
		InvocationRequest__ctor_m9444468A85265D52AB77EFCF31BF6215906A1582(__this, L_1, L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Channels.ChannelReader`1<System.Object> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * Streaming_get_Result_m75C5EE1782115EE27211671F0801BD6B6F7322E0 (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_0 = __this->get__channel_6();
		NullCheck(L_0);
		ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * L_1;
		L_1 = Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_inline(L_0, /*hidden argument*/Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::Complete(Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Streaming_Complete_mD8A132F39392BDCA8FA3099C7341268BCBD28F3F (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * ___completionMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADEB49EC16804A35BDD36EDC31F11F88FFEF8EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_InvocationCompleted_m4765A89B64610CD03D79ECE9608816D72CCE234C(L_0, L_1, /*hidden argument*/NULL);
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_2 = ___completionMessage0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_ReceivedUnexpectedComplete_m8A4F7F364FDA5FCB0415519643F3F2401F73AEA7(L_4, L_5, /*hidden argument*/NULL);
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_6 = __this->get__channel_6();
		NullCheck(L_6);
		ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_7;
		L_7 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_6, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, _stringLiteral8ADEB49EC16804A35BDD36EDC31F11F88FFEF8EC, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, Exception_t * >::Invoke(4 /* System.Boolean System.Threading.Channels.ChannelWriter`1<System.Object>::TryComplete(System.Exception) */, L_7, L_8);
	}

IL_0045:
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_10 = ___completionMessage0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_13 = ___completionMessage0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_13, /*hidden argument*/NULL);
		HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506 * L_15 = (HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506 *)il2cpp_codegen_object_new(HubException_t0E7006DAF47714A19E3F8CAB4DAECF0BB6C52506_il2cpp_TypeInfo_var);
		HubException__ctor_mB7AB119BFDB79C0AD43DF948046DD846C957C3E0(L_15, L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< Exception_t * >::Invoke(5 /* System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest::Fail(System.Exception) */, __this, L_15);
		return;
	}

IL_0064:
	{
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_16 = __this->get__channel_6();
		NullCheck(L_16);
		ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_17;
		L_17 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_16, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtFuncInvoker1< bool, Exception_t * >::Invoke(4 /* System.Boolean System.Threading.Channels.ChannelWriter`1<System.Object>::TryComplete(System.Exception) */, L_17, (Exception_t *)NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Streaming_Fail_m1C5641BA5CBF64B2E8040496F25194A3D4DBCC72 (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var);
		Log_InvocationFailed_m92D3897A9120D334D72A7F0A9470C5A55FF7BC2F(L_0, L_1, /*hidden argument*/NULL);
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_2 = __this->get__channel_6();
		NullCheck(L_2);
		ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_3;
		L_3 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_2, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		Exception_t * L_4 = ___exception0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Exception_t * >::Invoke(4 /* System.Boolean System.Threading.Channels.ChannelWriter`1<System.Object>::TryComplete(System.Exception) */, L_3, L_4);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Boolean> Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::StreamItem(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  Streaming_StreamItem_mE8960925F79ECD16B4AEEB096103779A7FD03F22 (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject * L_0 = ___item0;
		(&V_0)->set_item_3(L_0);
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958  L_1;
		L_1 = AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A(/*hidden argument*/AsyncValueTaskMethodBuilder_1_Create_mD04C69C27CF022B10453706BE1F9AD0E62594A7A_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_2 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_inline((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_2, (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *)(&V_0), /*hidden argument*/AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_RuntimeMethod_var);
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_4;
		L_4 = AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_3, /*hidden argument*/AsyncValueTaskMethodBuilder_1_get_Task_m1BE21E18300A485C16132D7264162F030AB3AE02_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Streaming_Cancel_m151C71BD8311F685C702B4D779D916461B00539F (Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_0 = __this->get__channel_6();
		NullCheck(L_0);
		ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_1;
		L_1 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_0, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_2 = (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)il2cpp_codegen_object_new(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		OperationCanceledException__ctor_m48C1169AD81D51B28826AC875BC850AD952AFA22(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, Exception_t * >::Invoke(4 /* System.Boolean System.Threading.Channels.ChannelWriter`1<System.Object>::TryComplete(System.Exception) */, L_1, L_2);
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
// System.Void System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7 (U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
				goto IL_003f;
			}
		}

IL_000a:
		{
			ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * L_2 = __this->get_address_of_flushTask_2();
			ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  L_3;
			L_3 = ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_inline((ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)L_2, /*hidden argument*/ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_RuntimeMethod_var);
			V_2 = L_3;
			bool L_4;
			L_4 = ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_inline((ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *)(&V_2), /*hidden argument*/ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005b;
			}
		}

IL_001f:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  L_6 = V_2;
			__this->set_U3CU3Eu__1_3(L_6);
			AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_7, (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *)(&V_2), (U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A *)__this, /*hidden argument*/AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB_TisU3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A_m8EEF0A443BC809305E6ACF844C584A70EE2EB28D_RuntimeMethod_var);
			goto IL_009e;
		}

IL_003f:
		{
			ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  L_8 = __this->get_U3CU3Eu__1_3();
			V_2 = L_8;
			ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * L_9 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_9, sizeof(ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_005b:
		{
			FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  L_11;
			L_11 = ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_inline((ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB *)(&V_2), /*hidden argument*/ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_RuntimeMethod_var);
			V_1 = L_11;
			bool L_12;
			L_12 = FlushResult_get_IsCanceled_m865347B601904A45E5FB0896DD196A5F5FACE8DC((FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E *)(&V_1), /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0072;
			}
		}

IL_006c:
		{
			OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_13 = (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)));
			OperationCanceledException__ctor_m48C1169AD81D51B28826AC875BC850AD952AFA22(L_13, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7_RuntimeMethod_var)));
		}

IL_0072:
		{
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0074;
		}
		throw e;
	}

CATCH_0074:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncValueTaskMethodBuilder_SetException_mD4AB399A1E02077235B459D35DCF258444B55BD7((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009e;
	} // end catch (depth: 1)

IL_008b:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncValueTaskMethodBuilder_SetResult_m4C3CDE4851C1C6765FDEB1D95E0892A010AE406E((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_16, /*hidden argument*/NULL);
	}

IL_009e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * _thisAdjusted = reinterpret_cast<U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A *>(__this + _offset);
	U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_MoveNext_mE8611B625218F77FBF2639B2CEBCA7ACD6E75BE7(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeWriterStream/<<WriteCoreAsync>g__WriteSlowAsync|20_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_SetStateMachine_mFCF135CB509F16E98E979CCEA048B40C78E3BDF5 (U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncValueTaskMethodBuilder_SetStateMachine_m23A84E8836D1C29F136ACED56FAB5D9925D64E13((AsyncValueTaskMethodBuilder_t07D24E23CD422E4AEB715D8AB484D8D951CCB5CE *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_SetStateMachine_mFCF135CB509F16E98E979CCEA048B40C78E3BDF5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A * _thisAdjusted = reinterpret_cast<U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_tD256263130EA3B86273303F13D4C177FEB197F7A *>(__this + _offset);
	U3CU3CWriteCoreAsyncU3Eg__WriteSlowAsyncU7C20_0U3Ed_SetStateMachine_mFCF135CB509F16E98E979CCEA048B40C78E3BDF5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m49F07AE113FF8F0669D866ABA7D00DCF470D5C59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * L_0 = (U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B *)il2cpp_codegen_object_new(U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m114A4CABEA4DA26FA0EDCE53961CE75AEA963549(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m114A4CABEA4DA26FA0EDCE53961CE75AEA963549 (U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.SignalR.ReflectionHelper/<>c::<IsIAsyncEnumerable>b__1_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsIAsyncEnumerableU3Eb__1_0_mDF963FD299BBEB20E81962CB7358508698C903BD (U3CU3Ec_t5CE2D86BFFFCF38B16C5EFCA9C9E818C42731F0B * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncEnumerable_1_t55262332820F5448EA674D386C24DF538123B177_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___t0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(112 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IAsyncEnumerable_1_t55262332820F5448EA674D386C24DF538123B177_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
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
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD0295B74765770E5CC88C747F5780E2B98E0AA44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * L_0 = (U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 *)il2cpp_codegen_object_new(U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB942D9D941ADF06D87CCDC6731AE18FA2CFA1B8D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB942D9D941ADF06D87CCDC6731AE18FA2CFA1B8D (U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::<Start>b__9_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__9_0_m6A264EA14ED4F0DEC8A3B473F185E8E3F46F9802 (U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m363CACE6CD55DBB7F8F47ABF443C832E08B957CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2 *)CastclassSealed((RuntimeObject*)L_0, WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = WeakReference_1_TryGetTarget_m363CACE6CD55DBB7F8F47ABF443C832E08B957CF(((WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2 *)CastclassSealed((RuntimeObject*)L_0, WeakReference_1_t3507E9DDC12D444F2E18928229C7A668D78319A2_il2cpp_TypeInfo_var)), (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 **)(&V_0), /*hidden argument*/WeakReference_1_TryGetTarget_m363CACE6CD55DBB7F8F47ABF443C832E08B957CF_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_2 = V_0;
		NullCheck(L_2);
		TimerAwaitable_Tick_m6106EB6CD16EB81124BA1CB225F60FACABE08292(L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.TimerAwaitable/<>c::<.cctor>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__19_0_m3FABF39621FFBB43BA35ABE056B704C3F44CF455 (U3CU3Ec_t1C770F10383139EBB8A155E216097E016581E5D3 * __this, const RuntimeMethod* method)
{
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_MoveNext_mEAC240C74F66B7F88CD60C9169A87FA7BC1C50BC (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * V_1 = NULL;
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0072;
			}
		}

IL_0015:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_4;
			L_4 = AwaitableThreadPool_Yield_mD31FC97B11C4CBFF595499EA4DEB839825C21BC9(/*hidden argument*/NULL);
			V_3 = L_4;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_5;
			L_5 = Awaitable_GetAwaiter_m19C7C362456CFB507AB1E63F6C31392873B2D0FA((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaitable_get_IsCompleted_m8F9472F3BDEAAF9CBDE7B6F81CFFB18F85E97527((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m671ED32EFBD5D9A6EB27C0F4A160E8E84FD4C1D7_RuntimeMethod_var);
			goto IL_0133;
		}

IL_004f:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_006b:
		{
			Awaitable_GetResult_mE214E95AC03157B16BAF0D8E4FFBB0923C7355A3((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
		}

IL_0072:
		{
		}

IL_0073:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_00c9;
				}
			}

IL_0077:
			{
				U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * L_14 = V_1;
				NullCheck(L_14);
				HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_15 = L_14->get_U3CU3E4__this_0();
				NullCheck(L_15);
				RuntimeObject* L_16 = L_15->get__logger_8();
				IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
				Log_InvokingClosedEventHandler_m4FEB9D588675122136C1B450C9BF05AC8B543A8C(L_16, /*hidden argument*/NULL);
				U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * L_17 = V_1;
				NullCheck(L_17);
				Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * L_18 = L_17->get_closed_1();
				U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * L_19 = V_1;
				NullCheck(L_19);
				Exception_t * L_20 = L_19->get_closeException_2();
				NullCheck(L_18);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_21;
				L_21 = Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2(L_18, L_20, /*hidden argument*/Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2_RuntimeMethod_var);
				NullCheck(L_21);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22;
				L_22 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_21, /*hidden argument*/NULL);
				V_4 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_23)
				{
					goto IL_00e6;
				}
			}

IL_00a8:
			{
				int32_t L_24 = 1;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_25 = V_4;
				__this->set_U3CU3Eu__2_4(L_25);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_26, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A_m279323D334E8FEA0CCDC3BA0FD3107D4E178BD06_RuntimeMethod_var);
				goto IL_0133;
			}

IL_00c9:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_27 = __this->get_U3CU3Eu__2_4();
				V_4 = L_27;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_28 = __this->get_address_of_U3CU3Eu__2_4();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00e6:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				goto IL_0105;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ef;
			}
			throw e;
		}

CATCH_00ef:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClass86_0_t49952B842C4A024C14C2AD8394E38E72542BE59D * L_30 = V_1;
			NullCheck(L_30);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_31 = L_30->get_U3CU3E4__this_0();
			NullCheck(L_31);
			RuntimeObject* L_32 = L_31->get__logger_8();
			Exception_t * L_33 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var)));
			Log_ErrorDuringClosedEvent_m6FFFD359BB2DDD9D1D88DEB98E0BABED5EDC59ED(L_32, L_33, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0105;
		} // end catch (depth: 2)

IL_0105:
		{
			goto IL_0120;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0107;
		}
		throw e;
	}

CATCH_0107:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_34, L_35, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0133;
	} // end catch (depth: 1)

IL_0120:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_36, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_MoveNext_mEAC240C74F66B7F88CD60C9169A87FA7BC1C50BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * _thisAdjusted = reinterpret_cast<U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *>(__this + _offset);
	U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_MoveNext_mEAC240C74F66B7F88CD60C9169A87FA7BC1C50BC(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass86_0/<<RunCloseEvent>g__RunClosedEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_SetStateMachine_mEF9629DF0171965A5A0BBD313AAC98403860F84C (U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_SetStateMachine_mEF9629DF0171965A5A0BBD313AAC98403860F84C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A * _thisAdjusted = reinterpret_cast<U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_t0A28A097E348C890C9FC4F92F20EB61F7C0D4D9A *>(__this + _offset);
	U3CU3CRunCloseEventU3Eg__RunClosedEventAsyncU7C0U3Ed_SetStateMachine_mEF9629DF0171965A5A0BBD313AAC98403860F84C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_MoveNext_m6F0D06697487005DE2093419B9E0446B92738F5E (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * V_1 = NULL;
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0072;
			}
		}

IL_0015:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_4;
			L_4 = AwaitableThreadPool_Yield_mD31FC97B11C4CBFF595499EA4DEB839825C21BC9(/*hidden argument*/NULL);
			V_3 = L_4;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_5;
			L_5 = Awaitable_GetAwaiter_m19C7C362456CFB507AB1E63F6C31392873B2D0FA((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaitable_get_IsCompleted_m8F9472F3BDEAAF9CBDE7B6F81CFFB18F85E97527((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_m875E2AA43F68FA594ADF5C990034A871F025E118_RuntimeMethod_var);
			goto IL_0123;
		}

IL_004f:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_006b:
		{
			Awaitable_GetResult_mE214E95AC03157B16BAF0D8E4FFBB0923C7355A3((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
		}

IL_0072:
		{
		}

IL_0073:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_00b9;
				}
			}

IL_0077:
			{
				U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * L_14 = V_1;
				NullCheck(L_14);
				Func_2_tA8B1B8BF7DBC2E30A3FB2A765BF940380E9DB99B * L_15 = L_14->get_reconnecting_0();
				U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * L_16 = V_1;
				NullCheck(L_16);
				Exception_t * L_17 = L_16->get_closeException_1();
				NullCheck(L_15);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
				L_18 = Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2(L_15, L_17, /*hidden argument*/Func_2_Invoke_m9921E1E9A362CDE233B2319F35F90DD07D0E0AD2_RuntimeMethod_var);
				NullCheck(L_18);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19;
				L_19 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_18, /*hidden argument*/NULL);
				V_4 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_00d6;
				}
			}

IL_0098:
			{
				int32_t L_21 = 1;
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = V_4;
				__this->set_U3CU3Eu__2_4(L_22);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_23 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_23, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9_mE2F12182F900D6E7B27A5811F94FD73491AD92BB_RuntimeMethod_var);
				goto IL_0123;
			}

IL_00b9:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_24 = __this->get_U3CU3Eu__2_4();
				V_4 = L_24;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_25 = __this->get_address_of_U3CU3Eu__2_4();
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
			}

IL_00d6:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				goto IL_00f5;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00df;
			}
			throw e;
		}

CATCH_00df:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClass90_0_t8AFD2FE98BFFB2CFEEDE48C7B969146F29B5F601 * L_27 = V_1;
			NullCheck(L_27);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_28 = L_27->get_U3CU3E4__this_2();
			NullCheck(L_28);
			RuntimeObject* L_29 = L_28->get__logger_8();
			Exception_t * L_30 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var)));
			Log_ErrorDuringReconnectingEvent_mB20044F1E5AB02015C75B0E081C6BE91D8921F03(L_29, L_30, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f5;
		} // end catch (depth: 2)

IL_00f5:
		{
			goto IL_0110;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f7;
		}
		throw e;
	}

CATCH_00f7:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_32 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0123;
	} // end catch (depth: 1)

IL_0110:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_33, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_MoveNext_m6F0D06697487005DE2093419B9E0446B92738F5E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * _thisAdjusted = reinterpret_cast<U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *>(__this + _offset);
	U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_MoveNext_m6F0D06697487005DE2093419B9E0446B92738F5E(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass90_0/<<RunReconnectingEvent>g__RunReconnectingEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_SetStateMachine_m8598B15D13492C571274D5CA14C74299A99E234D (U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_SetStateMachine_m8598B15D13492C571274D5CA14C74299A99E234D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 * _thisAdjusted = reinterpret_cast<U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_tE42EF4DCB7139B1B2A23B28C744441DF96A9D5F9 *>(__this + _offset);
	U3CU3CRunReconnectingEventU3Eg__RunReconnectingEventAsyncU7C0U3Ed_SetStateMachine_m8598B15D13492C571274D5CA14C74299A99E234D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_MoveNext_mAA0C56BBF93B9F4DBA6760A220AAE108EE94F2B4 (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m0D72D8C90B9FBB99A53613954D4F5D8FE8D31B0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * V_1 = NULL;
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0072;
			}
		}

IL_0015:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_4;
			L_4 = AwaitableThreadPool_Yield_mD31FC97B11C4CBFF595499EA4DEB839825C21BC9(/*hidden argument*/NULL);
			V_3 = L_4;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_5;
			L_5 = Awaitable_GetAwaiter_m19C7C362456CFB507AB1E63F6C31392873B2D0FA((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaitable_get_IsCompleted_m8F9472F3BDEAAF9CBDE7B6F81CFFB18F85E97527((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m5159FBB1B6FB151FDF15743246F1957CC8024D3E_RuntimeMethod_var);
			goto IL_0128;
		}

IL_004f:
		{
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_006b:
		{
			Awaitable_GetResult_mE214E95AC03157B16BAF0D8E4FFBB0923C7355A3((Awaitable_t7B976029D9A5EC13512B8F64288AB5EA8600F7A7 *)(&V_2), /*hidden argument*/NULL);
		}

IL_0072:
		{
		}

IL_0073:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_00be;
				}
			}

IL_0077:
			{
				U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * L_14 = V_1;
				NullCheck(L_14);
				Func_2_t9F781127EE06FAFB55B1C9291023F0C028C4EECC * L_15 = L_14->get_reconnected_0();
				U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * L_16 = V_1;
				NullCheck(L_16);
				HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_17 = L_16->get_U3CU3E4__this_1();
				NullCheck(L_17);
				String_t* L_18;
				L_18 = HubConnection_get_ConnectionId_m870CD170CDDF990E731535DD675C1FD0E63C20BA(L_17, /*hidden argument*/NULL);
				NullCheck(L_15);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
				L_19 = Func_2_Invoke_m0D72D8C90B9FBB99A53613954D4F5D8FE8D31B0A(L_15, L_18, /*hidden argument*/Func_2_Invoke_m0D72D8C90B9FBB99A53613954D4F5D8FE8D31B0A_RuntimeMethod_var);
				NullCheck(L_19);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20;
				L_20 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_19, /*hidden argument*/NULL);
				V_4 = L_20;
				bool L_21;
				L_21 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_21)
				{
					goto IL_00db;
				}
			}

IL_009d:
			{
				int32_t L_22 = 1;
				V_0 = L_22;
				__this->set_U3CU3E1__state_0(L_22);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23 = V_4;
				__this->set_U3CU3Eu__2_4(L_23);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2_m4FFE91B6A415F031824917C9983635016BEA4E9E_RuntimeMethod_var);
				goto IL_0128;
			}

IL_00be:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_25 = __this->get_U3CU3Eu__2_4();
				V_4 = L_25;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_26 = __this->get_address_of_U3CU3Eu__2_4();
				il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->set_U3CU3E1__state_0(L_27);
			}

IL_00db:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				goto IL_00fa;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e4;
			}
			throw e;
		}

CATCH_00e4:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClass91_0_t7C06D467D95B7DE8D75868910E04D59C567643AF * L_28 = V_1;
			NullCheck(L_28);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_29 = L_28->get_U3CU3E4__this_1();
			NullCheck(L_29);
			RuntimeObject* L_30 = L_29->get__logger_8();
			Exception_t * L_31 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var)));
			Log_ErrorDuringReconnectedEvent_m49C16CA2759DABF8CADEA2724CDDA2F67D27B544(L_30, L_31, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00fa;
		} // end catch (depth: 2)

IL_00fa:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fc;
		}
		throw e;
	}

CATCH_00fc:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0128;
	} // end catch (depth: 1)

IL_0115:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_34, /*hidden argument*/NULL);
	}

IL_0128:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_MoveNext_mAA0C56BBF93B9F4DBA6760A220AAE108EE94F2B4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * _thisAdjusted = reinterpret_cast<U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *>(__this + _offset);
	U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_MoveNext_mAA0C56BBF93B9F4DBA6760A220AAE108EE94F2B4(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/<>c__DisplayClass91_0/<<RunReconnectedEvent>g__RunReconnectedEventAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_SetStateMachine_mF4B712EEAE64BCBF91CC303CA134B3148704F476 (U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_SetStateMachine_mF4B712EEAE64BCBF91CC303CA134B3148704F476_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 * _thisAdjusted = reinterpret_cast<U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_tAB71329102D4AF269B86378A2433F8C09498A3C2 *>(__this + _offset);
	U3CU3CRunReconnectedEventU3Eg__RunReconnectedEventAsyncU7C0U3Ed_SetStateMachine_mF4B712EEAE64BCBF91CC303CA134B3148704F476(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTimerActionsU3Ed__43_MoveNext_m068B1C03A533395E9355C79AB88580F13CF0BBE2 (U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral568B62B607C525710B68A7572FD973E8682EB729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9BEA57067944EDEBC7056BF2331DD3242448562);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0096;
			}
		}

IL_0014:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get__hasInherentKeepAlive_2();
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_001c:
		{
			goto IL_015a;
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
			L_5 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
			V_2 = L_5;
			int64_t L_6;
			L_6 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_7 = V_1;
			NullCheck(L_7);
			int64_t* L_8 = L_7->get_address_of__nextActivationServerTimeout_8();
			int64_t L_9;
			L_9 = VolatileRead((int64_t*)L_8);
			if ((((int64_t)L_6) <= ((int64_t)L_9)))
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_10 = V_1;
			NullCheck(L_10);
			ConnectionState_OnServerTimeout_mCD72026BC7CDD40423F2C184D9EC777DF21B2ABE(L_10, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11;
			L_11 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
			V_2 = L_11;
			int64_t L_12;
			L_12 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_13 = V_1;
			NullCheck(L_13);
			int64_t* L_14 = L_13->get_address_of__nextActivationSendPing_9();
			int64_t L_15;
			L_15 = VolatileRead((int64_t*)L_14);
			if ((((int64_t)L_12) <= ((int64_t)L_15)))
			{
				goto IL_013f;
			}
		}

IL_005e:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_16 = V_1;
			NullCheck(L_16);
			bool L_17;
			L_17 = ConnectionState_get_Stopping_m08A498268999079438C45F5E04D46D05E1F27778(L_16, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_013f;
			}
		}

IL_0069:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_18 = V_1;
			NullCheck(L_18);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_19 = L_18->get__hubConnection_0();
			NullCheck(L_19);
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_20 = L_19->get__state_16();
			NullCheck(L_20);
			bool L_21;
			L_21 = ReconnectingConnectionState_TryAcquireConnectionLock_m1F90BFA22C730C5ABD052B04B828E0F28488F9C0(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_008b;
			}
		}

IL_007b:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_22 = V_1;
			NullCheck(L_22);
			RuntimeObject* L_23 = L_22->get__logger_1();
			IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
			Log_UnableToAcquireConnectionLockForPing_m62E1D4A57D7D2D566D18469318977973892A50D3(L_23, /*hidden argument*/NULL);
			goto IL_015a;
		}

IL_008b:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_24 = V_1;
			NullCheck(L_24);
			RuntimeObject* L_25 = L_24->get__logger_1();
			IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
			Log_AcquiredConnectionLockForPing_mE64DFDFDCCA64C247C26FC0C6C11C60F11DDC2D8(L_25, /*hidden argument*/NULL);
		}

IL_0096:
		{
		}

IL_0097:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_26 = V_0;
				if (!L_26)
				{
					goto IL_00f6;
				}
			}

IL_009a:
			{
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_27 = V_1;
				NullCheck(L_27);
				HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_28 = L_27->get__hubConnection_0();
				NullCheck(L_28);
				ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_29 = L_28->get__state_16();
				NullCheck(L_29);
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_30;
				L_30 = ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline(L_29, /*hidden argument*/NULL);
				if (!L_30)
				{
					goto IL_0119;
				}
			}

IL_00ac:
			{
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_31 = V_1;
				NullCheck(L_31);
				HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_32 = L_31->get__hubConnection_0();
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_33 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
				PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * L_34 = ((PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_StaticFields*)il2cpp_codegen_static_fields_for(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var))->get_Instance_0();
				il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_35 = V_4;
				NullCheck(L_32);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_36;
				L_36 = HubConnection_SendHubMessage_mA44E5EF6C3BB946348B901A9159CEBDCC6DFEABE(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
				NullCheck(L_36);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37;
				L_37 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_36, /*hidden argument*/NULL);
				V_3 = L_37;
				bool L_38;
				L_38 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_0112;
				}
			}

IL_00d6:
			{
				int32_t L_39 = 0;
				V_0 = L_39;
				__this->set_U3CU3E1__state_0(L_39);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_40 = V_3;
				__this->set_U3CU3Eu__1_3(L_40);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_41 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_41, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176_m3B2403143D72DE263E5E312F8500E984EFFA9CA8_RuntimeMethod_var);
				IL2CPP_LEAVE(0x16D, FINALLY_011b);
			}

IL_00f6:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_42 = __this->get_U3CU3Eu__1_3();
				V_3 = L_42;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_43 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
			}

IL_0112:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_0119:
			{
				IL2CPP_LEAVE(0x13F, FINALLY_011b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_011b;
		}

FINALLY_011b:
		{ // begin finally (depth: 2)
			{
				int32_t L_45 = V_0;
				if ((((int32_t)L_45) >= ((int32_t)0)))
				{
					goto IL_013e;
				}
			}

IL_011f:
			{
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_46 = V_1;
				NullCheck(L_46);
				HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_47 = L_46->get__hubConnection_0();
				NullCheck(L_47);
				ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_48 = L_47->get__state_16();
				NullCheck(L_48);
				ReconnectingConnectionState_ReleaseConnectionLock_m7B15219F39B51C879030B7F5D11983C872D1D7FC(L_48, _stringLiteralC9BEA57067944EDEBC7056BF2331DD3242448562, _stringLiteral568B62B607C525710B68A7572FD973E8682EB729, ((int32_t)1852), /*hidden argument*/NULL);
			}

IL_013e:
			{
				IL2CPP_END_FINALLY(283)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(283)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x16D, IL_016d)
			IL2CPP_JUMP_TBL(0x13F, IL_013f)
		}

IL_013f:
		{
			goto IL_015a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0141;
		}
		throw e;
	}

CATCH_0141:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_50 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, L_50, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016d;
	} // end catch (depth: 1)

IL_015a:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_51 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_51, /*hidden argument*/NULL);
	}

IL_016d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTimerActionsU3Ed__43_MoveNext_m068B1C03A533395E9355C79AB88580F13CF0BBE2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * _thisAdjusted = reinterpret_cast<U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 *>(__this + _offset);
	U3CRunTimerActionsU3Ed__43_MoveNext_m068B1C03A533395E9355C79AB88580F13CF0BBE2(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<RunTimerActions>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTimerActionsU3Ed__43_SetStateMachine_m5892243C4EDF4564E6E00A2F21E9B3BA543E6723 (U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTimerActionsU3Ed__43_SetStateMachine_m5892243C4EDF4564E6E00A2F21E9B3BA543E6723_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 * _thisAdjusted = reinterpret_cast<U3CRunTimerActionsU3Ed__43_tDA0A40E0CBEF64756EEF3866434B68D44C199176 *>(__this + _offset);
	U3CRunTimerActionsU3Ed__43_SetStateMachine_m5892243C4EDF4564E6E00A2F21E9B3BA543E6723(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAsyncCoreU3Ed__39_MoveNext_m4B22A43469A567C89A6FA0F1E1573CAF161A31A9 (U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDuplexPipe_tBEA5669B11F185DBDDADA2FB3B307340A9334428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007c;
			}
		}

IL_0011:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get__logger_1();
			IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
			Log_Stopping_mC62AEDF2B394038556174075D9937E5B628495B7(L_4, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get__logger_1();
			Log_TerminatingReceiveLoop_m670123DD852D57DCDCD1DE07BC4A734733F7DB04(L_6, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_7 = V_1;
			NullCheck(L_7);
			ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_8;
			L_8 = ConnectionState_get_Connection_m42F14B87BC8BF9B83DC13ABCE20792C21BD0322E_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.ConnectionContext::get_Transport() */, L_8);
			NullCheck(L_9);
			PipeReader_t9AB049F18B590B0C1B370EAA2D1BBE5923D02CA5 * L_10;
			L_10 = InterfaceFuncInvoker0< PipeReader_t9AB049F18B590B0C1B370EAA2D1BBE5923D02CA5 * >::Invoke(0 /* System.IO.Pipelines.PipeReader System.IO.Pipelines.IDuplexPipe::get_Input() */, IDuplexPipe_tBEA5669B11F185DBDDADA2FB3B307340A9334428_il2cpp_TypeInfo_var, L_9);
			NullCheck(L_10);
			VirtActionInvoker0::Invoke(9 /* System.Void System.IO.Pipelines.PipeReader::CancelPendingRead() */, L_10);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_11 = V_1;
			NullCheck(L_11);
			RuntimeObject* L_12 = L_11->get__logger_1();
			Log_WaitingForReceiveLoopToTerminate_m727CE32C77EE531D389E183C1648B45E9BF5F44C(L_12, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_13 = V_1;
			NullCheck(L_13);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
			L_14 = ConnectionState_get_ReceiveTask_mF8A50B1B00603ADA6D69F6CABBA84A83AFFF8B13_inline(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15;
			L_15 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_0098;
			}
		}

IL_005c:
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = V_2;
			__this->set_U3CU3Eu__1_3(L_18);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7_mE1D5B8FC4B34717093A41F2556BA890F12E08F28_RuntimeMethod_var);
			goto IL_00f4;
		}

IL_007c:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20 = __this->get_U3CU3Eu__1_3();
			V_2 = L_20;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_21 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
		}

IL_0098:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_23 = V_1;
			NullCheck(L_23);
			RuntimeObject* L_24 = L_23->get__logger_1();
			IL2CPP_RUNTIME_CLASS_INIT(Log_tDE88EC248E7FE72630408D544B1F7FEC8A4F24EC_il2cpp_TypeInfo_var);
			Log_Stopped_mFAFF00FC793411ED56C0D2E82962F47990998661(L_24, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_25 = V_1;
			NullCheck(L_25);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_26 = L_25->get__hubConnection_0();
			NullCheck(L_26);
			ConnectionLogScope_t68C25979B0CB830C3E0BB53AF5A56E50DA647708 * L_27 = L_26->get__logScope_9();
			NullCheck(L_27);
			ConnectionLogScope_set_ConnectionId_m7BED18FB2EB77EC0116B81BC099CE6ADA97D9411(L_27, (String_t*)NULL, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_28 = V_1;
			NullCheck(L_28);
			TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_29 = L_28->get__stopTcs_5();
			NullCheck(L_29);
			bool L_30;
			L_30 = TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71(L_29, NULL, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
			goto IL_00e1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ca;
		}
		throw e;
	}

CATCH_00ca:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_32 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f4;
	} // end catch (depth: 1)

IL_00e1:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_33, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopAsyncCoreU3Ed__39_MoveNext_m4B22A43469A567C89A6FA0F1E1573CAF161A31A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * _thisAdjusted = reinterpret_cast<U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 *>(__this + _offset);
	U3CStopAsyncCoreU3Ed__39_MoveNext_m4B22A43469A567C89A6FA0F1E1573CAF161A31A9(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<StopAsyncCore>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAsyncCoreU3Ed__39_SetStateMachine_mA9615669116DDB911B6CB6D86FAE8CCE7ABA0B58 (U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopAsyncCoreU3Ed__39_SetStateMachine_mA9615669116DDB911B6CB6D86FAE8CCE7ABA0B58_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 * _thisAdjusted = reinterpret_cast<U3CStopAsyncCoreU3Ed__39_t3639BB2391D43BF2211E2214E443FC54656D18B7 *>(__this + _offset);
	U3CStopAsyncCoreU3Ed__39_SetStateMachine_mA9615669116DDB911B6CB6D86FAE8CCE7ABA0B58(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerLoopU3Ed__40_MoveNext_m0EF18066C3DEEB7DCAE4F2BD90FB7B535B0A29F5 (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_m13458FE555A87EB68592507526487171109A5517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_1 = __this->get_U3CU3E4__this_2();
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
			int32_t L_3 = V_0;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))) > ((uint32_t)1))))
			{
				goto IL_00b4;
			}
		}

IL_001a:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get__hasInherentKeepAlive_2();
			if (L_5)
			{
				goto IL_0091;
			}
		}

IL_0022:
		{
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_6 = V_1;
			NullCheck(L_6);
			HubConnection_t54A7472E7D37418DA9D6516AFD739A9C5F7E77EF * L_7 = L_6->get__hubConnection_0();
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
			PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * L_9 = ((PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_StaticFields*)il2cpp_codegen_static_fields_for(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var))->get_Instance_0();
			il2cpp_codegen_initobj((&V_3), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_10 = V_3;
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
			L_11 = HubConnection_SendHubMessage_mA44E5EF6C3BB946348B901A9159CEBDCC6DFEABE(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12;
			L_12 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_008a;
			}
		}

IL_004b:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = V_2;
			__this->set_U3CU3Eu__1_4(L_15);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_RuntimeMethod_var);
			goto IL_01cc;
		}

IL_006e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = __this->get_U3CU3Eu__1_4();
			V_2 = L_17;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_18 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_008a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_0091:
		{
			TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_20 = __this->get_timer_3();
			NullCheck(L_20);
			TimerAwaitable_Start_m8EBD8625CD5D44C354D812BAB6D32DDA0E84DEA7(L_20, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_21 = V_1;
			NullCheck(L_21);
			ConnectionState_ResetTimeout_mB09064E3329F93475F58AF306E03855F1B830349(L_21, /*hidden argument*/NULL);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_22 = V_1;
			NullCheck(L_22);
			ConnectionState_ResetSendPing_mA3DE47DA5DAF29EA0FD6C9F34FFE724035F8187E(L_22, /*hidden argument*/NULL);
			TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_23 = __this->get_timer_3();
			__this->set_U3CU3E7__wrap1_5(L_23);
		}

IL_00b4:
		{
		}

IL_00b5:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_24 = V_0;
				if ((((int32_t)L_24) == ((int32_t)1)))
				{
					goto IL_00fa;
				}
			}

IL_00b9:
			{
				int32_t L_25 = V_0;
				if ((((int32_t)L_25) == ((int32_t)2)))
				{
					goto IL_0154;
				}
			}

IL_00c0:
			{
				goto IL_011d;
			}

IL_00c2:
			{
				ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_26 = V_1;
				NullCheck(L_26);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_27;
				L_27 = ConnectionState_RunTimerActions_mEA66C688DFFE15B3AAD8C27F0F4AC459B08D0515(L_26, /*hidden argument*/NULL);
				NullCheck(L_27);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_28;
				L_28 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_27, /*hidden argument*/NULL);
				V_2 = L_28;
				bool L_29;
				L_29 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_29)
				{
					goto IL_0116;
				}
			}

IL_00d7:
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_31 = V_2;
				__this->set_U3CU3Eu__1_4(L_31);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_32 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_32, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_mBF5EBDF3B25F15CD72748576E5CC4A75B7EC217D_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1CC, FINALLY_017f);
			}

IL_00fa:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_33 = __this->get_U3CU3Eu__1_4();
				V_2 = L_33;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_34 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
			}

IL_0116:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			}

IL_011d:
			{
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_36 = __this->get_timer_3();
				NullCheck(L_36);
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_37;
				L_37 = TimerAwaitable_GetAwaiter_m6D562A90B17F018BCEB0E9AA473267C162DB6DB1(L_36, /*hidden argument*/NULL);
				V_4 = L_37;
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_38 = V_4;
				NullCheck(L_38);
				bool L_39;
				L_39 = TimerAwaitable_get_IsCompleted_m462AF2D5BE5A39A026C8F0E1F957A88B6A868681(L_38, /*hidden argument*/NULL);
				if (L_39)
				{
					goto IL_0171;
				}
			}

IL_0133:
			{
				int32_t L_40 = 2;
				V_0 = L_40;
				__this->set_U3CU3E1__state_0(L_40);
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_41 = V_4;
				__this->set_U3CU3Eu__2_6(L_41);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_42 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_m13458FE555A87EB68592507526487171109A5517((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_42, (TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 **)(&V_4), (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_TisU3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2_m13458FE555A87EB68592507526487171109A5517_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1CC, FINALLY_017f);
			}

IL_0154:
			{
				RuntimeObject * L_43 = __this->get_U3CU3Eu__2_6();
				V_4 = ((TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 *)CastclassClass((RuntimeObject*)L_43, TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__2_6(NULL);
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
			}

IL_0171:
			{
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_45 = V_4;
				NullCheck(L_45);
				bool L_46;
				L_46 = TimerAwaitable_GetResult_mC8101EE4F490D0A866257D8C6AE1F8170F5B67F3(L_45, /*hidden argument*/NULL);
				if (L_46)
				{
					goto IL_00c2;
				}
			}

IL_017d:
			{
				IL2CPP_LEAVE(0x197, FINALLY_017f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_017f;
		}

FINALLY_017f:
		{ // begin finally (depth: 2)
			{
				int32_t L_47 = V_0;
				if ((((int32_t)L_47) >= ((int32_t)0)))
				{
					goto IL_0196;
				}
			}

IL_0183:
			{
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_48 = __this->get_U3CU3E7__wrap1_5();
				if (!L_48)
				{
					goto IL_0196;
				}
			}

IL_018b:
			{
				TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 * L_49 = __this->get_U3CU3E7__wrap1_5();
				NullCheck(L_49);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_49);
			}

IL_0196:
			{
				IL2CPP_END_FINALLY(383)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(383)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1CC, IL_01cc)
			IL2CPP_JUMP_TBL(0x197, IL_0197)
		}

IL_0197:
		{
			__this->set_U3CU3E7__wrap1_5((TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0 *)NULL);
			goto IL_01b9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a0;
		}
		throw e;
	}

CATCH_01a0:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_50 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_51 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_50, L_51, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01cc;
	} // end catch (depth: 1)

IL_01b9:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_52 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_52, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTimerLoopU3Ed__40_MoveNext_m0EF18066C3DEEB7DCAE4F2BD90FB7B535B0A29F5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * _thisAdjusted = reinterpret_cast<U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *>(__this + _offset);
	U3CTimerLoopU3Ed__40_MoveNext_m0EF18066C3DEEB7DCAE4F2BD90FB7B535B0A29F5(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ConnectionState/<TimerLoop>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerLoopU3Ed__40_SetStateMachine_mEF6E4E8CB12DE8B99523F4908FE6008A07FEDEA2 (U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTimerLoopU3Ed__40_SetStateMachine_mEF6E4E8CB12DE8B99523F4908FE6008A07FEDEA2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 * _thisAdjusted = reinterpret_cast<U3CTimerLoopU3Ed__40_t347DD751CF8121B4B948D08210B290B3C3004DF2 *>(__this + _offset);
	U3CTimerLoopU3Ed__40_SetStateMachine_mEF6E4E8CB12DE8B99523F4908FE6008A07FEDEA2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDC321C028D8C34C3F841DD9A909B25DF000697FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * L_0 = (U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 *)il2cpp_codegen_object_new(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0943EB7C7DF1ABCCA0A1CE2CC83B5F6C976395DB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0943EB7C7DF1ABCCA0A1CE2CC83B5F6C976395DB (U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::<IssuingInvocation>b__83_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CIssuingInvocationU3Eb__83_0_m0B5A46E60539FBDED597FA333D9EF303AA0302E2 (U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		RuntimeObject * L_0 = ___a0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_0006:
	{
		RuntimeObject * L_1 = ___a0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_2);
		G_B3_0 = L_3;
	}

IL_0011:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001a;
		}
	}
	{
		G_B5_0 = _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_001a:
	{
		return G_B5_0;
	}
}
// System.String Microsoft.AspNetCore.SignalR.Client.HubConnection/Log/<>c::<ReceivedInvocation>b__87_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CReceivedInvocationU3Eb__87_0_m98CC487DC9C50FE949A2CC79B14FF145D9DAA49B (U3CU3Ec_t5556CEE2F7DB14D8F869970E2D47F6409C619C35 * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		RuntimeObject * L_0 = ___a0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0011;
	}

IL_0006:
	{
		RuntimeObject * L_1 = ___a0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_2);
		G_B3_0 = L_3;
	}

IL_0011:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001a;
		}
	}
	{
		G_B5_0 = _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_001a:
	{
		return G_B5_0;
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
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8 (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m8503972C8585F6650C1089D74236B2E56B6A440F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4A759D3E59422E6F9BC1A99B0B7E0A9060C4A2A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral568B62B607C525710B68A7572FD973E8682EB729);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * V_1 = NULL;
	ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005f;
			}
		}

IL_0011:
		{
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_3 = V_1;
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = __this->get_token_3();
			String_t* L_5 = __this->get_methodName_4();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = ReconnectingConnectionState_WaitConnectionLockAsync_m9E0051BDE0C2F8CCA907FD182A4A78B21FC51899(L_3, L_4, L_5, _stringLiteral568B62B607C525710B68A7572FD973E8682EB729, ((int32_t)1975), /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_007b;
			}
		}

IL_003c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_3;
			__this->set_U3CU3Eu__1_5(L_10);
			AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m8503972C8585F6650C1089D74236B2E56B6A440F((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE_m8503972C8585F6650C1089D74236B2E56B6A440F_RuntimeMethod_var);
			goto IL_00fe;
		}

IL_005f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_5();
			V_3 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_007b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_15 = V_1;
			NullCheck(L_15);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_16;
			L_16 = ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0097;
			}
		}

IL_008a:
		{
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_17 = V_1;
			NullCheck(L_17);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_18;
			L_18 = ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			bool L_19;
			L_19 = ConnectionState_get_Stopping_m08A498268999079438C45F5E04D46D05E1F27778(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_00c8;
			}
		}

IL_0097:
		{
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_20 = V_1;
			String_t* L_21 = __this->get_methodName_4();
			NullCheck(L_20);
			ReconnectingConnectionState_ReleaseConnectionLock_m7B15219F39B51C879030B7F5D11983C872D1D7FC(L_20, L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral568B62B607C525710B68A7572FD973E8682EB729)), ((int32_t)1979), /*hidden argument*/NULL);
			String_t* L_22 = __this->get_methodName_4();
			String_t* L_23;
			L_23 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC6CD3D4FA8833ECB4B6C3F31E10E93BB0578750)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FE169EE2CA8D3255D94D7C35B3CF3FA226F59CE)), /*hidden argument*/NULL);
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_24 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_24, L_23, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8_RuntimeMethod_var)));
		}

IL_00c8:
		{
			ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * L_25 = V_1;
			NullCheck(L_25);
			ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_26;
			L_26 = ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline(L_25, /*hidden argument*/NULL);
			V_2 = L_26;
			goto IL_00ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d1;
		}
		throw e;
	}

CATCH_00d1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mAD88487D21D32FD01079EA42FEAF7D846BC97D05((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_27, L_28, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mAD88487D21D32FD01079EA42FEAF7D846BC97D05_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fe;
	} // end catch (depth: 1)

IL_00ea:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_30 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4A759D3E59422E6F9BC1A99B0B7E0A9060C4A2A8((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_29, L_30, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m4A759D3E59422E6F9BC1A99B0B7E0A9060C4A2A8_RuntimeMethod_var);
	}

IL_00fe:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * _thisAdjusted = reinterpret_cast<U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *>(__this + _offset);
	U3CWaitForActiveConnectionAsyncU3Ed__25_MoveNext_m63E3A8313BD144A75612D0ECF27CED4E97A442B8(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.HubConnection/ReconnectingConnectionState/<WaitForActiveConnectionAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForActiveConnectionAsyncU3Ed__25_SetStateMachine_mCA717D1D426AFD8001DDB064E468EBB83C02C9D9 (U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mA97741BD9AA0862F3182A7C9A36A7D537DDC632B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mA97741BD9AA0862F3182A7C9A36A7D537DDC632B((AsyncTaskMethodBuilder_1_t716B6679B52309CCCC839477392ECB73824F6735 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mA97741BD9AA0862F3182A7C9A36A7D537DDC632B_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForActiveConnectionAsyncU3Ed__25_SetStateMachine_mCA717D1D426AFD8001DDB064E468EBB83C02C9D9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE * _thisAdjusted = reinterpret_cast<U3CWaitForActiveConnectionAsyncU3Ed__25_t4B088B7AADED084D175DB6A4E16C64151225E8EE *>(__this + _offset);
	U3CWaitForActiveConnectionAsyncU3Ed__25_SetStateMachine_mCA717D1D426AFD8001DDB064E468EBB83C02C9D9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamItemU3Ed__6_MoveNext_mA7928C466260DEDF8828DDE91DB401F28D4F4DBC (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * V_1 = NULL;
	bool V_2 = false;
	ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0066;
				}
			}

IL_0014:
			{
				goto IL_008f;
			}

IL_0016:
			{
				Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * L_4 = V_1;
				NullCheck(L_4);
				Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_5 = L_4->get__channel_6();
				NullCheck(L_5);
				ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_6;
				L_6 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_5, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
				il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_7 = V_4;
				NullCheck(L_6);
				ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_8;
				L_8 = VirtFuncInvoker1< ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC , CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(6 /* System.Threading.Tasks.ValueTask`1<System.Boolean> System.Threading.Channels.ChannelWriter`1<System.Object>::WaitToWriteAsync(System.Threading.CancellationToken) */, L_6, L_7);
				V_5 = L_8;
				ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  L_9;
				L_9 = ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_inline((ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)(&V_5), /*hidden argument*/ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_inline((ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *)(&V_3), /*hidden argument*/ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0082;
				}
			}

IL_0043:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  L_12 = V_3;
				__this->set_U3CU3Eu__1_4(L_12);
				AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_13, (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *)(&V_3), (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *)__this, /*hidden argument*/AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA414361D8DD72C96FCA3A7424DB4A6EEB40256AD_RuntimeMethod_var);
				goto IL_00f4;
			}

IL_0066:
			{
				ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  L_14 = __this->get_U3CU3Eu__1_4();
				V_3 = L_14;
				ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * L_15 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_15, sizeof(ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_0082:
			{
				bool L_17;
				L_17 = ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_inline((ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D *)(&V_3), /*hidden argument*/ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_008f;
				}
			}

IL_008b:
			{
				V_2 = (bool)0;
				goto IL_00e0;
			}

IL_008f:
			{
				Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * L_18 = V_1;
				NullCheck(L_18);
				Channel_1_t50428A98313010C432711327973DBF3B359AC03A * L_19 = L_18->get__channel_6();
				NullCheck(L_19);
				ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_20;
				L_20 = Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_inline(L_19, /*hidden argument*/Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_RuntimeMethod_var);
				RuntimeObject * L_21 = __this->get_item_3();
				NullCheck(L_20);
				bool L_22;
				L_22 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(5 /* System.Boolean System.Threading.Channels.ChannelWriter`1<System.Object>::TryWrite(!0) */, L_20, L_21);
				if (!L_22)
				{
					goto IL_0016;
				}
			}

IL_00aa:
			{
				goto IL_00c3;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ac;
			}
			throw e;
		}

CATCH_00ac:
		{ // begin catch(System.Exception)
			V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * L_23 = V_1;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline(L_23, /*hidden argument*/NULL);
			Streaming_t799B3F7CD7350548CAAE08A50923C046E17176F2 * L_25 = V_1;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline(L_25, /*hidden argument*/NULL);
			Exception_t * L_27 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t2C52F601C354B21EF5B124BF3A6A5471F92990DD_il2cpp_TypeInfo_var)));
			Log_ErrorWritingStreamItem_m9ACCE86D9CC7D4D4F13A7BB22C0910662E42F8FF(L_24, L_26, L_27, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c3;
		} // end catch (depth: 2)

IL_00c3:
		{
			V_2 = (bool)1;
			goto IL_00e0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c7;
		}
		throw e;
	}

CATCH_00c7:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_7;
		AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_28, L_29, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetException_mA4E5C98D7895A51C5D431ACB9D1FD867C7E3A53D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f4;
	} // end catch (depth: 1)

IL_00e0:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_31 = V_2;
		AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_30, L_31, /*hidden argument*/AsyncValueTaskMethodBuilder_1_SetResult_m99750046ED6080D33349BD76B2D752AD947E24CF_RuntimeMethod_var);
	}

IL_00f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamItemU3Ed__6_MoveNext_mA7928C466260DEDF8828DDE91DB401F28D4F4DBC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * _thisAdjusted = reinterpret_cast<U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *>(__this + _offset);
	U3CStreamItemU3Ed__6_MoveNext_mA7928C466260DEDF8828DDE91DB401F28D4F4DBC(_thisAdjusted, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Client.Internal.InvocationRequest/Streaming/<StreamItem>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamItemU3Ed__6_SetStateMachine_mA4AB0A429801D54333661D2F8F6ECB77A2CE4A17 (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968((AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 *)L_0, L_1, /*hidden argument*/AsyncValueTaskMethodBuilder_1_SetStateMachine_m5BB911A95A3E9A6D5D0C5070A49CC249C1B98968_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamItemU3Ed__6_SetStateMachine_mA4AB0A429801D54333661D2F8F6ECB77A2CE4A17_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * _thisAdjusted = reinterpret_cast<U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *>(__this + _offset);
	U3CStreamItemU3Ed__6_SetStateMachine_mA4AB0A429801D54333661D2F8F6ECB77A2CE4A17(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_StopCts_m24A7DD2C8D17EAC78AB5BD779CEE59019524CC4E_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___value0, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = ___value0;
		__this->set_U3CStopCtsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_ReconnectTask_m2E8B26DBFDF08FE563CAEDE68EC42E1A2A48D689_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___value0, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___value0;
		__this->set_U3CReconnectTaskU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReconnectingConnectionState_get_OverallState_mF946BBEACB1A82D5BBE5FC00CA755A8C9AEF200D_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COverallStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReconnectingConnectionState_set_OverallState_m4676CCA3925365E1794213D9BA6B96FEEC235CF8_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COverallStateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvocationRequest_get_Logger_mED08ADC93A81386712C1B45F2B272169B9C38964_inline (InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoggerU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvocationRequest_get_InvocationId_mD29A5BE40487D8A635EC85B58E9518CC4EF34FBF_inline (InvocationRequest_t5A8E0C14BE2BE59CF3DBCB5BC864194EFF7D413A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CInvocationIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CResultU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * ReconnectingConnectionState_get_CurrentConnectionStateUnsynchronized_m471F1F50049EC79AF54D41C36B34307552CECEC9_inline (ReconnectingConnectionState_t48CC1EDB622D3A085BC0FE9EFB21610176E1BE55 * __this, const RuntimeMethod* method)
{
	{
		ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * L_0 = __this->get_U3CCurrentConnectionStateUnsynchronizedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ConnectionState_get_Connection_m42F14B87BC8BF9B83DC13ABCE20792C21BD0322E_inline (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method)
{
	{
		ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_0 = __this->get_U3CConnectionU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionState_get_ReceiveTask_mF8A50B1B00603ADA6D69F6CABBA84A83AFFF8B13_inline (ConnectionState_tB5D5D278E6FFAE565260BDCDC5AA1BAD0C2DBCF1 * __this, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = __this->get_U3CReceiveTaskU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mD19C65F8BCFEE47B84C13EE187BD7BFEA4B51895_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, bool ___result0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___result0;
		__this->set__result_2(L_0);
		__this->set__obj_1(NULL);
		__this->set__continueOnCapturedContext_4((bool)1);
		__this->set__token_3((int16_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * Channel_2_get_Reader_m5236BB256239A04FA8995EC6B3E4CCC7C84BC18A_gshared_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method)
{
	{
		ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD * L_0 = (ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD *)__this->get_U3CReaderU3Ek__BackingField_0();
		return (ChannelReader_1_tAF27991DA90447D790DF1A89F24AC6F755EE58BD *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * Channel_2_get_Writer_m7FC9642C5FBEFD791B821D6FB4614546C739B782_gshared_inline (Channel_2_t88C9156857E3BDBCA1C8CA6A13D9E2EE8FAAB012 * __this, const RuntimeMethod* method)
{
	{
		ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E * L_0 = (ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E *)__this->get_U3CWriterU3Ek__BackingField_1();
		return (ChannelWriter_1_tB55F7681EED73165D3D5C719A38ABC98FB854A3E *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mA1140E301BF116A6D214E1B4F08A1CA83834009B_gshared_inline (AsyncValueTaskMethodBuilder_1_t35ECEA7511052E56B9E95D4EE8C46227753A7958 * __this, U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)__this->get_address_of__methodBuilder_0();
		U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 * L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_Start_TisU3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697_mDB21B98292003FA25BF87680BF6E0C1AAC6CB378((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, (U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *)(U3CStreamItemU3Ed__6_tB7083F13834BF6D4F17D9C596BFA0F9D785FD697 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  ValueTask_1_GetAwaiter_m51C379DA6FC75EE8532BD1FE3DC7F43D3847BBA4_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  L_0 = (*(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)__this);
		ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueTaskAwaiter_1__ctor_m426403C7CCB38EB72AFEEF0A616093C0A427A321_inline((&L_1), (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		return (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m45BC9311E8B0D2E6E9A84C806571C165AD87B26A_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * L_0 = (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)__this->get_address_of__value_0();
		bool L_1;
		L_1 = ValueTask_1_get_IsCompleted_mCA87991E121263EA60685B337590A5B3C11C2504_inline((ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (bool)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTaskAwaiter_1_GetResult_mB3859E1EB1ABA86C9A62B8954E5BA60F7D250785_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * L_0 = (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)__this->get_address_of__value_0();
		FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  L_1;
		L_1 = ValueTask_1_get_Result_m580274E8A0AE7A09A2315DBBD5B1AED4F6089659_inline((ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)(ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  ValueTask_1_GetAwaiter_mB8F6BD3974AA8D4FFD40DCBEA9717C7CD4196870_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_0 = (*(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)__this);
		ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueTaskAwaiter_1__ctor_m6B7607EA893922DC28684336B8DA80B680E54590_inline((&L_1), (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		return (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m20ED0191986E3F0361B571343FE316BC038EB93F_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * L_0 = (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)__this->get_address_of__value_0();
		bool L_1;
		L_1 = ValueTask_1_get_IsCompleted_m1F05676C21E143D87245F9432AE73E5E2D64DB41_inline((ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (bool)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_GetResult_m5BA9D3A41F39A626F875D0F7B7BEB3A80643571C_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, const RuntimeMethod* method)
{
	{
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * L_0 = (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)__this->get_address_of__value_0();
		bool L_1;
		L_1 = ValueTask_1_get_Result_m747E1154CBC296CDE24AEE4E1E36F7635E6C1DA4_inline((ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m426403C7CCB38EB72AFEEF0A616093C0A427A321_gshared_inline (ValueTaskAwaiter_1_t674DDA785FB62533788960DEC8C01748D22135CB * __this, ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_mCA87991E121263EA60685B337590A5B3C11C2504_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__obj_1();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject * L_2 = V_0;
		Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * L_3 = (Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)((Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		V_1 = (Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * L_4 = V_1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_4, /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int16_t L_8 = (int16_t)__this->get__token_3();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource`1<System.IO.Pipelines.FlushResult>::GetStatus(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12), (RuntimeObject*)L_7, (int16_t)L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  ValueTask_1_get_Result_m580274E8A0AE7A09A2315DBBD5B1AED4F6089659_gshared_inline (ValueTask_1_t0F70592E8B402552A82DC20A5FC78D9342864845 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * V_1 = NULL;
	TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__obj_1();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  L_2 = (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E )__this->get__result_2();
		return (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E )L_2;
	}

IL_0011:
	{
		RuntimeObject * L_3 = V_0;
		Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * L_4 = (Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)((Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		V_1 = (Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)L_4;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 * L_5 = V_1;
		NullCheck((Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)L_5);
		TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C  L_6;
		L_6 = ((  TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C  (*) (Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)((Task_1_tEC7D9F5FAE649C47497EC77F36E3F8116E59DDB0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_2 = (TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C )L_6;
		FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  L_7;
		L_7 = TaskAwaiter_1_GetResult_mAC580EC6B667FF1FC7AD5F70B70E7CEDF6EBB163((TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C *)(TaskAwaiter_1_tFC3C09F58898E20A25906FE435DDE30396B3AC5C *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E )L_7;
	}

IL_002a:
	{
		RuntimeObject * L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int16_t L_10 = (int16_t)__this->get__token_3();
		NullCheck((RuntimeObject*)L_9);
		FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E  L_11;
		L_11 = InterfaceFuncInvoker1< FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E , int16_t >::Invoke(2 /* TResult System.Threading.Tasks.Sources.IValueTaskSource`1<System.IO.Pipelines.FlushResult>::GetResult(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12), (RuntimeObject*)L_9, (int16_t)L_10);
		return (FlushResult_t5C0B8B83787C9A0DA5B03C67B8338B4EFC1C054E )L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m6B7607EA893922DC28684336B8DA80B680E54590_gshared_inline (ValueTaskAwaiter_1_t72A36A48EE528CEC14DD9D7CB50B3C192763B81D * __this, ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m1F05676C21E143D87245F9432AE73E5E2D64DB41_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__obj_1();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject * L_2 = V_0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_3 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		V_1 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = V_1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_4, /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int16_t L_8 = (int16_t)__this->get__token_3();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource`1<System.Boolean>::GetStatus(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12), (RuntimeObject*)L_7, (int16_t)L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_Result_m747E1154CBC296CDE24AEE4E1E36F7635E6C1DA4_gshared_inline (ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * V_1 = NULL;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__obj_1();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = (bool)__this->get__result_2();
		return (bool)L_2;
	}

IL_0011:
	{
		RuntimeObject * L_3 = V_0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		V_1 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_5 = V_1;
		NullCheck((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_5);
		TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_6;
		L_6 = ((  TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_2 = (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C )L_6;
		bool L_7;
		L_7 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (bool)L_7;
	}

IL_002a:
	{
		RuntimeObject * L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int16_t L_10 = (int16_t)__this->get__token_3();
		NullCheck((RuntimeObject*)L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(2 /* TResult System.Threading.Tasks.Sources.IValueTaskSource`1<System.Boolean>::GetResult(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12), (RuntimeObject*)L_9, (int16_t)L_10);
		return (bool)L_11;
	}
}
