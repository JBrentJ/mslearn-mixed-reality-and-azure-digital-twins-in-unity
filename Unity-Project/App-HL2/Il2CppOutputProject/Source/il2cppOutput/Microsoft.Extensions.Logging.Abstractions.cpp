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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>>
struct Action_1_t5D23A842B2197144BDC72ED47E11DFF6F867C4AF;
// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>
struct Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Threading.AsyncLocal`1<System.Object>
struct AsyncLocal_1_tD2FEC61861D3053FD5D31A89D3D68DAFE46D2394;
// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>
struct AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0;
// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>
struct Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_t7037359D4BF5772B8840B32820560F124F76047E;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>
struct Func_3_t7711DB2AC13DF43B193EA85BB075A3011A7A9E2E;
// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>
struct Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9;
// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Object,System.Object>
struct Func_3_tC92EDDA5F69139D5C57EE26BB206D5A9EBD0EFF5;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Tables_tC6109A0BE9CE2C55C6B1B904FBD94250D23EA6A5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
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
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tCA5E0B828EB93D421B9F266806B4F314047CC06D;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.Extensions.Logging.IExternalScopeProvider
struct IExternalScopeProvider_t534D89246C018937B01103D64920F459956EEB97;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_tEAA0D727D491847F2FE185047B16B6C5B185AF53;
// Microsoft.Extensions.Logging.ILoggerFactory
struct ILoggerFactory_tEE16BF0C488E1AE91D358D22D46EE031FA81C322;
// Microsoft.Extensions.Logging.ILoggerProvider
struct ILoggerProvider_t023BE0C89D4731463BA6242BC378FC584C9D2F5D;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB0B9912DDA357A9A31EB6D7F9F85C15763113EBB;
// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402;
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider
struct LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Microsoft.Extensions.Logging.NullExternalScopeProvider
struct NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC;
// Microsoft.Extensions.Logging.Abstractions.NullLogger
struct NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8;
// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory
struct NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88;
// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider
struct NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5;
// Microsoft.Extensions.Logging.NullScope
struct NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t1C1176B821473EFA469AC55031B32631693C191F;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t84E18A72D22006D76336274223B7F0D69EED0261;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t28A167C65D804762CEDCACA8BF41FFD72281A483;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1;
// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A;
// Microsoft.Extensions.Logging.LogValuesFormatter/<>c
struct U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742;
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope
struct Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE;
// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94;
// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;
// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c
struct U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA;
// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7
struct U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7037359D4BF5772B8840B32820560F124F76047E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoggerFactory_tEE16BF0C488E1AE91D358D22D46EE031FA81C322_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tEAA0D727D491847F2FE185047B16B6C5B185AF53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m42DB1482AF8985D5997D4F8E7229F077F8F4945A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1__ctor_mFFC6AAEFA457DB3E17F7199276A67CB6C693E1CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1_get_Value_m0BAE9B1C65683A6CABF828630F154B679F560E4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetOrAdd_mBF1885EB2710CE58D22C3C0B6038F241838A35A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m77DFF1824402582965FBC47B115887EADB535899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m8344676E559456CD8CE1004CEEE5C2982517B25C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA07DBD8FE73F777281C443D7534DB1FC1126A5C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mED09F51B51D775A3DBA2DF7AAF0152664F672A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m713FAACA562AABCD2C99EF1F8576BFA75417097D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mF28B4BD4DA08E8FE855AFA47F90D61E189489D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_BeginScope_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_mC0AA7DEE8A1E1E9CCF5C1C72407D933CD31936C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_BeginScope_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mBA2CCB5CF8B0902854DA52418D233C3BC5CF0B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_Log_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_m0DDFF4BF325FC2470246307CB8B197C6F0E91F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_Log_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mF963044789F1BC536AB88DCA32C67DC796814B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValuesFormatter_GetValue_m0FEFE74E0BC4E215772B239559D74A810E515CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_BeginScope_m9C869CAF836CBBFC1CF744480C414A5C041358BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_MessageFormatter_m59C49DB804AB019AB32535E359E278DC2429C807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerFactoryExtensions_CreateLogger_mD8C608277F81B46B4057FB2B764A8269C20DF2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m43492BB59605ADD66923205C1630614DE1A38A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_mDAA86EEEFD66CF8625FBD49483194111A98772ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFormatArgumentU3Eb__21_0_mDBCEE17F6DCA2D7CB56F0C54EA7EAA1D115E2CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_0_m9B45A9BCD5BD0885CA55A62865F4EBE003B186A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__9_0_m314E3546884D6A6352076CDF633D20D9878D8B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_mC48079A6B011471DA5BE3BB23C8BAC8147666B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CDefineU3Eb__0_mB13B60D536E28A18C37B0C99A4D0EC6A286ED620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tED041E2089B5D8923C419CD5D4DDF85FBF673D94_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE555E16F3C50157D6E975AA9EA98657AC0DD0A2B 
{
public:

public:
};


// System.Object


// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>
struct AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953  : public RuntimeObject
{
public:
	// System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> System.Threading.AsyncLocal`1::m_valueChangedHandler
	Action_1_t5D23A842B2197144BDC72ED47E11DFF6F867C4AF * ___m_valueChangedHandler_0;

public:
	inline static int32_t get_offset_of_m_valueChangedHandler_0() { return static_cast<int32_t>(offsetof(AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953, ___m_valueChangedHandler_0)); }
	inline Action_1_t5D23A842B2197144BDC72ED47E11DFF6F867C4AF * get_m_valueChangedHandler_0() const { return ___m_valueChangedHandler_0; }
	inline Action_1_t5D23A842B2197144BDC72ED47E11DFF6F867C4AF ** get_address_of_m_valueChangedHandler_0() { return &___m_valueChangedHandler_0; }
	inline void set_m_valueChangedHandler_0(Action_1_t5D23A842B2197144BDC72ED47E11DFF6F867C4AF * value)
	{
		___m_valueChangedHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueChangedHandler_0), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tC6109A0BE9CE2C55C6B1B904FBD94250D23EA6A5 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC, ____tables_0)); }
	inline Tables_tC6109A0BE9CE2C55C6B1B904FBD94250D23EA6A5 * get__tables_0() const { return ____tables_0; }
	inline Tables_tC6109A0BE9CE2C55C6B1B904FBD94250D23EA6A5 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tC6109A0BE9CE2C55C6B1B904FBD94250D23EA6A5 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* ___entries_1;
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
	KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___entries_1)); }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___keys_7)); }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___values_8)); }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402  : public RuntimeObject
{
public:
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::_format
	String_t* ____format_3;
	// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::_valueNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____valueNames_4;
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::<OriginalFormat>k__BackingField
	String_t* ___U3COriginalFormatU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__format_3() { return static_cast<int32_t>(offsetof(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402, ____format_3)); }
	inline String_t* get__format_3() const { return ____format_3; }
	inline String_t** get_address_of__format_3() { return &____format_3; }
	inline void set__format_3(String_t* value)
	{
		____format_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____format_3), (void*)value);
	}

	inline static int32_t get_offset_of__valueNames_4() { return static_cast<int32_t>(offsetof(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402, ____valueNames_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__valueNames_4() const { return ____valueNames_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__valueNames_4() { return &____valueNames_4; }
	inline void set__valueNames_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____valueNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalFormatU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402, ___U3COriginalFormatU3Ek__BackingField_5)); }
	inline String_t* get_U3COriginalFormatU3Ek__BackingField_5() const { return ___U3COriginalFormatU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3COriginalFormatU3Ek__BackingField_5() { return &___U3COriginalFormatU3Ek__BackingField_5; }
	inline void set_U3COriginalFormatU3Ek__BackingField_5(String_t* value)
	{
		___U3COriginalFormatU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalFormatU3Ek__BackingField_5), (void*)value);
	}
};

struct LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields
{
public:
	// System.Object[] Microsoft.Extensions.Logging.LogValuesFormatter::EmptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___EmptyArray_1;
	// System.Char[] Microsoft.Extensions.Logging.LogValuesFormatter::FormatDelimiters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___FormatDelimiters_2;

public:
	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields, ___EmptyArray_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_FormatDelimiters_2() { return static_cast<int32_t>(offsetof(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields, ___FormatDelimiters_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_FormatDelimiters_2() const { return ___FormatDelimiters_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_FormatDelimiters_2() { return &___FormatDelimiters_2; }
	inline void set_FormatDelimiters_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___FormatDelimiters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FormatDelimiters_2), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LoggerExtensions
struct LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3  : public RuntimeObject
{
public:

public:
};

struct LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_StaticFields
{
public:
	// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String> Microsoft.Extensions.Logging.LoggerExtensions::_messageFormatter
	Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * ____messageFormatter_0;

public:
	inline static int32_t get_offset_of__messageFormatter_0() { return static_cast<int32_t>(offsetof(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_StaticFields, ____messageFormatter_0)); }
	inline Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * get__messageFormatter_0() const { return ____messageFormatter_0; }
	inline Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 ** get_address_of__messageFormatter_0() { return &____messageFormatter_0; }
	inline void set__messageFormatter_0(Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * value)
	{
		____messageFormatter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageFormatter_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LoggerExternalScopeProvider
struct LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396  : public RuntimeObject
{
public:
	// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope> Microsoft.Extensions.Logging.LoggerExternalScopeProvider::_currentScope
	AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * ____currentScope_0;

public:
	inline static int32_t get_offset_of__currentScope_0() { return static_cast<int32_t>(offsetof(LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396, ____currentScope_0)); }
	inline AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * get__currentScope_0() const { return ____currentScope_0; }
	inline AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 ** get_address_of__currentScope_0() { return &____currentScope_0; }
	inline void set__currentScope_0(AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * value)
	{
		____currentScope_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentScope_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LoggerFactoryExtensions
struct LoggerFactoryExtensions_t6DBE4EC8A327BB41AC7CCFB908F340D98794D6AA  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.Logging.LoggerMessage
struct LoggerMessage_t9036A2D943E29FE6A1FE7B5319846DB861AB5E71  : public RuntimeObject
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


// Microsoft.Extensions.Logging.NullExternalScopeProvider
struct NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC  : public RuntimeObject
{
public:

public:
};

struct NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_StaticFields
{
public:
	// Microsoft.Extensions.Logging.IExternalScopeProvider Microsoft.Extensions.Logging.NullExternalScopeProvider::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.Abstractions.NullLogger
struct NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8  : public RuntimeObject
{
public:

public:
};

struct NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_StaticFields
{
public:
	// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::<Instance>k__BackingField
	NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory
struct NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88  : public RuntimeObject
{
public:

public:
};

struct NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_StaticFields
{
public:
	// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::Instance
	NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_StaticFields, ___Instance_0)); }
	inline NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * get_Instance_0() const { return ___Instance_0; }
	inline NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider
struct NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5  : public RuntimeObject
{
public:

public:
};

struct NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_StaticFields
{
public:
	// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::<Instance>k__BackingField
	NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Microsoft.Extensions.Logging.NullScope
struct NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6  : public RuntimeObject
{
public:

public:
};

struct NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_StaticFields
{
public:
	// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::<Instance>k__BackingField
	NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// FxResources.Microsoft.Extensions.Logging.Abstractions.SR
struct SR_tED041E2089B5D8923C419CD5D4DDF85FBF673D94  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB  : public RuntimeObject
{
public:

public:
};

struct SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_StaticFields, ___s_resourceManager_0)); }
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


// Microsoft.Extensions.Internal.TypeNameHelper
struct TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B  : public RuntimeObject
{
public:

public:
};

struct TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Microsoft.Extensions.Internal.TypeNameHelper::_builtInTypeNames
	Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * ____builtInTypeNames_1;

public:
	inline static int32_t get_offset_of__builtInTypeNames_1() { return static_cast<int32_t>(offsetof(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_StaticFields, ____builtInTypeNames_1)); }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * get__builtInTypeNames_1() const { return ____builtInTypeNames_1; }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 ** get_address_of__builtInTypeNames_1() { return &____builtInTypeNames_1; }
	inline void set__builtInTypeNames_1(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * value)
	{
		____builtInTypeNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builtInTypeNames_1), (void*)value);
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

// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields
{
public:
	// Microsoft.Extensions.Logging.FormattedLogValues/<>c Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9
	U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * ___U3CU3E9_0;
	// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9__9_0
	Func_2_t7037359D4BF5772B8840B32820560F124F76047E * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t7037359D4BF5772B8840B32820560F124F76047E * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t7037359D4BF5772B8840B32820560F124F76047E ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t7037359D4BF5772B8840B32820560F124F76047E * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LogValuesFormatter/<>c
struct U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields
{
public:
	// Microsoft.Extensions.Logging.LogValuesFormatter/<>c Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<>9
	U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<>9__21_0
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___U3CU3E9__21_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields, ___U3CU3E9__21_0_1)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_U3CU3E9__21_0_1() const { return ___U3CU3E9__21_0_1; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_U3CU3E9__21_0_1() { return &___U3CU3E9__21_0_1; }
	inline void set_U3CU3E9__21_0_1(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___U3CU3E9__21_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_1), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope
struct Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE  : public RuntimeObject
{
public:
	// Microsoft.Extensions.Logging.LoggerExternalScopeProvider Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::_provider
	LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * ____provider_0;
	// System.Boolean Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::_isDisposed
	bool ____isDisposed_1;
	// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::<Parent>k__BackingField
	Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * ___U3CParentU3Ek__BackingField_2;
	// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::<State>k__BackingField
	RuntimeObject * ___U3CStateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__provider_0() { return static_cast<int32_t>(offsetof(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE, ____provider_0)); }
	inline LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * get__provider_0() const { return ____provider_0; }
	inline LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 ** get_address_of__provider_0() { return &____provider_0; }
	inline void set__provider_0(LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * value)
	{
		____provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____provider_0), (void*)value);
	}

	inline static int32_t get_offset_of__isDisposed_1() { return static_cast<int32_t>(offsetof(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE, ____isDisposed_1)); }
	inline bool get__isDisposed_1() const { return ____isDisposed_1; }
	inline bool* get_address_of__isDisposed_1() { return &____isDisposed_1; }
	inline void set__isDisposed_1(bool value)
	{
		____isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE, ___U3CParentU3Ek__BackingField_2)); }
	inline Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * get_U3CParentU3Ek__BackingField_2() const { return ___U3CParentU3Ek__BackingField_2; }
	inline Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE ** get_address_of_U3CParentU3Ek__BackingField_2() { return &___U3CParentU3Ek__BackingField_2; }
	inline void set_U3CParentU3Ek__BackingField_2(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * value)
	{
		___U3CParentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE, ___U3CStateU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_3), (void*)value);
	}
};


// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c
struct U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_StaticFields
{
public:
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::<>9
	U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tCA5E0B828EB93D421B9F266806B4F314047CC06D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC 
{
public:
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::_formatter
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_4;
	// System.Object[] Microsoft.Extensions.Logging.FormattedLogValues::_values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____values_5;
	// System.String Microsoft.Extensions.Logging.FormattedLogValues::_originalMessage
	String_t* ____originalMessage_6;

public:
	inline static int32_t get_offset_of__formatter_4() { return static_cast<int32_t>(offsetof(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC, ____formatter_4)); }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * get__formatter_4() const { return ____formatter_4; }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 ** get_address_of__formatter_4() { return &____formatter_4; }
	inline void set__formatter_4(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * value)
	{
		____formatter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatter_4), (void*)value);
	}

	inline static int32_t get_offset_of__values_5() { return static_cast<int32_t>(offsetof(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC, ____values_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__values_5() const { return ____values_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__values_5() { return &____values_5; }
	inline void set__values_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_5), (void*)value);
	}

	inline static int32_t get_offset_of__originalMessage_6() { return static_cast<int32_t>(offsetof(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC, ____originalMessage_6)); }
	inline String_t* get__originalMessage_6() const { return ____originalMessage_6; }
	inline String_t** get_address_of__originalMessage_6() { return &____originalMessage_6; }
	inline void set__originalMessage_6(String_t* value)
	{
		____originalMessage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalMessage_6), (void*)value);
	}
};

