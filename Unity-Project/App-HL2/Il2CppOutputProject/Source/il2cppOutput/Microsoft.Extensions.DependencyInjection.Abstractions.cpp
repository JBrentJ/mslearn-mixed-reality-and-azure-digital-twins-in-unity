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

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>
struct Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC;
// System.Linq.Expressions.Expression`1<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>
struct Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Func`2<System.IServiceProvider,System.Object>
struct Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<Microsoft.Extensions.DependencyInjection.ServiceDescriptor,System.Boolean>
struct Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88;
// System.Func`3<System.IServiceProvider,System.Object[],System.Object>
struct Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>
struct IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_t3970E0723A7C2FEA094E64207358CF587FA8010F;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t1BDA19F8C4CB4BE530A2234A21A1B2C9FB3B7991;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
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
// Microsoft.Extensions.DependencyInjection.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBB6B4EDE8B6569BCCD8FAF5B169305BE0D00FA36;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
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
// Microsoft.Extensions.DependencyInjection.IServiceCollection
struct IServiceCollection_t57EB6C7FCBB8474521DCF723E5EE206156BFFCF5;
// System.IServiceProvider
struct IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3;
// Microsoft.Extensions.DependencyInjection.IServiceScope
struct IServiceScope_t40C1B749060078B66A3A1B5CB2E980E5AFDA25D9;
// Microsoft.Extensions.DependencyInjection.IServiceScopeFactory
struct IServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
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
// System.Linq.Expressions.NewExpression
struct NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t40277AE6A2D679D218A48C9181DA932760D28C9E;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t924CB4B605BBB8E6C0CACCB3259A4FFA9C42F89F;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t0C598AE8534BF78A2C5FE836B841A18BD1770FB2;
// Microsoft.Extensions.DependencyInjection.ObjectFactory
struct ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785;
// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor
struct ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c
struct U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;
// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F;
// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5;
// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C;

IL2CPP_EXTERN_C RuntimeClass* ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6350180139E608CFC024A792373EE6BE02C21650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISupportRequiredService_t293F8CEF7CA7D4CAFD0CB630A564598315800CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceLifetime_t9DA8D0A18237F7BEF657C4FDB1423806DF1B26D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC;
IL2CPP_EXTERN_C String_t* _stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16;
IL2CPP_EXTERN_C String_t* _stringLiteral123A148507EE9AA988F24918EC9D63657EC9F74B;
IL2CPP_EXTERN_C String_t* _stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A;
IL2CPP_EXTERN_C String_t* _stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04;
IL2CPP_EXTERN_C String_t* _stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586;
IL2CPP_EXTERN_C String_t* _stringLiteral2F808A260DDA3BED57BF1251CA66AD92DC1FA24C;
IL2CPP_EXTERN_C String_t* _stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral613CD9F5AB80FD3364CC32C7D855B4ED8F18EF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D;
IL2CPP_EXTERN_C String_t* _stringLiteral64C7BF1ED7E82B4BA2573BBEF05D2C5D71A254F1;
IL2CPP_EXTERN_C String_t* _stringLiteral68FB1D2C9FFF0D771B9B705E90F8A5891EA88BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94;
IL2CPP_EXTERN_C String_t* _stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3;
IL2CPP_EXTERN_C String_t* _stringLiteral8414375DCEB07E1FC8C12D4D68E2DA9267885352;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E;
IL2CPP_EXTERN_C String_t* _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125;
IL2CPP_EXTERN_C String_t* _stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA;
IL2CPP_EXTERN_C String_t* _stringLiteralDF73B874236192E4304748C8C9159248D7F005AB;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_CreateInstance_mD7A5947AAF2D1EA0F6D1109CD2DA136B67F72DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_FindApplicableConstructor_m27CA2D4F76EC772A99EEEF7DBADDEFCD45BA28D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mE2BEDC812FF523C9BD07C77C924538BAE0ABDF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetService_m42BA3613B2F5E48E8A3DAF6839D5124887AE8E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_TryFindMatchingConstructor_m98449B5B013BFED16FBDB569B8E152E2EB68F40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m53B7D7A17DFB4F32EDE5BA842C15E5D87B0174DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mED40A806A5F5A534B270B6DF07DC4A70BE24D4CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_Add_m6145A6402F8B35EC63ED85CBADA008483E5A0A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_Add_mAC997DC3F3C4B295468FB8266380057502976DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_RemoveAll_m5F037FEBD2946503A023B16E2E86739AF282A5D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_Replace_m540958145822078E7917D4198EC4F5DDDEF1D99A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddEnumerable_m080B1307CDB0EF477D06E780ABEEB41C753E136D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddScoped_m6D027BBFB3381EE57151311D79B5EAE7F1F6D628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddScoped_mA6101C8AC3047E1F622D31A12056EF048F20835E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddScoped_mE23BB804CB40FDBF2BD00FD2E7D08BD60F68D914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddSingleton_m561B1BA6CD49A671555B063AD98CF3D7C1D99A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddSingleton_mB8C12887F82FEBA1BE356730AB1433CA30870017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddSingleton_mF41CA40CF5D63EF979FBA03C9B28BD54746AA84A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddTransient_m08EC0350ADE863EBC53D1C6BCAABDDE098DBA8A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddTransient_m5A48A0D40A4A8E321060A636663F997D8E341A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAddTransient_m644FCACABB98E32E98537A6A0BCA585A1B98CF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionDescriptorExtensions_TryAdd_mB415C05D07483CFE658E558CFBC2857D64FD0B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddScoped_m407B3D3610F11F5718321754A54679BE438094A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddScoped_m40F2A1BF0A9335DA8420DC98C243449F75BE202F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddSingleton_m2DD0593BDDD5EC8A57E7F5C0C1321DF2D14BB015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddSingleton_m6C879DDF30C37531BEBB0C7F35380368BCA9BE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddTransient_m4A7465212E1541FCA8E3330273B33B72F9E57DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollectionServiceExtensions_AddTransient_mC9BA5AC9F90B8897F3857D2FE1082AC1A660237E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Singleton_mC0CEA7E2026604D7A80CC79A502BCEB33B32D243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_m43D6D0E6B70BE6DA3245CEB58C7E28CF9499B0A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceProviderServiceExtensions_GetServices_m801847F651FE9EEEBC33D7F43960154F668855ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CTryAddEnumerableU3Eb__0_mA04608CC3BB8CF872188AE38A458A6B6A7A900DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CReplaceU3Eb__0_m164910373DC12D90C9D2035F9F774E57D286D487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CTryAddU3Eb__0_m9F48D10811079E7943B87DA4EBCC09DD0F53CDB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tB19313259C098F6F6351BADB65DFF8838F029D65_0_0_0_var;
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

struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
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
struct U3CModuleU3E_tE312D649F671CF4AB5A9DA623F00B8E9D9C7ED98 
{
public:

public:
};


// System.Object


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


// Microsoft.Extensions.DependencyInjection.ActivatorUtilities
struct ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03  : public RuntimeObject
{
public:

public:
};

struct ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_StaticFields
{
public:
	// System.Reflection.MethodInfo Microsoft.Extensions.DependencyInjection.ActivatorUtilities::GetServiceInfo
	MethodInfo_t * ___GetServiceInfo_0;

public:
	inline static int32_t get_offset_of_GetServiceInfo_0() { return static_cast<int32_t>(offsetof(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_StaticFields, ___GetServiceInfo_0)); }
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


// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916  : public RuntimeObject
{
public:

public:
};

struct ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_StaticFields
{
public:
	// System.Type Microsoft.Extensions.Internal.ParameterDefaultValue::_nullable
	Type_t * ____nullable_0;

public:
	inline static int32_t get_offset_of__nullable_0() { return static_cast<int32_t>(offsetof(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_StaticFields, ____nullable_0)); }
	inline Type_t * get__nullable_0() const { return ____nullable_0; }
	inline Type_t ** get_address_of__nullable_0() { return &____nullable_0; }
	inline void set__nullable_0(Type_t * value)
	{
		____nullable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullable_0), (void*)value);
	}
};


// FxResources.Microsoft.Extensions.DependencyInjection.Abstractions.SR
struct SR_tB19313259C098F6F6351BADB65DFF8838F029D65  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56  : public RuntimeObject
{
public:

public:
};

struct SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}
};


// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions
struct ServiceCollectionDescriptorExtensions_t828D77ED8EC22AD0C481FDD6B9544FC42BCF2131  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions
struct ServiceCollectionServiceExtensions_t0CA788A2BD8EA5CD890FC1D34D55B2187DAB74CE  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions
struct ServiceProviderServiceExtensions_t9D57FDD2E95C7BF76A63258EE70B66F3C688842A  : public RuntimeObject
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

// Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c
struct U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_StaticFields
{
public:
	// Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c::<>9
	U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F  : public RuntimeObject
{
public:
	// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0::descriptor
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor_0;
	// System.Type Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0::implementationType
	Type_t * ___implementationType_1;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F, ___descriptor_0)); }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * get_descriptor_0() const { return ___descriptor_0; }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}
};


// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5  : public RuntimeObject
{
public:
	// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0::descriptor
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5, ___descriptor_0)); }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * get_descriptor_0() const { return ___descriptor_0; }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C  : public RuntimeObject
{
public:
	// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0::descriptor
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C, ___descriptor_0)); }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * get_descriptor_0() const { return ___descriptor_0; }
	inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
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


