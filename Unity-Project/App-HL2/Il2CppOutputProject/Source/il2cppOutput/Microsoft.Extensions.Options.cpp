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

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Func`2<System.IServiceProvider,System.Object>
struct Func_2_tC8C836F7E23393E749952514BC9E6A36156DF0A9;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
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
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6FB565F801C741E6A807C18BD7FF340D55C904FE;
// System.Exception
struct Exception_t;
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
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC4114078043BE34CB984579C9859CE3B88D99A5D;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tEBA306EC74D69BE4C6C5867673D10C3353231EBD;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_tE2A5CED065F938AE5C7DA636B7B7B72E4D615181;
// Microsoft.Extensions.Options.OptionsValidationException
struct OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA;
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
// Microsoft.Extensions.Options.ValidateOptionsResult
struct ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c
struct U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral191EEC2373521088BE0145A4C1A45269CA556834;
IL2CPP_EXTERN_C String_t* _stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E;
IL2CPP_EXTERN_C String_t* _stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral79665E627DC1BE457D90CBA2CCB2E18253B975DB;
IL2CPP_EXTERN_C String_t* _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F20074C0043C515FAF3556F95FF58DC6BF477D;
IL2CPP_EXTERN_C String_t* _stringLiteralC715D017308E2D3D93876DDB56A36A3B51900793;
IL2CPP_EXTERN_C String_t* _stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_mE040445EC9986923A327BABE93D6522EE055FA6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException__ctor_mA098E9C564C9F4BFF73D769F0692FC9DB1F11E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindIConfigureOptionsU3Eb__9_0_mFD6D5971991397FEB1EDC4431BBC6272C0055372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IConfigureOptions_1_t6F73399D0DF6248E1020DAC6EA5DEF0C3605CB16_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsFactory_1_t237CCEE96277631A4410EF8DA2DEAA14A3DF027C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsMonitorCache_1_tF9178707E794A81971675542379B422446745607_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsMonitor_1_tBB7CB523A72E0775CC393F0DD214CEF7ADDF59CB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsSnapshot_1_t898B8B67CB68128D29AC940283FF639245939447_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptions_1_t3E90044B36F04A4C06B1D4C664ECCB8EEF7EACE6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPostConfigureOptions_1_tC0D0CB2D06187E482EEFD0AE863602D2484AB569_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsCache_1_t5B5B4597AA71F6B660ADA4BED10F608CDD3BD9D6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsFactory_1_t251692583C630095AB910611B400168DAC84EF98_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsManager_1_t1DDE79EECE0D27EA8C4A547FC4BAB12758556380_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsMonitor_1_tA4FBA0B7403E03F8329E1E398A122F4426B7834A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t0E98C39FFEB48526B0BC2A88A850EED86569DE15_0_0_0_var;
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
struct U3CModuleU3E_t657AEA42AF80F50355B5D11A37812741B996073C 
{
public:

public:
};


// System.Object


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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.Options.Options
struct Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3  : public RuntimeObject
{
public:

public:
};

struct Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_StaticFields
{
public:
	// System.String Microsoft.Extensions.Options.Options::DefaultName
	String_t* ___DefaultName_0;

public:
	inline static int32_t get_offset_of_DefaultName_0() { return static_cast<int32_t>(offsetof(Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_StaticFields, ___DefaultName_0)); }
	inline String_t* get_DefaultName_0() const { return ___DefaultName_0; }
	inline String_t** get_address_of_DefaultName_0() { return &___DefaultName_0; }
	inline void set_DefaultName_0(String_t* value)
	{
		___DefaultName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultName_0), (void*)value);
	}
};


// Microsoft.Extensions.Options.OptionsMonitorExtensions
struct OptionsMonitorExtensions_t63FB5F82A9C65908EB940ED761C1235F7734EF68  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions
struct OptionsServiceCollectionExtensions_tDA5D3AE6AAB34DAEF80DC2286DA95EEE7FDBFB8E  : public RuntimeObject
{
public:

public:
};


// FxResources.Microsoft.Extensions.Options.SR
struct SR_t0E98C39FFEB48526B0BC2A88A850EED86569DE15  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E  : public RuntimeObject
{
public:

public:
};

struct SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_StaticFields, ___s_resourceManager_0)); }
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


// Microsoft.Extensions.Options.ValidateOptionsResult
struct ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Succeeded>k__BackingField
	bool ___U3CSucceededU3Ek__BackingField_2;
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Skipped>k__BackingField
	bool ___U3CSkippedU3Ek__BackingField_3;
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Failed>k__BackingField
	bool ___U3CFailedU3Ek__BackingField_4;
	// System.String Microsoft.Extensions.Options.ValidateOptionsResult::<FailureMessage>k__BackingField
	String_t* ___U3CFailureMessageU3Ek__BackingField_5;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.ValidateOptionsResult::<Failures>k__BackingField
	RuntimeObject* ___U3CFailuresU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSucceededU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2, ___U3CSucceededU3Ek__BackingField_2)); }
	inline bool get_U3CSucceededU3Ek__BackingField_2() const { return ___U3CSucceededU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CSucceededU3Ek__BackingField_2() { return &___U3CSucceededU3Ek__BackingField_2; }
	inline void set_U3CSucceededU3Ek__BackingField_2(bool value)
	{
		___U3CSucceededU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSkippedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2, ___U3CSkippedU3Ek__BackingField_3)); }
	inline bool get_U3CSkippedU3Ek__BackingField_3() const { return ___U3CSkippedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CSkippedU3Ek__BackingField_3() { return &___U3CSkippedU3Ek__BackingField_3; }
	inline void set_U3CSkippedU3Ek__BackingField_3(bool value)
	{
		___U3CSkippedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFailedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2, ___U3CFailedU3Ek__BackingField_4)); }
	inline bool get_U3CFailedU3Ek__BackingField_4() const { return ___U3CFailedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CFailedU3Ek__BackingField_4() { return &___U3CFailedU3Ek__BackingField_4; }
	inline void set_U3CFailedU3Ek__BackingField_4(bool value)
	{
		___U3CFailedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CFailureMessageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2, ___U3CFailureMessageU3Ek__BackingField_5)); }
	inline String_t* get_U3CFailureMessageU3Ek__BackingField_5() const { return ___U3CFailureMessageU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CFailureMessageU3Ek__BackingField_5() { return &___U3CFailureMessageU3Ek__BackingField_5; }
	inline void set_U3CFailureMessageU3Ek__BackingField_5(String_t* value)
	{
		___U3CFailureMessageU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFailureMessageU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFailuresU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2, ___U3CFailuresU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CFailuresU3Ek__BackingField_6() const { return ___U3CFailuresU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CFailuresU3Ek__BackingField_6() { return &___U3CFailuresU3Ek__BackingField_6; }
	inline void set_U3CFailuresU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CFailuresU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFailuresU3Ek__BackingField_6), (void*)value);
	}
};

struct ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_StaticFields
{
public:
	// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Skip
	ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * ___Skip_0;
	// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Success
	ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * ___Success_1;

public:
	inline static int32_t get_offset_of_Skip_0() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_StaticFields, ___Skip_0)); }
	inline ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * get_Skip_0() const { return ___Skip_0; }
	inline ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 ** get_address_of_Skip_0() { return &___Skip_0; }
	inline void set_Skip_0(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * value)
	{
		___Skip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skip_0), (void*)value);
	}

	inline static int32_t get_offset_of_Success_1() { return static_cast<int32_t>(offsetof(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_StaticFields, ___Success_1)); }
	inline ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * get_Success_1() const { return ___Success_1; }
	inline ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 ** get_address_of_Success_1() { return &___Success_1; }
	inline void set_Success_1(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * value)
	{
		___Success_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Success_1), (void*)value);
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

// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c
struct U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields
{
public:
	// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<>9
	U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<>9__9_0
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6FB565F801C741E6A807C18BD7FF340D55C904FE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC4114078043BE34CB984579C9859CE3B88D99A5D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_tC4114078043BE34CB984579C9859CE3B88D99A5D, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tEBA306EC74D69BE4C6C5867673D10C3353231EBD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_tEBA306EC74D69BE4C6C5867673D10C3353231EBD, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_tE2A5CED065F938AE5C7DA636B7B7B72E4D615181  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;

public:
	inline static int32_t get_offset_of_IncludesInternals_0() { return static_cast<int32_t>(offsetof(NullablePublicOnlyAttribute_tE2A5CED065F938AE5C7DA636B7B7B72E4D615181, ___IncludesInternals_0)); }
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

// Microsoft.Extensions.Options.OptionsValidationException
struct OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA  : public Exception_t
{
public:
	// System.String Microsoft.Extensions.Options.OptionsValidationException::<OptionsName>k__BackingField
	String_t* ___U3COptionsNameU3Ek__BackingField_17;
	// System.Type Microsoft.Extensions.Options.OptionsValidationException::<OptionsType>k__BackingField
	Type_t * ___U3COptionsTypeU3Ek__BackingField_18;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::<Failures>k__BackingField
	RuntimeObject* ___U3CFailuresU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3COptionsNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA, ___U3COptionsNameU3Ek__BackingField_17)); }
	inline String_t* get_U3COptionsNameU3Ek__BackingField_17() const { return ___U3COptionsNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3COptionsNameU3Ek__BackingField_17() { return &___U3COptionsNameU3Ek__BackingField_17; }
	inline void set_U3COptionsNameU3Ek__BackingField_17(String_t* value)
	{
		___U3COptionsNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3COptionsTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA, ___U3COptionsTypeU3Ek__BackingField_18)); }
	inline Type_t * get_U3COptionsTypeU3Ek__BackingField_18() const { return ___U3COptionsTypeU3Ek__BackingField_18; }
	inline Type_t ** get_address_of_U3COptionsTypeU3Ek__BackingField_18() { return &___U3COptionsTypeU3Ek__BackingField_18; }
	inline void set_U3COptionsTypeU3Ek__BackingField_18(Type_t * value)
	{
		___U3COptionsTypeU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsTypeU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFailuresU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA, ___U3CFailuresU3Ek__BackingField_19)); }
	inline RuntimeObject* get_U3CFailuresU3Ek__BackingField_19() const { return ___U3CFailuresU3Ek__BackingField_19; }
	inline RuntimeObject** get_address_of_U3CFailuresU3Ek__BackingField_19() { return &___U3CFailuresU3Ek__BackingField_19; }
	inline void set_U3CFailuresU3Ek__BackingField_19(RuntimeObject* value)
	{
		___U3CFailuresU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFailuresU3Ek__BackingField_19), (void*)value);
	}
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


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
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


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAdd(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229 (RuntimeObject* ___collection0, ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ___descriptor1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92 (Type_t * ___service0, Type_t * ___implementationType1, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753 (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisType_t_mE040445EC9986923A327BABE93D6522EE055FA6B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::IsAction(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionsServiceCollectionExtensions_IsAction_mEDDDFDEFB142F69B95FCB7A26F6F521DA2D14AC8 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.SR::get_Error_NoIConfigureOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoIConfigureOptions_m6D44E76E7E42166DB5FCA0DDA3CD13720883973A (const RuntimeMethod* method);
// System.String System.SR::get_Error_NoIConfigureOptionsAndAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoIConfigureOptionsAndAction_m30C63BCB610E5F85CEB4EF34CF1DA3A00E47384A (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::AddOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011 (RuntimeObject* ___services0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::FindIConfigureOptions(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59 (Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53 (RuntimeObject* ___services0, Type_t * ___serviceType1, Type_t * ___implementationType2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D (RuntimeObject* ___services0, Type_t * ___serviceType1, RuntimeObject * ___implementationInstance2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::get_Failures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m0AC5DA3FF4F340C3F10A145E95D86689229976A2_inline (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492 (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m8035F289505B44B91B5BF981A84D0E2E7773280A (const RuntimeMethod* method);
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
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62 (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m3643816A639634B71E0CCAD5D485373F9AA3C80E_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_FailureMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m2CB320F84B55071C37472BAB670DCDEFCB9608F5_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failures(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_mB645F37110A5583C5F2101D8CA744F1471BE55AA_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Skipped(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m9924628F7BE9E28F649DB4EE6B4E74DD3A71C4C2_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Succeeded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2F77ECCCD1C1050CC45B502CD7FB4019C6A8499D_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m83A86007A3AF3BE7F9DC2F1CD4E36A948DE8E45B (U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * __this, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mD30C2F65616C03013D9A14173B21C2A14642CC58 (EmbeddedAttribute_t6FB565F801C741E6A807C18BD7FF340D55C904FE * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m1EE2B2471C0864904884FE8750A61C4A82B8CC14 (NullableAttribute_tC4114078043BE34CB984579C9859CE3B88D99A5D * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m173D295A2DF7E2619081F9DA85108AFEC54C28C1 (NullableAttribute_tC4114078043BE34CB984579C9859CE3B88D99A5D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m00376BEC8C29993943D1E8099C31D4AAD8A21030 (NullableContextAttribute_tEBA306EC74D69BE4C6C5867673D10C3353231EBD * __this, uint8_t p0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m7D0198EFFB31934DCD167E3A4B620671AD075893 (NullablePublicOnlyAttribute_tE2A5CED065F938AE5C7DA636B7B7B72E4D615181 * __this, bool p0, const RuntimeMethod* method)
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
// System.Void Microsoft.Extensions.Options.Options::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Options__cctor_m85590578F67386C21E83C15BBE8E318A93B3C400 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_StaticFields*)il2cpp_codegen_static_fields_for(Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var))->set_DefaultName_0(L_0);
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
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::AddOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011 (RuntimeObject* ___services0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsFactory_1_t237CCEE96277631A4410EF8DA2DEAA14A3DF027C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsMonitorCache_1_tF9178707E794A81971675542379B422446745607_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsMonitor_1_tBB7CB523A72E0775CC393F0DD214CEF7ADDF59CB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsSnapshot_1_t898B8B67CB68128D29AC940283FF639245939447_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptions_1_t3E90044B36F04A4C06B1D4C664ECCB8EEF7EACE6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsCache_1_t5B5B4597AA71F6B660ADA4BED10F608CDD3BD9D6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsFactory_1_t251692583C630095AB910611B400168DAC84EF98_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsManager_1_t1DDE79EECE0D27EA8C4A547FC4BAB12758556380_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsMonitor_1_tA4FBA0B7403E03F8329E1E398A122F4426B7834A_0_0_0_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___services0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IOptions_1_t3E90044B36F04A4C06B1D4C664ECCB8EEF7EACE6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (OptionsManager_1_t1DDE79EECE0D27EA8C4A547FC4BAB12758556380_0_0_0_var) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_7;
		L_7 = ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40(L_4, L_6, /*hidden argument*/NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_2, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___services0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (IOptionsSnapshot_1_t898B8B67CB68128D29AC940283FF639245939447_0_0_0_var) };
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (OptionsManager_1_t1DDE79EECE0D27EA8C4A547FC4BAB12758556380_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_13;
		L_13 = ServiceDescriptor_Scoped_mEA1977021070EC0E67480312ADC7523FCB21E639(L_10, L_12, /*hidden argument*/NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_8, L_13, /*hidden argument*/NULL);
		RuntimeObject* L_14 = ___services0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IOptionsMonitor_1_tBB7CB523A72E0775CC393F0DD214CEF7ADDF59CB_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (OptionsMonitor_1_tA4FBA0B7403E03F8329E1E398A122F4426B7834A_0_0_0_var) };
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_19;
		L_19 = ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40(L_16, L_18, /*hidden argument*/NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_14, L_19, /*hidden argument*/NULL);
		RuntimeObject* L_20 = ___services0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (IOptionsFactory_1_t237CCEE96277631A4410EF8DA2DEAA14A3DF027C_0_0_0_var) };
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_21, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (OptionsFactory_1_t251692583C630095AB910611B400168DAC84EF98_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_25;
		L_25 = ServiceDescriptor_Transient_mF5E699D988ABCF74B96E4876FA39BF1B007C5C92(L_22, L_24, /*hidden argument*/NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_20, L_25, /*hidden argument*/NULL);
		RuntimeObject* L_26 = ___services0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (IOptionsMonitorCache_1_tF9178707E794A81971675542379B422446745607_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_27, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (OptionsCache_1_t5B5B4597AA71F6B660ADA4BED10F608CDD3BD9D6_0_0_0_var) };
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		ServiceDescriptor_t47B920FA078FBF60386AD4FC94F6549F7FFDFD2C * L_31;
		L_31 = ServiceDescriptor_Singleton_m86AB0727EF84582F1781CA94F9A63DA3CB6FDC40(L_28, L_30, /*hidden argument*/NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_mAC33FC3E48B34B37B1DAE5E130CD581031F53229(L_26, L_31, /*hidden argument*/NULL);
		RuntimeObject* L_32 = ___services0;
		return L_32;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::IsAction(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionsServiceCollectionExtensions_IsAction_mEDDDFDEFB142F69B95FCB7A26F6F521DA2D14AC8 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(112 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::FindIConfigureOptions(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mE040445EC9986923A327BABE93D6522EE055FA6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindIConfigureOptionsU3Eb__9_0_mFD6D5971991397FEB1EDC4431BBC6272C0055372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B6_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(137 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_3 = ((U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var))->get_U3CU3E9__9_0_1();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var);
		U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * L_5 = ((U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_6 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CFindIConfigureOptionsU3Eb__9_0_mFD6D5971991397FEB1EDC4431BBC6272C0055372_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_7 = L_6;
		((U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var))->set_U3CU3E9__9_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		bool L_10;
		L_10 = Enumerable_Any_TisType_t_mE040445EC9986923A327BABE93D6522EE055FA6B(L_9, /*hidden argument*/Enumerable_Any_TisType_t_mE040445EC9986923A327BABE93D6522EE055FA6B_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_11 = ___type0;
		bool L_12;
		L_12 = OptionsServiceCollectionExtensions_IsAction_mEDDDFDEFB142F69B95FCB7A26F6F521DA2D14AC8(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_13;
		L_13 = SR_get_Error_NoIConfigureOptions_m6D44E76E7E42166DB5FCA0DDA3CD13720883973A(/*hidden argument*/NULL);
		G_B6_0 = L_13;
		goto IL_004c;
	}

IL_0047:
	{
		String_t* L_14;
		L_14 = SR_get_Error_NoIConfigureOptionsAndAction_m30C63BCB610E5F85CEB4EF34CF1DA3A00E47384A(/*hidden argument*/NULL);
		G_B6_0 = L_14;
	}

IL_004c:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_15 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_15, G_B6_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59_RuntimeMethod_var)));
	}

IL_0052:
	{
		RuntimeObject* L_16 = V_0;
		return L_16;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::ConfigureOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_ConfigureOptions_m71FB627C680F8602C12A9A6CFBD3038B57631343 (RuntimeObject* ___services0, Type_t * ___configureType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___services0;
		RuntimeObject* L_1;
		L_1 = OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___configureType1;
		RuntimeObject* L_3;
		L_3 = OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0017:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			Type_t * L_7;
			L_7 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var, L_6);
			V_2 = L_7;
			RuntimeObject* L_8 = ___services0;
			Type_t * L_9 = V_2;
			Type_t * L_10 = ___configureType1;
			RuntimeObject* L_11;
			L_11 = ServiceCollectionServiceExtensions_AddTransient_m7EC51DDC588857373A8B543CBB657CEEC5613D53(L_8, L_9, L_10, /*hidden argument*/NULL);
		}

IL_0027:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0017;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		RuntimeObject* L_16 = ___services0;
		return L_16;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::ConfigureOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_ConfigureOptions_m8174804E3051B1ACCFEBDCAA9D682EC6FC9052D6 (RuntimeObject* ___services0, RuntimeObject * ___configureInstance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___services0;
		RuntimeObject* L_1;
		L_1 = OptionsServiceCollectionExtensions_AddOptions_m9CF80BA0B46913C4D9ECD425B50F61B8C1A1E011(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___configureInstance1;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4;
		L_4 = OptionsServiceCollectionExtensions_FindIConfigureOptions_mDEDBAAEEDC0B7FD12FDA24ED72AF664FAD81EB59(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_001c:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			Type_t * L_8;
			L_8 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			RuntimeObject* L_9 = ___services0;
			Type_t * L_10 = V_2;
			RuntimeObject * L_11 = ___configureInstance1;
			RuntimeObject* L_12;
			L_12 = ServiceCollectionServiceExtensions_AddSingleton_mCB9421CECFDFF3BD0BE39B4DC7721970FC81469D(L_9, L_10, L_11, /*hidden argument*/NULL);
		}

IL_002c:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001c;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_1;
			if (!L_15)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			RuntimeObject* L_16 = V_1;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_003f:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		RuntimeObject* L_17 = ___services0;
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
// System.Void Microsoft.Extensions.Options.OptionsValidationException::.ctor(System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsValidationException__ctor_mA098E9C564C9F4BFF73D769F0692FC9DB1F11E53 (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, String_t* ___optionsName0, Type_t * ___optionsType1, RuntimeObject* ___failureMessages2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B3_1 = NULL;
	String_t* G_B6_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * G_B5_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___failureMessages2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CFailuresU3Ek__BackingField_19(G_B2_0);
		Type_t * L_3 = ___optionsType1;
		Type_t * L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC715D017308E2D3D93876DDB56A36A3B51900793)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsValidationException__ctor_mA098E9C564C9F4BFF73D769F0692FC9DB1F11E53_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_U3COptionsTypeU3Ek__BackingField_18(G_B4_0);
		String_t* L_6 = ___optionsName0;
		String_t* L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = __this;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = __this;
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral191EEC2373521088BE0145A4C1A45269CA556834)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsValidationException__ctor_mA098E9C564C9F4BFF73D769F0692FC9DB1F11E53_RuntimeMethod_var)));
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3COptionsNameU3Ek__BackingField_17(G_B6_0);
		return;
	}
}
// System.String Microsoft.Extensions.Options.OptionsValidationException::get_OptionsName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionsValidationException_get_OptionsName_m253E0321CB2AEBA4D912208F4D3FAC8AA9006110 (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COptionsNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Type Microsoft.Extensions.Options.OptionsValidationException::get_OptionsType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * OptionsValidationException_get_OptionsType_mAB7B427B05B018051B0BE34BEABA6DD67533CD25 (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3COptionsTypeU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::get_Failures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m0AC5DA3FF4F340C3F10A145E95D86689229976A2 (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFailuresU3Ek__BackingField_19();
		return L_0;
	}
}
// System.String Microsoft.Extensions.Options.OptionsValidationException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionsValidationException_get_Message_mBF3CBBEB74D5CFFE7A4BBB99AE7187C16EA0831F (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = OptionsValidationException_get_Failures_m0AC5DA3FF4F340C3F10A145E95D86689229976A2_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
		L_4 = SR_get_ResourceManager_m8035F289505B44B91B5BF981A84D0E2E7773280A(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m61861036779C305535E8E12E1B9E803F85F823E5 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m1CFCC0E8861A160A00A90412B650B7AB98F6C6BF (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m582BF164A241AAC8D80E914FD0C15516DB849A9C (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m7EFFD83C39CA3C753CC15730F96A2FEC703C6744 (String_t* ___resourceFormat0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m22E492FE0AB098EED51281A9B945FB1B589ED30F (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m7F899972DDEF30982FDA22B3CBC4686B10BC2A2B (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mDB25201141A3DB14AE9D5173535BC9085F416CF7 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, RuntimeObject * ___p34, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m3BA029B6815D9A5C6E19B66CB0FE4D7A472D280C (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m381FD6E6C806A954016AC6AB03A55523500FF492(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m8035F289505B44B91B5BF981A84D0E2E7773280A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0E98C39FFEB48526B0BC2A88A850EED86569DE15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_t0E98C39FFEB48526B0BC2A88A850EED86569DE15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_StaticFields*)il2cpp_codegen_static_fields_for(SR_tD1866D3D870C3DB57C9A7BBF62E4893869A8513E_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_Error_CannotActivateAbstractOrInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_CannotActivateAbstractOrInterface_mB30D93BF16D242323A92C9F942159102169C7945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_FailedBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_FailedBinding_m06A1C11E18A0A308BCA4E2D27A858C962F156434 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_FailedToActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_FailedToActivate_mE2C833F64A66E509B6D7DD0FEC96DD20A60DD8FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_MissingParameterlessConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_MissingParameterlessConstructor_m1614979CD375CA2FC477EB9E87579BE5012D1370 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_NoIConfigureOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoIConfigureOptions_m6D44E76E7E42166DB5FCA0DDA3CD13720883973A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79665E627DC1BE457D90CBA2CCB2E18253B975DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteral79665E627DC1BE457D90CBA2CCB2E18253B975DB, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_NoIConfigureOptionsAndAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoIConfigureOptionsAndAction_m30C63BCB610E5F85CEB4EF34CF1DA3A00E47384A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F20074C0043C515FAF3556F95FF58DC6BF477D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_mF68A89484BD02BE4D541C04196A1EC7DF163CF98(_stringLiteralA3F20074C0043C515FAF3556F95FF58DC6BF477D, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Succeeded_m90246D651CE54762442DF505DF0800FA50F46D9B (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSucceededU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Succeeded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2F77ECCCD1C1050CC45B502CD7FB4019C6A8499D (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSucceededU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Skipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Skipped_m1F2C1BF71201266B8EE53472CEE20B85678B1BBF (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSkippedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Skipped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m9924628F7BE9E28F649DB4EE6B4E74DD3A71C4C2 (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSkippedU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Failed_m551AA070D6260B103672F19DD2A2ECB84EB6542C (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFailedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m3643816A639634B71E0CCAD5D485373F9AA3C80E (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CFailedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Microsoft.Extensions.Options.ValidateOptionsResult::get_FailureMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidateOptionsResult_get_FailureMessage_m8A7740D7019DBD34621BB6B8A3E1E41F2394502A (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFailureMessageU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_FailureMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m2CB320F84B55071C37472BAB670DCDEFCB9608F5 (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFailureMessageU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.ValidateOptionsResult::get_Failures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValidateOptionsResult_get_Failures_m3C59FF82EB5D07EC2055AA3788242E7090E31196 (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFailuresU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failures(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_mB645F37110A5583C5F2101D8CA744F1471BE55AA (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CFailuresU3Ek__BackingField_6(L_0);
		return;
	}
}
// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * ValidateOptionsResult_Fail_mC7F0BB162AA4EB425B8F2AF658079F82227C0846 (String_t* ___failureMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * V_0 = NULL;
	{
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_0 = (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 *)il2cpp_codegen_object_new(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_1 = V_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Failed_m3643816A639634B71E0CCAD5D485373F9AA3C80E_inline(L_1, (bool)1, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_2 = V_0;
		String_t* L_3 = ___failureMessage0;
		NullCheck(L_2);
		ValidateOptionsResult_set_FailureMessage_m2CB320F84B55071C37472BAB670DCDEFCB9608F5_inline(L_2, L_3, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = ___failureMessage0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		NullCheck(L_4);
		ValidateOptionsResult_set_Failures_mB645F37110A5583C5F2101D8CA744F1471BE55AA_inline(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_8 = V_0;
		return L_8;
	}
}
// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Fail(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * ValidateOptionsResult_Fail_m8BD619C4F912AAC32EE64A305183702A43ADA168 (RuntimeObject* ___failures0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_0 = (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 *)il2cpp_codegen_object_new(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62(L_0, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_1 = L_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Failed_m3643816A639634B71E0CCAD5D485373F9AA3C80E_inline(L_1, (bool)1, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_2 = L_1;
		RuntimeObject* L_3 = ___failures0;
		String_t* L_4;
		L_4 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ValidateOptionsResult_set_FailureMessage_m2CB320F84B55071C37472BAB670DCDEFCB9608F5_inline(L_2, L_4, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_5 = L_2;
		RuntimeObject* L_6 = ___failures0;
		NullCheck(L_5);
		ValidateOptionsResult_set_Failures_mB645F37110A5583C5F2101D8CA744F1471BE55AA_inline(L_5, L_6, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62 (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__cctor_m76803C6F9E5CCD80A947363109878D4F4BE5F6D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_0 = (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 *)il2cpp_codegen_object_new(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62(L_0, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_1 = L_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Skipped_m9924628F7BE9E28F649DB4EE6B4E74DD3A71C4C2_inline(L_1, (bool)1, /*hidden argument*/NULL);
		((ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var))->set_Skip_0(L_1);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_2 = (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 *)il2cpp_codegen_object_new(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var);
		ValidateOptionsResult__ctor_m31F3E7D2AE9D53F603522E1948685F224CB00E62(L_2, /*hidden argument*/NULL);
		ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * L_3 = L_2;
		NullCheck(L_3);
		ValidateOptionsResult_set_Succeeded_m2F77ECCCD1C1050CC45B502CD7FB4019C6A8499D_inline(L_3, (bool)1, /*hidden argument*/NULL);
		((ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2_il2cpp_TypeInfo_var))->set_Success_1(L_3);
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
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0261E212AC19D267F76B547CA9608656E2CB662C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * L_0 = (U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F *)il2cpp_codegen_object_new(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m83A86007A3AF3BE7F9DC2F1CD4E36A948DE8E45B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m83A86007A3AF3BE7F9DC2F1CD4E36A948DE8E45B (U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<FindIConfigureOptions>b__9_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindIConfigureOptionsU3Eb__9_0_mFD6D5971991397FEB1EDC4431BBC6272C0055372 (U3CU3Ec_t12462A3AEF8DA0CFC9B4029612041F2FAE9E088F * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigureOptions_1_t6F73399D0DF6248E1020DAC6EA5DEF0C3605CB16_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPostConfigureOptions_1_tC0D0CB2D06187E482EEFD0AE863602D2484AB569_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_3 = ___t0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(112 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IConfigureOptions_1_t6F73399D0DF6248E1020DAC6EA5DEF0C3605CB16_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_8 = ___t0;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(112 /* System.Type System.Type::GetGenericTypeDefinition() */, L_8);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IPostConfigureOptions_1_tC0D0CB2D06187E482EEFD0AE863602D2484AB569_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003a:
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m0AC5DA3FF4F340C3F10A145E95D86689229976A2_inline (OptionsValidationException_tB4CD0F4A2A25B4F9C82FC9CE1681F43265C4FBCA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFailuresU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m3643816A639634B71E0CCAD5D485373F9AA3C80E_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CFailedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m2CB320F84B55071C37472BAB670DCDEFCB9608F5_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFailureMessageU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_mB645F37110A5583C5F2101D8CA744F1471BE55AA_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CFailuresU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m9924628F7BE9E28F649DB4EE6B4E74DD3A71C4C2_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSkippedU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2F77ECCCD1C1050CC45B502CD7FB4019C6A8499D_inline (ValidateOptionsResult_t630524A958FB9BFA3B7E793BC8F9E4FC24DA24A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSucceededU3Ek__BackingField_2(L_0);
		return;
	}
}
