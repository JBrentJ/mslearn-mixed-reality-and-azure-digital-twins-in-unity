#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>
struct Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC;
// System.Linq.Expressions.Expression`1<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>
struct Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Func`1<System.Security.Claims.ClaimsPrincipal>
struct Func_1_tA93ACC8BBF346F42AE80112E1B0CA835F2A4842A;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity>
struct Func_2_tE647B9349C1F9E793630BD427177A353476049E5;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>
struct Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>
struct Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D;
// System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>
struct Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>
struct Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05;
// System.Func`3<System.IServiceProvider,System.Object[],System.Object>
struct Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IDictionary`2<System.Type,System.Object>
struct IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C;
// System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct IEnumerable_1_t7E8DB515B0D0A25D0CE0ED1F4A62C059A52AF2D8;
// System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>
struct IEnumerable_1_t7E44BD62994EE0DC5359AE696B1D970286C4E678;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct IList_1_tC74EB7F7AE540649FC8BB4EFBD5B1933C18E23DF;
// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>
struct IList_1_t3E57E7080210A84CD752D772C206FCA81CBBF2E3;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_t3970E0723A7C2FEA094E64207358CF587FA8010F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C;
// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>
struct List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51;
// System.Collections.Generic.List`1<System.Security.Claims.ClaimsIdentity>
struct List_1_tD5E1F39A43D8228F39D0314D1FE69545C97D6218;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>[]
struct Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6;
// System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>[]
struct Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7;
// Microsoft.AspNetCore.Connections.AddressInUseException
struct AddressInUseException_t93FD22D98D3607555FB64CB334FC1B8D3F834CFB;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Microsoft.AspNetCore.Connections.BaseConnectionContext
struct BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Security.Claims.ClaimsPrincipal
struct ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B;
// Microsoft.AspNetCore.Connections.ConnectionAbortedException
struct ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838;
// Microsoft.AspNetCore.Connections.ConnectionBuilder
struct ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24;
// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2;
// Microsoft.AspNetCore.Connections.ConnectionDelegate
struct ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7;
// Microsoft.AspNetCore.Connections.ConnectionHandler
struct ConnectionHandler_t81901AC437117B883BE827DBBE6F81912EFDEA13;
// Microsoft.AspNetCore.Connections.ConnectionItems
struct ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C;
// Microsoft.AspNetCore.Connections.ConnectionResetException
struct ConnectionResetException_tDDDB6379CA4447F32FAD810F49FCB565D1A5C7F3;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Microsoft.AspNetCore.Connections.DefaultConnectionContext
struct DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E;
// Microsoft.AspNetCore.Connections.FileHandleEndPoint
struct FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.AspNetCore.Connections.IConnectionBuilder
struct IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.Pipelines.IDuplexPipe
struct IDuplexPipe_tBEA5669B11F185DBDDADA2FB3B307340A9334428;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.AspNetCore.Http.Features.IFeatureCollection
struct IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288;
// Microsoft.AspNetCore.Connections.IMultiplexedConnectionBuilder
struct IMultiplexedConnectionBuilder_t9EF9B954E6F9961B9B33C8849B6F10DB043FFD75;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IServiceProvider
struct IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder
struct MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6;
// Microsoft.AspNetCore.Connections.MultiplexedConnectionContext
struct MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F;
// Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate
struct MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2;
// System.Linq.Expressions.NewExpression
struct NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Microsoft.Extensions.Internal.ObjectFactory
struct ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
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
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// Microsoft.AspNetCore.Connections.UriEndPoint
struct UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// Microsoft.Extensions.Internal.ActivatorUtilities/<>c
struct U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3;
// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c
struct U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2
struct U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C;
// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c
struct U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972;
// Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c
struct U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t437B917A87E8CE48F1B24FEAA03FC5C7B541698F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tF9756C4DD13B4C02DD134076E1C894C2DD6E6C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7E44BD62994EE0DC5359AE696B1D970286C4E678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7E8DB515B0D0A25D0CE0ED1F4A62C059A52AF2D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4B021380DA21910DD922C3D58A0F59A950EFEDAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t58BF5F6296CA3F3C359B4E467DE8F260BCE3CE3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC;
IL2CPP_EXTERN_C String_t* _stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16;
IL2CPP_EXTERN_C String_t* _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69;
IL2CPP_EXTERN_C String_t* _stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73;
IL2CPP_EXTERN_C String_t* _stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A;
IL2CPP_EXTERN_C String_t* _stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D;
IL2CPP_EXTERN_C String_t* _stringLiteral68FB1D2C9FFF0D771B9B705E90F8A5891EA88BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_CreateInstance_m570566E0C0994F642B2266D72EDA34F3EA0B5534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_FindApplicableConstructor_m43AF000092E1DCDD08688470FB723A11A50F98BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_m30479D8D95F03E4CD4D5EF6CC41201490B6E284F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetService_mCC928F4B18DEDDF52CECE36DDAF46B5252530C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_TryFindMatchingConstructor_mF2DB2252889AF435E68360F5D29FC9457D6DAA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisFunc_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_m959123105110D5BA32F2DC3D51C94FBA42A61042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisFunc_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520_m674C147AD7DEDD8EDDAFCCBE10E4B9CD6D34A651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileHandleEndPoint__ctor_m1F0EF8522B9FF79304644B7A2F958CC455C4F69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m4917BDFF83239AAABF22298F381E7A45184527A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m65CA327368C0E5982EB583154F548F61CE7B86C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m6AEC7BB8EC565CFA7E6FEE98F9F996BCE6FECFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m8DDCB78497A7E1EE04230D626ED439C085AE1670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Get_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mD03523328411BA8B100580466571E27E596E02C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionEndPointFeature_t0E5D580DFAE930170C7ACF21ADC70ECEFF90E107_m01E36A7D0640911969B2514DCB2AC227AC0A75DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionIdFeature_tB07F93E9C12EEF872B7A5E25B5E7A1F8CA8E1908_m41B1DF8D86DEEBDA2EB816D504CA85B4CDCBB430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionItemsFeature_t162CF166717C05122DFC7AB44F47D863EA3B7FE5_m426F461948DB177CF9DA8C4B909B2259300FBF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mE0C2D75244804405D2A506AB131E9BDAB0120E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionTransportFeature_tF27D1E585AA0B068D540510EABACBB9297066FA7_m517FC3ECC11A0A766CD20F75F798BC0175E8A9F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionUserFeature_t0057F34A957B503D713EE910B15B5D9D34771082_mE9CCB87984DB267B675505DE292148DB22C4E8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CFEFDDC9F8C70706DA2D4D513BB2F0E524DB12C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m79D7E9F994574361338C782333C1A1A8A4CF5894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAbortU3Eb__39_0_mAAA2AC4C8688245665AD92D28CC707DFA5437C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__6_0_m039E767683C38AE4357786FDAAA4B02A82DF91AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__6_0_mF2DF71165AF8A93AD0E82A28D3D8330011E721FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_m685969A7DE96BD09071A8B64DD70446CF50F6CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m910D70DF77966966E08847208869DD823F9A28AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m18FC0651CE8BB29AEFF726F8C1C5C92DC2D84174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m38B8C8FDECAD6EB3080298B8906D67811F42DE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m6F6830219F0A28440A81A194FE2A8ACFB456901C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriEndPoint__ctor_m197D73686B1F94D4DDA33CF3D14157AA25A86236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;;
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com;
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com;;
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke;
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke;;

struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1DE538AEE98979B7FA1192A71F2F5548F2244667 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C, ____items_1)); }
	inline Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* get__items_1() const { return ____items_1; }
	inline Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C_StaticFields, ____emptyArray_5)); }
	inline Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Func_2U5BU5D_t95B49595F6434428BF79360DCBBC4642E48BAFB6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>
struct List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51, ____items_1)); }
	inline Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* get__items_1() const { return ____items_1; }
	inline Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51_StaticFields, ____emptyArray_5)); }
	inline Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Func_2U5BU5D_t538F4DDE7C08CC7A22663384989E0D6233AFF766* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Microsoft.Extensions.Internal.ActivatorUtilities
struct ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B  : public RuntimeObject
{
public:

public:
};

struct ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_StaticFields
{
public:
	// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetServiceInfo
	MethodInfo_t * ___GetServiceInfo_0;

public:
	inline static int32_t get_offset_of_GetServiceInfo_0() { return static_cast<int32_t>(offsetof(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_StaticFields, ___GetServiceInfo_0)); }
	inline MethodInfo_t * get_GetServiceInfo_0() const { return ___GetServiceInfo_0; }
	inline MethodInfo_t ** get_address_of_GetServiceInfo_0() { return &___GetServiceInfo_0; }
	inline void set_GetServiceInfo_0(MethodInfo_t * value)
	{
		___GetServiceInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetServiceInfo_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Security.Claims.ClaimsPrincipal
struct ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B  : public RuntimeObject
{
public:
	// System.String System.Security.Claims.ClaimsPrincipal::m_version
	String_t* ___m_version_0;
	// System.String System.Security.Claims.ClaimsPrincipal::m_serializedClaimsIdentities
	String_t* ___m_serializedClaimsIdentities_1;
	// System.Collections.Generic.List`1<System.Security.Claims.ClaimsIdentity> System.Security.Claims.ClaimsPrincipal::m_identities
	List_1_tD5E1F39A43D8228F39D0314D1FE69545C97D6218 * ___m_identities_2;

public:
	inline static int32_t get_offset_of_m_version_0() { return static_cast<int32_t>(offsetof(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B, ___m_version_0)); }
	inline String_t* get_m_version_0() const { return ___m_version_0; }
	inline String_t** get_address_of_m_version_0() { return &___m_version_0; }
	inline void set_m_version_0(String_t* value)
	{
		___m_version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_version_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedClaimsIdentities_1() { return static_cast<int32_t>(offsetof(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B, ___m_serializedClaimsIdentities_1)); }
	inline String_t* get_m_serializedClaimsIdentities_1() const { return ___m_serializedClaimsIdentities_1; }
	inline String_t** get_address_of_m_serializedClaimsIdentities_1() { return &___m_serializedClaimsIdentities_1; }
	inline void set_m_serializedClaimsIdentities_1(String_t* value)
	{
		___m_serializedClaimsIdentities_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedClaimsIdentities_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_identities_2() { return static_cast<int32_t>(offsetof(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B, ___m_identities_2)); }
	inline List_1_tD5E1F39A43D8228F39D0314D1FE69545C97D6218 * get_m_identities_2() const { return ___m_identities_2; }
	inline List_1_tD5E1F39A43D8228F39D0314D1FE69545C97D6218 ** get_address_of_m_identities_2() { return &___m_identities_2; }
	inline void set_m_identities_2(List_1_tD5E1F39A43D8228F39D0314D1FE69545C97D6218 * value)
	{
		___m_identities_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_identities_2), (void*)value);
	}
};

struct ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> System.Security.Claims.ClaimsPrincipal::s_identitySelector
	Func_2_tE647B9349C1F9E793630BD427177A353476049E5 * ___s_identitySelector_3;
	// System.Func`1<System.Security.Claims.ClaimsPrincipal> System.Security.Claims.ClaimsPrincipal::s_principalSelector
	Func_1_tA93ACC8BBF346F42AE80112E1B0CA835F2A4842A * ___s_principalSelector_4;

public:
	inline static int32_t get_offset_of_s_identitySelector_3() { return static_cast<int32_t>(offsetof(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B_StaticFields, ___s_identitySelector_3)); }
	inline Func_2_tE647B9349C1F9E793630BD427177A353476049E5 * get_s_identitySelector_3() const { return ___s_identitySelector_3; }
	inline Func_2_tE647B9349C1F9E793630BD427177A353476049E5 ** get_address_of_s_identitySelector_3() { return &___s_identitySelector_3; }
	inline void set_s_identitySelector_3(Func_2_tE647B9349C1F9E793630BD427177A353476049E5 * value)
	{
		___s_identitySelector_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_identitySelector_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_principalSelector_4() { return static_cast<int32_t>(offsetof(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B_StaticFields, ___s_principalSelector_4)); }
	inline Func_1_tA93ACC8BBF346F42AE80112E1B0CA835F2A4842A * get_s_principalSelector_4() const { return ___s_principalSelector_4; }
	inline Func_1_tA93ACC8BBF346F42AE80112E1B0CA835F2A4842A ** get_address_of_s_principalSelector_4() { return &___s_principalSelector_4; }
	inline void set_s_principalSelector_4(Func_1_tA93ACC8BBF346F42AE80112E1B0CA835F2A4842A * value)
	{
		___s_principalSelector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_principalSelector_4), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilder
struct ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>> Microsoft.AspNetCore.Connections.ConnectionBuilder::_components
	RuntimeObject* ____components_0;
	// System.IServiceProvider Microsoft.AspNetCore.Connections.ConnectionBuilder::<ApplicationServices>k__BackingField
	RuntimeObject* ___U3CApplicationServicesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__components_0() { return static_cast<int32_t>(offsetof(ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24, ____components_0)); }
	inline RuntimeObject* get__components_0() const { return ____components_0; }
	inline RuntimeObject** get_address_of__components_0() { return &____components_0; }
	inline void set__components_0(RuntimeObject* value)
	{
		____components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____components_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationServicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24, ___U3CApplicationServicesU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CApplicationServicesU3Ek__BackingField_1() const { return ___U3CApplicationServicesU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CApplicationServicesU3Ek__BackingField_1() { return &___U3CApplicationServicesU3Ek__BackingField_1; }
	inline void set_U3CApplicationServicesU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CApplicationServicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationServicesU3Ek__BackingField_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions
struct ConnectionBuilderExtensions_t0BFF6A5ECEDBA7C1C58EB7A16C0461593BFBFBF8  : public RuntimeObject
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionHandler
struct ConnectionHandler_t81901AC437117B883BE827DBBE6F81912EFDEA13  : public RuntimeObject
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionItems
struct ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C, ___U3CItemsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CItemsU3Ek__BackingField_0() const { return ___U3CItemsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CItemsU3Ek__BackingField_0() { return &___U3CItemsU3Ek__BackingField_0; }
	inline void set_U3CItemsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CItemsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_0), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder
struct MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>> Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::_components
	RuntimeObject* ____components_0;
	// System.IServiceProvider Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::<ApplicationServices>k__BackingField
	RuntimeObject* ___U3CApplicationServicesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__components_0() { return static_cast<int32_t>(offsetof(MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6, ____components_0)); }
	inline RuntimeObject* get__components_0() const { return ____components_0; }
	inline RuntimeObject** get_address_of__components_0() { return &____components_0; }
	inline void set__components_0(RuntimeObject* value)
	{
		____components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____components_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationServicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6, ___U3CApplicationServicesU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CApplicationServicesU3Ek__BackingField_1() const { return ___U3CApplicationServicesU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CApplicationServicesU3Ek__BackingField_1() { return &___U3CApplicationServicesU3Ek__BackingField_1; }
	inline void set_U3CApplicationServicesU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CApplicationServicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationServicesU3Ek__BackingField_1), (void*)value);
	}
};


// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6  : public RuntimeObject
{
public:

public:
};

struct ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_StaticFields
{
public:
	// System.Type Microsoft.Extensions.Internal.ParameterDefaultValue::_nullable
	Type_t * ____nullable_0;

public:
	inline static int32_t get_offset_of__nullable_0() { return static_cast<int32_t>(offsetof(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_StaticFields, ____nullable_0)); }
	inline Type_t * get__nullable_0() const { return ____nullable_0; }
	inline Type_t ** get_address_of__nullable_0() { return &____nullable_0; }
	inline void set__nullable_0(Type_t * value)
	{
		____nullable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullable_0), (void*)value);
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

// Microsoft.Extensions.Internal.ActivatorUtilities/<>c
struct U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_StaticFields
{
public:
	// Microsoft.Extensions.Internal.ActivatorUtilities/<>c Microsoft.Extensions.Internal.ActivatorUtilities/<>c::<>9
	U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c
struct U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields
{
public:
	// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<>9
	U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * ___U3CU3E9_0;
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<>9__6_0
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields, ___U3CU3E9__6_0_1)); }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6  : public RuntimeObject
{
public:
	// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task> Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::middleware
	Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * ___middleware_0;

public:
	inline static int32_t get_offset_of_middleware_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6, ___middleware_0)); }
	inline Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * get_middleware_0() const { return ___middleware_0; }
	inline Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 ** get_address_of_middleware_0() { return &___middleware_0; }
	inline void set_middleware_0(Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * value)
	{
		___middleware_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleware_0), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::next
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___next_0;
	// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0 Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A, ___next_0)); }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * get_next_0() const { return ___next_0; }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2