// Microsoft.Extensions.DependencyInjection.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBB6B4EDE8B6569BCCD8FAF5B169305BE0D00FA36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t40277AE6A2D679D218A48C9181DA932760D28C9E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_t40277AE6A2D679D218A48C9181DA932760D28C9E, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t924CB4B605BBB8E6C0CACCB3259A4FFA9C42F89F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_t924CB4B605BBB8E6C0CACCB3259A4FFA9C42F89F, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t0C598AE8534BF78A2C5FE836B841A18BD1770FB2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;

public:
	inline static int32_t get_offset_of_IncludesInternals_0() { return static_cast<int32_t>(offsetof(NullablePublicOnlyAttribute_t0C598AE8534BF78A2C5FE836B841A18BD1770FB2, ___IncludesInternals_0)); }
	inline bool get_IncludesInternals_0() const { return ___IncludesInternals_0; }
	inline bool* get_address_of_IncludesInternals_0() { return &___IncludesInternals_0; }
	inline void set_IncludesInternals_0(bool value)
	{
		___IncludesInternals_0 = value;
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


// Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 
{
public:
	// System.Reflection.ConstructorInfo Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::_constructor
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ____constructor_0;
	// System.Reflection.ParameterInfo[] Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::_parameters
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ____parameters_1;
	// System.Object[] Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::_parameterValues
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____parameterValues_2;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35, ____constructor_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get__constructor_0() const { return ____constructor_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__parameters_1() { return static_cast<int32_t>(offsetof(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35, ____parameters_1)); }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* get__parameters_1() const { return ____parameters_1; }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** get_address_of__parameters_1() { return &____parameters_1; }
	inline void set__parameters_1(ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* value)
	{
		____parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of__parameterValues_2() { return static_cast<int32_t>(offsetof(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35, ____parameterValues_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__parameterValues_2() const { return ____parameterValues_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__parameterValues_2() { return &____parameterValues_2; }
	inline void set__parameterValues_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____parameterValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterValues_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_pinvoke
{
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ____constructor_0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke** ____parameters_1;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____parameterValues_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_com
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


// Microsoft.Extensions.DependencyInjection.ServiceLifetime
struct ServiceLifetime_t9DA8D0A18237F7BEF657C4FDB1423806DF1B26D5 
{
public:
	// System.Int32 Microsoft.Extensions.DependencyInjection.ServiceLifetime::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceLifetime_t9DA8D0A18237F7BEF657C4FDB1423806DF1B26D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
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


// Microsoft.Extensions.DependencyInjection.ServiceDescriptor
struct ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C  : public RuntimeObject
{
public:
	// Microsoft.Extensions.DependencyInjection.ServiceLifetime Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<Lifetime>k__BackingField
	int32_t ___U3CLifetimeU3Ek__BackingField_0;
	// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ServiceType>k__BackingField
	Type_t * ___U3CServiceTypeU3Ek__BackingField_1;
	// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationType>k__BackingField
	Type_t * ___U3CImplementationTypeU3Ek__BackingField_2;
	// System.Object Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationInstance>k__BackingField
	RuntimeObject * ___U3CImplementationInstanceU3Ek__BackingField_3;
	// System.Func`2<System.IServiceProvider,System.Object> Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationFactory>k__BackingField
	Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___U3CImplementationFactoryU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CLifetimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C, ___U3CLifetimeU3Ek__BackingField_0)); }
	inline int32_t get_U3CLifetimeU3Ek__BackingField_0() const { return ___U3CLifetimeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLifetimeU3Ek__BackingField_0() { return &___U3CLifetimeU3Ek__BackingField_0; }
	inline void set_U3CLifetimeU3Ek__BackingField_0(int32_t value)
	{
		___U3CLifetimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CServiceTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C, ___U3CServiceTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CServiceTypeU3Ek__BackingField_1() const { return ___U3CServiceTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CServiceTypeU3Ek__BackingField_1() { return &___U3CServiceTypeU3Ek__BackingField_1; }
	inline void set_U3CServiceTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CServiceTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImplementationTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C, ___U3CImplementationTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CImplementationTypeU3Ek__BackingField_2() const { return ___U3CImplementationTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CImplementationTypeU3Ek__BackingField_2() { return &___U3CImplementationTypeU3Ek__BackingField_2; }
	inline void set_U3CImplementationTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CImplementationTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImplementationTypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImplementationInstanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C, ___U3CImplementationInstanceU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CImplementationInstanceU3Ek__BackingField_3() const { return ___U3CImplementationInstanceU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CImplementationInstanceU3Ek__BackingField_3() { return &___U3CImplementationInstanceU3Ek__BackingField_3; }
	inline void set_U3CImplementationInstanceU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CImplementationInstanceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImplementationInstanceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImplementationFactoryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C, ___U3CImplementationFactoryU3Ek__BackingField_4)); }
	inline Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * get_U3CImplementationFactoryU3Ek__BackingField_4() const { return ___U3CImplementationFactoryU3Ek__BackingField_4; }
	inline Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 ** get_address_of_U3CImplementationFactoryU3Ek__BackingField_4() { return &___U3CImplementationFactoryU3Ek__BackingField_4; }
	inline void set_U3CImplementationFactoryU3Ek__BackingField_4(Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * value)
	{
		___U3CImplementationFactoryU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImplementationFactoryU3Ek__BackingField_4), (void*)value);
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


// System.Func`2<System.IServiceProvider,System.Object>
struct Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.Extensions.DependencyInjection.ServiceDescriptor,System.Boolean>
struct Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88  : public MulticastDelegate_t
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


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
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


// Microsoft.Extensions.DependencyInjection.ObjectFactory
struct ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785  : public MulticastDelegate_t
{
public:

public:
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


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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
// System.Reflection.MethodInfo Microsoft.Extensions.DependencyInjection.ActivatorUtilities::GetMethodInfo<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ActivatorUtilities_GetMethodInfo_TisRuntimeObject_mFBFC5E58910D5BA14BFB74DC1019C00BA3B3C301_gshared (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___expr0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m79E5BEA29E663B44BB9C1BDD62286D214D22E600_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// T Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::GetRequiredService<System.Object>(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ServiceProviderServiceExtensions_GetRequiredService_TisRuntimeObject_mA14AB78394ABB37809D5BC62A761275DC775F5AB_gshared (RuntimeObject* ___provider0, const RuntimeMethod* method);

// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_mD65CD145DEC0C6F2F7F6E729A36C761FD2A97271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_mD805E357DD45F90185A2164C151C6E6CF71ADCF5 (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_m30B5C1B863BE055DA0D1A6A02A39CF2B75799FAA (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5 (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493 (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m27CA2D4F76EC772A99EEEF7DBADDEFCD45BA28D0 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333 (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression Microsoft.Extensions.DependencyInjection.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ActivatorUtilities_BuildFactoryExpression_mB19B310C17B08DB6C1DB537F17F1493091E26D03 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* ___parameterMap1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___serviceProvider2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___factoryArgumentArray3, const RuntimeMethod* method);
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
// System.Void Microsoft.Extensions.DependencyInjection.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_m8EAEED6EE6307D9063B3BAC1C8C4D38431B1BE37 (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_CreateInstance_mD7A5947AAF2D1EA0F6D1109CD2DA136B67F72DE2 (RuntimeObject* ___provider0, Type_t * ___instanceType1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.ParameterDefaultValue::TryGetDefaultValue(System.Reflection.ParameterInfo,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0 (ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, RuntimeObject ** ___defaultValue1, const RuntimeMethod* method);
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
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_m0C820E5C6468CB241F05F58C481C06EFE51F255F (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_m98449B5B013BFED16FBDB569B8E152E2EB68F40A (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_m532EAC7558450CC267868211335007B40DCD62D4 (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___constructorParameters0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap2, const RuntimeMethod* method);
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
// System.Reflection.MethodInfo Microsoft.Extensions.DependencyInjection.ActivatorUtilities::GetMethodInfo<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>(System.Linq.Expressions.Expression`1<T>)
inline MethodInfo_t * ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mE2BEDC812FF523C9BD07C77C924538BAE0ABDF7B (Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 * ___expr0, const RuntimeMethod* method)
{
	return ((  MethodInfo_t * (*) (Expression_1_t10036C5A9CB2D790D31B19F936043FFEAD42D9F5 *, const RuntimeMethod*))ActivatorUtilities_GetMethodInfo_TisRuntimeObject_mFBFC5E58910D5BA14BFB74DC1019C00BA3B3C301_gshared)(___expr0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
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
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mC288B3AAC1525D85E0984E3CCD9AC5D13A6F5ADD (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
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
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m70F5839B8C428AC93E7F9FD16732B2FCAAD5666D (U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Microsoft.Extensions.DependencyInjection.ServiceDescriptor,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078 (Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2 (RuntimeObject* ___source0, Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m79E5BEA29E663B44BB9C1BDD62286D214D22E600_gshared)(___source0, ___predicate1, method);
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAdd(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229 (RuntimeObject* ___collection0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301 (Type_t * ___service0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417 (Type_t * ___service0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791 (Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m8C944CFC06EDAC94AE4A0C83A5CB3F641A6CC3F9 (U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * __this, const RuntimeMethod* method);
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::GetImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_GetImplementationType_m805957DA69C42B21B4937555D04BCCB712B247D7 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ServiceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.String System.SR::get_TryAddIndistinguishableTypeToEnumerable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TryAddIndistinguishableTypeToEnumerable_m4EFADF01B029D27B4CC497C9242D004BE0B81A69 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mDF22BF68931E654707A9C21CE2925F4C54FBF44C (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddEnumerable(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB (RuntimeObject* ___services0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m195630A78C658238611CDB9232A05B0AD61ECC44 (U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * Enumerable_FirstOrDefault_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m53B7D7A17DFB4F32EDE5BA842C15E5D87B0174DB (RuntimeObject* ___source0, Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * ___predicate1, const RuntimeMethod* method)
{
	return ((  ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * (*) (RuntimeObject*, Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_m08B0ABDB33EAE09CFA9899B92B57E3A6F7A48F8E (RuntimeObject* ___collection0, Type_t * ___serviceType1, Type_t * ___implementationType2, int32_t ___lifetime3, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_m9A4A000D4840A276E2060000F1FEBAFFD64E93F3 (RuntimeObject* ___collection0, Type_t * ___serviceType1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, int32_t ___lifetime3, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, RuntimeObject * ___instance1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, Type_t * ___implementationType1, int32_t ___lifetime2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___factory1, int32_t ___lifetime2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m6F11C7AB4521E69DBB53C1244236CBFCF37D178A (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, int32_t ___lifetime1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceLifetime Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_Lifetime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mA7FC93C84333BE17621A6F14C0D7EE755CCEE614_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Func`2<System.IServiceProvider,System.Object> Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Describe(System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Describe_m5EF2EEF51884152A77CEB40BA0BC107A4CBE5D10 (Type_t * ___serviceType0, Type_t * ___implementationType1, int32_t ___lifetime2, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Describe(System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Describe_m673CD137D92037E7EBE45BA9666C91E6C5E7B9AD (Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, int32_t ___lifetime2, const RuntimeMethod* method);
// System.String System.SR::get_NoServiceRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoServiceRegistered_mE298B1D15EDB2A81553D3FA15886061E7AF69AF1 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mADD68C8D2C34BBB960E93A5BEF6600FCA482811C (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::GetRequiredService(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4 (RuntimeObject* ___provider0, Type_t * ___serviceType1, const RuntimeMethod* method);
// T Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::GetRequiredService<Microsoft.Extensions.DependencyInjection.IServiceScopeFactory>(System.IServiceProvider)
inline RuntimeObject* ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_m43D6D0E6B70BE6DA3245CEB58C7E28CF9499B0A7 (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ServiceProviderServiceExtensions_GetRequiredService_TisRuntimeObject_mA14AB78394ABB37809D5BC62A761275DC775F5AB_gshared)(___provider0, method);
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2CE78F52061DA4A0B4C510BE113426BA4CDEBF48 (U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
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
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_CreateInstance_mD7A5947AAF2D1EA0F6D1109CD2DA136B67F72DE2 (RuntimeObject* ___provider0, Type_t * ___instanceType1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC59259B47D9471B8536841275870E734976448FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4BFE67216A2B07A7043D93D196883400E1A19BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_4 = NULL;
	ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (-1);
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 ));
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
			ConstructorMatcher__ctor_mD805E357DD45F90185A2164C151C6E6CF71ADCF5((ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *)(&V_5), L_13, /*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_14 = V_4;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_16;
			L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_17;
			L_17 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_14, L_16, (bool)0);
			V_6 = L_17;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = ___parameters2;
			int32_t L_19;
			L_19 = ConstructorMatcher_Match_m30B5C1B863BE055DA0D1A6A02A39CF2B75799FAA((ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *)(&V_5), L_18, /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5(/*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890(/*hidden argument*/NULL);
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
			ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35  L_27 = V_5;
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
			goto IL_00c7;
		}
	}
	{
		Type_t * L_35 = ___instanceType1;
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		String_t* L_37 = V_8;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_38 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_CreateInstance_mD7A5947AAF2D1EA0F6D1109CD2DA136B67F72DE2_RuntimeMethod_var)));
	}

IL_00c7:
	{
		RuntimeObject* L_39 = ___provider0;
		RuntimeObject * L_40;
		L_40 = ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493((ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *)(&V_2), L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// Microsoft.Extensions.DependencyInjection.ObjectFactory Microsoft.Extensions.DependencyInjection.ActivatorUtilities::CreateFactory(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * ActivatorUtilities_CreateFactory_mC62EF451A59984E2D9474906581D35BB501AC514 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785_il2cpp_TypeInfo_var);
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
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_4 = NULL;
	Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * V_5 = NULL;
	Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * V_6 = NULL;
	{
		Type_t * L_0 = ___instanceType0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = ___argumentTypes1;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		ActivatorUtilities_FindApplicableConstructor_m27CA2D4F76EC772A99EEEF7DBADDEFCD45BA28D0(L_0, L_1, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)(&V_0), (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_1), /*hidden argument*/NULL);
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
		L_12 = ActivatorUtilities_BuildFactoryExpression_mB19B310C17B08DB6C1DB537F17F1493091E26D03(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_13 = V_4;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_14 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_15 = L_14;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_16);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_17 = L_15;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_18 = V_3;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_18);
		Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * L_19;
		L_19 = Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80(L_13, L_17, /*hidden argument*/Expression_Lambda_TisFunc_3_t600E866BDC4F5A7563A8F58952241C9A622FA906_m44C53E8D8537C7E952F22D990353D78148EFDA80_RuntimeMethod_var);
		V_5 = L_19;
		Expression_1_t07F364A96B54A962D40EEBDD353BB19D20753ABC * L_20 = V_5;
		NullCheck(L_20);
		Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * L_21;
		L_21 = Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4(L_20, /*hidden argument*/Expression_1_Compile_mB1700764E9281809A807D1E56DA2511424B80FE4_RuntimeMethod_var);
		V_6 = L_21;
		Func_3_t600E866BDC4F5A7563A8F58952241C9A622FA906 * L_22 = V_6;
		ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * L_23 = (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 *)il2cpp_codegen_object_new(ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785_il2cpp_TypeInfo_var);
		ObjectFactory__ctor_m8EAEED6EE6307D9063B3BAC1C8C4D38431B1BE37(L_23, L_22, (intptr_t)((intptr_t)Func_3_Invoke_mA4C7B294684564D783BBEBB2ED65F500ACC5F4BB_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities::GetServiceOrCreateInstance(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_GetServiceOrCreateInstance_m708C6804C372EA83843652653306ADB2889A90FA (RuntimeObject* ___provider0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = ActivatorUtilities_CreateInstance_mD7A5947AAF2D1EA0F6D1109CD2DA136B67F72DE2(L_4, L_5, L_6, /*hidden argument*/NULL);
		G_B2_0 = L_7;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities::GetService(System.IServiceProvider,System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ActivatorUtilities_GetService_m42BA3613B2F5E48E8A3DAF6839D5124887AE8E4F (RuntimeObject* ___sp0, Type_t * ___type1, Type_t * ___requiredBy2, bool ___isDefaultParameterRequired3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___sp0;
		Type_t * L_1 = ___type1;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		bool L_4 = ___isDefaultParameterRequired3;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_5 = ___type1;
		Type_t * L_6 = ___requiredBy2;
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586)), L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_GetService_m42BA3613B2F5E48E8A3DAF6839D5124887AE8E4F_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Linq.Expressions.Expression Microsoft.Extensions.DependencyInjection.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ActivatorUtilities_BuildFactoryExpression_mB19B310C17B08DB6C1DB537F17F1493091E26D03 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* ___parameterMap1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___serviceProvider2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___factoryArgumentArray3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_1 = NULL;
	int32_t V_2 = 0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * V_3 = NULL;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject * V_6 = NULL;
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_7 = NULL;
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * V_8 = NULL;
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
		goto IL_00e1;
	}

IL_0017:
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = V_3;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		V_4 = L_9;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0(L_10, (RuntimeObject **)(&V_6), /*hidden argument*/NULL);
		V_5 = L_11;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_12 = ___parameterMap1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_15 = V_1;
		int32_t L_16 = V_2;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_17 = ___factoryArgumentArray3;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_18 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_19 = L_18;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_20 = ___parameterMap1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23 = (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24 = L_23;
		RuntimeObject * L_25 = Box(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_26;
		L_26 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_25, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_26);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_26);
		IndexExpression_t9AD464D53B8462904096A225217131CEB4406AFD * L_27;
		L_27 = Expression_ArrayAccess_m69590906EAB409F36EAF6AC90780061A034BFDF1(L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_27);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_27);
		goto IL_00b6;
	}

IL_0060:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_28 = (ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63*)SZArrayNew(ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_29 = L_28;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_30 = ___serviceProvider2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_30);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_31 = L_29;
		Type_t * L_32 = V_4;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_35;
		L_35 = Expression_Constant_m014E12A7CCA8E2705E27CA97B85616EBE181F3FF(L_32, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_35);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_36 = L_31;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_37 = ___constructor0;
		NullCheck(L_37);
		Type_t * L_38;
		L_38 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_37);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_40;
		L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_41;
		L_41 = Expression_Constant_m014E12A7CCA8E2705E27CA97B85616EBE181F3FF(L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_41);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_41);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_42 = L_36;
		bool L_43 = V_5;
		bool L_44 = L_43;
		RuntimeObject * L_45 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_44);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_46;
		L_46 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_45, /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_46);
		V_7 = L_42;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_47 = V_1;
		int32_t L_48 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		MethodInfo_t * L_49 = ((ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var))->get_GetServiceInfo_0();
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_50 = V_7;
		MethodCallExpression_tF8E07995EEDB83A97C356206D651D5EEC72EFFA4 * L_51;
		L_51 = Expression_Call_m8A6605235C5D165C397CE090BD478E10BD7EF47A(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_51);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_51);
	}

IL_00b6:
	{
		bool L_52 = V_5;
		if (!L_52)
		{
			goto IL_00d0;
		}
	}
	{
		RuntimeObject * L_53 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_54;
		L_54 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_53, /*hidden argument*/NULL);
		V_8 = L_54;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_55 = V_1;
		int32_t L_56 = V_2;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_57 = V_1;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_61 = V_8;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_62;
		L_62 = Expression_Coalesce_mBC30867EA3BD5C14799ACFCABFC1B81D36D58B68(L_60, L_61, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_62);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_62);
	}

IL_00d0:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_63 = V_1;
		int32_t L_64 = V_2;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_65 = V_1;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Type_t * L_69 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_70;
		L_70 = Expression_Convert_m494826A3729B238263D95E7D7B0E236DE3B1CDA7(L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_70);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_70);
		int32_t L_71 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_00e1:
	{
		int32_t L_72 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_73 = V_0;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_74 = ___constructor0;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_75 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		NewExpression_tCC2B6EAD4868381D56BB8B1AA4C5267F8A620987 * L_76;
		L_76 = Expression_New_m2882BB14B028BB929C441981105893FBF99CA268(L_74, L_75, /*hidden argument*/NULL);
		return L_76;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m27CA2D4F76EC772A99EEEF7DBADDEFCD45BA28D0 (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
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
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ActivatorUtilities_TryFindPreferredConstructor_m0C820E5C6468CB241F05F58C481C06EFE51F255F(L_2, L_3, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_4, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_7 = ___instanceType0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = ___argumentTypes1;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** L_9 = ___matchingConstructor2;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** L_10 = ___parameterMap3;
		IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ActivatorUtilities_TryFindMatchingConstructor_m98449B5B013BFED16FBDB569B8E152E2EB68F40A(L_7, L_8, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B **)L_9, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_12 = ___instanceType0;
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_15 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_FindApplicableConstructor_m27CA2D4F76EC772A99EEEF7DBADDEFCD45BA28D0_RuntimeMethod_var)));
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_m98449B5B013BFED16FBDB569B8E152E2EB68F40A (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = ActivatorUtilities_TryCreateParameterMap_m532EAC7558450CC267868211335007B40DCD62D4(L_11, L_12, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_2), /*hidden argument*/NULL);
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
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_TryFindMatchingConstructor_m98449B5B013BFED16FBDB569B8E152E2EB68F40A_RuntimeMethod_var)));
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
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_m0C820E5C6468CB241F05F58C481C06EFE51F255F (Type_t * ___instanceType0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** ___matchingConstructor2, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
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
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530_0_0_0_var) };
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
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5(/*hidden argument*/NULL);
		}

IL_0047:
		{
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_15 = V_2;
			NullCheck(L_15);
			ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_16;
			L_16 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_15);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = ___argumentTypes1;
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = ActivatorUtilities_TryCreateParameterMap_m532EAC7558450CC267868211335007B40DCD62D4(L_16, L_17, (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84**)(&V_3), /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
			ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890(/*hidden argument*/NULL);
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
// System.Boolean Microsoft.Extensions.DependencyInjection.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_m532EAC7558450CC267868211335007B40DCD62D4 (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___constructorParameters0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes1, Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** ___parameterMap2, const RuntimeMethod* method)
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
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5 (const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mAF9AAB9824D303633197F2DAD5522F21FAFA32E5_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890 (const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_mA823CD0B9CBD8AC882DF18D2B6EA4577373E1890_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities__cctor_m9D0CCFAC9F905B28A7F39C8B0460357B2DA136E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mE2BEDC812FF523C9BD07C77C924538BAE0ABDF7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetService_m42BA3613B2F5E48E8A3DAF6839D5124887AE8E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var);
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
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_12 = { reinterpret_cast<intptr_t> (ActivatorUtilities_GetService_m42BA3613B2F5E48E8A3DAF6839D5124887AE8E4F_RuntimeMethod_var) };
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
		L_34 = ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mE2BEDC812FF523C9BD07C77C924538BAE0ABDF7B(L_33, /*hidden argument*/ActivatorUtilities_GetMethodInfo_TisFunc_5_t4EB21632069083794EA81150A80645E837D3BB9D_mE2BEDC812FF523C9BD07C77C924538BAE0ABDF7B_RuntimeMethod_var);
		((ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t822E2D8863DFADC122CEAF5EE9A9E0F351B56E03_il2cpp_TypeInfo_var))->set_GetServiceInfo_0(L_34);
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
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilitiesConstructorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilitiesConstructorAttribute__ctor_m231BAA40A27EBEECBF8A87E9D82C1A53E0C3B521 (ActivatorUtilitiesConstructorAttribute_tD63068783612F4D0D5AC1307920333991AECF530 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mA55DCEDC8DCC9A8BD91DBC8414ED09096C569258 (EmbeddedAttribute_tBB6B4EDE8B6569BCCD8FAF5B169305BE0D00FA36 * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m8905906A4BE7D0497E35B7ACDE516A3AE7B5F64C (NullableAttribute_t40277AE6A2D679D218A48C9181DA932760D28C9E * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mB40B6295AA4F3124B6976010DA10589E626D091A (NullableAttribute_t40277AE6A2D679D218A48C9181DA932760D28C9E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mE176E57C120C8789F415AAF677CD18416836391A (NullableContextAttribute_t924CB4B605BBB8E6C0CACCB3259A4FFA9C42F89F * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m4114175037AD5184C6E65721A179A8BDA8B737B7 (NullablePublicOnlyAttribute_t0C598AE8534BF78A2C5FE836B841A18BD1770FB2 * __this, bool p0, const RuntimeMethod* method)
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
// System.Void Microsoft.Extensions.DependencyInjection.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_m8EAEED6EE6307D9063B3BAC1C8C4D38431B1BE37 (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Microsoft.Extensions.DependencyInjection.ObjectFactory::Invoke(System.IServiceProvider,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectFactory_Invoke_mC0D33CC815EBF382B1208241D0BF3D8804B4393C (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments1, const RuntimeMethod* method)
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
// System.IAsyncResult Microsoft.Extensions.DependencyInjection.ObjectFactory::BeginInvoke(System.IServiceProvider,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectFactory_BeginInvoke_m8AA2202DF532667218D7D0415E7C48833BC73C5D (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___serviceProvider0;
	__d_args[1] = ___arguments1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Object Microsoft.Extensions.DependencyInjection.ObjectFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectFactory_EndInvoke_mDB03B29C6382613E2BD4A996F3214BC208306DE6 (ObjectFactory_t0A05F45B08A5A00E31890FA8ACD3B9BC0CABD785 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0 (ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, RuntimeObject ** ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
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
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0_RuntimeMethod_var)));
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
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
		Type_t * L_31 = ((ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var))->get__nullable_0();
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__ctor_m29DBD18F17037831B0F8B70B409637C52508DCB9 (ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.ParameterDefaultValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__cctor_mD3979F88BEBD751912F738788D4E42836E6A5217 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var))->set__nullable_0(L_1);
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
		L_4 = SR_get_ResourceManager_mC288B3AAC1525D85E0984E3CCD9AC5D13A6F5ADD(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mADD68C8D2C34BBB960E93A5BEF6600FCA482811C (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mDF22BF68931E654707A9C21CE2925F4C54FBF44C (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m8BC23E1A6FA032E9EC5C6AF1B3113DC6E7BEC37D (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m47050611A32A1641C0F94B6950CDFD6A62FB55BC (String_t* ___resourceFormat0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m3FD3F4D9FFA017A6E5477BF629C507564F4E07C9 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m21FE78DCD2374CB4194940B68D042FD7394985B2 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m5F423A07215A23ABC9FD0C8447ED4DC09EB2C921 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, RuntimeObject * ___p34, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m43C494AD077DFECDAA70E04277BCF9E9B8C05777 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_mB6D8168AC3FE8E6628C9ABF53B0BC95847CB056D(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mC288B3AAC1525D85E0984E3CCD9AC5D13A6F5ADD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tB19313259C098F6F6351BADB65DFF8838F029D65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_tB19313259C098F6F6351BADB65DFF8838F029D65_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFE88BB1AA9E2E3AD30963C88984B65EC75CC2F56_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_AmbiguousConstructorMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_AmbiguousConstructorMatch_m93A52BB3362A7A39C2A03DCCFE9D809210B57A77 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64C7BF1ED7E82B4BA2573BBEF05D2C5D71A254F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral64C7BF1ED7E82B4BA2573BBEF05D2C5D71A254F1, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_CannotLocateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_CannotLocateImplementation_m342B34BD488BEF6B71A123129EB00FA3EA2C6049 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8414375DCEB07E1FC8C12D4D68E2DA9267885352);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral8414375DCEB07E1FC8C12D4D68E2DA9267885352, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_CannotResolveService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_CannotResolveService_m836519FC9028F240A36106F064CA3B437013D275 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral613CD9F5AB80FD3364CC32C7D855B4ED8F18EF6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral613CD9F5AB80FD3364CC32C7D855B4ED8F18EF6A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NoConstructorMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoConstructorMatch_mEDBB9FBE0BFF5CB821E38213CD4ADE28517BCBAE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F808A260DDA3BED57BF1251CA66AD92DC1FA24C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral2F808A260DDA3BED57BF1251CA66AD92DC1FA24C, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NoServiceRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoServiceRegistered_mE298B1D15EDB2A81553D3FA15886061E7AF69AF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_TryAddIndistinguishableTypeToEnumerable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TryAddIndistinguishableTypeToEnumerable_m4EFADF01B029D27B4CC497C9242D004BE0B81A69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123A148507EE9AA988F24918EC9D63657EC9F74B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m97000FDF2658FB5A59008B560268BBC3F165C4D5(_stringLiteral123A148507EE9AA988F24918EC9D63657EC9F74B, (String_t*)NULL, /*hidden argument*/NULL);
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
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionDescriptorExtensions_Add_mAC997DC3F3C4B295468FB8266380057502976DA3 (RuntimeObject* ___collection0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Add_mAC997DC3F3C4B295468FB8266380057502976DA3_RuntimeMethod_var)));
	}

IL_000e:
	{
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = ___descriptor1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Add_mAC997DC3F3C4B295468FB8266380057502976DA3_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_5 = ___descriptor1;
		NullCheck(L_4);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___collection0;
		return L_6;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionDescriptorExtensions_Add_m6145A6402F8B35EC63ED85CBADA008483E5A0A11 (RuntimeObject* ___collection0, RuntimeObject* ___descriptors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Add_m6145A6402F8B35EC63ED85CBADA008483E5A0A11_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___descriptors1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Add_m6145A6402F8B35EC63ED85CBADA008483E5A0A11_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___descriptors1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::GetEnumerator() */, IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
			L_7 = InterfaceFuncInvoker0< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::get_Current() */, IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			RuntimeObject* L_8 = ___collection0;
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_8, L_9);
		}

IL_0033:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0025;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		RuntimeObject* L_14 = ___collection0;
		return L_14;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAdd(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229 (RuntimeObject* ___collection0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CTryAddU3Eb__0_m9F48D10811079E7943B87DA4EBCC09DD0F53CDB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * L_0 = (U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m70F5839B8C428AC93E7F9FD16732B2FCAAD5666D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * L_1 = V_0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->set_descriptor_0(L_2);
		RuntimeObject* L_3 = ___collection0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229_RuntimeMethod_var)));
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * L_5 = V_0;
		NullCheck(L_5);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_6 = L_5->get_descriptor_0();
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_8 = ___collection0;
		U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * L_9 = V_0;
		Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * L_10 = (Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *)il2cpp_codegen_object_new(Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CTryAddU3Eb__0_m9F48D10811079E7943B87DA4EBCC09DD0F53CDB1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		bool L_11;
		L_11 = Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2(L_8, L_10, /*hidden argument*/Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_12 = ___collection0;
		U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * L_13 = V_0;
		NullCheck(L_13);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_14 = L_13->get_descriptor_0();
		NullCheck(L_12);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_12, L_14);
	}

IL_004e:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAdd(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_mB415C05D07483CFE658E558CFBC2857D64FD0B19 (RuntimeObject* ___collection0, RuntimeObject* ___descriptors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAdd_mB415C05D07483CFE658E558CFBC2857D64FD0B19_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___descriptors1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAdd_mB415C05D07483CFE658E558CFBC2857D64FD0B19_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___descriptors1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::GetEnumerator() */, IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
			L_7 = InterfaceFuncInvoker0< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::get_Current() */, IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			RuntimeObject* L_8 = ___collection0;
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_1;
			ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_8, L_9, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0025;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddTransient_m08EC0350ADE863EBC53D1C6BCAABDDE098DBA8A2 (RuntimeObject* ___collection0, Type_t * ___service1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m08EC0350ADE863EBC53D1C6BCAABDDE098DBA8A2_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m08EC0350ADE863EBC53D1C6BCAABDDE098DBA8A2_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___service1;
		Type_t * L_6 = ___service1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddTransient_m644FCACABB98E32E98537A6A0BCA585A1B98CF88 (RuntimeObject* ___collection0, Type_t * ___service1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m644FCACABB98E32E98537A6A0BCA585A1B98CF88_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m644FCACABB98E32E98537A6A0BCA585A1B98CF88_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m644FCACABB98E32E98537A6A0BCA585A1B98CF88_RuntimeMethod_var)));
	}

IL_0036:
	{
		Type_t * L_8 = ___service1;
		Type_t * L_9 = ___implementationType2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_10;
		L_10 = ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		RuntimeObject* L_11 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_12 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddTransient_m5A48A0D40A4A8E321060A636663F997D8E341A0E (RuntimeObject* ___collection0, Type_t * ___service1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m5A48A0D40A4A8E321060A636663F997D8E341A0E_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m5A48A0D40A4A8E321060A636663F997D8E341A0E_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddTransient_m5A48A0D40A4A8E321060A636663F997D8E341A0E_RuntimeMethod_var)));
	}

IL_0030:
	{
		Type_t * L_7 = ___service1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_8 = ___implementationFactory2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9;
		L_9 = ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject* L_10 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_11 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddScoped_m6D027BBFB3381EE57151311D79B5EAE7F1F6D628 (RuntimeObject* ___collection0, Type_t * ___service1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_m6D027BBFB3381EE57151311D79B5EAE7F1F6D628_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_m6D027BBFB3381EE57151311D79B5EAE7F1F6D628_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___service1;
		Type_t * L_6 = ___service1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddScoped_mE23BB804CB40FDBF2BD00FD2E7D08BD60F68D914 (RuntimeObject* ___collection0, Type_t * ___service1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mE23BB804CB40FDBF2BD00FD2E7D08BD60F68D914_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mE23BB804CB40FDBF2BD00FD2E7D08BD60F68D914_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mE23BB804CB40FDBF2BD00FD2E7D08BD60F68D914_RuntimeMethod_var)));
	}

IL_0036:
	{
		Type_t * L_8 = ___service1;
		Type_t * L_9 = ___implementationType2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_10;
		L_10 = ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		RuntimeObject* L_11 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_12 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddScoped_mA6101C8AC3047E1F622D31A12056EF048F20835E (RuntimeObject* ___collection0, Type_t * ___service1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mA6101C8AC3047E1F622D31A12056EF048F20835E_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mA6101C8AC3047E1F622D31A12056EF048F20835E_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddScoped_mA6101C8AC3047E1F622D31A12056EF048F20835E_RuntimeMethod_var)));
	}

IL_0030:
	{
		Type_t * L_7 = ___service1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_8 = ___implementationFactory2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9;
		L_9 = ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject* L_10 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_11 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddSingleton_m561B1BA6CD49A671555B063AD98CF3D7C1D99A6E (RuntimeObject* ___collection0, Type_t * ___service1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_m561B1BA6CD49A671555B063AD98CF3D7C1D99A6E_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_m561B1BA6CD49A671555B063AD98CF3D7C1D99A6E_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___service1;
		Type_t * L_6 = ___service1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddSingleton_mF41CA40CF5D63EF979FBA03C9B28BD54746AA84A (RuntimeObject* ___collection0, Type_t * ___service1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mF41CA40CF5D63EF979FBA03C9B28BD54746AA84A_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mF41CA40CF5D63EF979FBA03C9B28BD54746AA84A_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mF41CA40CF5D63EF979FBA03C9B28BD54746AA84A_RuntimeMethod_var)));
	}

IL_0036:
	{
		Type_t * L_8 = ___service1;
		Type_t * L_9 = ___implementationType2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_10;
		L_10 = ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		RuntimeObject* L_11 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_12 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddSingleton_mB8C12887F82FEBA1BE356730AB1433CA30870017 (RuntimeObject* ___collection0, Type_t * ___service1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mB8C12887F82FEBA1BE356730AB1433CA30870017_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___service1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mB8C12887F82FEBA1BE356730AB1433CA30870017_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddSingleton_mB8C12887F82FEBA1BE356730AB1433CA30870017_RuntimeMethod_var)));
	}

IL_0030:
	{
		Type_t * L_7 = ___service1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_8 = ___implementationFactory2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9;
		L_9 = ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject* L_10 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_11 = V_0;
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddEnumerable(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB (RuntimeObject* ___services0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CTryAddEnumerableU3Eb__0_mA04608CC3BB8CF872188AE38A458A6B6A7A900DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_0 = (U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass23_0__ctor_m8C944CFC06EDAC94AE4A0C83A5CB3F641A6CC3F9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_1 = V_0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->set_descriptor_0(L_2);
		RuntimeObject* L_3 = ___services0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB_RuntimeMethod_var)));
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_5 = V_0;
		NullCheck(L_5);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_6 = L_5->get_descriptor_0();
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB_RuntimeMethod_var)));
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_8 = V_0;
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_9 = V_0;
		NullCheck(L_9);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_10 = L_9->get_descriptor_0();
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = ServiceDescriptor_GetImplementationType_m805957DA69C42B21B4937555D04BCCB712B247D7(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_implementationType_1(L_11);
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_12 = V_0;
		NullCheck(L_12);
		Type_t * L_13 = L_12->get_implementationType_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_13, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_006e;
		}
	}
	{
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = L_17->get_implementationType_1();
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_19 = V_0;
		NullCheck(L_19);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_20 = L_19->get_descriptor_0();
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_18, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}

IL_006e:
	{
		String_t* L_23;
		L_23 = SR_get_TryAddIndistinguishableTypeToEnumerable_m4EFADF01B029D27B4CC497C9242D004BE0B81A69(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_24 = V_0;
		NullCheck(L_24);
		Type_t * L_25 = L_24->get_implementationType_1();
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_26 = V_0;
		NullCheck(L_26);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_27 = L_26->get_descriptor_0();
		NullCheck(L_27);
		Type_t * L_28;
		L_28 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = SR_Format_mDF22BF68931E654707A9C21CE2925F4C54FBF44C(L_23, L_25, L_28, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_30 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_30, L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB_RuntimeMethod_var)));
	}

IL_0094:
	{
		RuntimeObject* L_31 = ___services0;
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_32 = V_0;
		Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * L_33 = (Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *)il2cpp_codegen_object_new(Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078(L_33, L_32, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass23_0_U3CTryAddEnumerableU3Eb__0_mA04608CC3BB8CF872188AE38A458A6B6A7A900DA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		bool L_34;
		L_34 = Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2(L_31, L_33, /*hidden argument*/Enumerable_Any_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m27413F884BD0FA48BA2E1F5B56501B3E4CF6FCE2_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_35 = ___services0;
		U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * L_36 = V_0;
		NullCheck(L_36);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_37 = L_36->get_descriptor_0();
		NullCheck(L_35);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_35, L_37);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAddEnumerable(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAddEnumerable_m080B1307CDB0EF477D06E780ABEEB41C753E136D (RuntimeObject* ___services0, RuntimeObject* ___descriptors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddEnumerable_m080B1307CDB0EF477D06E780ABEEB41C753E136D_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___descriptors1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_TryAddEnumerable_m080B1307CDB0EF477D06E780ABEEB41C753E136D_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___descriptors1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::GetEnumerator() */, IEnumerable_1_t511B081DE4AC215E74785D341D959131CAA09016_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
			L_7 = InterfaceFuncInvoker0< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::get_Current() */, IEnumerator_1_tCA498D08AA47B16079958B200A3A7EEF89EE91F6_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			RuntimeObject* L_8 = ___services0;
			ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = V_1;
			ServiceCollectionDescriptorExtensions_TryAddEnumerable_m8DFF67A4AC5EE5B045AB0BDA7AFBA82C5AF12DDB(L_8, L_9, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0025;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::Replace(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionDescriptorExtensions_Replace_m540958145822078E7917D4198EC4F5DDDEF1D99A (RuntimeObject* ___collection0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m53B7D7A17DFB4F32EDE5BA842C15E5D87B0174DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CReplaceU3Eb__0_m164910373DC12D90C9D2035F9F774E57D286D487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * V_0 = NULL;
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * L_0 = (U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass25_0__ctor_m195630A78C658238611CDB9232A05B0AD61ECC44(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * L_1 = V_0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->set_descriptor_0(L_2);
		RuntimeObject* L_3 = ___collection0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Replace_m540958145822078E7917D4198EC4F5DDDEF1D99A_RuntimeMethod_var)));
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * L_5 = V_0;
		NullCheck(L_5);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_6 = L_5->get_descriptor_0();
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_Replace_m540958145822078E7917D4198EC4F5DDDEF1D99A_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_8 = ___collection0;
		U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * L_9 = V_0;
		Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 * L_10 = (Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88 *)il2cpp_codegen_object_new(Func_2_tA639CB5513006B3CADEB7907355B62E495CCBF88_il2cpp_TypeInfo_var);
		Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass25_0_U3CReplaceU3Eb__0_m164910373DC12D90C9D2035F9F774E57D286D487_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE9E7415E546BF83404E3AF6E81EAE44C0F9EA078_RuntimeMethod_var);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_11;
		L_11 = Enumerable_FirstOrDefault_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m53B7D7A17DFB4F32EDE5BA842C15E5D87B0174DB(L_8, L_10, /*hidden argument*/Enumerable_FirstOrDefault_TisServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_m53B7D7A17DFB4F32EDE5BA842C15E5D87B0174DB_RuntimeMethod_var);
		V_1 = L_11;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_12 = V_1;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_13 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Remove(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_13, L_14);
	}

IL_004c:
	{
		RuntimeObject* L_16 = ___collection0;
		U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * L_17 = V_0;
		NullCheck(L_17);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_18 = L_17->get_descriptor_0();
		NullCheck(L_16);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_16, L_18);
		RuntimeObject* L_19 = ___collection0;
		return L_19;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::RemoveAll(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionDescriptorExtensions_RemoveAll_m5F037FEBD2946503A023B16E2E86739AF282A5D8 (RuntimeObject* ___collection0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6350180139E608CFC024A792373EE6BE02C21650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_1 = NULL;
	{
		Type_t * L_0 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionDescriptorExtensions_RemoveAll_m5F037FEBD2946503A023B16E2E86739AF282A5D8_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___collection0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::get_Count() */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_3);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_0040;
	}

IL_001f:
	{
		RuntimeObject* L_5 = ___collection0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = InterfaceFuncInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::get_Item(System.Int32) */, IList_1_t6350180139E608CFC024A792373EE6BE02C21650_il2cpp_TypeInfo_var, L_5, L_6);
		V_1 = L_7;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_8 = V_1;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_8, /*hidden argument*/NULL);
		Type_t * L_10 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_12 = ___collection0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::RemoveAt(System.Int32) */, IList_1_t6350180139E608CFC024A792373EE6BE02C21650_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_16 = ___collection0;
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
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53_RuntimeMethod_var)));
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___services0;
		Type_t * L_9 = ___serviceType1;
		Type_t * L_10 = ___implementationType2;
		RuntimeObject* L_11;
		L_11 = ServiceCollectionServiceExtensions_Add_m08B0ABDB33EAE09CFA9899B92B57E3A6F7A48F8E(L_8, L_9, L_10, 2, /*hidden argument*/NULL);
		return L_11;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_mC9BA5AC9F90B8897F3857D2FE1082AC1A660237E (RuntimeObject* ___services0, Type_t * ___serviceType1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_mC9BA5AC9F90B8897F3857D2FE1082AC1A660237E_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_mC9BA5AC9F90B8897F3857D2FE1082AC1A660237E_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_mC9BA5AC9F90B8897F3857D2FE1082AC1A660237E_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_7 = ___services0;
		Type_t * L_8 = ___serviceType1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_9 = ___implementationFactory2;
		RuntimeObject* L_10;
		L_10 = ServiceCollectionServiceExtensions_Add_m9A4A000D4840A276E2060000F1FEBAFFD64E93F3(L_7, L_8, L_9, 2, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_m4A7465212E1541FCA8E3330273B33B72F9E57DD2 (RuntimeObject* ___services0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_m4A7465212E1541FCA8E3330273B33B72F9E57DD2_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddTransient_m4A7465212E1541FCA8E3330273B33B72F9E57DD2_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___services0;
		Type_t * L_6 = ___serviceType1;
		Type_t * L_7 = ___serviceType1;
		RuntimeObject* L_8;
		L_8 = ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5_RuntimeMethod_var)));
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___services0;
		Type_t * L_9 = ___serviceType1;
		Type_t * L_10 = ___implementationType2;
		RuntimeObject* L_11;
		L_11 = ServiceCollectionServiceExtensions_Add_m08B0ABDB33EAE09CFA9899B92B57E3A6F7A48F8E(L_8, L_9, L_10, 1, /*hidden argument*/NULL);
		return L_11;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddScoped_m40F2A1BF0A9335DA8420DC98C243449F75BE202F (RuntimeObject* ___services0, Type_t * ___serviceType1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m40F2A1BF0A9335DA8420DC98C243449F75BE202F_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m40F2A1BF0A9335DA8420DC98C243449F75BE202F_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m40F2A1BF0A9335DA8420DC98C243449F75BE202F_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_7 = ___services0;
		Type_t * L_8 = ___serviceType1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_9 = ___implementationFactory2;
		RuntimeObject* L_10;
		L_10 = ServiceCollectionServiceExtensions_Add_m9A4A000D4840A276E2060000F1FEBAFFD64E93F3(L_7, L_8, L_9, 1, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddScoped(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddScoped_m407B3D3610F11F5718321754A54679BE438094A8 (RuntimeObject* ___services0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m407B3D3610F11F5718321754A54679BE438094A8_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddScoped_m407B3D3610F11F5718321754A54679BE438094A8_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___services0;
		Type_t * L_6 = ___serviceType1;
		Type_t * L_7 = ___serviceType1;
		RuntimeObject* L_8;
		L_8 = ServiceCollectionServiceExtensions_AddScoped_m06F7C8DE8CBCD15E2D34588FC508A9379DEEC5D5(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___implementationType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427_RuntimeMethod_var)));
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___services0;
		Type_t * L_9 = ___serviceType1;
		Type_t * L_10 = ___implementationType2;
		RuntimeObject* L_11;
		L_11 = ServiceCollectionServiceExtensions_Add_m08B0ABDB33EAE09CFA9899B92B57E3A6F7A48F8E(L_8, L_9, L_10, 0, /*hidden argument*/NULL);
		return L_11;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m6C879DDF30C37531BEBB0C7F35380368BCA9BE52 (RuntimeObject* ___services0, Type_t * ___serviceType1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m6C879DDF30C37531BEBB0C7F35380368BCA9BE52_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m6C879DDF30C37531BEBB0C7F35380368BCA9BE52_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___implementationFactory2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m6C879DDF30C37531BEBB0C7F35380368BCA9BE52_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_7 = ___services0;
		Type_t * L_8 = ___serviceType1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_9 = ___implementationFactory2;
		RuntimeObject* L_10;
		L_10 = ServiceCollectionServiceExtensions_Add_m9A4A000D4840A276E2060000F1FEBAFFD64E93F3(L_7, L_8, L_9, 0, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m2DD0593BDDD5EC8A57E7F5C0C1321DF2D14BB015 (RuntimeObject* ___services0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m2DD0593BDDD5EC8A57E7F5C0C1321DF2D14BB015_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_m2DD0593BDDD5EC8A57E7F5C0C1321DF2D14BB015_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___services0;
		Type_t * L_6 = ___serviceType1;
		Type_t * L_7 = ___serviceType1;
		RuntimeObject* L_8;
		L_8 = ServiceCollectionServiceExtensions_AddSingleton_m79D7395A0CD88A334943E8551C81FF35C0A64427(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D (RuntimeObject* ___services0, Type_t * ___serviceType1, RuntimeObject * ___implementationInstance2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject * L_5 = ___implementationInstance2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D_RuntimeMethod_var)));
	}

IL_0030:
	{
		Type_t * L_7 = ___serviceType1;
		RuntimeObject * L_8 = ___implementationInstance2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_9 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject* L_10 = ___services0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = ___services0;
		return L_12;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_m08B0ABDB33EAE09CFA9899B92B57E3A6F7A48F8E (RuntimeObject* ___collection0, Type_t * ___serviceType1, Type_t * ___implementationType2, int32_t ___lifetime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		Type_t * L_0 = ___serviceType1;
		Type_t * L_1 = ___implementationType2;
		int32_t L_2 = ___lifetime3;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_3 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___collection0;
		return L_6;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::Add(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_m9A4A000D4840A276E2060000F1FEBAFFD64E93F3 (RuntimeObject* ___collection0, Type_t * ___serviceType1, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory2, int32_t ___lifetime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * V_0 = NULL;
	{
		Type_t * L_0 = ___serviceType1;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_1 = ___implementationFactory2;
		int32_t L_2 = ___lifetime3;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_3 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = ___collection0;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Extensions.DependencyInjection.ServiceDescriptor>::Add(!0) */, ICollection_1_t5406731D43A7BDEEEDAF0B639C9845AF70ADCB9D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___collection0;
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
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, Type_t * ___implementationType1, int32_t ___lifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		int32_t L_1 = ___lifetime2;
		ServiceDescriptor__ctor_m6F11C7AB4521E69DBB53C1244236CBFCF37D178A(__this, L_0, L_1, /*hidden argument*/NULL);
		Type_t * L_2 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099_RuntimeMethod_var)));
	}

IL_001c:
	{
		Type_t * L_5 = ___implementationType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_7 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099_RuntimeMethod_var)));
	}

IL_0030:
	{
		Type_t * L_8 = ___implementationType1;
		__this->set_U3CImplementationTypeU3Ek__BackingField_2(L_8);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, RuntimeObject * ___instance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		ServiceDescriptor__ctor_m6F11C7AB4521E69DBB53C1244236CBFCF37D178A(__this, L_0, 0, /*hidden argument*/NULL);
		Type_t * L_1 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___instance1;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F_RuntimeMethod_var)));
	}

IL_002a:
	{
		RuntimeObject * L_6 = ___instance1;
		__this->set_U3CImplementationInstanceU3Ek__BackingField_3(L_6);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___factory1, int32_t ___lifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		int32_t L_1 = ___lifetime2;
		ServiceDescriptor__ctor_m6F11C7AB4521E69DBB53C1244236CBFCF37D178A(__this, L_0, L_1, /*hidden argument*/NULL);
		Type_t * L_2 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B_RuntimeMethod_var)));
	}

IL_001c:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_5 = ___factory1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B_RuntimeMethod_var)));
	}

IL_002a:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_7 = ___factory1;
		__this->set_U3CImplementationFactoryU3Ek__BackingField_4(L_7);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ServiceDescriptor::.ctor(System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m6F11C7AB4521E69DBB53C1244236CBFCF37D178A (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, Type_t * ___serviceType0, int32_t ___lifetime1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lifetime1;
		__this->set_U3CLifetimeU3Ek__BackingField_0(L_0);
		Type_t * L_1 = ___serviceType0;
		__this->set_U3CServiceTypeU3Ek__BackingField_1(L_1);
		return;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceLifetime Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_Lifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mA7FC93C84333BE17621A6F14C0D7EE755CCEE614 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLifetimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ServiceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CServiceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CImplementationTypeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Object Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CImplementationInstanceU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Func`2<System.IServiceProvider,System.Object> Microsoft.Extensions.DependencyInjection.ServiceDescriptor::get_ImplementationFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_0 = __this->get_U3CImplementationFactoryU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Microsoft.Extensions.DependencyInjection.ServiceDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_ToString_m2C5FEF1D7EB07EBFB4483CCB6E68947BD56F0879 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceLifetime_t9DA8D0A18237F7BEF657C4FDB1423806DF1B26D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF73B874236192E4304748C8C9159248D7F005AB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		Type_t * L_3;
		L_3 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6;
		L_6 = ServiceDescriptor_get_Lifetime_mA7FC93C84333BE17621A6F14C0D7EE755CCEE614_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(ServiceLifetime_t9DA8D0A18237F7BEF657C4FDB1423806DF1B26D5_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		String_t* L_9;
		L_9 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralDF73B874236192E4304748C8C9159248D7F005AB, L_5, /*hidden argument*/NULL);
		V_0 = L_9;
		Type_t * L_10;
		L_10 = ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_12 = V_0;
		Type_t * L_13;
		L_13 = ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline(__this, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62, L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0062:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_16;
		L_16 = ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_17 = V_0;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_18;
		L_18 = ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		MethodInfo_t * L_19;
		L_19 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125, L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_008b:
	{
		String_t* L_22 = V_0;
		RuntimeObject * L_23;
		L_23 = ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5_inline(__this, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D, L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::GetImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_GetImplementationType_m805957DA69C42B21B4937555D04BCCB712B247D7 (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	{
		Type_t * L_0;
		L_0 = ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_2;
		L_2 = ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		RuntimeObject * L_3;
		L_3 = ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject * L_4;
		L_4 = ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_6;
		L_6 = ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_7;
		L_7 = ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9;
		L_9 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(111 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_8);
		V_0 = L_9;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		Type_t * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0046:
	{
		return (Type_t *)NULL;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___service0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92_RuntimeMethod_var)));
	}

IL_0014:
	{
		Type_t * L_3 = ___implementationType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92_RuntimeMethod_var)));
	}

IL_0028:
	{
		Type_t * L_6 = ___service0;
		Type_t * L_7 = ___implementationType1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_8;
		L_8 = ServiceDescriptor_Describe_m5EF2EEF51884152A77CEB40BA0BC107A4CBE5D10(L_6, L_7, 2, /*hidden argument*/NULL);
		return L_8;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301 (Type_t * ___service0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___service0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301_RuntimeMethod_var)));
	}

IL_0014:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_3 = ___implementationFactory1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Transient_m8A0C40D7D0CE3983CFDBB06C785DD16543D8A301_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___service0;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_6 = ___implementationFactory1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Describe_m673CD137D92037E7EBE45BA9666C91E6C5E7B9AD(L_5, L_6, 2, /*hidden argument*/NULL);
		return L_7;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___service0;
		Type_t * L_1 = ___implementationType1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2;
		L_2 = ServiceDescriptor_Describe_m5EF2EEF51884152A77CEB40BA0BC107A4CBE5D10(L_0, L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417 (Type_t * ___service0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___service0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417_RuntimeMethod_var)));
	}

IL_0014:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_3 = ___implementationFactory1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Scoped_m9F5B1BA7E5E14B8EFBFDFB911DEE8D26B01BD417_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___service0;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_6 = ___implementationFactory1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Describe_m673CD137D92037E7EBE45BA9666C91E6C5E7B9AD(L_5, L_6, 1, /*hidden argument*/NULL);
		return L_7;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___service0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40_RuntimeMethod_var)));
	}

IL_0014:
	{
		Type_t * L_3 = ___implementationType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40_RuntimeMethod_var)));
	}

IL_0028:
	{
		Type_t * L_6 = ___service0;
		Type_t * L_7 = ___implementationType1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_8;
		L_8 = ServiceDescriptor_Describe_m5EF2EEF51884152A77CEB40BA0BC107A4CBE5D10(L_6, L_7, 0, /*hidden argument*/NULL);
		return L_8;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Func`2<System.IServiceProvider,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791 (Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791_RuntimeMethod_var)));
	}

IL_0014:
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_3 = ___implementationFactory1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F111DA32136DD2B9C6A39ACCD9E489C9A40917E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_m9B76E90F1D1291960D8D8472480869AF97DA0791_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___serviceType0;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_6 = ___implementationFactory1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Describe_m673CD137D92037E7EBE45BA9666C91E6C5E7B9AD(L_5, L_6, 0, /*hidden argument*/NULL);
		return L_7;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_mC0CEA7E2026604D7A80CC79A502BCEB33B32D243 (Type_t * ___serviceType0, RuntimeObject * ___implementationInstance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_mC0CEA7E2026604D7A80CC79A502BCEB33B32D243_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___implementationInstance1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceDescriptor_Singleton_mC0CEA7E2026604D7A80CC79A502BCEB33B32D243_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_5 = ___serviceType0;
		RuntimeObject * L_6 = ___implementationInstance1;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m29637B73EE269C7CD52FF9FFBA7B2108489D379F(L_7, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Describe(System.Type,System.Type,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Describe_m5EF2EEF51884152A77CEB40BA0BC107A4CBE5D10 (Type_t * ___serviceType0, Type_t * ___implementationType1, int32_t ___lifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		Type_t * L_1 = ___implementationType1;
		int32_t L_2 = ___lifetime2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_3 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m592858FB415C516259BBB29D16A32B58E3D11099(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Describe(System.Type,System.Func`2<System.IServiceProvider,System.Object>,Microsoft.Extensions.DependencyInjection.ServiceLifetime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Describe_m673CD137D92037E7EBE45BA9666C91E6C5E7B9AD (Type_t * ___serviceType0, Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ___implementationFactory1, int32_t ___lifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_1 = ___implementationFactory1;
		int32_t L_2 = ___lifetime2;
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_3 = (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C *)il2cpp_codegen_object_new(ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m0185D823DA2F1E3BFE03A16E77AA36E7903A718B(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::GetRequiredService(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4 (RuntimeObject* ___provider0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISupportRequiredService_t293F8CEF7CA7D4CAFD0CB630A564598315800CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___provider0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___provider0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, ISupportRequiredService_t293F8CEF7CA7D4CAFD0CB630A564598315800CE1_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		Type_t * L_8 = ___serviceType1;
		NullCheck(L_7);
		RuntimeObject * L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object Microsoft.Extensions.DependencyInjection.ISupportRequiredService::GetRequiredService(System.Type) */, ISupportRequiredService_t293F8CEF7CA7D4CAFD0CB630A564598315800CE1_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}

IL_0034:
	{
		RuntimeObject* L_10 = ___provider0;
		Type_t * L_11 = ___serviceType1;
		NullCheck(L_10);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var, L_10, L_11);
		V_1 = L_12;
		RuntimeObject * L_13 = V_1;
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_14;
		L_14 = SR_get_NoServiceRegistered_mE298B1D15EDB2A81553D3FA15886061E7AF69AF1(/*hidden argument*/NULL);
		Type_t * L_15 = ___serviceType1;
		String_t* L_16;
		L_16 = SR_Format_mADD68C8D2C34BBB960E93A5BEF6600FCA482811C(L_14, L_15, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject * L_18 = V_1;
		return L_18;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Object> Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::GetServices(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceProviderServiceExtensions_GetServices_m801847F651FE9EEEBC33D7F43960154F668855ED (RuntimeObject* ___provider0, Type_t * ___serviceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___provider0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetServices_m801847F651FE9EEEBC33D7F43960154F668855ED_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___serviceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetServices_m801847F651FE9EEEBC33D7F43960154F668855ED_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = L_7;
		Type_t * L_9 = ___serviceType1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_9);
		NullCheck(L_6);
		Type_t * L_10;
		L_10 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(106 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_6, L_8);
		V_0 = L_10;
		RuntimeObject* L_11 = ___provider0;
		Type_t * L_12 = V_0;
		RuntimeObject * L_13;
		L_13 = ServiceProviderServiceExtensions_GetRequiredService_mD0309B0B590BC2F6335ED88DC0BD4872095AC9D4(L_11, L_12, /*hidden argument*/NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_13, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var));
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceScope Microsoft.Extensions.DependencyInjection.ServiceProviderServiceExtensions::CreateScope(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceProviderServiceExtensions_CreateScope_m9BBB55CAD85A53E8AA5F1ACEB95C3491F6528D3B (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_m43D6D0E6B70BE6DA3245CEB58C7E28CF9499B0A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___provider0;
		RuntimeObject* L_1;
		L_1 = ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_m43D6D0E6B70BE6DA3245CEB58C7E28CF9499B0A7(L_0, /*hidden argument*/ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_m43D6D0E6B70BE6DA3245CEB58C7E28CF9499B0A7_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Microsoft.Extensions.DependencyInjection.IServiceScope Microsoft.Extensions.DependencyInjection.IServiceScopeFactory::CreateScope() */, IServiceScopeFactory_t36161CFD5E30B4C71E96D027750F9B4F308CDEC1_il2cpp_TypeInfo_var, L_1);
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
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFA2A3DEB7719E7A5664199CECC74DB7444E05571 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * L_0 = (U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B *)il2cpp_codegen_object_new(U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2CE78F52061DA4A0B4C510BE113426BA4CDEBF48(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2CE78F52061DA4A0B4C510BE113426BA4CDEBF48 (U3CU3Ec_t81F2895E379B78699B6AD4246455105B3B90491B * __this, const RuntimeMethod* method)
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


// Conversion methods for marshalling of: Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_pinvoke(const ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35& unmarshaled, ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_pinvoke& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_pinvoke_back(const ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_pinvoke& marshaled, ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_pinvoke_cleanup(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_com(const ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35& unmarshaled, ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_com& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_com_back(const ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_com& marshaled, ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshal_com_cleanup(ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_mD805E357DD45F90185A2164C151C6E6CF71ADCF5 (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void ConstructorMatcher__ctor_mD805E357DD45F90185A2164C151C6E6CF71ADCF5_AdjustorThunk (RuntimeObject * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * _thisAdjusted = reinterpret_cast<ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *>(__this + _offset);
	ConstructorMatcher__ctor_mD805E357DD45F90185A2164C151C6E6CF71ADCF5(_thisAdjusted, ___constructor0, method);
}
// System.Int32 Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_m30B5C1B863BE055DA0D1A6A02A39CF2B75799FAA (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  int32_t ConstructorMatcher_Match_m30B5C1B863BE055DA0D1A6A02A39CF2B75799FAA_AdjustorThunk (RuntimeObject * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___givenParameters0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * _thisAdjusted = reinterpret_cast<ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConstructorMatcher_Match_m30B5C1B863BE055DA0D1A6A02A39CF2B75799FAA(_thisAdjusted, ___givenParameters0, method);
	return _returnValue;
}
// System.Object Microsoft.Extensions.DependencyInjection.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493 (ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t85E8EF4D34384CF5560A72D1953F28E3920A45D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(ParameterDefaultValue_t544EFA07E6D6F977A8DCF0D77D67ADFC8F709916_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ParameterDefaultValue_TryGetDefaultValue_m370E8D2C275716669D26E2E0DAD81C0200937DC0(L_15, (RuntimeObject **)(&V_2), /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493_RuntimeMethod_var)));
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
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c7:
	{
		RuntimeObject * L_44 = V_3;
		return L_44;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 * _thisAdjusted = reinterpret_cast<ConstructorMatcher_t594A5E1F66D1EC2356C452CC1610876F3A5CCC35 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = ConstructorMatcher_CreateInstance_m146CD6120172527901F6DE8C689AA18652C5C493(_thisAdjusted, ___provider0, method);
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
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m8C944CFC06EDAC94AE4A0C83A5CB3F641A6CC3F9 (U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass23_0::<TryAddEnumerable>b__0(Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CTryAddEnumerableU3Eb__0_mA04608CC3BB8CF872188AE38A458A6B6A7A900DA (U3CU3Ec__DisplayClass23_0_tFDBEC5DF60A8B69F37719AE2FAEF6E2127E5DF3F * __this, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_0 = ___d0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_0, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = __this->get_descriptor_0();
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_5 = ___d0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = ServiceDescriptor_GetImplementationType_m805957DA69C42B21B4937555D04BCCB712B247D7(L_5, /*hidden argument*/NULL);
		Type_t * L_7 = __this->get_implementationType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
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
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m195630A78C658238611CDB9232A05B0AD61ECC44 (U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass25_0::<Replace>b__0(Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CReplaceU3Eb__0_m164910373DC12D90C9D2035F9F774E57D286D487 (U3CU3Ec__DisplayClass25_0_t0A04AC5C14905931264D185E5DF82C6CDAD71BB5 * __this, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_0 = ___s0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_0, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = __this->get_descriptor_0();
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m70F5839B8C428AC93E7F9FD16732B2FCAAD5666D (U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions/<>c__DisplayClass2_0::<TryAdd>b__0(Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CTryAddU3Eb__0_m9F48D10811079E7943B87DA4EBCC09DD0F53CDB1 (U3CU3Ec__DisplayClass2_0_tD5BE85EDF8BB34D6B596CAF8A1CFDA9F1310718C * __this, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_0 = ___d0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_0, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_2 = __this->get_descriptor_0();
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ServiceType_m08E9024CCAF229D1AEB53664344CD749131E6038_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CServiceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mA7FC93C84333BE17621A6F14C0D7EE755CCEE614_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLifetimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * ServiceDescriptor_get_ImplementationType_m9130519BB3A6D0289F22B953E5F659EDC1214E92_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CImplementationTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * ServiceDescriptor_get_ImplementationFactory_mF88334ABD007BF02A92A99F9F9C5A5CB0713882D_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9 * L_0 = __this->get_U3CImplementationFactoryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ServiceDescriptor_get_ImplementationInstance_m04254E10026901B016856196459681E34A2A45F5_inline (ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CImplementationInstanceU3Ek__BackingField_3();
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