struct FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields
{
public:
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::_count
	int32_t ____count_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues::_formatters
	ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * ____formatters_3;

public:
	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}

	inline static int32_t get_offset_of__formatters_3() { return static_cast<int32_t>(offsetof(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields, ____formatters_3)); }
	inline ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * get__formatters_3() const { return ____formatters_3; }
	inline ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC ** get_address_of__formatters_3() { return &____formatters_3; }
	inline void set__formatters_3(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * value)
	{
		____formatters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatters_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_pinvoke
{
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_4;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____values_5;
	char* ____originalMessage_6;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_com
{
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_4;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____values_5;
	Il2CppChar* ____originalMessage_6;
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB0B9912DDA357A9A31EB6D7F9F85C15763113EBB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t1C1176B821473EFA469AC55031B32631693C191F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_t1C1176B821473EFA469AC55031B32631693C191F, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t84E18A72D22006D76336274223B7F0D69EED0261  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_t84E18A72D22006D76336274223B7F0D69EED0261, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t28A167C65D804762CEDCACA8BF41FFD72281A483  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;

public:
	inline static int32_t get_offset_of_IncludesInternals_0() { return static_cast<int32_t>(offsetof(NullablePublicOnlyAttribute_t28A167C65D804762CEDCACA8BF41FFD72281A483, ___IncludesInternals_0)); }
	inline bool get_IncludesInternals_0() const { return ___IncludesInternals_0; }
	inline bool* get_address_of_IncludesInternals_0() { return &___IncludesInternals_0; }
	inline void set_IncludesInternals_0(bool value)
	{
		___IncludesInternals_0 = value;
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


// Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD 
{
public:
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage/LogValues::_formatter
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_1;

public:
	inline static int32_t get_offset_of__formatter_1() { return static_cast<int32_t>(offsetof(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD, ____formatter_1)); }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * get__formatter_1() const { return ____formatter_1; }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 ** get_address_of__formatter_1() { return &____formatter_1; }
	inline void set__formatter_1(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * value)
	{
		____formatter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatter_1), (void*)value);
	}
};

struct LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_StaticFields
{
public:
	// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String> Microsoft.Extensions.Logging.LoggerMessage/LogValues::Callback
	Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * ___Callback_0;

public:
	inline static int32_t get_offset_of_Callback_0() { return static_cast<int32_t>(offsetof(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_StaticFields, ___Callback_0)); }
	inline Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * get_Callback_0() const { return ___Callback_0; }
	inline Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 ** get_address_of_Callback_0() { return &___Callback_0; }
	inline void set_Callback_0(Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * value)
	{
		___Callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_pinvoke
{
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_com
{
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ____formatter_1;
};

// Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B 
{
public:
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<FullName>k__BackingField
	bool ___U3CFullNameU3Ek__BackingField_0;
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<IncludeGenericParameters>k__BackingField
	bool ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<IncludeGenericParameterNames>k__BackingField
	bool ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<NestedTypeDelimiter>k__BackingField
	Il2CppChar ___U3CNestedTypeDelimiterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CFullNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B, ___U3CFullNameU3Ek__BackingField_0)); }
	inline bool get_U3CFullNameU3Ek__BackingField_0() const { return ___U3CFullNameU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CFullNameU3Ek__BackingField_0() { return &___U3CFullNameU3Ek__BackingField_0; }
	inline void set_U3CFullNameU3Ek__BackingField_0(bool value)
	{
		___U3CFullNameU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIncludeGenericParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B, ___U3CIncludeGenericParametersU3Ek__BackingField_1)); }
	inline bool get_U3CIncludeGenericParametersU3Ek__BackingField_1() const { return ___U3CIncludeGenericParametersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIncludeGenericParametersU3Ek__BackingField_1() { return &___U3CIncludeGenericParametersU3Ek__BackingField_1; }
	inline void set_U3CIncludeGenericParametersU3Ek__BackingField_1(bool value)
	{
		___U3CIncludeGenericParametersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIncludeGenericParameterNamesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B, ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2)); }
	inline bool get_U3CIncludeGenericParameterNamesU3Ek__BackingField_2() const { return ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIncludeGenericParameterNamesU3Ek__BackingField_2() { return &___U3CIncludeGenericParameterNamesU3Ek__BackingField_2; }
	inline void set_U3CIncludeGenericParameterNamesU3Ek__BackingField_2(bool value)
	{
		___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNestedTypeDelimiterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B, ___U3CNestedTypeDelimiterU3Ek__BackingField_3)); }
	inline Il2CppChar get_U3CNestedTypeDelimiterU3Ek__BackingField_3() const { return ___U3CNestedTypeDelimiterU3Ek__BackingField_3; }
	inline Il2CppChar* get_address_of_U3CNestedTypeDelimiterU3Ek__BackingField_3() { return &___U3CNestedTypeDelimiterU3Ek__BackingField_3; }
	inline void set_U3CNestedTypeDelimiterU3Ek__BackingField_3(Il2CppChar value)
	{
		___U3CNestedTypeDelimiterU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_pinvoke
{
	int32_t ___U3CFullNameU3Ek__BackingField_0;
	int32_t ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	int32_t ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	uint8_t ___U3CNestedTypeDelimiterU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_com
{
	int32_t ___U3CFullNameU3Ek__BackingField_0;
	int32_t ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	int32_t ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	uint8_t ___U3CNestedTypeDelimiterU3Ek__BackingField_3;
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


// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// Microsoft.Extensions.Logging.FormattedLogValues Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>4__this
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  ___U3CU3E4__this_2;
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A, ___U3CU3E4__this_2)); }
	inline FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____formatter_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____values_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____originalMessage_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94  : public RuntimeObject
{
public:
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::logValues
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  ___logValues_0;

public:
	inline static int32_t get_offset_of_logValues_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94, ___logValues_0)); }
	inline LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  get_logValues_0() const { return ___logValues_0; }
	inline LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * get_address_of_logValues_0() { return &___logValues_0; }
	inline void set_logValues_0(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  value)
	{
		___logValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___logValues_0))->____formatter_1), (void*)NULL);
	}
};


// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7
struct U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>4__this
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72, ___U3CU3E4__this_2)); }
	inline LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____formatter_1), (void*)NULL);
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


// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E  : public RuntimeObject
{
public:
	// Microsoft.Extensions.Logging.LogLevel Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::logLevel
	int32_t ___logLevel_0;
	// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::eventId
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId_1;
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::formatter
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ___formatter_2;

public:
	inline static int32_t get_offset_of_logLevel_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E, ___logLevel_0)); }
	inline int32_t get_logLevel_0() const { return ___logLevel_0; }
	inline int32_t* get_address_of_logLevel_0() { return &___logLevel_0; }
	inline void set_logLevel_0(int32_t value)
	{
		___logLevel_0 = value;
	}

	inline static int32_t get_offset_of_eventId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E, ___eventId_1)); }
	inline EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  get_eventId_1() const { return ___eventId_1; }
	inline EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * get_address_of_eventId_1() { return &___eventId_1; }
	inline void set_eventId_1(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  value)
	{
		___eventId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eventId_1))->___U3CNameU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E, ___formatter_2)); }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * get_formatter_2() const { return ___formatter_2; }
	inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 ** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatter_2), (void*)value);
	}
};


// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>
struct Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>
struct Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_t7037359D4BF5772B8840B32820560F124F76047E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>
struct Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9  : public MulticastDelegate_t
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


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  m_Items[1];

public:
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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


// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m40D139B6ED206961EBBC792C361CBF8C6F288391_gshared (ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::GetOrAdd(!0,System.Func`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConcurrentDictionary_2_GetOrAdd_m5FC29BA5754171259F8C3EC34320534B79CE5B03_gshared (ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198 * __this, RuntimeObject * ___key0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___valueFactory1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0A46F1D3CDFD063E9561E0B23D2BA32B895CD1AD_gshared (ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mFE3327163A4758001326DFD0144DECFC2C7F4F9D_gshared (Func_3_t7711DB2AC13DF43B193EA85BB075A3011A7A9E2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.AsyncLocal`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_mBA4D0697D5237A0E4C0DBA3DF2D5085EAD08FDA4_gshared (AsyncLocal_1_tD2FEC61861D3053FD5D31A89D3D68DAFE46D2394 * __this, const RuntimeMethod* method);
// !0 System.Threading.AsyncLocal`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AsyncLocal_1_get_Value_mDF754318806A89F6C19E1E6B9444271E668547CC_gshared (AsyncLocal_1_tD2FEC61861D3053FD5D31A89D3D68DAFE46D2394 * __this, const RuntimeMethod* method);
// System.Void System.Threading.AsyncLocal`1<System.Object>::set_Value(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_m55B31CBEC4826D695480CC1E65B4216FF26E3E98_gshared (AsyncLocal_1_tD2FEC61861D3053FD5D31A89D3D68DAFE46D2394 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m4431EC065F139E19737E57F911AACE8BFC72582F_gshared (Func_3_tC92EDDA5F69139D5C57EE26BB206D5A9EBD0EFF5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___other0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272_inline (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m8A7F05E878BA4BA89C53440F05270830367209B8 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m265569383F27DCB7096DDF83E54FC5D06D4E0BD1 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m0861111BB15DA2D22C44289AF1F8950D2E896AE2 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::get_Formatter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * FormattedLogValues_get_Formatter_m2B434C331EB5008358C4E3164ED25D6D31E389E7_inline (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::TryGetValue(!0,!1&)
inline bool ConcurrentDictionary_2_TryGetValue_m77DFF1824402582965FBC47B115887EADB535899 (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * __this, String_t* ___key0, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC *, String_t*, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 **, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m40D139B6ED206961EBBC792C361CBF8C6F288391_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m80C8C2D84637762F9B1265054C6B4AEFA89430B7 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mED09F51B51D775A3DBA2DF7AAF0152664F672A49 (Func_2_t7037359D4BF5772B8840B32820560F124F76047E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7037359D4BF5772B8840B32820560F124F76047E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// !1 System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::GetOrAdd(!0,System.Func`2<!0,!1>)
inline LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ConcurrentDictionary_2_GetOrAdd_mBF1885EB2710CE58D22C3C0B6038F241838A35A4 (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * __this, String_t* ___key0, Func_2_t7037359D4BF5772B8840B32820560F124F76047E * ___valueFactory1, const RuntimeMethod* method)
{
	return ((  LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * (*) (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC *, String_t*, Func_2_t7037359D4BF5772B8840B32820560F124F76047E *, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_m5FC29BA5754171259F8C3EC34320534B79CE5B03_gshared)(__this, ___key0, ___valueFactory1, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, String_t*, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  LogValuesFormatter_GetValue_m0FEFE74E0BC4E215772B239559D74A810E515CAF (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, int32_t ___index1, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * LogValuesFormatter_get_ValueNames_m9D7F2B8F3E32FAB9FE94EF809837E54CA6B47BC2_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m7C112A29E11133815A79A4D00E31C08ED07AA97D (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mEA33A769DC540A8BA24E37C26CE3DB2846507D73 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m54A0E7BF2D352B5AE870D6DFE222D6939C57F486 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m29489E2E6CCC52E92811B9A2036092438FCA570B (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_mC1CF328358F6D38BFD027F7D5912D49B1E3B1E3F (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor()
inline void ConcurrentDictionary_2__ctor_m8344676E559456CD8CE1004CEEE5C2982517B25C (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC *, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0A46F1D3CDFD063E9561E0B23D2BA32B895CD1AD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_mF13A133E6648578A1E620ACA905AF7C433C603F2_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m7460CC5F82C321EA7F9003A7D863111BE278EED8 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17 (StringBuilder_t * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_mFAC419BE3675D0113DA8A3B2E01067DC279422EA (String_t* ___format0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m2F49F72E433E32FE4021432592B19EA58B5A28A0 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0 (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
inline String_t* String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_gshared)(___separator0, ___values1, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId2, Exception_t * ___exception3, String_t* ___message4, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args5, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509 (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  EventId_op_Implicit_mB2E1E3B7997ABB67FCFDD0FEC5783F14149E635B (int32_t ___i0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF28B4BD4DA08E8FE855AFA47F90D61E189489D89 (Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mFE3327163A4758001326DFD0144DECFC2C7F4F9D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::.ctor()
inline void AsyncLocal_1__ctor_mFFC6AAEFA457DB3E17F7199276A67CB6C693E1CE (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 *, const RuntimeMethod*))AsyncLocal_1__ctor_mBA4D0697D5237A0E4C0DBA3DF2D5085EAD08FDA4_gshared)(__this, method);
}
// !0 System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::get_Value()
inline Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * AsyncLocal_1_get_Value_m0BAE9B1C65683A6CABF828630F154B679F560E4E (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * __this, const RuntimeMethod* method)
{
	return ((  Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * (*) (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 *, const RuntimeMethod*))AsyncLocal_1_get_Value_mDF754318806A89F6C19E1E6B9444271E668547CC_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::.ctor(Microsoft.Extensions.Logging.LoggerExternalScopeProvider,System.Object,Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope__ctor_m9D21536094CD3F488969BC2EE1F616365DE7B2C5 (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * ___provider0, RuntimeObject * ___state1, Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * ___parent2, const RuntimeMethod* method);
// System.Void System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::set_Value(!0)
inline void AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8 (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * __this, Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 *, Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE *, const RuntimeMethod*))AsyncLocal_1_set_Value_m55B31CBEC4826D695480CC1E65B4216FF26E3E98_gshared)(__this, ___value0, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m656956AF1F18FEAABC867B7E4FDC639935AFE91D (Type_t * ___type0, bool ___fullName1, bool ___includeGenericParameterNames2, bool ___includeGenericParameters3, Il2CppChar ___nestedTypeDelimiter4, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mFF3F8C9CC8018C14ECA7B11B0B98AC0578DDE5D9 (U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage::CreateLogValuesFormatter(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685 (String_t* ___formatString0, int32_t ___expectedNamedParameterCount1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.ctor(Microsoft.Extensions.Logging.LogValuesFormatter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_inline (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ___formatter0, const RuntimeMethod* method);
// System.Void System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA07DBD8FE73F777281C443D7534DB1FC1126A5C6 (Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6069341DD6EB079BADF52070B6825506ABC00F68 (U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * __this, const RuntimeMethod* method);
// System.Void System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m42DB1482AF8985D5997D4F8E7229F077F8F4945A (Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.SR::get_UnexpectedNumberOfNamedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedNumberOfNamedParameters_mCA861E89EE434D8134CDB105855CE6CEB8D83D75 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mC480B519C0064F392A6ACAD4F951DA2D2B1DD706 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * NullScope_get_Instance_m1BC983DC7FA8C6CD4F071E317B0E0FF6BF3DECD5_inline (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__ctor_m6418E120093F8813242FE0EB0670F50E2190E414 (NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__ctor_m096210D7B18D6269A08C9BD7400000A1F039A809 (NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * NullLogger_get_Instance_m67D9B098C4E4435FE7BB01E1D2C53A73B2E5DB86_inline (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__ctor_mBCFF82FB2C53AA7A781C9919A8CC2E41B437F640 (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__ctor_mB1A16EE6819C3FBDB9E42A544BF41F09AB2BC267 (NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.NullScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__ctor_m0D1F15C9F980E0B4BCEF01ABA13BA920FD29FF24 (NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * __this, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1 (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m96430249B4DFB369AF5EB04D2C1335892FC7D3E2 (const RuntimeMethod* method);
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
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF7F5DE6CE2B371F0168B59C70F9D9BE80F0371BF (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameOptions__ctor_mD2A0E9C63DECF8133D168E092F78A2B894048E0C (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessType_m47E727397AB26CDA13950664A065EF4268F395C7 (StringBuilder_t * ___builder0, Type_t * ___type1, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessGenericType(System.Text.StringBuilder,System.Type,System.Type[],System.Int32,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessGenericType_mC44E2ABBE927181D3D5464581D0EE70680BEB6C2 (StringBuilder_t * ___builder0, Type_t * ___type1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericArguments2, int32_t ___length3, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options4, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessArrayType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessArrayType_m70725FD811024F17E6B6DA99B413AFB901738DE1 (StringBuilder_t * ___builder0, Type_t * ___type1, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameterNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method);
// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_NestedTypeDelimiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Replace_m1D1BD4F473AB6BE160B44E79181854B5EC4AFE30 (StringBuilder_t * __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB (StringBuilder_t * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_m2EF218AD3B5364DAE25B9D0AF68427DF52A47699 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B0975AE1190F8E07F621D86B6143F184E4CD445 (U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA4EA80DD937BCFD4FA76D62645961F6B62DC6BED (U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * __this, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Scope_get_State_m8FD12CFBFD83A66FB54DBFEB917215EB41F28401_inline (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * Scope_get_Parent_m31952E5320A76D67DA3F1A0C0EEB09D7BB37DCDF_inline (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValues_get_Count_mD574809ABAC172507AF6CAC731B0FAE440D285C9 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_mE286D7FADF245274FBE40516E84A8CEAEAAD183A (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LoggerMessage/LogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_GetEnumerator_mFC1B6596362344638E5E9B86C81DC90B0C72C84B (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m806664817550597163296B9C84D808B009FCBBD3_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValues_ToString_m2BFDE6392E9211F52739E3C47C5C7B344DE66558 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.Extensions.Logging.LoggerMessage/LogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m31653876650688B7C9FE2B3DCD6A4F78EC925506 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method);
// System.Void System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m713FAACA562AABCD2C99EF1F8576BFA75417097D (Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m4431EC065F139E19737E57F911AACE8BFC72582F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3858E2D69BE630A4C5CC59CE70CFB6F7A8E41C9D (U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB4DCF68943B83C14B8B63C5721D1714DB8F138E0 (EmbeddedAttribute_tCA5E0B828EB93D421B9F266806B4F314047CC06D * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_pinvoke(const EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900& unmarshaled, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.get_U3CIdU3Ek__BackingField_0();
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CNameU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_pinvoke_back(const EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_pinvoke& marshaled, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900& unmarshaled)
{
	int32_t unmarshaled_U3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.set_U3CIdU3Ek__BackingField_0(unmarshaled_U3CIdU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_pinvoke_cleanup(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_com(const EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900& unmarshaled, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.get_U3CIdU3Ek__BackingField_0();
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CNameU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_com_back(const EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_com& marshaled, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900& unmarshaled)
{
	int32_t unmarshaled_U3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.set_U3CIdU3Ek__BackingField_0(unmarshaled_U3CIdU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshal_com_cleanup(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  EventId_op_Implicit_mB2E1E3B7997ABB67FCFDD0FEC5783F14149E635B (int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1;
		memset((&L_1), 0, sizeof(L_1));
		EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C((&L_1), L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Logging.EventId::op_Equality(Microsoft.Extensions.Logging.EventId,Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_op_Equality_mDBAE8FCC4194873DAA04389216E21DB10A37E0E2 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___left0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___right1, const RuntimeMethod* method)
{
	{
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_0 = ___right1;
		bool L_1;
		L_1 = EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)(&___left0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Logging.EventId::op_Inequality(Microsoft.Extensions.Logging.EventId,Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_op_Inequality_m18DBF6F1AC467A6269D5729810BAF03598CC7FCA (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___left0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___right1, const RuntimeMethod* method)
{
	{
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_0 = ___right1;
		bool L_1;
		L_1 = EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)(&___left0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		String_t* L_1 = ___name1;
		__this->set_U3CNameU3Ek__BackingField_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C_AdjustorThunk (RuntimeObject * __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	EventId__ctor_m160CA58C6CF1BB7456F3FAADCF8C079328536B7C(_thisAdjusted, ___id0, ___name1, method);
}
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m8A7F05E878BA4BA89C53440F05270830367209B8 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272_inline((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_ToString_m8A7F05E878BA4BA89C53440F05270830367209B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_ToString_m8A7F05E878BA4BA89C53440F05270830367209B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE_AdjustorThunk (RuntimeObject * __this, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m265569383F27DCB7096DDF83E54FC5D06D4E0BD1 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((*(EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)UnBox(L_2, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900_il2cpp_TypeInfo_var))));
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_3 = V_0;
		bool L_4;
		L_4 = EventId_Equals_m9066A002B3443E4D0254F5C7C3B012DC8594F6AE((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m265569383F27DCB7096DDF83E54FC5D06D4E0BD1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m265569383F27DCB7096DDF83E54FC5D06D4E0BD1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m0861111BB15DA2D22C44289AF1F8950D2E896AE2 (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline((EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_GetHashCode_m0861111BB15DA2D22C44289AF1F8950D2E896AE2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * _thisAdjusted = reinterpret_cast<EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_GetHashCode_m0861111BB15DA2D22C44289AF1F8950D2E896AE2(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_pinvoke(const FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC& unmarshaled, FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_pinvoke& marshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_pinvoke_back(const FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_pinvoke& marshaled, FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC& unmarshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_pinvoke_cleanup(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_com(const FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC& unmarshaled, FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_com& marshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_com_back(const FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_com& marshaled, FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC& unmarshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshal_com_cleanup(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_marshaled_com& marshaled)
{
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::get_Formatter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * FormattedLogValues_get_Formatter_m2B434C331EB5008358C4E3164ED25D6D31E389E7 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = __this->get__formatter_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * FormattedLogValues_get_Formatter_m2B434C331EB5008358C4E3164ED25D6D31E389E7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * _returnValue;
	_returnValue = FormattedLogValues_get_Formatter_m2B434C331EB5008358C4E3164ED25D6D31E389E7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_GetOrAdd_mBF1885EB2710CE58D22C3C0B6038F241838A35A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m77DFF1824402582965FBC47B115887EADB535899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mED09F51B51D775A3DBA2DF7AAF0152664F672A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7037359D4BF5772B8840B32820560F124F76047E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__9_0_m314E3546884D6A6352076CDF633D20D9878D8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7037359D4BF5772B8840B32820560F124F76047E * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * G_B8_2 = NULL;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * G_B8_3 = NULL;
	Func_2_t7037359D4BF5772B8840B32820560F124F76047E * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * G_B7_2 = NULL;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * G_B7_3 = NULL;
	String_t* G_B12_0 = NULL;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * G_B11_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values1;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___values1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_2 = ___format0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		int32_t L_3 = ((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var))->get__count_2();
		if ((((int32_t)L_3) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * L_4 = ((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var))->get__formatters_3();
		String_t* L_5 = ___format0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 ** L_6 = __this->get_address_of__formatter_4();
		NullCheck(L_4);
		bool L_7;
		L_7 = ConcurrentDictionary_2_TryGetValue_m77DFF1824402582965FBC47B115887EADB535899(L_4, L_5, (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 **)L_6, /*hidden argument*/ConcurrentDictionary_2_TryGetValue_m77DFF1824402582965FBC47B115887EADB535899_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_8 = ___format0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_9 = (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 *)il2cpp_codegen_object_new(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		LogValuesFormatter__ctor_m80C8C2D84637762F9B1265054C6B4AEFA89430B7(L_9, L_8, /*hidden argument*/NULL);
		__this->set__formatter_4(L_9);
		goto IL_0070;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * L_10 = ((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var))->get__formatters_3();
		String_t* L_11 = ___format0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var);
		Func_2_t7037359D4BF5772B8840B32820560F124F76047E * L_12 = ((U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var))->get_U3CU3E9__9_0_1();
		Func_2_t7037359D4BF5772B8840B32820560F124F76047E * L_13 = L_12;
		G_B7_0 = L_13;
		G_B7_1 = L_11;
		G_B7_2 = L_10;
		G_B7_3 = __this;
		if (L_13)
		{
			G_B8_0 = L_13;
			G_B8_1 = L_11;
			G_B8_2 = L_10;
			G_B8_3 = __this;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var);
		U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * L_14 = ((U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7037359D4BF5772B8840B32820560F124F76047E * L_15 = (Func_2_t7037359D4BF5772B8840B32820560F124F76047E *)il2cpp_codegen_object_new(Func_2_t7037359D4BF5772B8840B32820560F124F76047E_il2cpp_TypeInfo_var);
		Func_2__ctor_mED09F51B51D775A3DBA2DF7AAF0152664F672A49(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__9_0_m314E3546884D6A6352076CDF633D20D9878D8B96_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mED09F51B51D775A3DBA2DF7AAF0152664F672A49_RuntimeMethod_var);
		Func_2_t7037359D4BF5772B8840B32820560F124F76047E * L_16 = L_15;
		((U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var))->set_U3CU3E9__9_0_1(L_16);
		G_B8_0 = L_16;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_005d:
	{
		NullCheck(G_B8_2);
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_17;
		L_17 = ConcurrentDictionary_2_GetOrAdd_mBF1885EB2710CE58D22C3C0B6038F241838A35A4(G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/ConcurrentDictionary_2_GetOrAdd_mBF1885EB2710CE58D22C3C0B6038F241838A35A4_RuntimeMethod_var);
		G_B8_3->set__formatter_4(L_17);
		goto IL_0070;
	}

IL_0069:
	{
		__this->set__formatter_4((LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 *)NULL);
	}

IL_0070:
	{
		String_t* L_18 = ___format0;
		String_t* L_19 = L_18;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_19)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_007b;
		}
	}
	{
		G_B12_0 = _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
		G_B12_1 = G_B11_1;
	}

IL_007b:
	{
		G_B12_1->set__originalMessage_6(G_B12_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = ___values1;
		__this->set__values_5(L_20);
		return;
	}
}
IL2CPP_EXTERN_C  void FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7(_thisAdjusted, ___format0, ___values1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_3 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___index0;
		int32_t L_5;
		L_5 = FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = __this->get__originalMessage_6();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_7;
		memset((&L_7), 0, sizeof(L_7));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_7), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_6, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_8 = __this->get__formatter_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get__values_5();
		int32_t L_10 = ___index0;
		NullCheck(L_8);
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_11;
		L_11 = LogValuesFormatter_GetValue_m0FEFE74E0BC4E215772B239559D74A810E515CAF(L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  _returnValue;
	_returnValue = FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = __this->get__formatter_4();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_1 = __this->get__formatter_4();
		NullCheck(L_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = LogValuesFormatter_get_ValueNames_m9D7F2B8F3E32FAB9FE94EF809837E54CA6B47BC2_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_2, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}
}
IL2CPP_EXTERN_C  int32_t FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mEA33A769DC540A8BA24E37C26CE3DB2846507D73 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * L_0 = (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__14__ctor_m7C112A29E11133815A79A4D00E31C08ED07AA97D(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * L_1 = L_0;
		FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  L_2 = (*(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)__this);
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_GetEnumerator_mEA33A769DC540A8BA24E37C26CE3DB2846507D73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_GetEnumerator_mEA33A769DC540A8BA24E37C26CE3DB2846507D73(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m29489E2E6CCC52E92811B9A2036092438FCA570B (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = __this->get__formatter_4();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get__originalMessage_6();
		return L_1;
	}

IL_000f:
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_2 = __this->get__formatter_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = __this->get__values_5();
		NullCheck(L_2);
		String_t* L_4;
		L_4 = LogValuesFormatter_Format_m54A0E7BF2D352B5AE870D6DFE222D6939C57F486(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* FormattedLogValues_ToString_m29489E2E6CCC52E92811B9A2036092438FCA570B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormattedLogValues_ToString_m29489E2E6CCC52E92811B9A2036092438FCA570B(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_mC1CF328358F6D38BFD027F7D5912D49B1E3B1E3F (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = FormattedLogValues_GetEnumerator_mEA33A769DC540A8BA24E37C26CE3DB2846507D73((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_mC1CF328358F6D38BFD027F7D5912D49B1E3B1E3F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * _thisAdjusted = reinterpret_cast<FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_mC1CF328358F6D38BFD027F7D5912D49B1E3B1E3F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__cctor_mBBC2FAB65CA3876FB90C7EB42A177921A75313AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m8344676E559456CD8CE1004CEEE5C2982517B25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC * L_0 = (ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC *)il2cpp_codegen_object_new(ConcurrentDictionary_2_t288E5A53B1C6DB0C68E3C565434B996F08997CCC_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_m8344676E559456CD8CE1004CEEE5C2982517B25C(L_0, /*hidden argument*/ConcurrentDictionary_2__ctor_m8344676E559456CD8CE1004CEEE5C2982517B25C_RuntimeMethod_var);
		((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var))->set__formatters_3(L_0);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mB1A205BA540CE4B54AA6219F48D427B0D23A50A6 (IsReadOnlyAttribute_tB0B9912DDA357A9A31EB6D7F9F85C15763113EBB * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m80C8C2D84637762F9B1265054C6B4AEFA89430B7 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set__valueNames_4(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___format0;
		LogValuesFormatter_set_OriginalFormat_mF13A133E6648578A1E620ACA905AF7C433C603F2_inline(__this, L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		String_t* L_3 = ___format0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_00c6;
	}

IL_002c:
	{
		String_t* L_5 = ___format0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = LogValuesFormatter_FindBraceIndex_m7460CC5F82C321EA7F9003A7D863111BE278EED8(L_5, ((int32_t)123), L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		String_t* L_9 = ___format0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		int32_t L_12;
		L_12 = LogValuesFormatter_FindBraceIndex_m7460CC5F82C321EA7F9003A7D863111BE278EED8(L_9, ((int32_t)125), L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		int32_t L_13 = V_4;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		String_t* L_16 = ___format0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		NullCheck(L_15);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_15, L_16, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_1 = L_21;
		goto IL_00c6;
	}

IL_0058:
	{
		String_t* L_22 = ___format0;
		IL2CPP_RUNTIME_CLASS_INIT(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = ((LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var))->get_FormatDelimiters_2();
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26;
		L_26 = LogValuesFormatter_FindIndexOfAny_mFAC419BE3675D0113DA8A3B2E01067DC279422EA(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		StringBuilder_t * L_27 = V_0;
		String_t* L_28 = ___format0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		NullCheck(L_27);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_27, L_28, L_29, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)1)), /*hidden argument*/NULL);
		StringBuilder_t * L_33 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_34 = __this->get__valueNames_4();
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_34, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		V_6 = L_35;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_36;
		L_36 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_37;
		L_37 = Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471((int32_t*)(&V_6), L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, L_37, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = __this->get__valueNames_4();
		String_t* L_40 = ___format0;
		int32_t L_41 = V_3;
		int32_t L_42 = V_5;
		int32_t L_43 = V_3;
		NullCheck(L_40);
		String_t* L_44;
		L_44 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_40, ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_39, L_44, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		StringBuilder_t * L_45 = V_0;
		String_t* L_46 = ___format0;
		int32_t L_47 = V_5;
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_45);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_45, L_46, L_47, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00c6:
	{
		int32_t L_52 = V_1;
		int32_t L_53 = V_2;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_002c;
		}
	}
	{
		StringBuilder_t * L_54 = V_0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		__this->set__format_3(L_55);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COriginalFormatU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_mF13A133E6648578A1E620ACA905AF7C433C603F2 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COriginalFormatU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * LogValuesFormatter_get_ValueNames_m9D7F2B8F3E32FAB9FE94EF809837E54CA6B47BC2 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get__valueNames_4();
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m7460CC5F82C321EA7F9003A7D863111BE278EED8 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___endIndex3;
		V_0 = L_0;
		int32_t L_1 = ___startIndex2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0041;
	}

IL_0008:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___format0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, L_4, /*hidden argument*/NULL);
		Il2CppChar L_6 = ___brace1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		if (((int32_t)((int32_t)L_7%(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		V_2 = 0;
		int32_t L_8 = ___endIndex3;
		V_0 = L_8;
		goto IL_003d;
	}

IL_0021:
	{
		String_t* L_9 = ___format0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = ___brace1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_13 = ___brace1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_14 = V_2;
		if (L_14)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_15 = V_1;
		V_0 = L_15;
		goto IL_0039;
	}

IL_0037:
	{
		int32_t L_16 = V_1;
		V_0 = L_16;
	}

IL_0039:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___endIndex3;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0008;
		}
	}

IL_0045:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_mFAC419BE3675D0113DA8A3B2E01067DC279422EA (String_t* ___format0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars1;
		int32_t L_2 = ___startIndex2;
		int32_t L_3 = ___endIndex3;
		int32_t L_4 = ___startIndex2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = String_IndexOfAny_m2F49F72E433E32FE4021432592B19EA58B5A28A0(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0012:
	{
		int32_t L_8 = ___endIndex3;
		return L_8;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m54A0E7BF2D352B5AE870D6DFE222D6939C57F486 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * G_B5_2 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___values0;
		int32_t L_2 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___values0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RuntimeObject * L_7;
		L_7 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_9 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11;
		L_11 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_12 = __this->get__format_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = ___values0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		G_B5_2 = L_11;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			G_B6_2 = L_11;
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = ((LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var))->get_EmptyArray_1();
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0032:
	{
		String_t* L_16;
		L_16 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m806664817550597163296B9C84D808B009FCBBD3 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__format_3();
		return L_0;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m1A5ADEDFD4AC162A213F680E7FE6B978BD54F40C (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = __this->get__format_3();
		RuntimeObject * L_2 = ___arg00;
		RuntimeObject * L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_0, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m0AAF3639A1600E16665C102351F92A6828E7E2D5 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = __this->get__format_3();
		RuntimeObject * L_2 = ___arg00;
		RuntimeObject * L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___arg11;
		RuntimeObject * L_5;
		L_5 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m82CE13AFE4B2316887EA8D48040CE89AE88CC6FE (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = __this->get__format_3();
		RuntimeObject * L_2 = ___arg00;
		RuntimeObject * L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___arg11;
		RuntimeObject * L_5;
		L_5 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___arg22;
		RuntimeObject * L_7;
		L_7 = LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972(__this, L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B(L_0, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  LogValuesFormatter_GetValue_m0FEFE74E0BC4E215772B239559D74A810E515CAF (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___index1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get__valueNames_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_2, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_4 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValuesFormatter_GetValue_m0FEFE74E0BC4E215772B239559D74A810E515CAF_RuntimeMethod_var)));
	}

IL_001d:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get__valueNames_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_5, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		int32_t L_7 = ___index1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = __this->get__valueNames_4();
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = ___values0;
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_15), L_10, L_14, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		return L_15;
	}

IL_0040:
	{
		String_t* L_16;
		L_16 = LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51_inline(__this, /*hidden argument*/NULL);
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_17;
		memset((&L_17), 0, sizeof(L_17));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_17), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_16, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		return L_17;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LogValuesFormatter::GetValues(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_GetValues_m0F62530091276B2347F61D56E695F7A45A602FC8 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values0;
		NullCheck(L_0);
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_1 = (KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6*)(KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6*)SZArrayNew(KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_000f:
	{
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_2 = V_0;
		int32_t L_3 = V_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = __this->get__valueNames_4();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___values0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_11;
		memset((&L_11), 0, sizeof(L_11));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_11), L_6, L_10, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE )L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = __this->get__valueNames_4();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_14, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_000f;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_16 = V_0;
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51_inline(__this, /*hidden argument*/NULL);
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_19;
		memset((&L_19), 0, sizeof(L_19));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_19), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_18, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), (int32_t)1))), (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE )L_19);
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_20 = V_0;
		return (RuntimeObject*)L_20;
	}
}
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LogValuesFormatter_FormatArgument_m9E788A90B0FE22AD336F456A758B8B6C1A2B5972 (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFormatArgumentU3Eb__21_0_mDBCEE17F6DCA2D7CB56F0C54EA7EAA1D115E2CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		return L_2;
	}

IL_0013:
	{
		RuntimeObject * L_3 = ___value0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4(L_5, /*hidden argument*/Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_7 = ((U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var))->get_U3CU3E9__21_0_1();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_8 = L_7;
		G_B6_0 = L_8;
		G_B6_1 = L_6;
		G_B6_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			G_B7_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var);
		U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * L_9 = ((U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)il2cpp_codegen_object_new(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var);
		Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CFormatArgumentU3Eb__21_0_mDBCEE17F6DCA2D7CB56F0C54EA7EAA1D115E2CE6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = L_10;
		((U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var))->set_U3CU3E9__21_0_1(L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_0047:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0(G_B7_1, G_B7_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B(G_B7_2, L_12, /*hidden argument*/String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_RuntimeMethod_var);
		return L_13;
	}

IL_0052:
	{
		RuntimeObject * L_14 = ___value0;
		return L_14;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__cctor_m75F7030BFDB13F6A47DC117D70EBFF1716677649 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		((LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var))->set_EmptyArray_1(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)58));
		((LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var))->set_FormatDelimiters_2(L_3);
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
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m71583E7779517DFE0CC9C58C16E441565F643B7D (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 1, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_mA7B786C74CF2187072939F9867D59431811E460E (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 1, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m79107CB9EA71E1A684CCC7DDE85770DB86D0E531 (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 1, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_mF5D08521ECC1386A47F7916E1C7499309112AACC (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_m2C26DA22B2FE7F765950D25D4F7AC130D1BD45CE (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_m1873ED2E093F50C6FE4BC51E41EB8022D0D849A2 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mC557E57D08E7D1C90E19E80333AA0077AD6273F0 (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mE4C6BEA383029E505FCB17BF95D467B618839F82 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_m38BF4B0290A7324048A8E88D61F4A806AA2DCF0D (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 2, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_m404B3EF5002B2DF894459B2B8EAA53BBD21A4629 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 2, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mE2FF02E6C2BB74CB13A2F2FE62A4A2A60E6534FC (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 2, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_m8EA018CDDA2A028F1A1B112EE05D406F5C3D6FF8 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m1A8D1CF8F879CF19ECA50F13D57316B290D3DBB7 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 3, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m4D9FD2F84771A3C31B40F9742FE571AF1225F4D7 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 3, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m6FDE6896A09F951C64448EB1C67C4E6E7C7AAC3D (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 3, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m367681E1D8424389F7E96EF0B96FA52DD2CF188C (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 3, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mC3ED6135E0C107FB577087A6F6E8BC244C44AABB (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 4, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mBE04CBEC6DB26CE8450FE0D9A1ADC277A3B7E75B (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 4, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m786291E0E260940A2CBC17A0194B903D327BD950 (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 4, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m9E1363122A990510E849C428B8B84A57239E99B4 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m663DB07FBFEF490EFF0FBBDCB687555AF9DECD36 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		Exception_t * L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, 5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m60C07450FE775C9A0AFCD8FB543B762F9DABF153 (RuntimeObject* ___logger0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2(L_0, 5, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m45DDAB03F312B8E7BFE9FF54F029210B03AE2DC5 (RuntimeObject* ___logger0, Exception_t * ___exception1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t * L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E(L_0, 5, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_mDD51539B6EEF5F3222B0FC85CFDA2C78D51D87FE (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509(L_0, 5, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m8B800075BE31C6B549DD382ADBC130974E953509 (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_2;
		L_2 = EventId_op_Implicit_mB2E1E3B7997ABB67FCFDD0FEC5783F14149E635B(0, /*hidden argument*/NULL);
		String_t* L_3 = ___message2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, L_1, L_2, (Exception_t *)NULL, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m488656A28970747EE5BCE8555578C24C4D0EEFD2 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_2 = ___eventId2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, L_1, L_2, (Exception_t *)NULL, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m48FDFE0A9615907C764AB6B42E77C0AF13F9B59E (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_2;
		L_2 = EventId_op_Implicit_mB2E1E3B7997ABB67FCFDD0FEC5783F14149E635B(0, /*hidden argument*/NULL);
		Exception_t * L_3 = ___exception2;
		String_t* L_4 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___args4;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId2, Exception_t * ___exception3, String_t* ___message4, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_Log_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_m0DDFF4BF325FC2470246307CB8B197C6F0E91F37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerExtensions_Log_mFD62A3FF65DDE8B3BBE151ADA94DB76527770505_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___logger0;
		int32_t L_3 = ___logLevel1;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_4 = ___eventId2;
		String_t* L_5 = ___message4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args5;
		FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  L_7;
		memset((&L_7), 0, sizeof(L_7));
		FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7((&L_7), L_5, L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = ___exception3;
		IL2CPP_RUNTIME_CLASS_INIT(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * L_9 = ((LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var))->get__messageFormatter_0();
		NullCheck(L_2);
		GenericInterfaceActionInvoker5< int32_t, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 , FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC , Exception_t *, Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * >::Invoke(ILogger_Log_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_m0DDFF4BF325FC2470246307CB8B197C6F0E91F37_RuntimeMethod_var, L_2, L_3, L_4, L_7, L_8, L_9);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerExtensions::BeginScope(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerExtensions_BeginScope_m9C869CAF836CBBFC1CF744480C414A5C041358BE (RuntimeObject* ___logger0, String_t* ___messageFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_BeginScope_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_mC0AA7DEE8A1E1E9CCF5C1C72407D933CD31936C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerExtensions_BeginScope_m9C869CAF836CBBFC1CF744480C414A5C041358BE_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___logger0;
		String_t* L_3 = ___messageFormat1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args2;
		FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  L_5;
		memset((&L_5), 0, sizeof(L_5));
		FormattedLogValues__ctor_m0B512DFA0E71C27CAD2AB30240EAD33767FDFCE7((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = GenericInterfaceFuncInvoker1< RuntimeObject*, FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  >::Invoke(ILogger_BeginScope_TisFormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_mC0AA7DEE8A1E1E9CCF5C1C72407D933CD31936C0_RuntimeMethod_var, L_2, L_5);
		return L_6;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerExtensions::MessageFormatter(Microsoft.Extensions.Logging.FormattedLogValues,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggerExtensions_MessageFormatter_m59C49DB804AB019AB32535E359E278DC2429C807 (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC  ___state0, Exception_t * ___error1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = FormattedLogValues_ToString_m29489E2E6CCC52E92811B9A2036092438FCA570B((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)(&___state0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions__cctor_mE9527AACA28CD72E8D4B1E45E1CBDB79B2DEA513 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF28B4BD4DA08E8FE855AFA47F90D61E189489D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_MessageFormatter_m59C49DB804AB019AB32535E359E278DC2429C807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 * L_0 = (Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552 *)il2cpp_codegen_object_new(Func_3_tA27E87CD7643DED0EC2FAE1DDBF5FDB7D08E1552_il2cpp_TypeInfo_var);
		Func_3__ctor_mF28B4BD4DA08E8FE855AFA47F90D61E189489D89(L_0, NULL, (intptr_t)((intptr_t)LoggerExtensions_MessageFormatter_m59C49DB804AB019AB32535E359E278DC2429C807_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF28B4BD4DA08E8FE855AFA47F90D61E189489D89_RuntimeMethod_var);
		((LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_t5B452B9CFE06C07A9B7C2B59DAA88E9C84286EA3_il2cpp_TypeInfo_var))->set__messageFormatter_0(L_0);
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
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExternalScopeProvider__ctor_m7C1DD24753FCA98690F4739BBF22C1A35D1CB462 (LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1__ctor_mFFC6AAEFA457DB3E17F7199276A67CB6C693E1CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * L_0 = (AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 *)il2cpp_codegen_object_new(AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953_il2cpp_TypeInfo_var);
		AsyncLocal_1__ctor_mFFC6AAEFA457DB3E17F7199276A67CB6C693E1CE(L_0, /*hidden argument*/AsyncLocal_1__ctor_mFFC6AAEFA457DB3E17F7199276A67CB6C693E1CE_RuntimeMethod_var);
		__this->set__currentScope_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerExternalScopeProvider::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerExternalScopeProvider_Push_m39FA9C82B5C1E2742B6682CC25339A0BBA108945 (LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_get_Value_m0BAE9B1C65683A6CABF828630F154B679F560E4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * V_0 = NULL;
	Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * V_1 = NULL;
	{
		AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * L_0 = __this->get__currentScope_0();
		NullCheck(L_0);
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_1;
		L_1 = AsyncLocal_1_get_Value_m0BAE9B1C65683A6CABF828630F154B679F560E4E(L_0, /*hidden argument*/AsyncLocal_1_get_Value_m0BAE9B1C65683A6CABF828630F154B679F560E4E_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject * L_2 = ___state0;
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_3 = V_0;
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_4 = (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE *)il2cpp_codegen_object_new(Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE_il2cpp_TypeInfo_var);
		Scope__ctor_m9D21536094CD3F488969BC2EE1F616365DE7B2C5(L_4, __this, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * L_5 = __this->get__currentScope_0();
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_6 = V_1;
		NullCheck(L_5);
		AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8(L_5, L_6, /*hidden argument*/AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8_RuntimeMethod_var);
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_7 = V_1;
		return L_7;
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
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.LoggerFactoryExtensions::CreateLogger(Microsoft.Extensions.Logging.ILoggerFactory,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerFactoryExtensions_CreateLogger_mD8C608277F81B46B4057FB2B764A8269C20DF2E7 (RuntimeObject* ___factory0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggerFactory_tEE16BF0C488E1AE91D358D22D46EE031FA81C322_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___factory0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_mD8C608277F81B46B4057FB2B764A8269C20DF2E7_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t * L_2 = ___type1;
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
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_mD8C608277F81B46B4057FB2B764A8269C20DF2E7_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___factory0;
		Type_t * L_6 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = TypeNameHelper_GetTypeDisplayName_m656956AF1F18FEAABC867B7E4FDC639935AFE91D(L_6, (bool)1, (bool)0, (bool)0, ((int32_t)46), /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.ILoggerFactory::CreateLogger(System.String) */, ILoggerFactory_tEE16BF0C488E1AE91D358D22D46EE031FA81C322_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
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
// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable> Microsoft.Extensions.Logging.LoggerMessage::DefineScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE * LoggerMessage_DefineScope_mC3808367877810D36F011B985A7ED662FD44DFA7 (String_t* ___formatString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA07DBD8FE73F777281C443D7534DB1FC1126A5C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_mC48079A6B011471DA5BE3BB23C8BAC8147666B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * V_0 = NULL;
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * L_0 = (U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mFF3F8C9CC8018C14ECA7B11B0B98AC0578DDE5D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___formatString0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_2;
		L_2 = LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685(L_1, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * L_3 = V_0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_4 = V_1;
		LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  L_5;
		memset((&L_5), 0, sizeof(L_5));
		LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_inline((&L_5), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_logValues_0(L_5);
		U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * L_6 = V_0;
		Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE * L_7 = (Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE *)il2cpp_codegen_object_new(Func_2_t4170B25D8D874D35264AA80C0701FF705E9180BE_il2cpp_TypeInfo_var);
		Func_2__ctor_mA07DBD8FE73F777281C443D7534DB1FC1126A5C6(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_mC48079A6B011471DA5BE3BB23C8BAC8147666B0F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA07DBD8FE73F777281C443D7534DB1FC1126A5C6_RuntimeMethod_var);
		return L_7;
	}
}
// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception> Microsoft.Extensions.Logging.LoggerMessage::Define(Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA * LoggerMessage_Define_mC4A352699D20074A5525AEB196DC24EA8709DD0B (int32_t ___logLevel0, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  ___eventId1, String_t* ___formatString2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m42DB1482AF8985D5997D4F8E7229F077F8F4945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CDefineU3Eb__0_mB13B60D536E28A18C37B0C99A4D0EC6A286ED620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * L_0 = (U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m6069341DD6EB079BADF52070B6825506ABC00F68(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * L_1 = V_0;
		int32_t L_2 = ___logLevel0;
		NullCheck(L_1);
		L_1->set_logLevel_0(L_2);
		U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * L_3 = V_0;
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_4 = ___eventId1;
		NullCheck(L_3);
		L_3->set_eventId_1(L_4);
		U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * L_5 = V_0;
		String_t* L_6 = ___formatString2;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_7;
		L_7 = LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_formatter_2(L_7);
		U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * L_8 = V_0;
		Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA * L_9 = (Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA *)il2cpp_codegen_object_new(Action_2_t39B3E1B351A1E58CF1E267E6E3726CBB97C86FAA_il2cpp_TypeInfo_var);
		Action_2__ctor_m42DB1482AF8985D5997D4F8E7229F077F8F4945A(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CDefineU3Eb__0_mB13B60D536E28A18C37B0C99A4D0EC6A286ED620_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m42DB1482AF8985D5997D4F8E7229F077F8F4945A_RuntimeMethod_var);
		return L_9;
	}
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage::CreateLogValuesFormatter(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685 (String_t* ___formatString0, int32_t ___expectedNamedParameterCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___formatString0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_1 = (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 *)il2cpp_codegen_object_new(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		LogValuesFormatter__ctor_m80C8C2D84637762F9B1265054C6B4AEFA89430B7(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_2 = V_0;
		NullCheck(L_2);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3;
		L_3 = LogValuesFormatter_get_ValueNames_m9D7F2B8F3E32FAB9FE94EF809837E54CA6B47BC2_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_3, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___expectedNamedParameterCount1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7;
		L_7 = SR_get_UnexpectedNumberOfNamedParameters_mCA861E89EE434D8134CDB105855CE6CEB8D83D75(/*hidden argument*/NULL);
		String_t* L_8 = ___formatString0;
		int32_t L_9 = ___expectedNamedParameterCount1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = SR_Format_mC480B519C0064F392A6ACAD4F951DA2D2B1DD706(L_7, L_8, L_11, L_14, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_16 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerMessage_CreateLogValuesFormatter_mD7FDF2EE3E5EC48254EE86FA867CB660B32B0685_RuntimeMethod_var)));
	}

IL_0034:
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_17 = V_0;
		return L_17;
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
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__ctor_m6418E120093F8813242FE0EB0670F50E2190E414 (NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.IExternalScopeProvider Microsoft.Extensions.Logging.NullExternalScopeProvider::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullExternalScopeProvider_get_Instance_m6716492B9024A09ADEF2C092767E1C384ADFA3FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_StaticFields*)il2cpp_codegen_static_fields_for(NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.NullExternalScopeProvider::Microsoft.Extensions.Logging.IExternalScopeProvider.Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullExternalScopeProvider_Microsoft_Extensions_Logging_IExternalScopeProvider_Push_mC8D02C4D5C97D063CC81A781DF5DEDA9830C2DC8 (NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * L_0;
		L_0 = NullScope_get_Instance_m1BC983DC7FA8C6CD4F071E317B0E0FF6BF3DECD5_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__cctor_m84D8A1A676BAB4AC0E3FA089577749B3E53825A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC * L_0 = (NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC *)il2cpp_codegen_object_new(NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var);
		NullExternalScopeProvider__ctor_m6418E120093F8813242FE0EB0670F50E2190E414(L_0, /*hidden argument*/NULL);
		((NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_StaticFields*)il2cpp_codegen_static_fields_for(NullExternalScopeProvider_t031ABB746DE11EAFECA638387201AA1707743CCC_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * NullLogger_get_Instance_m67D9B098C4E4435FE7BB01E1D2C53A73B2E5DB86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * L_0 = ((NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__ctor_m096210D7B18D6269A08C9BD7400000A1F039A809 (NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.Abstractions.NullLogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullLogger_IsEnabled_mB8348A7F9C1A302492931488E67D39CA7917C0EE (NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * __this, int32_t ___logLevel0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__cctor_mF5C146C2CC2B3F0C851EEFA67926972695FC9B76 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * L_0 = (NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 *)il2cpp_codegen_object_new(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		NullLogger__ctor_m096210D7B18D6269A08C9BD7400000A1F039A809(L_0, /*hidden argument*/NULL);
		((NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__ctor_mBCFF82FB2C53AA7A781C9919A8CC2E41B437F640 (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::CreateLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullLoggerFactory_CreateLogger_m0050DB954567609F6A3FB452ABEFC9445950AA26 (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * L_0;
		L_0 = NullLogger_get_Instance_m67D9B098C4E4435FE7BB01E1D2C53A73B2E5DB86_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::AddProvider(Microsoft.Extensions.Logging.ILoggerProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory_AddProvider_m3687355C73694A46F60CE59A3CFA4E12B45B8059 (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory_Dispose_m6F681F4C736C60ACEBD967ED766922B7E40A203B (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__cctor_m90A32757D3393767A6AF4BA758013800AF88BD45 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 * L_0 = (NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88 *)il2cpp_codegen_object_new(NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_il2cpp_TypeInfo_var);
		NullLoggerFactory__ctor_mBCFF82FB2C53AA7A781C9919A8CC2E41B437F640(L_0, /*hidden argument*/NULL);
		((NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerFactory_t15DE50A82351B07A9FDA08E2E8395289F3B8BC88_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * NullLoggerProvider_get_Instance_m390F8ABFD5AB9A4A9AC20315033C6E7B2F3351F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var);
		NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * L_0 = ((NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__ctor_mB1A16EE6819C3FBDB9E42A544BF41F09AB2BC267 (NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::CreateLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullLoggerProvider_CreateLogger_m1D32DAB060D9EED83611D6C92C35FDE45E0200BB (NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * __this, String_t* ___categoryName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * L_0;
		L_0 = NullLogger_get_Instance_m67D9B098C4E4435FE7BB01E1D2C53A73B2E5DB86_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider_Dispose_mC38BD24AE7FCE1247BE3A50DCE2AA4CE73FE0776 (NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__cctor_mDEB7E0FAD3945EAF7F6D28C7CF5281D9B98C8BC5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 * L_0 = (NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5 *)il2cpp_codegen_object_new(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var);
		NullLoggerProvider__ctor_mB1A16EE6819C3FBDB9E42A544BF41F09AB2BC267(L_0, /*hidden argument*/NULL);
		((NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerProvider_t32A4E3FAE8A6DDF22D3A5503DB32FA44B09926D5_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * NullScope_get_Instance_m1BC983DC7FA8C6CD4F071E317B0E0FF6BF3DECD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * L_0 = ((NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__ctor_m0D1F15C9F980E0B4BCEF01ABA13BA920FD29FF24 (NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope_Dispose_mA2E79980AA84A69468DA8C31C33C121EAB527721 (NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__cctor_mA5904184BB61E3993A88D5C5B31B60A19CEBA3DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * L_0 = (NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 *)il2cpp_codegen_object_new(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		NullScope__ctor_m0D1F15C9F980E0B4BCEF01ABA13BA920FD29FF24(L_0, /*hidden argument*/NULL);
		((NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m8A54E4DB64758AAD99422CD971079E55CECF0353 (NullableAttribute_t1C1176B821473EFA469AC55031B32631693C191F * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mA05E8660B5F5BA04EC84BB6717581A68B2E8E3FD (NullableAttribute_t1C1176B821473EFA469AC55031B32631693C191F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mC9C11FD55EC24E2DEB8877D8040E3BA3FC841269 (NullableContextAttribute_t84E18A72D22006D76336274223B7F0D69EED0261 * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m7711D5F4EC3D4762EDADC1906049DFFE0F15E187 (NullablePublicOnlyAttribute_t28A167C65D804762CEDCACA8BF41FFD72281A483 * __this, bool p0, const RuntimeMethod* method)
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF7F5DE6CE2B371F0168B59C70F9D9BE80F0371BF (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
		L_4 = SR_get_ResourceManager_m96430249B4DFB369AF5EB04D2C1335892FC7D3E2(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m8291260C2A87C29E3E84DF4611B2EE4CB7DB1E21 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m5D31EBEAC5FA824E50F5C3F5C957840214D2FB70 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mC480B519C0064F392A6ACAD4F951DA2D2B1DD706 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m317C877CA2EBE9777862889BCFAE33870F0AC6AB (String_t* ___resourceFormat0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mF41010ED07C15E064D2D5E7F18CE4325E6743597 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m07FE79FD5EAE2A8618517B6F30B5E86933408872 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m0CBC4311214C98AC6B7C548C0CE56B84360A73C5 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, RuntimeObject * ___p34, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m30FCEC193D13756CB6EEFE9B72221B828FF0E1BD (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m4350DC336DD5516AC26462534EDC6FC19F0A0CC1(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m96430249B4DFB369AF5EB04D2C1335892FC7D3E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tED041E2089B5D8923C419CD5D4DDF85FBF673D94_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_tED041E2089B5D8923C419CD5D4DDF85FBF673D94_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t7A80728EF82B6AF37CD48F4E265F26FA0EB8ACAB_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_UnexpectedNumberOfNamedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedNumberOfNamedParameters_mCA861E89EE434D8134CDB105855CE6CEB8D83D75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF7F5DE6CE2B371F0168B59C70F9D9BE80F0371BF(_stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m28758BA84803A7A61C82F818B8C076C5A484B170 (RuntimeObject * ___item0, bool ___fullName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_1 = ___item0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		bool L_3 = ___fullName1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = TypeNameHelper_GetTypeDisplayName_m656956AF1F18FEAABC867B7E4FDC639935AFE91D(L_2, L_3, (bool)0, (bool)1, ((int32_t)43), /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		return (String_t*)NULL;
	}
}
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m656956AF1F18FEAABC867B7E4FDC639935AFE91D (Type_t * ___type0, bool ___fullName1, bool ___includeGenericParameterNames2, bool ___includeGenericParameters3, Il2CppChar ___nestedTypeDelimiter4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		Type_t * L_2 = ___type0;
		bool L_3 = ___fullName1;
		bool L_4 = ___includeGenericParameterNames2;
		bool L_5 = ___includeGenericParameters3;
		Il2CppChar L_6 = ___nestedTypeDelimiter4;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B  L_7;
		memset((&L_7), 0, sizeof(L_7));
		DisplayNameOptions__ctor_mD2A0E9C63DECF8133D168E092F78A2B894048E0C((&L_7), L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m47E727397AB26CDA13950664A065EF4268F395C7(L_1, L_2, (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)(&V_1), /*hidden argument*/NULL);
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessType_m47E727397AB26CDA13950664A065EF4268F395C7 (StringBuilder_t * ___builder0, Type_t * ___type1, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B12_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___type1;
		NullCheck(L_2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3;
		L_3 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(110 /* System.Type[] System.Type::GetGenericArguments() */, L_2);
		V_0 = L_3;
		StringBuilder_t * L_4 = ___builder0;
		Type_t * L_5 = ___type1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = V_0;
		NullCheck(L_7);
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_8 = ___options2;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessGenericType_mC44E2ABBE927181D3D5464581D0EE70680BEB6C2(L_4, L_5, L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Type_t * L_9 = ___type1;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder0;
		Type_t * L_12 = ___type1;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_13 = ___options2;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessArrayType_m70725FD811024F17E6B6DA99B413AFB901738DE1(L_11, L_12, (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_13, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_14 = ((TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_StaticFields*)il2cpp_codegen_static_fields_for(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var))->get__builtInTypeNames_1();
		Type_t * L_15 = ___type1;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191(L_14, L_15, (String_t**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t * L_17 = ___builder0;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, L_18, /*hidden argument*/NULL);
		return;
	}

IL_0045:
	{
		Type_t * L_20 = ___type1;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtFuncInvoker0< bool >::Invoke(88 /* System.Boolean System.Type::get_IsGenericParameter() */, L_20);
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_22 = ___options2;
		bool L_23;
		L_23 = DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t * L_24 = ___builder0;
		Type_t * L_25 = ___type1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		NullCheck(L_24);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, L_26, /*hidden argument*/NULL);
		return;
	}

IL_0063:
	{
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_28 = ___options2;
		bool L_29;
		L_29 = DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_30 = ___type1;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		G_B12_0 = L_31;
		goto IL_0079;
	}

IL_0073:
	{
		Type_t * L_32 = ___type1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_32);
		G_B12_0 = L_33;
	}

IL_0079:
	{
		V_2 = G_B12_0;
		StringBuilder_t * L_34 = ___builder0;
		String_t* L_35 = V_2;
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_37 = ___options2;
		Il2CppChar L_38;
		L_38 = DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_38) == ((int32_t)((int32_t)43))))
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t * L_39 = ___builder0;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_40 = ___options2;
		Il2CppChar L_41;
		L_41 = DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_40, /*hidden argument*/NULL);
		StringBuilder_t * L_42 = ___builder0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_42, /*hidden argument*/NULL);
		String_t* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_44, /*hidden argument*/NULL);
		String_t* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_46, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Replace_m1D1BD4F473AB6BE160B44E79181854B5EC4AFE30(L_39, ((int32_t)43), L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_45)), L_47, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessArrayType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessArrayType_m70725FD811024F17E6B6DA99B413AFB901738DE1 (StringBuilder_t * ___builder0, Type_t * ___type1, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		V_0 = L_0;
		goto IL_000b;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(109 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
	}

IL_000b:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0004;
		}
	}
	{
		StringBuilder_t * L_5 = ___builder0;
		Type_t * L_6 = V_0;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_7 = ___options2;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m47E727397AB26CDA13950664A065EF4268F395C7(L_5, L_6, (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_7, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_001d:
	{
		StringBuilder_t * L_8 = ___builder0;
		NullCheck(L_8);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)91), /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___builder0;
		Type_t * L_11 = ___type1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Type::GetArrayRank() */, L_11);
		NullCheck(L_10);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_10, ((int32_t)44), ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = ___builder0;
		NullCheck(L_14);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_14, ((int32_t)93), /*hidden argument*/NULL);
		Type_t * L_16 = ___type1;
		NullCheck(L_16);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(109 /* System.Type System.Type::GetElementType() */, L_16);
		___type1 = L_17;
	}

IL_0048:
	{
		Type_t * L_18 = ___type1;
		NullCheck(L_18);
		bool L_19;
		L_19 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessGenericType(System.Text.StringBuilder,System.Type,System.Type[],System.Int32,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessGenericType_mC44E2ABBE927181D3D5464581D0EE70680BEB6C2 (StringBuilder_t * ___builder0, Type_t * ___type1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericArguments2, int32_t ___length3, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * ___options4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		Type_t * L_0 = ___type1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsNested_m2EF218AD3B5364DAE25B9D0AF68427DF52A47699(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_2 = ___type1;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_4;
		L_4 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(110 /* System.Type[] System.Type::GetGenericArguments() */, L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}

IL_0018:
	{
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_5 = ___options4;
		bool L_6;
		L_6 = DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		Type_t * L_7 = ___type1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsNested_m2EF218AD3B5364DAE25B9D0AF68427DF52A47699(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t * L_9 = ___builder0;
		Type_t * L_10 = ___type1;
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = ___genericArguments2;
		int32_t L_13 = V_0;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_14 = ___options4;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessGenericType_mC44E2ABBE927181D3D5464581D0EE70680BEB6C2(L_9, L_11, L_12, L_13, (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___builder0;
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_16 = ___options4;
		Il2CppChar L_17;
		L_17 = DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, L_17, /*hidden argument*/NULL);
		goto IL_006c;
	}

IL_0049:
	{
		Type_t * L_19 = ___type1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Type::get_Namespace() */, L_19);
		bool L_21;
		L_21 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_006c;
		}
	}
	{
		StringBuilder_t * L_22 = ___builder0;
		Type_t * L_23 = ___type1;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Type::get_Namespace() */, L_23);
		NullCheck(L_22);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_26 = ___builder0;
		NullCheck(L_26);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_26, ((int32_t)46), /*hidden argument*/NULL);
	}

IL_006c:
	{
		Type_t * L_28 = ___type1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_28);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_29, ((int32_t)96), /*hidden argument*/NULL);
		V_1 = L_30;
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		StringBuilder_t * L_32 = ___builder0;
		Type_t * L_33 = ___type1;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_33);
		NullCheck(L_32);
		StringBuilder_t * L_35;
		L_35 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, L_34, /*hidden argument*/NULL);
		return;
	}

IL_008c:
	{
		StringBuilder_t * L_36 = ___builder0;
		Type_t * L_37 = ___type1;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		int32_t L_39 = V_1;
		NullCheck(L_36);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_36, L_38, 0, L_39, /*hidden argument*/NULL);
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_41 = ___options4;
		bool L_42;
		L_42 = DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		StringBuilder_t * L_43 = ___builder0;
		NullCheck(L_43);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_43, ((int32_t)60), /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		V_2 = L_45;
		goto IL_00ed;
	}

IL_00b1:
	{
		StringBuilder_t * L_46 = ___builder0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_47 = ___genericArguments2;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Type_t * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_51 = ___options4;
		IL2CPP_RUNTIME_CLASS_INIT(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m47E727397AB26CDA13950664A065EF4268F395C7(L_46, L_50, (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_51, /*hidden argument*/NULL);
		int32_t L_52 = V_2;
		int32_t L_53 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1))) == ((int32_t)L_53)))
		{
			goto IL_00e9;
		}
	}
	{
		StringBuilder_t * L_54 = ___builder0;
		NullCheck(L_54);
		StringBuilder_t * L_55;
		L_55 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_54, ((int32_t)44), /*hidden argument*/NULL);
		DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * L_56 = ___options4;
		bool L_57;
		L_57 = DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_inline((DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *)L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_00e0;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_58 = ___genericArguments2;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		Type_t * L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		bool L_62;
		L_62 = VirtFuncInvoker0< bool >::Invoke(88 /* System.Boolean System.Type::get_IsGenericParameter() */, L_61);
		if (L_62)
		{
			goto IL_00e9;
		}
	}

IL_00e0:
	{
		StringBuilder_t * L_63 = ___builder0;
		NullCheck(L_63);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_63, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_00e9:
	{
		int32_t L_65 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_00ed:
	{
		int32_t L_66 = V_2;
		int32_t L_67 = ___length3;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00b1;
		}
	}
	{
		StringBuilder_t * L_68 = ___builder0;
		NullCheck(L_68);
		StringBuilder_t * L_69;
		L_69 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_68, ((int32_t)62), /*hidden argument*/NULL);
	}

IL_00fa:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper__cctor_mCF06D39B59E85D5033D305A85AD05F8C45DD5DF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * V_0 = NULL;
	{
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *)il2cpp_codegen_object_new(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27(L_0, /*hidden argument*/Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_1 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_1, L_3, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_4, L_6, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_7 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_7, L_9, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_10 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_10, L_12, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_13 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_13, L_15, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_16 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_16, L_18, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_19 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_19, L_21, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_22 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_22, L_24, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_25, L_27, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_28 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_28, L_30, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_31 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_31, L_33, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_34 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_34, L_36, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_37 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_37, L_39, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_40 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_40, L_42, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_43 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_44 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_45;
		L_45 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_43, L_45, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_46 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_47 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_48;
		L_48 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_46, L_48, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_49 = V_0;
		((TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_StaticFields*)il2cpp_codegen_static_fields_for(TypeNameHelper_t3D723D18221F0CFCC4F7B2DC4DCB7BDAC2F4427B_il2cpp_TypeInfo_var))->set__builtInTypeNames_1(L_49);
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
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF607C3F2072557516A29A561782CF3C228DBE10A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * L_0 = (U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 *)il2cpp_codegen_object_new(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1B0975AE1190F8E07F621D86B6143F184E4CD445(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B0975AE1190F8E07F621D86B6143F184E4CD445 (U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues/<>c::<.ctor>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * U3CU3Ec_U3C_ctorU3Eb__9_0_m314E3546884D6A6352076CDF633D20D9878D8B96 (U3CU3Ec_t80640CD1C5E4D232613216205C170C94278258A1 * __this, String_t* ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC_il2cpp_TypeInfo_var))->get_address_of__count_2()), /*hidden argument*/NULL);
		String_t* L_1 = ___f0;
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_2 = (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 *)il2cpp_codegen_object_new(LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402_il2cpp_TypeInfo_var);
		LogValuesFormatter__ctor_m80C8C2D84637762F9B1265054C6B4AEFA89430B7(L_2, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m7C112A29E11133815A79A4D00E31C08ED07AA97D (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD44624F4CDF32BE10A09CB7BEFE36A731C31DAFD (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_m0033B9D30A0FBB7C3F0C191B97868C1209D87A03 (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CiU3E5__2_3(0);
		goto IL_0057;
	}

IL_0020:
	{
		FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * L_3 = __this->get_address_of_U3CU3E4__this_2();
		int32_t L_4 = __this->get_U3CiU3E5__2_3();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_5;
		L_5 = FormattedLogValues_get_Item_mB49CC0818F7E4D059918CA6D3F11BE899F70406A((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_6 = __this->get_U3CiU3E5__2_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_1;
		__this->set_U3CiU3E5__2_3(L_7);
	}

IL_0057:
	{
		int32_t L_8 = __this->get_U3CiU3E5__2_3();
		FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * L_9 = __this->get_address_of_U3CU3E4__this_2();
		int32_t L_10;
		L_10 = FormattedLogValues_get_Count_m98246FC3AD761EBE9A040F57A114D4955492D98F((FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC *)L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mC6015F35622D38E647A90473AB099EC0C59A9C2E (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m43492BB59605ADD66923205C1630614DE1A38A2D (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m43492BB59605ADD66923205C1630614DE1A38A2D_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m89136165DFB487CFAC6C47BF589EF8068D0CA826 (U3CGetEnumeratorU3Ed__14_tDC8358BD97A3DAEEBFB3B61E8F83099DB7F41C9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var, &L_1);
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
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF0D9CB2DB3CE6A4B5E9DB84BD673A247B78B13D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * L_0 = (U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 *)il2cpp_codegen_object_new(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA4EA80DD937BCFD4FA76D62645961F6B62DC6BED(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA4EA80DD937BCFD4FA76D62645961F6B62DC6BED (U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<FormatArgument>b__21_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CFormatArgumentU3Eb__21_0_mDBCEE17F6DCA2D7CB56F0C54EA7EAA1D115E2CE6 (U3CU3Ec_t8EF479A14A63BDEC27776488842945CA1AFAF742 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = ((RuntimeObject *)(_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31));
	}

IL_000a:
	{
		return G_B2_0;
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
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::.ctor(Microsoft.Extensions.Logging.LoggerExternalScopeProvider,System.Object,Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope__ctor_m9D21536094CD3F488969BC2EE1F616365DE7B2C5 (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * ___provider0, RuntimeObject * ___state1, Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * ___parent2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * L_0 = ___provider0;
		__this->set__provider_0(L_0);
		RuntimeObject * L_1 = ___state1;
		__this->set_U3CStateU3Ek__BackingField_3(L_1);
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_2 = ___parent2;
		__this->set_U3CParentU3Ek__BackingField_2(L_2);
		return;
	}
}
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * Scope_get_Parent_m31952E5320A76D67DA3F1A0C0EEB09D7BB37DCDF (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	{
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_0 = __this->get_U3CParentU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Scope_get_State_m8FD12CFBFD83A66FB54DBFEB917215EB41F28401 (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scope_ToString_m1C1333BEE0449D576569FEBDE513D3ABC3433E51 (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject * L_0;
		L_0 = Scope_get_State_m8FD12CFBFD83A66FB54DBFEB917215EB41F28401_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		return L_2;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope_Dispose_m22B3151BD229D8F87DFB6507878D95E9DB6BE4F4 (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isDisposed_1();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		LoggerExternalScopeProvider_tB79913746AB722428BF5442029F72E9141D79396 * L_1 = __this->get__provider_0();
		NullCheck(L_1);
		AsyncLocal_1_t1341E0DD13778C8313B0C1B9D5BA6B4315734953 * L_2 = L_1->get__currentScope_0();
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_3;
		L_3 = Scope_get_Parent_m31952E5320A76D67DA3F1A0C0EEB09D7BB37DCDF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8(L_2, L_3, /*hidden argument*/AsyncLocal_1_set_Value_mDB90E9131546BE2378BEF43FBA346EC7053219E8_RuntimeMethod_var);
		__this->set__isDisposed_1((bool)1);
	}

IL_0025:
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
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mFF3F8C9CC8018C14ECA7B11B0B98AC0578DDE5D9 (U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::<DefineScope>b__0(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_mC48079A6B011471DA5BE3BB23C8BAC8147666B0F (U3CU3Ec__DisplayClass0_0_tF0356D96FCE8723565E7B5EEE50F4EC4B05C9E94 * __this, RuntimeObject* ___logger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_BeginScope_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mBA2CCB5CF8B0902854DA52418D233C3BC5CF0B04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  L_1 = __this->get_logValues_0();
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericInterfaceFuncInvoker1< RuntimeObject*, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  >::Invoke(ILogger_BeginScope_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mBA2CCB5CF8B0902854DA52418D233C3BC5CF0B04_RuntimeMethod_var, L_0, L_1);
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
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6069341DD6EB079BADF52070B6825506ABC00F68 (U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass4_0::<Define>b__0(Microsoft.Extensions.Logging.ILogger,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDefineU3Eb__0_mB13B60D536E28A18C37B0C99A4D0EC6A286ED620 (U3CU3Ec__DisplayClass4_0_tB52A5962ABC7EF841746818EC7501A45A573299E * __this, RuntimeObject* ___logger0, Exception_t * ___exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_Log_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mF963044789F1BC536AB88DCA32C67DC796814B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tEAA0D727D491847F2FE185047B16B6C5B185AF53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = __this->get_logLevel_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Microsoft.Extensions.Logging.ILogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel) */, ILogger_tEAA0D727D491847F2FE185047B16B6C5B185AF53_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_3 = ___logger0;
		int32_t L_4 = __this->get_logLevel_0();
		EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900  L_5 = __this->get_eventId_1();
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_6 = __this->get_formatter_2();
		LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  L_7;
		memset((&L_7), 0, sizeof(L_7));
		LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_inline((&L_7), L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = ___exception1;
		IL2CPP_RUNTIME_CLASS_INIT(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var);
		Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * L_9 = ((LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_StaticFields*)il2cpp_codegen_static_fields_for(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var))->get_Callback_0();
		NullCheck(L_3);
		GenericInterfaceActionInvoker5< int32_t, EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 , LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD , Exception_t *, Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * >::Invoke(ILogger_Log_TisLogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_mF963044789F1BC536AB88DCA32C67DC796814B98_RuntimeMethod_var, L_3, L_4, L_5, L_7, L_8, L_9);
	}

IL_0031:
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
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_pinvoke(const LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD& unmarshaled, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_pinvoke& marshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_pinvoke_back(const LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_pinvoke& marshaled, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD& unmarshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_pinvoke_cleanup(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_com(const LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD& unmarshaled, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_com& marshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_com_back(const LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_com& marshaled, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD& unmarshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshal_com_cleanup(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.ctor(Microsoft.Extensions.Logging.LogValuesFormatter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ___formatter0, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = ___formatter0;
		__this->set__formatter_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_AdjustorThunk (RuntimeObject * __this, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ___formatter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_inline(_thisAdjusted, ___formatter0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_1 = __this->get__formatter_1();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51_inline(L_1, /*hidden argument*/NULL);
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_3), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_2, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_4 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  _returnValue;
	_returnValue = LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValues_get_Count_mD574809ABAC172507AF6CAC731B0FAE440D285C9 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t LogValues_get_Count_mD574809ABAC172507AF6CAC731B0FAE440D285C9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LogValues_get_Count_mD574809ABAC172507AF6CAC731B0FAE440D285C9(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LoggerMessage/LogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_GetEnumerator_mFC1B6596362344638E5E9B86C81DC90B0C72C84B (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * L_0 = (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__7__ctor_mE286D7FADF245274FBE40516E84A8CEAEAAD183A(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * L_1 = L_0;
		LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  L_2 = (*(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *)__this);
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* LogValues_GetEnumerator_mFC1B6596362344638E5E9B86C81DC90B0C72C84B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = LogValues_GetEnumerator_mFC1B6596362344638E5E9B86C81DC90B0C72C84B(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValues_ToString_m2BFDE6392E9211F52739E3C47C5C7B344DE66558 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = __this->get__formatter_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = LogValuesFormatter_Format_m806664817550597163296B9C84D808B009FCBBD3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* LogValues_ToString_m2BFDE6392E9211F52739E3C47C5C7B344DE66558_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LogValues_ToString_m2BFDE6392E9211F52739E3C47C5C7B344DE66558(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Logging.LoggerMessage/LogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m31653876650688B7C9FE2B3DCD6A4F78EC925506 (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = LogValues_GetEnumerator_mFC1B6596362344638E5E9B86C81DC90B0C72C84B((LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m31653876650688B7C9FE2B3DCD6A4F78EC925506_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * _thisAdjusted = reinterpret_cast<LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = LogValues_System_Collections_IEnumerable_GetEnumerator_m31653876650688B7C9FE2B3DCD6A4F78EC925506(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValues__cctor_m98E7E8F78C070FBFF9137AE3CB0628A16E7059FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m713FAACA562AABCD2C99EF1F8576BFA75417097D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_0_m9B45A9BCD5BD0885CA55A62865F4EBE003B186A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var);
		U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * L_0 = ((U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 * L_1 = (Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9 *)il2cpp_codegen_object_new(Func_3_tFC43DE75E898038D5C1BD47A3A76CC5CF10129E9_il2cpp_TypeInfo_var);
		Func_3__ctor_m713FAACA562AABCD2C99EF1F8576BFA75417097D(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__11_0_m9B45A9BCD5BD0885CA55A62865F4EBE003B186A1_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m713FAACA562AABCD2C99EF1F8576BFA75417097D_RuntimeMethod_var);
		((LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_StaticFields*)il2cpp_codegen_static_fields_for(LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD_il2cpp_TypeInfo_var))->set_Callback_0(L_1);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_pinvoke(const DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B& unmarshaled, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CFullNameU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CFullNameU3Ek__BackingField_0());
	marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CIncludeGenericParametersU3Ek__BackingField_1());
	marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CIncludeGenericParameterNamesU3Ek__BackingField_2());
	marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = static_cast<uint8_t>(unmarshaled.get_U3CNestedTypeDelimiterU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_pinvoke_back(const DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_pinvoke& marshaled, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B& unmarshaled)
{
	bool unmarshaled_U3CFullNameU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CFullNameU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CFullNameU3Ek__BackingField_0);
	unmarshaled.set_U3CFullNameU3Ek__BackingField_0(unmarshaled_U3CFullNameU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	unmarshaled.set_U3CIncludeGenericParametersU3Ek__BackingField_1(unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	unmarshaled.set_U3CIncludeGenericParameterNamesU3Ek__BackingField_2(unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2);
	Il2CppChar unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = 0x0;
	unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = static_cast<Il2CppChar>(marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
	unmarshaled.set_U3CNestedTypeDelimiterU3Ek__BackingField_3(unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_pinvoke_cleanup(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_com(const DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B& unmarshaled, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_com& marshaled)
{
	marshaled.___U3CFullNameU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CFullNameU3Ek__BackingField_0());
	marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CIncludeGenericParametersU3Ek__BackingField_1());
	marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CIncludeGenericParameterNamesU3Ek__BackingField_2());
	marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = static_cast<uint8_t>(unmarshaled.get_U3CNestedTypeDelimiterU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_com_back(const DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_com& marshaled, DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B& unmarshaled)
{
	bool unmarshaled_U3CFullNameU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CFullNameU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CFullNameU3Ek__BackingField_0);
	unmarshaled.set_U3CFullNameU3Ek__BackingField_0(unmarshaled_U3CFullNameU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	unmarshaled.set_U3CIncludeGenericParametersU3Ek__BackingField_1(unmarshaled_U3CIncludeGenericParametersU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	unmarshaled.set_U3CIncludeGenericParameterNamesU3Ek__BackingField_2(unmarshaled_U3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2);
	Il2CppChar unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = 0x0;
	unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = static_cast<Il2CppChar>(marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
	unmarshaled.set_U3CNestedTypeDelimiterU3Ek__BackingField_3(unmarshaled_U3CNestedTypeDelimiterU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshal_com_cleanup(DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameOptions__ctor_mD2A0E9C63DECF8133D168E092F78A2B894048E0C (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method)
{
	{
		bool L_0 = ___fullName0;
		__this->set_U3CFullNameU3Ek__BackingField_0(L_0);
		bool L_1 = ___includeGenericParameters2;
		__this->set_U3CIncludeGenericParametersU3Ek__BackingField_1(L_1);
		bool L_2 = ___includeGenericParameterNames1;
		__this->set_U3CIncludeGenericParameterNamesU3Ek__BackingField_2(L_2);
		Il2CppChar L_3 = ___nestedTypeDelimiter3;
		__this->set_U3CNestedTypeDelimiterU3Ek__BackingField_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void DisplayNameOptions__ctor_mD2A0E9C63DECF8133D168E092F78A2B894048E0C_AdjustorThunk (RuntimeObject * __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * _thisAdjusted = reinterpret_cast<DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *>(__this + _offset);
	DisplayNameOptions__ctor_mD2A0E9C63DECF8133D168E092F78A2B894048E0C(_thisAdjusted, ___fullName0, ___includeGenericParameterNames1, ___includeGenericParameters2, ___nestedTypeDelimiter3, method);
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4 (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFullNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * _thisAdjusted = reinterpret_cast<DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059 (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIncludeGenericParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * _thisAdjusted = reinterpret_cast<DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIncludeGenericParameterNamesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * _thisAdjusted = reinterpret_cast<DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_NestedTypeDelimiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = __this->get_U3CNestedTypeDelimiterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * _thisAdjusted = reinterpret_cast<DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B *>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline(_thisAdjusted, method);
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
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4F9BB4C59B0CA500FF4D551E0FB4EEBFBDE7A7FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * L_0 = (U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA *)il2cpp_codegen_object_new(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3858E2D69BE630A4C5CC59CE70CFB6F7A8E41C9D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3858E2D69BE630A4C5CC59CE70CFB6F7A8E41C9D (U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::<.cctor>b__11_0(Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_cctorU3Eb__11_0_m9B45A9BCD5BD0885CA55A62865F4EBE003B186A1 (U3CU3Ec_t81C9CF50616FDFB4A9CB86890271F24DBF2073EA * __this, LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD  ___state0, Exception_t * ___exception1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = LogValues_ToString_m2BFDE6392E9211F52739E3C47C5C7B344DE66558((LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *)(&___state0), /*hidden argument*/NULL);
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
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_mE286D7FADF245274FBE40516E84A8CEAEAAD183A (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m335F90A9BC49C96C25390F1A2798396EF504D5AD (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_m63F29076526B82511512B5547B74910013404FB1 (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * L_3 = __this->get_address_of_U3CU3E4__this_2();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_4;
		L_4 = LogValues_get_Item_m0AB98E9CE4A72900116A42144F4DE6E1350FB49F((LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD *)L_3, 0, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mA2E839278835AB4EA629D2308478B11D4163D1F3 (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_mDAA86EEEFD66CF8625FBD49483194111A98772ED (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_mDAA86EEEFD66CF8625FBD49483194111A98772ED_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_m4E6487A845C13C2CA7955CE3C93A45093ABFCAF1 (U3CGetEnumeratorU3Ed__7_tDA55FDA8DE1E378991494E20376D05A4E35A6C72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_mF73536DD46FC7AD3AAE44A8CB7AFB26AF5A1B01C_inline (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m5E4F0DBBCB6717EEF16B934D1202D9C3E5283272_inline (EventId_tE612042877D3D0EB275DA8184C52DDD0E0577900 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * FormattedLogValues_get_Formatter_m2B434C331EB5008358C4E3164ED25D6D31E389E7_inline (FormattedLogValues_t545E4058EB9C0D5C62F7CEA298545FC54E8AD1AC * __this, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = __this->get__formatter_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * LogValuesFormatter_get_ValueNames_m9D7F2B8F3E32FAB9FE94EF809837E54CA6B47BC2_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get__valueNames_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_mF13A133E6648578A1E620ACA905AF7C433C603F2_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COriginalFormatU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_mD531CAD49C6FDF9CD4A77F2E550EE48C089C6E51_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COriginalFormatU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValues__ctor_mEA7ABABC8B754B56A9BBC9019DA588889F5E12C7_inline (LogValues_t18A8EC19F9371EFDEBC5AC35C8A6EE2DDACF52BD * __this, LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * ___formatter0, const RuntimeMethod* method)
{
	{
		LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * L_0 = ___formatter0;
		__this->set__formatter_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * NullScope_get_Instance_m1BC983DC7FA8C6CD4F071E317B0E0FF6BF3DECD5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var);
		NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6 * L_0 = ((NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t203FF9D8A95B2D681779D21C87842A5AF85A4DB6_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * NullLogger_get_Instance_m67D9B098C4E4435FE7BB01E1D2C53A73B2E5DB86_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var);
		NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8 * L_0 = ((NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t0295A6AF18320057E6A63E807E69C6117DFCFDE8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m9BA64FD580CC90EF6C6B443F05D3E46B71F673EE_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIncludeGenericParameterNamesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mA5120B68C8B0AA0374C65B6DAB16D5497B4C3DE4_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFullNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mAD285D41E3CD4270E5B3EABBC1D75E95D221C71E_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = __this->get_U3CNestedTypeDelimiterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m2FB3DA52E885EA7ED5463033004C06B7B6101059_inline (DisplayNameOptions_tF3185B0161622CC1F8BD85F828020D8E8957002B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIncludeGenericParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Scope_get_State_m8FD12CFBFD83A66FB54DBFEB917215EB41F28401_inline (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * Scope_get_Parent_m31952E5320A76D67DA3F1A0C0EEB09D7BB37DCDF_inline (Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * __this, const RuntimeMethod* method)
{
	{
		Scope_t6D7F0391E783A55AAE776EFD368242FB7AC87CDE * L_0 = __this->get_U3CParentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m806664817550597163296B9C84D808B009FCBBD3_inline (LogValuesFormatter_tCA80B6326210BB08B9633DF573D0E2B12D2DA402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__format_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