struct U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.Connections.ConnectionContext Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::context
	ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___context_0;
	// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1 Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4, ___context_0)); }
	inline ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * get_context_0() const { return ___context_0; }
	inline ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C  : public RuntimeObject
{
public:
	// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task> Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::middleware
	Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * ___middleware_0;
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<>9__1
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___U3CU3E9__1_1;

public:
	inline static int32_t get_offset_of_middleware_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C, ___middleware_0)); }
	inline Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * get_middleware_0() const { return ___middleware_0; }
	inline Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD ** get_address_of_middleware_0() { return &___middleware_0; }
	inline void set_middleware_0(Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * value)
	{
		___middleware_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleware_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C, ___U3CU3E9__1_1)); }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * get_U3CU3E9__1_1() const { return ___U3CU3E9__1_1; }
	inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 ** get_address_of_U3CU3E9__1_1() { return &___U3CU3E9__1_1; }
	inline void set_U3CU3E9__1_1(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * value)
	{
		___U3CU3E9__1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c
struct U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields
{
public:
	// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<>9
	U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * ___U3CU3E9_0;
	// System.Threading.WaitCallback Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<>9__39_0
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___U3CU3E9__39_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields, ___U3CU3E9__39_0_1)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_U3CU3E9__39_0_1() const { return ___U3CU3E9__39_0_1; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_U3CU3E9__39_0_1() { return &___U3CU3E9__39_0_1; }
	inline void set_U3CU3E9__39_0_1(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___U3CU3E9__39_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_1), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c
struct U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields
{
public:
	// Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::<>9
	U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * ___U3CU3E9_0;
	// Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::<>9__6_0
	MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields, ___U3CU3E9__6_0_1)); }
	inline MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CLeftU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CRightU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CLeftU3Ek__BackingField_4)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CLeftU3Ek__BackingField_4() const { return ___U3CLeftU3Ek__BackingField_4; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CLeftU3Ek__BackingField_4() { return &___U3CLeftU3Ek__BackingField_4; }
	inline void set_U3CLeftU3Ek__BackingField_4(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CLeftU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_4), (void*)value);
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

// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_3), (void*)value);
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Linq.Expressions.IndexExpression
struct IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t * ___U3CIndexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arguments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ___U3CObjectU3Ek__BackingField_4)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CObjectU3Ek__BackingField_4() const { return ___U3CObjectU3Ek__BackingField_4; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CObjectU3Ek__BackingField_4() { return &___U3CObjectU3Ek__BackingField_4; }
	inline void set_U3CObjectU3Ek__BackingField_4(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIndexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD, ___U3CIndexerU3Ek__BackingField_5)); }
	inline PropertyInfo_t * get_U3CIndexerU3Ek__BackingField_5() const { return ___U3CIndexerU3Ek__BackingField_5; }
	inline PropertyInfo_t ** get_address_of_U3CIndexerU3Ek__BackingField_5() { return &___U3CIndexerU3Ek__BackingField_5; }
	inline void set_U3CIndexerU3Ek__BackingField_5(PropertyInfo_t * value)
	{
		___U3CIndexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndexerU3Ek__BackingField_5), (void*)value);
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


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4, ___U3CMethodU3Ek__BackingField_3)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_3() const { return ___U3CMethodU3Ek__BackingField_3; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_3() { return &___U3CMethodU3Ek__BackingField_3; }
	inline void set_U3CMethodU3Ek__BackingField_3(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.NewExpression
struct NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::<Constructor>k__BackingField
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___U3CConstructorU3Ek__BackingField_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::<Members>k__BackingField
	ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991 * ___U3CMembersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arguments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConstructorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987, ___U3CConstructorU3Ek__BackingField_4)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_U3CConstructorU3Ek__BackingField_4() const { return ___U3CConstructorU3Ek__BackingField_4; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_U3CConstructorU3Ek__BackingField_4() { return &___U3CConstructorU3Ek__BackingField_4; }
	inline void set_U3CConstructorU3Ek__BackingField_4(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___U3CConstructorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConstructorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987, ___U3CMembersU3Ek__BackingField_5)); }
	inline ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991 * get_U3CMembersU3Ek__BackingField_5() const { return ___U3CMembersU3Ek__BackingField_5; }
	inline ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991 ** get_address_of_U3CMembersU3Ek__BackingField_5() { return &___U3CMembersU3Ek__BackingField_5; }
	inline void set_U3CMembersU3Ek__BackingField_5(ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991 * value)
	{
		___U3CMembersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMembersU3Ek__BackingField_5), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
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


// Microsoft.AspNetCore.Connections.UriEndPoint
struct UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::<Uri>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CUriU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CUriU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1, ___U3CUriU3Ek__BackingField_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CUriU3Ek__BackingField_0() const { return ___U3CUriU3Ek__BackingField_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CUriU3Ek__BackingField_0() { return &___U3CUriU3Ek__BackingField_0; }
	inline void set_U3CUriU3Ek__BackingField_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CUriU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUriU3Ek__BackingField_0), (void*)value);
	}
};


// System.Threading.Tasks.ValueTask
struct ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555 
{
public:
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject * ____obj_2;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;

public:
	inline static int32_t get_offset_of__obj_2() { return static_cast<int32_t>(offsetof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555, ____obj_2)); }
	inline RuntimeObject * get__obj_2() const { return ____obj_2; }
	inline RuntimeObject ** get_address_of__obj_2() { return &____obj_2; }
	inline void set__obj_2(RuntimeObject * value)
	{
		____obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_2), (void*)value);
	}

	inline static int32_t get_offset_of__token_3() { return static_cast<int32_t>(offsetof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555, ____token_3)); }
	inline int16_t get__token_3() const { return ____token_3; }
	inline int16_t* get_address_of__token_3() { return &____token_3; }
	inline void set__token_3(int16_t value)
	{
		____token_3 = value;
	}

	inline static int32_t get_offset_of__continueOnCapturedContext_4() { return static_cast<int32_t>(offsetof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555, ____continueOnCapturedContext_4)); }
	inline bool get__continueOnCapturedContext_4() const { return ____continueOnCapturedContext_4; }
	inline bool* get_address_of__continueOnCapturedContext_4() { return &____continueOnCapturedContext_4; }
	inline void set__continueOnCapturedContext_4(bool value)
	{
		____continueOnCapturedContext_4 = value;
	}
};

struct ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555_StaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_canceledTask_0;
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::<CompletedTask>k__BackingField
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CCompletedTaskU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_canceledTask_0() { return static_cast<int32_t>(offsetof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555_StaticFields, ___s_canceledTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_canceledTask_0() const { return ___s_canceledTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_canceledTask_0() { return &___s_canceledTask_0; }
	inline void set_s_canceledTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_canceledTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_canceledTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCompletedTaskU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555_StaticFields, ___U3CCompletedTaskU3Ek__BackingField_1)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CCompletedTaskU3Ek__BackingField_1() const { return ___U3CCompletedTaskU3Ek__BackingField_1; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CCompletedTaskU3Ek__BackingField_1() { return &___U3CCompletedTaskU3Ek__BackingField_1; }
	inline void set_U3CCompletedTaskU3Ek__BackingField_1(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CCompletedTaskU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCompletedTaskU3Ek__BackingField_1), (void*)value);
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


// Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B 
{
public:
	// System.Reflection.ConstructorInfo Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_constructor
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ____constructor_0;
	// System.Reflection.ParameterInfo[] Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_parameters
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ____parameters_1;
	// System.Object[] Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_parameterValues
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____parameterValues_2;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B, ____constructor_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get__constructor_0() const { return ____constructor_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__parameters_1() { return static_cast<int32_t>(offsetof(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B, ____parameters_1)); }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* get__parameters_1() const { return ____parameters_1; }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** get_address_of__parameters_1() { return &____parameters_1; }
	inline void set__parameters_1(ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* value)
	{
		____parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of__parameterValues_2() { return static_cast<int32_t>(offsetof(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B, ____parameterValues_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__parameterValues_2() const { return ____parameterValues_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__parameterValues_2() { return &____parameterValues_2; }
	inline void set__parameterValues_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____parameterValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterValues_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_pinvoke
{
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ____constructor_0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke** ____parameters_1;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____parameterValues_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_com
{
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ____constructor_0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com** ____parameters_1;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____parameterValues_2;
};

// System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>
struct Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
};


// System.Linq.Expressions.Expression`1<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>
struct Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
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


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
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

// System.Linq.Expressions.ExpressionType
struct ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E  : public RuntimeObject
{
public:
	// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Http.Features.FeatureCollection::_defaults
	RuntimeObject* ____defaults_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection::_features
	RuntimeObject* ____features_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.AspNetCore.Http.Features.FeatureCollection::_containerRevision
	int32_t ____containerRevision_3;

public:
	inline static int32_t get_offset_of__defaults_1() { return static_cast<int32_t>(offsetof(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E, ____defaults_1)); }
	inline RuntimeObject* get__defaults_1() const { return ____defaults_1; }
	inline RuntimeObject** get_address_of__defaults_1() { return &____defaults_1; }
	inline void set__defaults_1(RuntimeObject* value)
	{
		____defaults_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaults_1), (void*)value);
	}

	inline static int32_t get_offset_of__features_2() { return static_cast<int32_t>(offsetof(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E, ____features_2)); }
	inline RuntimeObject* get__features_2() const { return ____features_2; }
	inline RuntimeObject** get_address_of__features_2() { return &____features_2; }
	inline void set__features_2(RuntimeObject* value)
	{
		____features_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____features_2), (void*)value);
	}

	inline static int32_t get_offset_of__containerRevision_3() { return static_cast<int32_t>(offsetof(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E, ____containerRevision_3)); }
	inline int32_t get__containerRevision_3() const { return ____containerRevision_3; }
	inline int32_t* get_address_of__containerRevision_3() { return &____containerRevision_3; }
	inline void set__containerRevision_3(int32_t value)
	{
		____containerRevision_3 = value;
	}
};

struct FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_StaticFields
{
public:
	// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer Microsoft.AspNetCore.Http.Features.FeatureCollection::FeatureKeyComparer
	KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * ___FeatureKeyComparer_0;

public:
	inline static int32_t get_offset_of_FeatureKeyComparer_0() { return static_cast<int32_t>(offsetof(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_StaticFields, ___FeatureKeyComparer_0)); }
	inline KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * get_FeatureKeyComparer_0() const { return ___FeatureKeyComparer_0; }
	inline KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 ** get_address_of_FeatureKeyComparer_0() { return &___FeatureKeyComparer_0; }
	inline void set_FeatureKeyComparer_0(KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * value)
	{
		___FeatureKeyComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeatureKeyComparer_0), (void*)value);
	}
};


// Microsoft.AspNetCore.Connections.FileHandleType
struct FileHandleType_tB195AB324B8BA0C312143CEE2818D2C5A702275F 
{
public:
	// System.Int32 Microsoft.AspNetCore.Connections.FileHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileHandleType_tB195AB324B8BA0C312143CEE2818D2C5A702275F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// Microsoft.AspNetCore.Connections.TransferFormat
struct TransferFormat_t09E7B7EE8B69648FEF93C4C82F925D079CCD1F59 
{
public:
	// System.Int32 Microsoft.AspNetCore.Connections.TransferFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransferFormat_t09E7B7EE8B69648FEF93C4C82F925D079CCD1F59, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2  : public BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704
{
public:

public:
};


// Microsoft.AspNetCore.Connections.FileHandleEndPoint
struct FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.UInt64 Microsoft.AspNetCore.Connections.FileHandleEndPoint::<FileHandle>k__BackingField
	uint64_t ___U3CFileHandleU3Ek__BackingField_0;
	// Microsoft.AspNetCore.Connections.FileHandleType Microsoft.AspNetCore.Connections.FileHandleEndPoint::<FileHandleType>k__BackingField
	int32_t ___U3CFileHandleTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CFileHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720, ___U3CFileHandleU3Ek__BackingField_0)); }
	inline uint64_t get_U3CFileHandleU3Ek__BackingField_0() const { return ___U3CFileHandleU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CFileHandleU3Ek__BackingField_0() { return &___U3CFileHandleU3Ek__BackingField_0; }
	inline void set_U3CFileHandleU3Ek__BackingField_0(uint64_t value)
	{
		___U3CFileHandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFileHandleTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720, ___U3CFileHandleTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CFileHandleTypeU3Ek__BackingField_1() const { return ___U3CFileHandleTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFileHandleTypeU3Ek__BackingField_1() { return &___U3CFileHandleTypeU3Ek__BackingField_1; }
	inline void set_U3CFileHandleTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CFileHandleTypeU3Ek__BackingField_1 = value;
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

// Microsoft.AspNetCore.Connections.MultiplexedConnectionContext
struct MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F  : public BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704
{
public:

public:
};


// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
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


// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CNodeTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CNodeTypeU3Ek__BackingField_4() const { return ___U3CNodeTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNodeTypeU3Ek__BackingField_4() { return &___U3CNodeTypeU3Ek__BackingField_4; }
	inline void set_U3CNodeTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CNodeTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COperandU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3COperandU3Ek__BackingField_5)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3COperandU3Ek__BackingField_5() const { return ___U3COperandU3Ek__BackingField_5; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3COperandU3Ek__BackingField_5() { return &___U3COperandU3Ek__BackingField_5; }
	inline void set_U3COperandU3Ek__BackingField_5(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3COperandU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperandU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CMethodU3Ek__BackingField_6)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_6() const { return ___U3CMethodU3Ek__BackingField_6; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_6() { return &___U3CMethodU3Ek__BackingField_6; }
	inline void set_U3CMethodU3Ek__BackingField_6(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>
struct Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>
struct Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>
struct Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>
struct Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.IServiceProvider,System.Object[],System.Object>
struct Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionDelegate
struct ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AspNetCore.Connections.DefaultConnectionContext
struct DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9  : public ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2
{
public:
	// System.Threading.CancellationTokenSource Microsoft.AspNetCore.Connections.DefaultConnectionContext::_connectionClosedTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____connectionClosedTokenSource_3;
	// System.String Microsoft.AspNetCore.Connections.DefaultConnectionContext::<ConnectionId>k__BackingField
	String_t* ___U3CConnectionIdU3Ek__BackingField_4;
	// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Features>k__BackingField
	RuntimeObject* ___U3CFeaturesU3Ek__BackingField_5;
	// System.Security.Claims.ClaimsPrincipal Microsoft.AspNetCore.Connections.DefaultConnectionContext::<User>k__BackingField
	ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * ___U3CUserU3Ek__BackingField_6;
	// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_7;
	// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Application>k__BackingField
	RuntimeObject* ___U3CApplicationU3Ek__BackingField_8;
	// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Transport>k__BackingField
	RuntimeObject* ___U3CTransportU3Ek__BackingField_9;
	// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.DefaultConnectionContext::<ConnectionClosed>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CConnectionClosedU3Ek__BackingField_10;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::<LocalEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CLocalEndPointU3Ek__BackingField_11;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::<RemoteEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CRemoteEndPointU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__connectionClosedTokenSource_3() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ____connectionClosedTokenSource_3)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__connectionClosedTokenSource_3() const { return ____connectionClosedTokenSource_3; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__connectionClosedTokenSource_3() { return &____connectionClosedTokenSource_3; }
	inline void set__connectionClosedTokenSource_3(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____connectionClosedTokenSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionClosedTokenSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CConnectionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CConnectionIdU3Ek__BackingField_4() const { return ___U3CConnectionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CConnectionIdU3Ek__BackingField_4() { return &___U3CConnectionIdU3Ek__BackingField_4; }
	inline void set_U3CConnectionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CConnectionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFeaturesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CFeaturesU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CFeaturesU3Ek__BackingField_5() const { return ___U3CFeaturesU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CFeaturesU3Ek__BackingField_5() { return &___U3CFeaturesU3Ek__BackingField_5; }
	inline void set_U3CFeaturesU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CFeaturesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFeaturesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CUserU3Ek__BackingField_6)); }
	inline ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * get_U3CUserU3Ek__BackingField_6() const { return ___U3CUserU3Ek__BackingField_6; }
	inline ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B ** get_address_of_U3CUserU3Ek__BackingField_6() { return &___U3CUserU3Ek__BackingField_6; }
	inline void set_U3CUserU3Ek__BackingField_6(ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * value)
	{
		___U3CUserU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CItemsU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CItemsU3Ek__BackingField_7() const { return ___U3CItemsU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CItemsU3Ek__BackingField_7() { return &___U3CItemsU3Ek__BackingField_7; }
	inline void set_U3CItemsU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CItemsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CApplicationU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CApplicationU3Ek__BackingField_8() const { return ___U3CApplicationU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CApplicationU3Ek__BackingField_8() { return &___U3CApplicationU3Ek__BackingField_8; }
	inline void set_U3CApplicationU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CApplicationU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransportU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CTransportU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CTransportU3Ek__BackingField_9() const { return ___U3CTransportU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CTransportU3Ek__BackingField_9() { return &___U3CTransportU3Ek__BackingField_9; }
	inline void set_U3CTransportU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CTransportU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransportU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionClosedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CConnectionClosedU3Ek__BackingField_10)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CConnectionClosedU3Ek__BackingField_10() const { return ___U3CConnectionClosedU3Ek__BackingField_10; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CConnectionClosedU3Ek__BackingField_10() { return &___U3CConnectionClosedU3Ek__BackingField_10; }
	inline void set_U3CConnectionClosedU3Ek__BackingField_10(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CConnectionClosedU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CConnectionClosedU3Ek__BackingField_10))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CLocalEndPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CLocalEndPointU3Ek__BackingField_11)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CLocalEndPointU3Ek__BackingField_11() const { return ___U3CLocalEndPointU3Ek__BackingField_11; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CLocalEndPointU3Ek__BackingField_11() { return &___U3CLocalEndPointU3Ek__BackingField_11; }
	inline void set_U3CLocalEndPointU3Ek__BackingField_11(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CLocalEndPointU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalEndPointU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRemoteEndPointU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9, ___U3CRemoteEndPointU3Ek__BackingField_12)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CRemoteEndPointU3Ek__BackingField_12() const { return ___U3CRemoteEndPointU3Ek__BackingField_12; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CRemoteEndPointU3Ek__BackingField_12() { return &___U3CRemoteEndPointU3Ek__BackingField_12; }
	inline void set_U3CRemoteEndPointU3Ek__BackingField_12(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CRemoteEndPointU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRemoteEndPointU3Ek__BackingField_12), (void*)value);
	}
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate
struct MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2  : public MulticastDelegate_t
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


// Microsoft.Extensions.Internal.ObjectFactory
struct ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345  : public MulticastDelegate_t
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


// System.Reflection.TargetInvocationException
struct TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AspNetCore.Connections.AddressInUseException
struct AddressInUseException_t93FD22D98D3607555FB64CB334FC1B8D3F834CFB  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionAbortedException
struct ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838  : public OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB
{
public:

public:
};


// Microsoft.AspNetCore.Connections.ConnectionResetException
struct ConnectionResetException_tDDDB6379CA4447F32FAD810F49FCB565D1A5C7F3  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  m_Items[1];

public:
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * m_Items[1];

public:
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke(const ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7& unmarshaled, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_back(const ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke& marshaled, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7& unmarshaled);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_pinvoke_cleanup(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_com(const ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7& unmarshaled, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_com_back(const ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com& marshaled, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7& unmarshaled);
IL2CPP_EXTERN_C void ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshal_com_cleanup(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com& marshaled);

// System.Linq.Expressions.Expression`1<!!0> System.Linq.Expressions.Expression::Lambda<System.Object>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * Expression_Lambda_TisRuntimeObject_m8B95F68A6FD69373154FA2F090F6D56AA2DCF2A8_gshared (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body0, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ___parameters1, const RuntimeMethod* method);
// !0 System.Linq.Expressions.Expression`1<System.Object>::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Expression_1_Compile_m9B14FBFEA3D79974611C7869C9FF7ABDF3B0A9B0_gshared (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetMethodInfo<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ActivatorUtilities_GetMethodInfo_TisRuntimeObject_m64C1F36597F73D4E03953AD3759C6849B446B174_gshared (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___expr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_m68958F01A82CACAAC93F99216A03F10646CFAE4A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);

// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_m20AAFFE70C60119AA5DD3282E46F8E0A9C2C1D87 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_m1EFC0E96D62BAA46BCA563B6408AF4F73CE09E71 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m43AF000092E1DCDD08688470FB723A11A50F98BC (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333 (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression Microsoft.Extensions.Internal.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ActivatorUtilities_BuildFactoryExpression_m91AE7EF34B455E46414BA9B6404CCADAF23B4CEE (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* ___parameterMap1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___serviceProvider2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___factoryArgumentArray3, const RuntimeMethod* method);
// System.Linq.Expressions.Expression`1<!!0> System.Linq.Expressions.Expression::Lambda<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
inline Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body0, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ___parameters1, const RuntimeMethod* method)
{
	return ((  Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * (*) (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*, const RuntimeMethod*))Expression_Lambda_TisRuntimeObject_m8B95F68A6FD69373154FA2F090F6D56AA2DCF2A8_gshared)(___body0, ___parameters1, method);
}
// !0 System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>::Compile()
inline Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4 (Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * __this, const RuntimeMethod* method)
{
	return ((  Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * (*) (Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC *, const RuntimeMethod*))Expression_1_Compile_m9B14FBFEA3D79974611C7869C9FF7ABDF3B0A9B0_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Internal.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_m73F5CC30FB46C9701685A04DA24546AAFB4DDABB (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_CreateInstance_m570566E0C0994F642B2266D72EDA34F3EA0B5534 (RuntimeObject* ___provider0, Type_t * ___instanceType1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.ParameterDefaultValue::TryGetDefaultValue(System.Reflection.ParameterInfo,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30 (ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, RuntimeObject ** ___defaultValue1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Linq.Expressions.IndexExpression System.Linq.Expressions.Expression::ArrayAccess(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * Expression_ArrayAccess_m69590906EAB409F36EAF6AC90780061A034BFDF1 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___array0, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ___indexes1, const RuntimeMethod* method);
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * Expression_Constant_m014E12A7CCA8E2705E27CA97B85616EBE181F3FF (RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method);
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4 * Expression_Call_m8A6605235C5D165C397CE090BD478E10BD7EF47A (MethodInfo_t * ___method0, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ___arguments1, const RuntimeMethod* method);
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::Coalesce(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * Expression_Coalesce_mBC30867EA3BD5C14799ACFCABFC1B81D36D58B68 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___left0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___right1, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * Expression_Convert_m494826A3729B238263D95E7D7B0E236DE3B1CDA7 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, Type_t * ___type1, const RuntimeMethod* method);
// System.Linq.Expressions.NewExpression System.Linq.Expressions.Expression::New(System.Reflection.ConstructorInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987 * Expression_New_m2882BB14B028BB929C441981105893FBF99CA268 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ___arguments1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_mDD2397C974475E86D04F92E812CCFB83AE0BB95C (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_mF2DB2252889AF435E68360F5D29FC9457D6DAA60 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_m0B810FC865E53CB7007EC1726AC982197F2A9499 (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___constructorParameters0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap2, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___left0, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___right1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * MethodBase_GetMethodFromHandle_mFF986FE06E17C3D4E02D437DF6C87C62AAB7B59E (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  ___handle0, const RuntimeMethod* method);
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4 * Expression_Call_mC590C169ED2A0064A3B956FE928BE8E53F1F85F7 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___instance0, MethodInfo_t * ___method1, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ___arguments2, const RuntimeMethod* method);
// System.Linq.Expressions.Expression`1<!!0> System.Linq.Expressions.Expression::Lambda<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
inline Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 * Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body0, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ___parameters1, const RuntimeMethod* method)
{
	return ((  Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 * (*) (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*, const RuntimeMethod*))Expression_Lambda_TisRuntimeObject_m8B95F68A6FD69373154FA2F090F6D56AA2DCF2A8_gshared)(___body0, ___parameters1, method);
}
// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetMethodInfo<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>(System.Linq.Expressions.Expression`1<T>)
inline MethodInfo_t * ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_m30479D8D95F03E4CD4D5EF6CC41201490B6E284F (Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 * ___expr0, const RuntimeMethod* method)
{
	return ((  MethodInfo_t * (*) (Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 *, const RuntimeMethod*))ActivatorUtilities_GetMethodInfo_TisRuntimeObject_m64C1F36597F73D4E03953AD3759C6849B446B174_gshared)(___expr0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mFCEC19D4D47D2EEF18A2375CD7B36C354E587CE5 (ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.OperationCanceledException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_mC695DBC8DD0A75A7AFA1D6912B4A5037E6379753 (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.OperationCanceledException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m041600801C93993AAC54BBE29DDDCEC91A44D7FC (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::.ctor()
inline void List_1__ctor_m0CFEFDDC9F8C70706DA2D4D513BB2F0E524DB12C (List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionDelegate__ctor_mD63B361D6645332978EDC0A9F56490E5C550CF0C (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisFunc_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_m959123105110D5BA32F2DC3D51C94FBA42A61042 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_m68958F01A82CACAAC93F99216A03F10646CFAE4A_gshared)(___source0, method);
}
// !1 System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>::Invoke(!0)
inline ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * Func_2_Invoke_m65CA327368C0E5982EB583154F548F61CE7B86C7 (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * __this, ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___arg0, const RuntimeMethod* method)
{
	return ((  ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * (*) (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D *, ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mC518F0C236815BE832CA54AB4EC04E64FF38CA6C (U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5 (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mAAA0407ACA84C6D2EF55F6E99B5AD9CC804638B5 (U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext__ctor_mF3DDAA58A7EDE34ED53F94E2B25C7B075385E899 (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_m2EF3FD4C797F8274E1511B31D590D26ED217D89A (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_mFEC07CE23D86F5D78A18B38C98E1A327C648B6C4 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mAAF918EE142C62A04A8C75503B372CE84F198117 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext__ctor_m4B14BDDBE5DFA46C1AA0F1373B49200B95F816E7 (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_m453595D4C6D42BF103E912F1E6D96BECB4EEB982 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Application(System.IO.Pipelines.IDuplexPipe)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_m7FC22D469AA47F243A5A37CD7A0CCECE965A01F1_inline (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Dispose_m7040D247EFB6C234491C6450AAFFCA879E3ED070 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.BaseConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  BaseConnectionContext_DisposeAsync_m36A23D3B58647B2E40085D50371F7465EE7DB88B (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method);
// System.Void System.Net.EndPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29 (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>::.ctor()
inline void List_1__ctor_m79D7E9F994574361338C782333C1A1A8A4CF5894 (List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionDelegate__ctor_mA9D74826525EFD4A0BAF5635D843E91D44145F4A (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisFunc_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520_m674C147AD7DEDD8EDDAFCCBE10E4B9CD6D34A651 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_m68958F01A82CACAAC93F99216A03F10646CFAE4A_gshared)(___source0, method);
}
// !1 System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>::Invoke(!0)
inline MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * Func_2_Invoke_m6AEC7BB8EC565CFA7E6FEE98F9F996BCE6FECFB2 (Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * __this, MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * ___arg0, const RuntimeMethod* method)
{
	return ((  MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * (*) (Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 *, MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::get_Uri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * UriEndPoint_get_Uri_mBC7F5962D58B35A75B972DF188A88A02703C4BA5_inline (UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m18E92F24B1085082B1795F29E11B3EFF853868B1 (U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE49B009A8A339872AB7A8AD9EB3191487AD462FD (U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_mF8CE9929381169FFFB34ACC225052175E83BF003 (U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_2__ctor_m9316C2D8C689B714A14199CFD76A6F77A54B43B1 (U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562 (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// !2 System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>::Invoke(!0,!1)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_3_Invoke_m8DDCB78497A7E1EE04230D626ED439C085AE1670 (Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___arg10, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___arg21, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionDelegate_Invoke_m594C66A85788595E3F86069C939A530A2ED6D6F4 (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___connection0, const RuntimeMethod* method);
// !1 System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>::Invoke(!0)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_2_Invoke_m4917BDFF83239AAABF22298F381E7A45184527A7 (Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___arg0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE42729D84C28EAF78916B2A0BB9A218EE9A398A0 (U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC61E12508BC1CF5D27D2BE97CCB54E68EA3CA923 (U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * __this, const RuntimeMethod* method);
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
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_CreateInstance_m570566E0C0994F642B2266D72EDA34F3EA0B5534 (RuntimeObject* ___provider0, Type_t * ___instanceType1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_4 = NULL;
	ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (-1);
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B ));
		Type_t * L_0 = ___instanceType1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_3 = ___instanceType1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_002f:
		{
			RuntimeObject* L_7 = V_3;
			NullCheck(L_7);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_8;
			L_8 = InterfaceFuncInvoker0< ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var, L_7);
			V_4 = L_8;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_9 = V_4;
			NullCheck(L_9);
			bool L_10;
			L_10 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_009a;
			}
		}

IL_0040:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11 = V_4;
			NullCheck(L_11);
			bool L_12;
			L_12 = MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271(L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_009a;
			}
		}

IL_0049:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_13 = V_4;
			ConstructorMatcher__ctor_m20AAFFE70C60119AA5DD3282E46F8E0A9C2C1D87((ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *)(&V_5), L_13, /*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_14 = V_4;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_16;
			L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_17;
			L_17 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_14, L_16, (bool)0);
			V_6 = L_17;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = ___parameters2;
			int32_t L_19;
			L_19 = ConstructorMatcher_Match_m1EFC0E96D62BAA46BCA563B6408AF4F73CE09E71((ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *)(&V_5), L_18, /*hidden argument*/NULL);
			V_7 = L_19;
			bool L_20 = V_6;
			if (!L_20)
			{
				goto IL_0086;
			}
		}

IL_0074:
		{
			bool L_21 = V_1;
			if (!L_21)
			{
				goto IL_007c;
			}
		}

IL_0077:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E(/*hidden argument*/NULL);
		}

IL_007c:
		{
			int32_t L_22 = V_7;
			if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
			{
				goto IL_0086;
			}
		}

IL_0081:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E(/*hidden argument*/NULL);
		}

IL_0086:
		{
			bool L_23 = V_6;
			if (L_23)
			{
				goto IL_008f;
			}
		}

IL_008a:
		{
			int32_t L_24 = V_0;
			int32_t L_25 = V_7;
			if ((((int32_t)L_24) >= ((int32_t)L_25)))
			{
				goto IL_0095;
			}
		}

IL_008f:
		{
			int32_t L_26 = V_7;
			V_0 = L_26;
			ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B  L_27 = V_5;
			V_2 = L_27;
		}

IL_0095:
		{
			bool L_28 = V_1;
			bool L_29 = V_6;
			V_1 = (bool)((int32_t)((int32_t)L_28|(int32_t)L_29));
		}

IL_009a:
		{
			RuntimeObject* L_30 = V_3;
			NullCheck(L_30);
			bool L_31;
			L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_002f;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xAE, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_32 = V_3;
			if (!L_32)
			{
				goto IL_00ad;
			}
		}

IL_00a7:
		{
			RuntimeObject* L_33 = V_3;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
		}

IL_00ad:
		{
			IL2CPP_END_FINALLY(164)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
	}

IL_00ae:
	{
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00c3;
		}
	}
	{
		Type_t * L_35 = ___instanceType1;
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_35, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_37 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_CreateInstance_m570566E0C0994F642B2266D72EDA34F3EA0B5534_RuntimeMethod_var)));
	}

IL_00c3:
	{
		RuntimeObject* L_38 = ___provider0;
		RuntimeObject * L_39;
		L_39 = ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485((ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *)(&V_2), L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// Microsoft.Extensions.Internal.ObjectFactory Microsoft.Extensions.Internal.ActivatorUtilities::CreateFactory(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * ActivatorUtilities_CreateFactory_m5BA6D504D7191AA3A15213C0A2ED35BD6F302CB1 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_0 = NULL;
	Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* V_1 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_2 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_3 = NULL;
	{
		Type_t * L_0 = ___instanceType0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = ___argumentTypes1;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		ActivatorUtilities_FindApplicableConstructor_m43AF000092E1DCDD08688470FB723A11A50F98BC(L_0, L_1, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)(&V_0), (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_1), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_4;
		L_4 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_3, _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5, /*hidden argument*/NULL);
		V_2 = L_4;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_0_0_0_var) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_7;
		L_7 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_6, _stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A, /*hidden argument*/NULL);
		V_3 = L_7;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_8 = V_0;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_9 = V_1;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_10 = V_2;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_11 = V_3;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_12;
		L_12 = ActivatorUtilities_BuildFactoryExpression_m91AE7EF34B455E46414BA9B6404CCADAF23B4CEE(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_13 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_14 = L_13;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_15 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_15);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_16 = L_14;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_17 = V_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_17);
		Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * L_18;
		L_18 = Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80(L_12, L_16, /*hidden argument*/Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var);
		NullCheck(L_18);
		Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * L_19;
		L_19 = Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4(L_18, /*hidden argument*/Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var);
		ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * L_20 = (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 *)il2cpp_codegen_object_new(ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345_il2cpp_TypeInfo_var);
		ObjectFactory__ctor_m73F5CC30FB46C9701685A04DA24546AAFB4DDABB(L_20, L_19, (intptr_t)((intptr_t)Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::GetServiceOrCreateInstance(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_GetServiceOrCreateInstance_m7BA1389D9834EFEBA0A131C045C0754BC3BD7CDC (RuntimeObject* ___provider0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___provider0;
		Type_t * L_1 = ___type1;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_4 = ___provider0;
		Type_t * L_5 = ___type1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = ActivatorUtilities_CreateInstance_m570566E0C0994F642B2266D72EDA34F3EA0B5534(L_4, L_5, L_6, /*hidden argument*/NULL);
		G_B2_0 = L_7;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::GetService(System.IServiceProvider,System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_GetService_mCC928F4B18DEDDF52CECE36DDAF46B5252530C25 (RuntimeObject* ___sp0, Type_t * ___type1, Type_t * ___requiredBy2, bool ___isDefaultParameterRequired3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B3_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	{
		RuntimeObject* L_0 = ___sp0;
		Type_t * L_1 = ___type1;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		bool L_4 = ___isDefaultParameterRequired3;
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_001f;
		}
	}
	{
		Type_t * L_5 = ___type1;
		Type_t * L_6 = ___requiredBy2;
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586)), L_5, L_6, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_GetService_mCC928F4B18DEDDF52CECE36DDAF46B5252530C25_RuntimeMethod_var)));
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Linq.Expressions.Expression Microsoft.Extensions.Internal.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ActivatorUtilities_BuildFactoryExpression_m91AE7EF34B455E46414BA9B6404CCADAF23B4CEE (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* ___parameterMap1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___serviceProvider2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___factoryArgumentArray3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	bool V_4 = false;
	RuntimeObject * V_5 = NULL;
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_6 = NULL;
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * V_7 = NULL;
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___constructor0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_2 = V_0;
		NullCheck(L_2);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_3 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_1 = L_3;
		V_2 = 0;
		goto IL_00dc;
	}

IL_0017:
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = L_7;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		V_3 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30(L_8, (RuntimeObject **)(&V_5), /*hidden argument*/NULL);
		V_4 = L_10;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_11 = ___parameterMap1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_14 = V_1;
		int32_t L_15 = V_2;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16 = ___factoryArgumentArray3;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_17 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_18 = L_17;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_19 = ___parameterMap1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_22 = (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23 = L_22;
		RuntimeObject * L_24 = Box(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_25;
		L_25 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_25);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_25);
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_26;
		L_26 = Expression_ArrayAccess_m69590906EAB409F36EAF6AC90780061A034BFDF1(L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_26);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_26);
		goto IL_00b2;
	}

IL_005d:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_27 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_28 = L_27;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_29 = ___serviceProvider2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_29);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_30 = L_28;
		Type_t * L_31 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_34;
		L_34 = Expression_Constant_m014E12A7CCA8E2705E27CA97B85616EBE181F3FF(L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_34);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_35 = L_30;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_36 = ___constructor0;
		NullCheck(L_36);
		Type_t * L_37;
		L_37 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_36);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_40;
		L_40 = Expression_Constant_m014E12A7CCA8E2705E27CA97B85616EBE181F3FF(L_37, L_39, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_40);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_41 = L_35;
		bool L_42 = V_4;
		bool L_43 = L_42;
		RuntimeObject * L_44 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_43);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_45;
		L_45 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_44, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_45);
		V_6 = L_41;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_46 = V_1;
		int32_t L_47 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_48 = ((ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var))->get_GetServiceInfo_0();
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_49 = V_6;
		MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4 * L_50;
		L_50 = Expression_Call_m8A6605235C5D165C397CE090BD478E10BD7EF47A(L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_50);
	}

IL_00b2:
	{
		bool L_51 = V_4;
		if (!L_51)
		{
			goto IL_00cc;
		}
	}
	{
		RuntimeObject * L_52 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_53;
		L_53 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_52, /*hidden argument*/NULL);
		V_7 = L_53;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_54 = V_1;
		int32_t L_55 = V_2;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_56 = V_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_60 = V_7;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_61;
		L_61 = Expression_Coalesce_mBC30867EA3BD5C14799ACFCABFC1B81D36D58B68(L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_61);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_61);
	}

IL_00cc:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_62 = V_1;
		int32_t L_63 = V_2;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_64 = V_1;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Type_t * L_68 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_69;
		L_69 = Expression_Convert_m494826A3729B238263D95E7D7B0E236DE3B1CDA7(L_67, L_68, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_69);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_69);
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_71 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_72 = V_0;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_73 = ___constructor0;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_74 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987 * L_75;
		L_75 = Expression_New_m2882BB14B028BB929C441981105893FBF99CA268(L_73, L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m43AF000092E1DCDD08688470FB723A11A50F98BC (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_0 = ___matchingConstructor2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_1 = ___parameterMap3;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		Type_t * L_2 = ___instanceType0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = ___argumentTypes1;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_4 = ___matchingConstructor2;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_5 = ___parameterMap3;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ActivatorUtilities_TryFindPreferredConstructor_mDD2397C974475E86D04F92E812CCFB83AE0BB95C(L_2, L_3, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_4, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___instanceType0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = ___argumentTypes1;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_9 = ___matchingConstructor2;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_10 = ___parameterMap3;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ActivatorUtilities_TryFindMatchingConstructor_mF2DB2252889AF435E68360F5D29FC9457D6DAA60(L_7, L_8, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_9, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_12 = ___instanceType0;
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_12, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_14 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_FindApplicableConstructor_m43AF000092E1DCDD08688470FB723A11A50F98BC_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_mF2DB2252889AF435E68360F5D29FC9457D6DAA60 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Type_t * L_0 = ___instanceType0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0013:
		{
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_5;
			L_5 = InterfaceFuncInvoker0< ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_6 = V_1;
			NullCheck(L_6);
			bool L_7;
			L_7 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_005b;
			}
		}

IL_0022:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_8 = V_1;
			NullCheck(L_8);
			bool L_9;
			L_9 = MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005b;
			}
		}

IL_002a:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_10 = V_1;
			NullCheck(L_10);
			ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11;
			L_11 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = ___argumentTypes1;
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = ActivatorUtilities_TryCreateParameterMap_m0B810FC865E53CB7007EC1726AC982197F2A9499(L_11, L_12, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_2), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005b;
			}
		}

IL_003a:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_14 = ___matchingConstructor2;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_15 = *((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_14);
			IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC(L_15, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0055;
			}
		}

IL_0044:
		{
			Type_t * L_17 = ___instanceType0;
			String_t* L_18;
			L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68FB1D2C9FFF0D771B9B705E90F8A5891EA88BDA)), L_17, /*hidden argument*/NULL);
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_19 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_19, L_18, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_TryFindMatchingConstructor_mF2DB2252889AF435E68360F5D29FC9457D6DAA60_RuntimeMethod_var)));
		}

IL_0055:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_20 = ___matchingConstructor2;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_21 = V_1;
			*((RuntimeObject **)L_20) = (RuntimeObject *)L_21;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_21);
			Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_22 = ___parameterMap3;
			Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_23 = V_2;
			*((RuntimeObject **)L_22) = (RuntimeObject *)L_23;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)L_23);
		}

IL_005b:
		{
			RuntimeObject* L_24 = V_0;
			NullCheck(L_24);
			bool L_25;
			L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_0013;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_0;
			if (!L_26)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			RuntimeObject* L_27 = V_0;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_27);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_28 = ___matchingConstructor2;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_29 = *((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_28);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC(L_29, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_mDD2397C974475E86D04F92E812CCFB83AE0BB95C (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_2 = NULL;
	Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (bool)0;
		Type_t * L_0 = ___instanceType0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0064;
		}

IL_0015:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_5;
			L_5 = InterfaceFuncInvoker0< ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0064;
			}
		}

IL_0024:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_8 = V_2;
			NullCheck(L_8);
			bool L_9;
			L_9 = MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0064;
			}
		}

IL_002c:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_10 = V_2;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_12;
			L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			bool L_13;
			L_13 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_10, L_12, (bool)0);
			if (!L_13)
			{
				goto IL_0064;
			}
		}

IL_003f:
		{
			bool L_14 = V_0;
			if (!L_14)
			{
				goto IL_0047;
			}
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E(/*hidden argument*/NULL);
		}

IL_0047:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_15 = V_2;
			NullCheck(L_15);
			ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_16;
			L_16 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_15);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = ___argumentTypes1;
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = ActivatorUtilities_TryCreateParameterMap_m0B810FC865E53CB7007EC1726AC982197F2A9499(L_16, L_17, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_3), /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E(/*hidden argument*/NULL);
		}

IL_005c:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_19 = ___matchingConstructor2;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_20 = V_2;
			*((RuntimeObject **)L_19) = (RuntimeObject *)L_20;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_20);
			Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_21 = ___parameterMap3;
			Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_22 = V_3;
			*((RuntimeObject **)L_21) = (RuntimeObject *)L_22;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_21, (void*)(RuntimeObject *)L_22);
			V_0 = (bool)1;
		}

IL_0064:
		{
			RuntimeObject* L_23 = V_1;
			NullCheck(L_23);
			bool L_24;
			L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0015;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_1;
			if (!L_25)
			{
				goto IL_0077;
			}
		}

IL_0071:
		{
			RuntimeObject* L_26 = V_1;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_26);
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(110)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_27 = ___matchingConstructor2;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_28 = *((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC(L_28, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL, /*hidden argument*/NULL);
		return L_29;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_m0B810FC865E53CB7007EC1726AC982197F2A9499 (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___constructorParameters0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * V_2 = NULL;
	int32_t V_3 = 0;
	{
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_0 = ___parameterMap2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1 = ___constructorParameters0;
		NullCheck(L_1);
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_2 = (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84*)(Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84*)SZArrayNew(Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		V_0 = 0;
		goto IL_0066;
	}

IL_000e:
	{
		V_1 = (bool)0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = ___argumentTypes1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Type_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_7;
		L_7 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0057;
	}

IL_001d:
	{
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_8 = ___parameterMap2;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_9 = *((Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_8);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_12 = ___constructorParameters0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_17;
		L_17 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_16, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_18 = V_2;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * >::Invoke(130 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_0053;
		}
	}
	{
		V_1 = (bool)1;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_20 = ___parameterMap2;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_21 = *((Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_20);
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_24), L_23, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )L_24);
		goto IL_005d;
	}

IL_0053:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_26 = V_3;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_27 = ___constructorParameters0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_001d;
		}
	}

IL_005d:
	{
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0062:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_30 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_31 = ___argumentTypes1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E (const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_m0A7BDFCAC6DC0EFAFC39FD1C92DCB7F6D6CB0A8E_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E (const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mDE59D951329B085BF9BA388EF1148AB33FFDE31E_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities__cctor_m1CF458529D27236807C501A38E4CD69841DB167B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_m30479D8D95F03E4CD4D5EF6CC41201490B6E284F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetService_mCC928F4B18DEDDF52CECE36DDAF46B5252530C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_0 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_1 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_2 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_3 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_2;
		L_2 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_1, _stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5;
		L_5 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_4, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, /*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8;
		L_8 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_7, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, /*hidden argument*/NULL);
		V_2 = L_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_11;
		L_11 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_10, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_12 = { reinterpret_cast<intptr_t> (ActivatorUtilities_GetService_mCC928F4B18DEDDF52CECE36DDAF46B5252530C25_RuntimeMethod_var) };
		MethodBase_t * L_13;
		L_13 = MethodBase_GetMethodFromHandle_mFF986FE06E17C3D4E02D437DF6C87C62AAB7B59E(L_12, /*hidden argument*/NULL);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_14 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_15 = L_14;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_16 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_17 = L_15;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_18 = V_1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_19 = L_17;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_20);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_21 = L_19;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_22 = V_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_22);
		MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4 * L_23;
		L_23 = Expression_Call_mC590C169ED2A0064A3B956FE928BE8E53F1F85F7((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)NULL, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_24 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)4);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_25 = L_24;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_26);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_27 = L_25;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_28 = V_1;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_28);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_29 = L_27;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_30 = V_2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_30);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_31 = L_29;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_32 = V_3;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_32);
		Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 * L_33;
		L_33 = Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC(L_23, L_31, /*hidden argument*/Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC_RuntimeMethod_var);
		MethodInfo_t * L_34;
		L_34 = ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_m30479D8D95F03E4CD4D5EF6CC41201490B6E284F(L_33, /*hidden argument*/ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_m30479D8D95F03E4CD4D5EF6CC41201490B6E284F_RuntimeMethod_var);
		((ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t3F79472B68C7E33795D3A1244B18893DF5ED573B_il2cpp_TypeInfo_var))->set_GetServiceInfo_0(L_34);
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
// System.Void Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilitiesConstructorAttribute__ctor_m36304B138BA2E225DD3E3AA25A93C564BC9B435A (ActivatorUtilitiesConstructorAttribute_tBA69CC026CD5BC65F30BD6F0C1AC3F8DFF4C4AC7 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Connections.AddressInUseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressInUseException__ctor_m7490984E67061AF676137383C9F648445B4C5E69 (AddressInUseException_t93FD22D98D3607555FB64CB334FC1B8D3F834CFB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.AddressInUseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressInUseException__ctor_mB07CCFE609A1C83EA53B09BE7B1D51B8D78AAB79 (AddressInUseException_t93FD22D98D3607555FB64CB334FC1B8D3F834CFB * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
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
// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.BaseConnectionContext::get_ConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  BaseConnectionContext_get_ConnectionClosed_m143353A7561C1861791BDC62673E7551A769E69F (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_U3CConnectionClosedU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_ConnectionClosed_m5F69C1E536FD684F6DBAC4F2A94CC84D03E3A8FB (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___value0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___value0;
		__this->set_U3CConnectionClosedU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * BaseConnectionContext_get_LocalEndPoint_m981C17024B07851C8219FCD5FB1005593B4FBD25 (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_LocalEndPoint_mDD3BCEFF648E6ECB582F02A9EEAB5198F93AA330 (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * BaseConnectionContext_get_RemoteEndPoint_m6176A6360AC8A02BC39DCEB197F98697134EBA2B (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CRemoteEndPointU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_RemoteEndPoint_mD1C1CB6A80383D9CB6CE4D16A45A7F5376522A55 (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CRemoteEndPointU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.BaseConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  BaseConnectionContext_DisposeAsync_m36A23D3B58647B2E40085D50371F7465EE7DB88B (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method)
{
	ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555 ));
		ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  L_0 = V_0;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext__ctor_mF3DDAA58A7EDE34ED53F94E2B25C7B075385E899 (BaseConnectionContext_t33ACF39CDEF31709C6FCA745184A464BA6833704 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_m4330F269FE1BE52D80AE80B788E69805DFB6A784 (ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionAbortedException__ctor_mFCEC19D4D47D2EEF18A2375CD7B36C354E587CE5(__this, _stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mFCEC19D4D47D2EEF18A2375CD7B36C354E587CE5 (ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		OperationCanceledException__ctor_mC695DBC8DD0A75A7AFA1D6912B4A5037E6379753(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mF9484C34B31D5C3580D91DD627AEF216BE78F9CD (ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		OperationCanceledException__ctor_m041600801C93993AAC54BBE29DDDCEC91A44D7FC(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.IServiceProvider Microsoft.AspNetCore.Connections.ConnectionBuilder::get_ApplicationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilder_get_ApplicationServices_mC04AC73A68CEBD60A5B874CF6211AAE76792910F (ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CApplicationServicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder::.ctor(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionBuilder__ctor_m18F2AE9E46D0C0E8B42F1AB3488DA963FF55DDAA (ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24 * __this, RuntimeObject* ___applicationServices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CFEFDDC9F8C70706DA2D4D513BB2F0E524DB12C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C * L_0 = (List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C *)il2cpp_codegen_object_new(List_1_t2BD47BC662CDDADE6CB304646F94B393B4C88F7C_il2cpp_TypeInfo_var);
		List_1__ctor_m0CFEFDDC9F8C70706DA2D4D513BB2F0E524DB12C(L_0, /*hidden argument*/List_1__ctor_m0CFEFDDC9F8C70706DA2D4D513BB2F0E524DB12C_RuntimeMethod_var);
		__this->set__components_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___applicationServices0;
		__this->set_U3CApplicationServicesU3Ek__BackingField_1(L_1);
		return;
	}
}
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilder_Use_m0A47E4A536CA99EEC612203AD2067FDA2ACF0BB4 (ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24 * __this, Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * ___middleware0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tF9756C4DD13B4C02DD134076E1C894C2DD6E6C4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__components_0();
		Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * L_1 = ___middleware0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::Add(!0) */, ICollection_1_tF9756C4DD13B4C02DD134076E1C894C2DD6E6C4B_il2cpp_TypeInfo_var, L_0, L_1);
		return __this;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ConnectionBuilder_Build_m9D49BA5478E25BB54A6A5C2BFC52E07FE017A9C5 (ConnectionBuilder_tDBD688352656B1218B617E6AF49BEB6465DF7F24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisFunc_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_m959123105110D5BA32F2DC3D51C94FBA42A61042_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m65CA327368C0E5982EB583154F548F61CE7B86C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7E8DB515B0D0A25D0CE0ED1F4A62C059A52AF2D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4B021380DA21910DD922C3D58A0F59A950EFEDAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__6_0_m039E767683C38AE4357786FDAAA4B02A82DF91AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * G_B2_0 = NULL;
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_0 = ((U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var);
		U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * L_2 = ((U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_3 = (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 *)il2cpp_codegen_object_new(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		ConnectionDelegate__ctor_mD63B361D6645332978EDC0A9F56490E5C550CF0C(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CBuildU3Eb__6_0_m039E767683C38AE4357786FDAAA4B02A82DF91AA_RuntimeMethod_var), /*hidden argument*/NULL);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_4 = L_3;
		((U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		RuntimeObject* L_5 = __this->get__components_0();
		RuntimeObject* L_6;
		L_6 = Enumerable_Reverse_TisFunc_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_m959123105110D5BA32F2DC3D51C94FBA42A61042(L_5, /*hidden argument*/Enumerable_Reverse_TisFunc_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_m959123105110D5BA32F2DC3D51C94FBA42A61042_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::GetEnumerator() */, IEnumerable_1_t7E8DB515B0D0A25D0CE0ED1F4A62C059A52AF2D8_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0033:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * L_9;
			L_9 = InterfaceFuncInvoker0< Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::get_Current() */, IEnumerator_1_t4B021380DA21910DD922C3D58A0F59A950EFEDAF_il2cpp_TypeInfo_var, L_8);
			ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_10 = V_0;
			NullCheck(L_9);
			ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_11;
			L_11 = Func_2_Invoke_m65CA327368C0E5982EB583154F548F61CE7B86C7(L_9, L_10, /*hidden argument*/Func_2_Invoke_m65CA327368C0E5982EB583154F548F61CE7B86C7_RuntimeMethod_var);
			V_0 = L_11;
		}

IL_0040:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0033;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x54, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_16 = V_0;
		return L_16;
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
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions::Use(Microsoft.AspNetCore.Connections.IConnectionBuilder,System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilderExtensions_Use_m78047573280BF64D788C617746F034B25C45A7B8 (RuntimeObject* ___connectionBuilder0, Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * ___middleware1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_m685969A7DE96BD09071A8B64DD70446CF50F6CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * L_0 = (U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_mC518F0C236815BE832CA54AB4EC04E64FF38CA6C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * L_1 = V_0;
		Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * L_2 = ___middleware1;
		NullCheck(L_1);
		L_1->set_middleware_0(L_2);
		RuntimeObject* L_3 = ___connectionBuilder0;
		U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * L_4 = V_0;
		Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * L_5 = (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D *)il2cpp_codegen_object_new(Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_il2cpp_TypeInfo_var);
		Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_m685969A7DE96BD09071A8B64DD70446CF50F6CB2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * >::Invoke(1 /* Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.IConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>) */, IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435_il2cpp_TypeInfo_var, L_3, L_5);
		return L_6;
	}
}
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions::Run(Microsoft.AspNetCore.Connections.IConnectionBuilder,System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilderExtensions_Run_mEE036898ECD941448C56EE7E5163942C898BF39D (RuntimeObject* ___connectionBuilder0, Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * ___middleware1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m38B8C8FDECAD6EB3080298B8906D67811F42DE6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * L_0 = (U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mAAA0407ACA84C6D2EF55F6E99B5AD9CC804638B5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * L_1 = V_0;
		Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * L_2 = ___middleware1;
		NullCheck(L_1);
		L_1->set_middleware_0(L_2);
		RuntimeObject* L_3 = ___connectionBuilder0;
		U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * L_4 = V_0;
		Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * L_5 = (Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D *)il2cpp_codegen_object_new(Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D_il2cpp_TypeInfo_var);
		Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m38B8C8FDECAD6EB3080298B8906D67811F42DE6C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1493869951839E8F278FF920543DE34C34426CE5_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Func_2_t633F9CCDE4DF1B533C4B9E1656E459310401321D * >::Invoke(1 /* Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.IConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>) */, IConnectionBuilder_tD0FAF586461F2F818795467ABE0B935DAC414435_il2cpp_TypeInfo_var, L_3, L_5);
		return L_6;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext_Abort_m3BFA2778FFFC9177802B85A08800390FB6D106F2 (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * __this, ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * ___abortReason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Get_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mD03523328411BA8B100580466571E27E596E02C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IFeatureCollection_Get_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mD03523328411BA8B100580466571E27E596E02C7_RuntimeMethod_var, L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Microsoft.AspNetCore.Connections.Features.IConnectionLifetimeFeature::Abort() */, IConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_il2cpp_TypeInfo_var, G_B2_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext_Abort_m0259FF010DEEBDD2132013987082C58C0F1627D6 (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * L_0 = (ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 *)il2cpp_codegen_object_new(ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838_il2cpp_TypeInfo_var);
		ConnectionAbortedException__ctor_mFCEC19D4D47D2EEF18A2375CD7B36C354E587CE5(L_0, _stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D, /*hidden argument*/NULL);
		VirtActionInvoker1< ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * >::Invoke(17 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException) */, __this, L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext__ctor_m4B14BDDBE5DFA46C1AA0F1373B49200B95F816E7 (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * __this, const RuntimeMethod* method)
{
	{
		BaseConnectionContext__ctor_mF3DDAA58A7EDE34ED53F94E2B25C7B075385E899(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionDelegate__ctor_mD63B361D6645332978EDC0A9F56490E5C550CF0C (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionDelegate_Invoke_m594C66A85788595E3F86069C939A530A2ED6D6F4 (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___connection0, const RuntimeMethod* method)
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
			}
			else
			{
				// closed
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (void*, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___connection0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(targetMethod, ___connection0);
					else
						result = GenericVirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(targetMethod, ___connection0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___connection0);
					else
						result = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___connection0);
				}
			}
			else
			{
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * >::Invoke(targetMethod, targetThis, ___connection0);
					else
						result = GenericVirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * >::Invoke(targetMethod, targetThis, ___connection0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___connection0);
					else
						result = VirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___connection0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
				}
				else
				{
					typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (void*, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___connection0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.AspNetCore.Connections.ConnectionDelegate::BeginInvoke(Microsoft.AspNetCore.Connections.ConnectionContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionDelegate_BeginInvoke_mEC3313A1E45865148002F181B5A28F90324BE962 (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___connection0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___connection0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConnectionDelegate_EndInvoke_m04F378EB473EE10CE42FB7D707352AC19BA1826B (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.Connections.ConnectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler__ctor_mE8D4868F187FB910181C1C7F28C6BC1C7A00B758 (ConnectionHandler_t81901AC437117B883BE827DBBE6F81912EFDEA13 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mAAF918EE142C62A04A8C75503B372CE84F198117 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F(L_0, /*hidden argument*/Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		ConnectionItems__ctor_m2EF3FD4C797F8274E1511B31D590D26ED217D89A(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_m2EF3FD4C797F8274E1511B31D590D26ED217D89A (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___items0;
		__this->set_U3CItemsU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CItemsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Object Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Item_m779E7C37D3256345A1DDEA2E192D40234FC26026 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&V_0));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return NULL;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_set_Item_mB2BED0CE89B3B6C4875B4A92257DCC80A74183E6 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_Add_m1140141FC5C599EE9F0FCB1C30346AC75D4FB011 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(!0,!1) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_ContainsKey_m16A2D18BBD7C5B4B0F75C713AE54C4ED8DB34672 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(!0) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Keys_mAA404A71FD485E3D0CA24A2CB66EDCA5809611F5 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys() */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_Remove_mEC7EB84859DC82213E906DE1A2927572B166CD25 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(!0) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.TryGetValue(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_TryGetValue_m5011D2B9721E4BEC67CAAAE11C8765E0D92CA05C (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Values_mF05EFD9FB01F7ED1C04BC898DB759E1F491C1E5C (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values() */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Add(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Add_mC65BEC3C96341FC99D76FFA95119966426B78969 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___item0;
		NullCheck(L_0);
		InterfaceActionInvoker1< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(!0) */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Clear_m2DA01403891EB6E14CF97D72C27727471E0B3935 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Contains(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Contains_m3FECC74629BD667799EBBE22EA2C90028EE90A51 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(!0) */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_CopyTo_m3E6F09952A838B0AE63400B2A3C4ADB90CFE03E3 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(!0[],System.Int32) */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_get_Count_m48D5607F7F01C2C20E3A7DCEAA05E62543D093D7 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_get_IsReadOnly_m1BCDCB15580CCB9AF94116102F098460F56766D9 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, ICollection_1_t2FE7D3116BD1DB080FDA15DD89C724B5C516C360_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Remove(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Remove_m6957542366E2BD1795EFF13928E40FDD56DA7ED0 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1;
		L_1 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&V_0));
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_3;
		L_3 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
		RuntimeObject * L_4 = V_0;
		bool L_5;
		L_5 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_7;
		L_7 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(!0) */, IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72_il2cpp_TypeInfo_var, L_6, L_7);
		return L_8;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_GetEnumerator_mE7704ACB0B958660E78F95A0C6DA63C54BF601F9 (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_IEnumerable_GetEnumerator_mCBABA77167B500759DE16C72DB2AC0E2A04A3FEA (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var, L_0);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionResetException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResetException__ctor_mE612685B058F58DB7F9C68B87F48E7F127CDA1B8 (ConnectionResetException_tDDDB6379CA4447F32FAD810F49FCB565D1A5C7F3 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionResetException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResetException__ctor_m346E026EBFF502CFE47E083FD2314F5645532C55 (ConnectionResetException_tDDDB6379CA4447F32FAD810F49FCB565D1A5C7F3 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_m2F189D074E933DEC0F6DE5FAA157BFFB435FD065 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		DefaultConnectionContext__ctor_mFEC07CE23D86F5D78A18B38C98E1A327C648B6C4(__this, L_1, /*hidden argument*/NULL);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_2 = __this->get__connectionClosedTokenSource_3();
		NullCheck(L_2);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(11 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken) */, __this, L_3);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_mFEC07CE23D86F5D78A18B38C98E1A327C648B6C4 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionEndPointFeature_t0E5D580DFAE930170C7ACF21ADC70ECEFF90E107_m01E36A7D0640911969B2514DCB2AC227AC0A75DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionIdFeature_tB07F93E9C12EEF872B7A5E25B5E7A1F8CA8E1908_m41B1DF8D86DEEBDA2EB816D504CA85B4CDCBB430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionItemsFeature_t162CF166717C05122DFC7AB44F47D863EA3B7FE5_m426F461948DB177CF9DA8C4B909B2259300FBF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mE0C2D75244804405D2A506AB131E9BDAB0120E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionTransportFeature_tF27D1E585AA0B068D540510EABACBB9297066FA7_m517FC3ECC11A0A766CD20F75F798BC0175E8A9F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionUserFeature_t0057F34A957B503D713EE910B15B5D9D34771082_mE9CCB87984DB267B675505DE292148DB22C4E8A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_0, /*hidden argument*/NULL);
		__this->set__connectionClosedTokenSource_3(L_0);
		ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * L_1 = (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C *)il2cpp_codegen_object_new(ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C_il2cpp_TypeInfo_var);
		ConnectionItems__ctor_mAAF918EE142C62A04A8C75503B372CE84F198117(L_1, /*hidden argument*/NULL);
		__this->set_U3CItemsU3Ek__BackingField_7(L_1);
		ConnectionContext__ctor_m4B14BDDBE5DFA46C1AA0F1373B49200B95F816E7(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___id0;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionId(System.String) */, __this, L_2);
		FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_3 = (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E *)il2cpp_codegen_object_new(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var);
		FeatureCollection__ctor_m453595D4C6D42BF103E912F1E6D96BECB4EEB982(L_3, /*hidden argument*/NULL);
		__this->set_U3CFeaturesU3Ek__BackingField_5(L_3);
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionUserFeature_t0057F34A957B503D713EE910B15B5D9D34771082_mE9CCB87984DB267B675505DE292148DB22C4E8A8_RuntimeMethod_var, L_4, __this);
		RuntimeObject* L_5;
		L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionItemsFeature_t162CF166717C05122DFC7AB44F47D863EA3B7FE5_m426F461948DB177CF9DA8C4B909B2259300FBF8A_RuntimeMethod_var, L_5, __this);
		RuntimeObject* L_6;
		L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionIdFeature_tB07F93E9C12EEF872B7A5E25B5E7A1F8CA8E1908_m41B1DF8D86DEEBDA2EB816D504CA85B4CDCBB430_RuntimeMethod_var, L_6, __this);
		RuntimeObject* L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionTransportFeature_tF27D1E585AA0B068D540510EABACBB9297066FA7_m517FC3ECC11A0A766CD20F75F798BC0175E8A9F3_RuntimeMethod_var, L_7, __this);
		RuntimeObject* L_8;
		L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionLifetimeFeature_tFA52D43FD1887A23F50355D6AF66C96169E4D9B5_mE0C2D75244804405D2A506AB131E9BDAB0120E42_RuntimeMethod_var, L_8, __this);
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_9);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionEndPointFeature_t0E5D580DFAE930170C7ACF21ADC70ECEFF90E107_m01E36A7D0640911969B2514DCB2AC227AC0A75DA_RuntimeMethod_var, L_9, __this);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String,System.IO.Pipelines.IDuplexPipe,System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_m1D7E1F151982E0EADCA99379924B487465AC940E (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, String_t* ___id0, RuntimeObject* ___transport1, RuntimeObject* ___application2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		DefaultConnectionContext__ctor_mFEC07CE23D86F5D78A18B38C98E1A327C648B6C4(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___transport1;
		VirtActionInvoker1< RuntimeObject* >::Invoke(20 /* System.Void Microsoft.AspNetCore.Connections.ConnectionContext::set_Transport(System.IO.Pipelines.IDuplexPipe) */, __this, L_1);
		RuntimeObject* L_2 = ___application2;
		DefaultConnectionContext_set_Application_m7FC22D469AA47F243A5A37CD7A0CCECE965A01F1_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultConnectionContext_get_ConnectionId_m4A44BEBF0F864DAF8C722DAA0A83F9E30663D554 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConnectionIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_ConnectionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_ConnectionId_m1B9D82EC908DFA0ECFA7B3E2A387632860C24ADE (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Features()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Features_m5DBFB7A9FE7D285B2D8DBF911B0D6ABA83A55362 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFeaturesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Security.Claims.ClaimsPrincipal Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * DefaultConnectionContext_get_User_m38FFC0F37A89BB70F7ECA663B5C1E482B6CC3870 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * L_0 = __this->get_U3CUserU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_User(System.Security.Claims.ClaimsPrincipal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_User_mF6CD2A3DB1A83655BCE1225DF45FE297A50AC466 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * ___value0, const RuntimeMethod* method)
{
	{
		ClaimsPrincipal_t827BFC58B68E6C8F2B5DFF3227554A1EC5C3277B * L_0 = ___value0;
		__this->set_U3CUserU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Items_mD6BEE00E8AD2AAF548E5DAAC224AA66C07450F57 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CItemsU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Items(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Items_m4BE981072F2FFD032C6D8A63B40FD47230E018A3 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CItemsU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Application()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Application_mB12708FD2655EBC54C3EF2E39CCE208C0F2DF327 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CApplicationU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Application(System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_m7FC22D469AA47F243A5A37CD7A0CCECE965A01F1 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CApplicationU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Transport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Transport_m42273498F7C43720C542C0F4326960E37716FBEF (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTransportU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Transport(System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Transport_mC9D90BCE17CA8543D7E801D6C530C698F4FE6CF2 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTransportU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_ConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  DefaultConnectionContext_get_ConnectionClosed_m63DEB6A6981798B2334F878489D6FC9660DA9FE8 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_U3CConnectionClosedU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_ConnectionClosed_m38571DDF8E71EEA8CDFAA9CDAF0EE3CD552A78B3 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___value0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___value0;
		__this->set_U3CConnectionClosedU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * DefaultConnectionContext_get_LocalEndPoint_mF42A636DB0A590792C4898569EFBDBBEA2CF068B (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_LocalEndPoint_m4B6AFC7DF69F3FD705B433E43E991C27D6812E81 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * DefaultConnectionContext_get_RemoteEndPoint_mFF687AC7D2F725FFB2C968DF627A86237F4EFBCF (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CRemoteEndPointU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_RemoteEndPoint_m21700C5ADF2952A60E07EDA12FA6EAFA7175DCE8 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CRemoteEndPointU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_Abort_mC34B7F7789BA5C691D89C56C52276C6351333B25 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, ConnectionAbortedException_tC622A1D3C0F5B45C2603BD65E1F3E5DE25D0F838 * ___abortReason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAbortU3Eb__39_0_mAAA2AC4C8688245665AD92D28CC707DFA5437C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * G_B2_0 = NULL;
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_0 = ((U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var))->get_U3CU3E9__39_0_1();
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var);
		U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * L_2 = ((U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_3 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CAbortU3Eb__39_0_mAAA2AC4C8688245665AD92D28CC707DFA5437C33_RuntimeMethod_var), /*hidden argument*/NULL);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_4 = L_3;
		((U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var))->set_U3CU3E9__39_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = __this->get__connectionClosedTokenSource_3();
		bool L_6;
		L_6 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(G_B2_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.DefaultConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  DefaultConnectionContext_DisposeAsync_m918E92FB6A21681543116472F3F07D55557B6771 (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = __this->get__connectionClosedTokenSource_3();
		NullCheck(L_0);
		CancellationTokenSource_Dispose_m7040D247EFB6C234491C6450AAFFCA879E3ED070(L_0, /*hidden argument*/NULL);
		ValueTask_t601B44A1592B02EC96C55164C056882E8C74C555  L_1;
		L_1 = BaseConnectionContext_DisposeAsync_m36A23D3B58647B2E40085D50371F7465EE7DB88B(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.FileHandleEndPoint::.ctor(System.UInt64,Microsoft.AspNetCore.Connections.FileHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileHandleEndPoint__ctor_m1F0EF8522B9FF79304644B7A2F958CC455C4F69D (FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720 * __this, uint64_t ___fileHandle0, int32_t ___fileHandleType1, const RuntimeMethod* method)
{
	{
		EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___fileHandle0;
		__this->set_U3CFileHandleU3Ek__BackingField_0(L_0);
		int32_t L_1 = ___fileHandleType1;
		__this->set_U3CFileHandleTypeU3Ek__BackingField_1(L_1);
		int32_t L_2 = ___fileHandleType1;
		if ((!(((uint32_t)L_2) > ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_3 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileHandleEndPoint__ctor_m1F0EF8522B9FF79304644B7A2F958CC455C4F69D_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.UInt64 Microsoft.AspNetCore.Connections.FileHandleEndPoint::get_FileHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FileHandleEndPoint_get_FileHandle_mF2F9D62B2C640033F76E96F460A47FE163660BFB (FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CFileHandleU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.AspNetCore.Connections.FileHandleType Microsoft.AspNetCore.Connections.FileHandleEndPoint::get_FileHandleType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileHandleEndPoint_get_FileHandleType_m86BB6545126EA7189C52B5319334395F42AAD535 (FileHandleEndPoint_t159BAB48EA33A2FC63D3F7B003A8E9061E12F720 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFileHandleTypeU3Ek__BackingField_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IServiceProvider Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::get_ApplicationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionBuilder_get_ApplicationServices_m85973CC0E071EDEF6D8FB4166CB83962FB183DDC (MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CApplicationServicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::.ctor(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionBuilder__ctor_m557068E5237C7513C306639B735F90F0D04FD133 (MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6 * __this, RuntimeObject* ___applicationServices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m79D7E9F994574361338C782333C1A1A8A4CF5894_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51 * L_0 = (List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51 *)il2cpp_codegen_object_new(List_1_t310A9F4790E54F10A255DF961A7B50FCC200CD51_il2cpp_TypeInfo_var);
		List_1__ctor_m79D7E9F994574361338C782333C1A1A8A4CF5894(L_0, /*hidden argument*/List_1__ctor_m79D7E9F994574361338C782333C1A1A8A4CF5894_RuntimeMethod_var);
		__this->set__components_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___applicationServices0;
		__this->set_U3CApplicationServicesU3Ek__BackingField_1(L_1);
		return;
	}
}
// Microsoft.AspNetCore.Connections.IMultiplexedConnectionBuilder Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionBuilder_Use_m98979477CF7F5404530559BE963046A5FB62153C (MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6 * __this, Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * ___middleware0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t437B917A87E8CE48F1B24FEAA03FC5C7B541698F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__components_0();
		Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * L_1 = ___middleware0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>::Add(!0) */, ICollection_1_t437B917A87E8CE48F1B24FEAA03FC5C7B541698F_il2cpp_TypeInfo_var, L_0, L_1);
		return __this;
	}
}
// Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * MultiplexedConnectionBuilder_Build_m499A1F7C03D159BC5ECA9B673F82E473D9E7BE64 (MultiplexedConnectionBuilder_t8610FAD9A1074EDEF4389CE36BEDFF2027887BB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisFunc_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520_m674C147AD7DEDD8EDDAFCCBE10E4B9CD6D34A651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m6AEC7BB8EC565CFA7E6FEE98F9F996BCE6FECFB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7E44BD62994EE0DC5359AE696B1D970286C4E678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t58BF5F6296CA3F3C359B4E467DE8F260BCE3CE3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__6_0_mF2DF71165AF8A93AD0E82A28D3D8330011E721FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * G_B2_0 = NULL;
	MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var);
		MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_0 = ((U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var);
		U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * L_2 = ((U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_3 = (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 *)il2cpp_codegen_object_new(MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2_il2cpp_TypeInfo_var);
		MultiplexedConnectionDelegate__ctor_mA9D74826525EFD4A0BAF5635D843E91D44145F4A(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CBuildU3Eb__6_0_mF2DF71165AF8A93AD0E82A28D3D8330011E721FD_RuntimeMethod_var), /*hidden argument*/NULL);
		MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_4 = L_3;
		((U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		RuntimeObject* L_5 = __this->get__components_0();
		RuntimeObject* L_6;
		L_6 = Enumerable_Reverse_TisFunc_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520_m674C147AD7DEDD8EDDAFCCBE10E4B9CD6D34A651(L_5, /*hidden argument*/Enumerable_Reverse_TisFunc_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520_m674C147AD7DEDD8EDDAFCCBE10E4B9CD6D34A651_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>::GetEnumerator() */, IEnumerable_1_t7E44BD62994EE0DC5359AE696B1D970286C4E678_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0033:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * L_9;
			L_9 = InterfaceFuncInvoker0< Func_2_tCC3C7533CE4E521858A1D2B42D146B60AA273520 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Func`2<Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate>>::get_Current() */, IEnumerator_1_t58BF5F6296CA3F3C359B4E467DE8F260BCE3CE3D_il2cpp_TypeInfo_var, L_8);
			MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_10 = V_0;
			NullCheck(L_9);
			MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_11;
			L_11 = Func_2_Invoke_m6AEC7BB8EC565CFA7E6FEE98F9F996BCE6FECFB2(L_9, L_10, /*hidden argument*/Func_2_Invoke_m6AEC7BB8EC565CFA7E6FEE98F9F996BCE6FECFB2_RuntimeMethod_var);
			V_0 = L_11;
		}

IL_0040:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0033;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x54, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionContext__ctor_m3E0589FA4B1586DB25450ED5986C6DFE8817E26F (MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * __this, const RuntimeMethod* method)
{
	{
		BaseConnectionContext__ctor_mF3DDAA58A7EDE34ED53F94E2B25C7B075385E899(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionDelegate__ctor_mA9D74826525EFD4A0BAF5635D843E91D44145F4A (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.MultiplexedConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MultiplexedConnectionDelegate_Invoke_mBFB9B0AF8F77E014EB7671E030F604A895E4D7D5 (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * __this, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * ___connection0, const RuntimeMethod* method)
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
			}
			else
			{
				// closed
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (void*, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___connection0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(targetMethod, ___connection0);
					else
						result = GenericVirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(targetMethod, ___connection0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___connection0);
					else
						result = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___connection0);
				}
			}
			else
			{
				typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * >::Invoke(targetMethod, targetThis, ___connection0);
					else
						result = GenericVirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * >::Invoke(targetMethod, targetThis, ___connection0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___connection0);
					else
						result = VirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___connection0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___connection0, targetMethod);
				}
				else
				{
					typedef Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*FunctionPointerType) (void*, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___connection0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate::BeginInvoke(Microsoft.AspNetCore.Connections.MultiplexedConnectionContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionDelegate_BeginInvoke_m860B35A747F5AD47940927D2DC490EE85ECB1A27 (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * __this, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * ___connection0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___connection0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.MultiplexedConnectionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MultiplexedConnectionDelegate_EndInvoke_m6AE8054663DE68CCE5A86E10926BA389D3372A23 (MultiplexedConnectionDelegate_tFCC8F04AAC9E4191FECFCF6004712C992DAB38A2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Internal.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_m73F5CC30FB46C9701685A04DA24546AAFB4DDABB (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Microsoft.Extensions.Internal.ObjectFactory::Invoke(System.IServiceProvider,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectFactory_Invoke_m11FA6CFCF4272101279EA0D8D1B014A524F422DD (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___serviceProvider0, ___arguments1, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___serviceProvider0, ___arguments1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___serviceProvider0, ___arguments1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___serviceProvider0, ___arguments1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___serviceProvider0, ___arguments1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___serviceProvider0, ___arguments1);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___serviceProvider0, ___arguments1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___serviceProvider0, ___arguments1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___serviceProvider0, ___arguments1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___serviceProvider0, ___arguments1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___serviceProvider0, ___arguments1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___serviceProvider0, ___arguments1, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___serviceProvider0, ___arguments1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Extensions.Internal.ObjectFactory::BeginInvoke(System.IServiceProvider,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectFactory_BeginInvoke_m54B270EB5217E0386919F848AF629A94B0B27E5C (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___serviceProvider0;
	__d_args[1] = ___arguments1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Object Microsoft.Extensions.Internal.ObjectFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectFactory_EndInvoke_m37DB491242A16B3C2C1798729A6C6E8FDB0FF1EB (ObjectFactory_t3EDE1AA1C75F84AE851D6CA54B44916987911345 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean Microsoft.Extensions.Internal.ParameterDefaultValue::TryGetDefaultValue(System.Reflection.ParameterInfo,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30 (ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, RuntimeObject ** ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * G_B4_0 = NULL;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		V_1 = (bool)1;
		RuntimeObject ** L_0 = ___defaultValue1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_1 = ___parameter0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Reflection.ParameterInfo::get_HasDefaultValue() */, L_1);
		V_0 = L_2;
		goto IL_003c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{ // begin filter(depth: 1)
		bool __filter_local = false;
		try
		{ // begin implicit try block
			{
				FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_3 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)IsInstClass((RuntimeObject*)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var))));
				G_B3_0 = L_3;
				if (L_3)
				{
					G_B4_0 = L_3;
					goto IL_001a;
				}
			}
			{
				G_B5_0 = 0;
				goto IL_0033;
			}

IL_001a:
			{
				ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_4 = ___parameter0;
				NullCheck(L_4);
				Type_t * L_5;
				L_5 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_4);
				RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var))) };
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t * L_7;
				L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
				bool L_8;
				L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_7, /*hidden argument*/NULL);
				G_B5_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			}

IL_0033:
			{
				__filter_local = (G_B5_0) ? true : false;
			}
		} // end implicit try block
		catch(Il2CppExceptionWrapper&)
		{ // begin implicit catch block
			__filter_local = false;
		} // end implicit catch block
		if (__filter_local)
		{
			goto FILTER_0035;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30_RuntimeMethod_var)));
		}
	} // end filter (depth: 1)

FILTER_0035:
	{ // begin catch(filter)
		V_0 = (bool)1;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003c;
	} // end catch (depth: 1)

IL_003c:
	{
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject ** L_11 = ___defaultValue1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_12 = ___parameter0;
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(14 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_12);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
	}

IL_004a:
	{
		RuntimeObject ** L_14 = ___defaultValue1;
		RuntimeObject * L_15 = *((RuntimeObject **)L_14);
		if (L_15)
		{
			goto IL_0068;
		}
	}
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_16 = ___parameter0;
		NullCheck(L_16);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		NullCheck(L_17);
		bool L_18;
		L_18 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject ** L_19 = ___defaultValue1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_20 = ___parameter0;
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		RuntimeObject * L_22;
		L_22 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_21, /*hidden argument*/NULL);
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_22);
	}

IL_0068:
	{
		RuntimeObject ** L_23 = ___defaultValue1;
		RuntimeObject * L_24 = *((RuntimeObject **)L_23);
		if (!L_24)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_25 = ___parameter0;
		NullCheck(L_25);
		Type_t * L_26;
		L_26 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_25);
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_26);
		if (!L_27)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_28 = ___parameter0;
		NullCheck(L_28);
		Type_t * L_29;
		L_29 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_28);
		NullCheck(L_29);
		Type_t * L_30;
		L_30 = VirtFuncInvoker0< Type_t * >::Invoke(112 /* System.Type System.Type::GetGenericTypeDefinition() */, L_29);
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		Type_t * L_31 = ((ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var))->get__nullable_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_33 = ___parameter0;
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		Type_t * L_35;
		L_35 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		Type_t * L_36 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_36, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00b7;
		}
	}
	{
		Type_t * L_38 = V_2;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		if (!L_39)
		{
			goto IL_00b7;
		}
	}
	{
		RuntimeObject ** L_40 = ___defaultValue1;
		Type_t * L_41 = V_2;
		RuntimeObject ** L_42 = ___defaultValue1;
		RuntimeObject * L_43 = *((RuntimeObject **)L_42);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_44;
		L_44 = Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967(L_41, L_43, /*hidden argument*/NULL);
		*((RuntimeObject **)L_40) = (RuntimeObject *)L_44;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_40, (void*)(RuntimeObject *)L_44);
	}

IL_00b7:
	{
		bool L_45 = V_0;
		return L_45;
	}
}
// System.Void Microsoft.Extensions.Internal.ParameterDefaultValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__ctor_mA86D8B0388254C0E7A66F52227C704B2B2A424FE (ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.ParameterDefaultValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__cctor_m0315FD13742FB5B7F372F731EE05E0AE0BFC36C7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var))->set__nullable_0(L_1);
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
// System.Void Microsoft.AspNetCore.Connections.UriEndPoint::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriEndPoint__ctor_m197D73686B1F94D4DDA33CF3D14157AA25A86236 (UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B2_0 = NULL;
	UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * G_B2_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B1_0 = NULL;
	UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * G_B1_1 = NULL;
	{
		EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriEndPoint__ctor_m197D73686B1F94D4DDA33CF3D14157AA25A86236_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CUriU3Ek__BackingField_0(G_B2_0);
		return;
	}
}
// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * UriEndPoint_get_Uri_mBC7F5962D58B35A75B972DF188A88A02703C4BA5 (UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * __this, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_U3CUriU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.AspNetCore.Connections.UriEndPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriEndPoint_ToString_m30193FB99480614270F1D4C17160B9F40666C0FA (UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * __this, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0;
		L_0 = UriEndPoint_get_Uri_mBC7F5962D58B35A75B972DF188A88A02703C4BA5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m93BF7D72C549C67A458B25C8369FAF6F1BB3FBC3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * L_0 = (U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 *)il2cpp_codegen_object_new(U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m18E92F24B1085082B1795F29E11B3EFF853868B1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m18E92F24B1085082B1795F29E11B3EFF853868B1 (U3CU3Ec_t7A0C8FAED7359D8607FB4182FF219F0742FC2BB3 * __this, const RuntimeMethod* method)
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


// Conversion methods for marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_pinvoke(const ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B& unmarshaled, ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_pinvoke& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_pinvoke_back(const ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_pinvoke& marshaled, ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_pinvoke_cleanup(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_com(const ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B& unmarshaled, ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_com& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_com_back(const ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_com& marshaled, ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshal_com_cleanup(ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_m20AAFFE70C60119AA5DD3282E46F8E0A9C2C1D87 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___constructor0;
		__this->set__constructor_0(L_0);
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_1 = __this->get__constructor_0();
		NullCheck(L_1);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_2;
		L_2 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		__this->set__parameters_1(L_2);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_3 = __this->get__parameters_1();
		NullCheck(L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		__this->set__parameterValues_2(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ConstructorMatcher__ctor_m20AAFFE70C60119AA5DD3282E46F8E0A9C2C1D87_AdjustorThunk (RuntimeObject * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * _thisAdjusted = reinterpret_cast<ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *>(__this + _offset);
	ConstructorMatcher__ctor_m20AAFFE70C60119AA5DD3282E46F8E0A9C2C1D87(_thisAdjusted, ___constructor0, method);
}
// System.Int32 Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_m1EFC0E96D62BAA46BCA563B6408AF4F73CE09E71 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	RuntimeObject * G_B3_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * G_B4_0 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_008e;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___givenParameters0;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0015;
		}
	}
	{
		G_B4_0 = ((TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *)(NULL));
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B3_0);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(G_B3_0, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_6;
		L_6 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_5, /*hidden argument*/NULL);
		G_B4_0 = L_6;
	}

IL_001f:
	{
		V_3 = G_B4_0;
		V_4 = (bool)0;
		int32_t L_7 = V_0;
		V_5 = L_7;
		goto IL_0074;
	}

IL_0028:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = __this->get__parameterValues_2();
		int32_t L_9 = V_5;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_12 = __this->get__parameters_1();
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_17;
		L_17 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_16, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_18 = V_3;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * >::Invoke(130 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_006e;
		}
	}
	{
		V_4 = (bool)1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = __this->get__parameterValues_2();
		int32_t L_21 = V_5;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = ___givenParameters0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_25);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject *)L_25);
		int32_t L_26 = V_0;
		int32_t L_27 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		int32_t L_29 = V_5;
		int32_t L_30 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_31 = V_5;
		V_1 = L_31;
	}

IL_006e:
	{
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0074:
	{
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_34 = V_5;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_35 = __this->get__parameters_1();
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))))
		{
			goto IL_0028;
		}
	}

IL_0084:
	{
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_008a;
		}
	}
	{
		return (-1);
	}

IL_008a:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_38 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = ___givenParameters0;
		NullCheck(L_39);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C  int32_t ConstructorMatcher_Match_m1EFC0E96D62BAA46BCA563B6408AF4F73CE09E71_AdjustorThunk (RuntimeObject * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * _thisAdjusted = reinterpret_cast<ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConstructorMatcher_Match_m1EFC0E96D62BAA46BCA563B6408AF4F73CE09E71(_thisAdjusted, ___givenParameters0, method);
	return _returnValue;
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485 (ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * G_B13_0 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	{
		V_0 = 0;
		goto IL_0076;
	}

IL_0004:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get__parameterValues_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject* L_4 = ___provider0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5 = __this->get__parameters_1();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		NullCheck(L_4);
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var, L_4, L_9);
		V_1 = L_10;
		RuntimeObject * L_11 = V_1;
		if (L_11)
		{
			goto IL_0069;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_12 = __this->get__parameters_1();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_tEF906C1914F352282C57530468F78D34CB614AD6_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ParameterDefaultValue_TryGetDefaultValue_mF0A16E4084FB80A20B716E47AA85921AEB7F7E30(L_15, (RuntimeObject **)(&V_2), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_005e;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_17 = __this->get__parameters_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_22 = __this->get__constructor_0();
		NullCheck(L_22);
		Type_t * L_23;
		L_23 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_22);
		String_t* L_24;
		L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586)), L_21, L_23, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_25 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485_RuntimeMethod_var)));
	}

IL_005e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = __this->get__parameterValues_2();
		int32_t L_27 = V_0;
		RuntimeObject * L_28 = V_2;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_28);
		goto IL_0072;
	}

IL_0069:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = __this->get__parameterValues_2();
		int32_t L_30 = V_0;
		RuntimeObject * L_31 = V_1;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (RuntimeObject *)L_31);
	}

IL_0072:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_33 = V_0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_34 = __this->get__parameters_1();
		NullCheck(L_34);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_35 = __this->get__constructor_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = __this->get__parameterValues_2();
		NullCheck(L_35);
		RuntimeObject * L_37;
		L_37 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		goto IL_00c7;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{ // begin filter(depth: 1)
		bool __filter_local = false;
		try
		{ // begin implicit try block
			{
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_38 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IsInstSealed((RuntimeObject*)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var))));
				G_B12_0 = L_38;
				if (L_38)
				{
					G_B13_0 = L_38;
					goto IL_00a2;
				}
			}
			{
				G_B14_0 = 0;
				goto IL_00b1;
			}

IL_00a2:
			{
				V_4 = G_B13_0;
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_39 = V_4;
				NullCheck(L_39);
				Exception_t * L_40;
				L_40 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_39, /*hidden argument*/NULL);
				G_B14_0 = ((!(((uint32_t)((!(((RuntimeObject*)(Exception_t *)L_40) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) <= ((uint32_t)0)))? 1 : 0);
			}

IL_00b1:
			{
				__filter_local = (G_B14_0) ? true : false;
			}
		} // end implicit try block
		catch(Il2CppExceptionWrapper&)
		{ // begin implicit catch block
			__filter_local = false;
		} // end implicit catch block
		if (__filter_local)
		{
			goto FILTER_00b3;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485_RuntimeMethod_var)));
		}
	} // end filter (depth: 1)

FILTER_00b3:
	{ // begin catch(filter)
		TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_41 = V_4;
		NullCheck(L_41);
		Exception_t * L_42;
		L_42 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_41, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_43;
		L_43 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c7:
	{
		RuntimeObject * L_44 = V_3;
		return L_44;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B * _thisAdjusted = reinterpret_cast<ConstructorMatcher_tD2382E925102FAD4131CF148EE7642019C5CD49B *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = ConstructorMatcher_CreateInstance_m441CC2AF3C2AA64B1EFFBC98F67E53086D865485(_thisAdjusted, ___provider0, method);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E36ED202D1A83AE20A6B495988A0B70AF669FD9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * L_0 = (U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 *)il2cpp_codegen_object_new(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE49B009A8A339872AB7A8AD9EB3191487AD462FD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE49B009A8A339872AB7A8AD9EB3191487AD462FD (U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<Build>b__6_0(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec_U3CBuildU3Eb__6_0_m039E767683C38AE4357786FDAAA4B02A82DF91AA (U3CU3Ec_tA73A822E842E3C3987730DF945C41EA20C364100 * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___features0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0;
		L_0 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mC518F0C236815BE832CA54AB4EC04E64FF38CA6C (U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::<Use>b__0(Microsoft.AspNetCore.Connections.ConnectionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_m685969A7DE96BD09071A8B64DD70446CF50F6CB2 (U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * __this, ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___next0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m910D70DF77966966E08847208869DD823F9A28AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * L_0 = (U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_1__ctor_mF8CE9929381169FFFB34ACC225052175E83BF003(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * L_2 = L_1;
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_3 = ___next0;
		NullCheck(L_2);
		L_2->set_next_0(L_3);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_4 = (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 *)il2cpp_codegen_object_new(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		ConnectionDelegate__ctor_mD63B361D6645332978EDC0A9F56490E5C550CF0C(L_4, L_2, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m910D70DF77966966E08847208869DD823F9A28AF_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_4;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_mF8CE9929381169FFFB34ACC225052175E83BF003 (U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::<Use>b__1(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m910D70DF77966966E08847208869DD823F9A28AF (U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m8DDCB78497A7E1EE04230D626ED439C085AE1670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m18FC0651CE8BB29AEFF726F8C1C5C92DC2D84174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * V_0 = NULL;
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * L_0 = (U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_2__ctor_m9316C2D8C689B714A14199CFD76A6F77A54B43B1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals2_1(__this);
		U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * L_2 = V_0;
		ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_3 = ___context0;
		NullCheck(L_2);
		L_2->set_context_0(L_3);
		U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * L_4 = V_0;
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_5 = (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)il2cpp_codegen_object_new(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
		Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m18FC0651CE8BB29AEFF726F8C1C5C92DC2D84174_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
		V_1 = L_5;
		U3CU3Ec__DisplayClass1_0_t057502CFAD99347F7ED6115642752986ABC427F6 * L_6 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_6);
		Func_3_t99FE6F2C46E8989E6A4A69329CDF0A7779CF6D05 * L_7 = L_6->get_middleware_0();
		U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * L_8 = V_0;
		NullCheck(L_8);
		ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_9 = L_8->get_context_0();
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_10 = V_1;
		NullCheck(L_7);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = Func_3_Invoke_m8DDCB78497A7E1EE04230D626ED439C085AE1670(L_7, L_9, L_10, /*hidden argument*/Func_3_Invoke_m8DDCB78497A7E1EE04230D626ED439C085AE1670_RuntimeMethod_var);
		return L_11;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_2__ctor_m9316C2D8C689B714A14199CFD76A6F77A54B43B1 (U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::<Use>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m18FC0651CE8BB29AEFF726F8C1C5C92DC2D84174 (U3CU3Ec__DisplayClass1_2_t38D0AB4BAF53798E9A9730B54255F88AEFCBDBF4 * __this, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass1_1_tCEC42751F6360C4D9BFCC01C3A5CCC4E85E1B98A * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_0);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_1 = L_0->get_next_0();
		ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_2 = __this->get_context_0();
		NullCheck(L_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = ConnectionDelegate_Invoke_m594C66A85788595E3F86069C939A530A2ED6D6F4(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mAAA0407ACA84C6D2EF55F6E99B5AD9CC804638B5 (U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<Run>b__0(Microsoft.AspNetCore.Connections.ConnectionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m38B8C8FDECAD6EB3080298B8906D67811F42DE6C (U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * __this, ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * ___next0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m6F6830219F0A28440A81A194FE2A8ACFB456901C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * V_0 = NULL;
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * G_B2_0 = NULL;
	ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * G_B1_0 = NULL;
	{
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_0 = __this->get_U3CU3E9__1_1();
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_2 = (ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 *)il2cpp_codegen_object_new(ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7_il2cpp_TypeInfo_var);
		ConnectionDelegate__ctor_mD63B361D6645332978EDC0A9F56490E5C550CF0C(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m6F6830219F0A28440A81A194FE2A8ACFB456901C_RuntimeMethod_var), /*hidden argument*/NULL);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_3 = L_2;
		V_0 = L_3;
		__this->set_U3CU3E9__1_1(L_3);
		ConnectionDelegate_t75A7A077F84A012C192F19E6B6010A21710D2CF7 * L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<Run>b__1(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m6F6830219F0A28440A81A194FE2A8ACFB456901C (U3CU3Ec__DisplayClass2_0_tA33305DF1413035A6F20FA4ED812A41F517E008C * __this, ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m4917BDFF83239AAABF22298F381E7A45184527A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_t87882A753CE76B61A3AA681BF5797208BE23E3AD * L_0 = __this->get_middleware_0();
		ConnectionContext_t067FB60DE27F1A5A207ED2BDEF397CC649DC0BD2 * L_1 = ___context0;
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Func_2_Invoke_m4917BDFF83239AAABF22298F381E7A45184527A7(L_0, L_1, /*hidden argument*/Func_2_Invoke_m4917BDFF83239AAABF22298F381E7A45184527A7_RuntimeMethod_var);
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
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7BEE978304D952777B35005F2D1F742A6DC086AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * L_0 = (U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 *)il2cpp_codegen_object_new(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE42729D84C28EAF78916B2A0BB9A218EE9A398A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE42729D84C28EAF78916B2A0BB9A218EE9A398A0 (U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<Abort>b__39_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAbortU3Eb__39_0_mAAA2AC4C8688245665AD92D28CC707DFA5437C33 (U3CU3Ec_tD6205F8B7C714803D7E925A4D63FC9EF2A043B78 * __this, RuntimeObject * ___cts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___cts0;
		NullCheck(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9A9AFE473DE056B35F21DF876C90ECB214DC34BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * L_0 = (U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F *)il2cpp_codegen_object_new(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC61E12508BC1CF5D27D2BE97CCB54E68EA3CA923(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC61E12508BC1CF5D27D2BE97CCB54E68EA3CA923 (U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.MultiplexedConnectionBuilder/<>c::<Build>b__6_0(Microsoft.AspNetCore.Connections.MultiplexedConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec_U3CBuildU3Eb__6_0_mF2DF71165AF8A93AD0E82A28D3D8330011E721FD (U3CU3Ec_tEBF68CD87E1162DD3A4D6E73066BBF5464B5245F * __this, MultiplexedConnectionContext_t80008342F6EBF88C0A07099901A84E209264481F * ___features0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0;
		L_0 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_mE81BF5198E995D5282A3905448807EDD1D707357_inline (ConnectionItems_tAF717D6C5A54D721FAAD661616C7D5E134FFF04C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CItemsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_m7FC22D469AA47F243A5A37CD7A0CCECE965A01F1_inline (DefaultConnectionContext_t75A90E4AC2BC1D76DC885BEBAE9DA0745CB9D3C9 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CApplicationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * UriEndPoint_get_Uri_mBC7F5962D58B35A75B972DF188A88A02703C4BA5_inline (UriEndPoint_t7AE48AD8844F1E11ADA5BB907F6EACE79D8EA5D1 * __this, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_U3CUriU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
