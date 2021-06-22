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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// System.Collections.Generic.IDictionary`2<System.Type,System.Object>
struct IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEnumerable_1_tB8CC751EE15206C4B4F49A7C563F3052C6AAE657;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEnumerator_1_t058F43269986091421CA33194D06DC3ED20D69EB;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_tDDB2CE7DB2A80166371DA3090CF4CF156F3510FE;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEqualityComparer_1_t43085D2C02E396C2BFAA6666213E6975D9DBAAF0;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Microsoft.AspNetCore.Http.CookieOptions
struct CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t42C364E7A5FA5A849EE2C424DAC3909EC18B3A2F;
// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.AspNetCore.Http.Features.IFeatureCollection
struct IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t851B9BEA43483532047D9EFE3784D813D139DABF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.AspNetCore.Http.WebSocketAcceptContext
struct WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB8CC751EE15206C4B4F49A7C563F3052C6AAE657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t058F43269986091421CA33194D06DC3ED20D69EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Except_TisKeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_m2022874DA41AE3396F9E292730845E22A8C93EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_get_Item_mE8C26DDDCA2E95D7BC928A9C2479E5B683620D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_set_Item_mCAD4E6114A2A49C014AEC2F9788D37EF27600C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mAEC9466622360635EFF815124B0DBDBAFF9B99DA_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t14CC112689B8F107A322214B571230087817057C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
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
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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

// Microsoft.AspNetCore.Http.WebSocketAcceptContext
struct WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223  : public RuntimeObject
{
public:
	// System.String Microsoft.AspNetCore.Http.WebSocketAcceptContext::<SubProtocol>k__BackingField
	String_t* ___U3CSubProtocolU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSubProtocolU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223, ___U3CSubProtocolU3Ek__BackingField_0)); }
	inline String_t* get_U3CSubProtocolU3Ek__BackingField_0() const { return ___U3CSubProtocolU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSubProtocolU3Ek__BackingField_0() { return &___U3CSubProtocolU3Ek__BackingField_0; }
	inline void set_U3CSubProtocolU3Ek__BackingField_0(String_t* value)
	{
		___U3CSubProtocolU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubProtocolU3Ek__BackingField_0), (void*)value);
	}
};


// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972  : public RuntimeObject
{
public:

public:
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


// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___value_1)); }
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t42C364E7A5FA5A849EE2C424DAC3909EC18B3A2F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t851B9BEA43483532047D9EFE3784D813D139DABF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
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


// Microsoft.AspNetCore.Http.Features.HttpsCompressionMode
struct HttpsCompressionMode_tFF406DCE81A7F3AEFD27C3F725F0BD6600229199 
{
public:
	// System.Int32 Microsoft.AspNetCore.Http.Features.HttpsCompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpsCompressionMode_tFF406DCE81A7F3AEFD27C3F725F0BD6600229199, ___value___2)); }
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


// Microsoft.AspNetCore.Http.SameSiteMode
struct SameSiteMode_t1E9EED33EB4B23D949970383B573A5E110DCEE6B 
{
public:
	// System.Int32 Microsoft.AspNetCore.Http.SameSiteMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SameSiteMode_t1E9EED33EB4B23D949970383B573A5E110DCEE6B, ___value___2)); }
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


// Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>2__current
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___U3CU3E2__current_1;
	// Microsoft.AspNetCore.Http.Features.FeatureCollection Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>4__this
	FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2, ___U3CU3E4__this_2)); }
	inline FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 
{
public:
	// T System.Nullable`1::value
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___value_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_value_0() const { return ___value_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// Microsoft.AspNetCore.Http.CookieOptions
struct CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2  : public RuntimeObject
{
public:
	// System.String Microsoft.AspNetCore.Http.CookieOptions::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_0;
	// System.String Microsoft.AspNetCore.Http.CookieOptions::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTimeOffset> Microsoft.AspNetCore.Http.CookieOptions::<Expires>k__BackingField
	Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  ___U3CExpiresU3Ek__BackingField_2;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<Secure>k__BackingField
	bool ___U3CSecureU3Ek__BackingField_3;
	// Microsoft.AspNetCore.Http.SameSiteMode Microsoft.AspNetCore.Http.CookieOptions::<SameSite>k__BackingField
	int32_t ___U3CSameSiteU3Ek__BackingField_4;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<HttpOnly>k__BackingField
	bool ___U3CHttpOnlyU3Ek__BackingField_5;
	// System.Nullable`1<System.TimeSpan> Microsoft.AspNetCore.Http.CookieOptions::<MaxAge>k__BackingField
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___U3CMaxAgeU3Ek__BackingField_6;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<IsEssential>k__BackingField
	bool ___U3CIsEssentialU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CDomainU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CDomainU3Ek__BackingField_0)); }
	inline String_t* get_U3CDomainU3Ek__BackingField_0() const { return ___U3CDomainU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDomainU3Ek__BackingField_0() { return &___U3CDomainU3Ek__BackingField_0; }
	inline void set_U3CDomainU3Ek__BackingField_0(String_t* value)
	{
		___U3CDomainU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDomainU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CPathU3Ek__BackingField_1)); }
	inline String_t* get_U3CPathU3Ek__BackingField_1() const { return ___U3CPathU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_1() { return &___U3CPathU3Ek__BackingField_1; }
	inline void set_U3CPathU3Ek__BackingField_1(String_t* value)
	{
		___U3CPathU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpiresU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CExpiresU3Ek__BackingField_2)); }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  get_U3CExpiresU3Ek__BackingField_2() const { return ___U3CExpiresU3Ek__BackingField_2; }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 * get_address_of_U3CExpiresU3Ek__BackingField_2() { return &___U3CExpiresU3Ek__BackingField_2; }
	inline void set_U3CExpiresU3Ek__BackingField_2(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  value)
	{
		___U3CExpiresU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSecureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CSecureU3Ek__BackingField_3)); }
	inline bool get_U3CSecureU3Ek__BackingField_3() const { return ___U3CSecureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CSecureU3Ek__BackingField_3() { return &___U3CSecureU3Ek__BackingField_3; }
	inline void set_U3CSecureU3Ek__BackingField_3(bool value)
	{
		___U3CSecureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSameSiteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CSameSiteU3Ek__BackingField_4)); }
	inline int32_t get_U3CSameSiteU3Ek__BackingField_4() const { return ___U3CSameSiteU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSameSiteU3Ek__BackingField_4() { return &___U3CSameSiteU3Ek__BackingField_4; }
	inline void set_U3CSameSiteU3Ek__BackingField_4(int32_t value)
	{
		___U3CSameSiteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CHttpOnlyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CHttpOnlyU3Ek__BackingField_5)); }
	inline bool get_U3CHttpOnlyU3Ek__BackingField_5() const { return ___U3CHttpOnlyU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHttpOnlyU3Ek__BackingField_5() { return &___U3CHttpOnlyU3Ek__BackingField_5; }
	inline void set_U3CHttpOnlyU3Ek__BackingField_5(bool value)
	{
		___U3CHttpOnlyU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaxAgeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CMaxAgeU3Ek__BackingField_6)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_U3CMaxAgeU3Ek__BackingField_6() const { return ___U3CMaxAgeU3Ek__BackingField_6; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_U3CMaxAgeU3Ek__BackingField_6() { return &___U3CMaxAgeU3Ek__BackingField_6; }
	inline void set_U3CMaxAgeU3Ek__BackingField_6(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___U3CMaxAgeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsEssentialU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2, ___U3CIsEssentialU3Ek__BackingField_7)); }
	inline bool get_U3CIsEssentialU3Ek__BackingField_7() const { return ___U3CIsEssentialU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsEssentialU3Ek__BackingField_7() { return &___U3CIsEssentialU3Ek__BackingField_7; }
	inline void set_U3CIsEssentialU3Ek__BackingField_7(bool value)
	{
		___U3CIsEssentialU3Ek__BackingField_7 = value;
	}
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Except<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEqualityComparer`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Except_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m07DFBF6828A2A43FEC2414297FFA9EE88DC0B565_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mEC8ECDA415C4FD9639E39ABE570580761E9C0AD7_inline (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_GetEnumerator_m415A5E43018C906B5D6A48006758EC91CF32A320 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m6BDA324F950791B15894C9EBF4BCD42D1A41E8DB (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyComparer__ctor_m61B0A536BF2CB7AB80F35ECCB570D8F7609357F3 (KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m3C5BD2CFAB98BD0F389A634ECAFF4F1E37789280 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_mC9F4E2A01ED8D39FD7833EBF435E79B9F3094C60 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Except<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEqualityComparer`1<!!0>)
inline RuntimeObject* Enumerable_Except_TisKeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_m2022874DA41AE3396F9E292730845E22A8C93EE9 (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Except_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m07DFBF6828A2A43FEC2414297FFA9EE88DC0B565_gshared)(___first0, ___second1, ___comparer2, method);
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mEACBA0941C5BE6409C0DFE9D33AD45AA1D992E1E (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t * KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
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
// System.Void Microsoft.AspNetCore.Http.CookieOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions__ctor_mE03653299FFB71CB202A4254C06B894C7B5A77CE (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CSameSiteU3Ek__BackingField_4((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CookieOptions_set_Path_mEC8ECDA415C4FD9639E39ABE570580761E9C0AD7_inline(__this, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.CookieOptions::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieOptions_get_Domain_m499DC576380C78318B4D8E16E7C774AA576E2446 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDomainU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Domain_m16102F49367E1AAA20FBC0F049CAF5A3AD30B392 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDomainU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.CookieOptions::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieOptions_get_Path_m1C20D38A15E8F23438EC37245577558C692E17F0 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPathU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mEC8ECDA415C4FD9639E39ABE570580761E9C0AD7 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Nullable`1<System.DateTimeOffset> Microsoft.AspNetCore.Http.CookieOptions::get_Expires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  CookieOptions_get_Expires_mFF567793D1D71C9F3700D92739ED3B4AB3705910 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  L_0 = __this->get_U3CExpiresU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Expires(System.Nullable`1<System.DateTimeOffset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Expires_m663E3C1A64C9A55B588C5D2D15A216271CA6A10A (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  L_0 = ___value0;
		__this->set_U3CExpiresU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_Secure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_Secure_mB1E9AF103E0DF20D508C635D04863125B8196193 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSecureU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Secure(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Secure_m7764F44D4CEE80A313BB2F81062B757D1F959C0D (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSecureU3Ek__BackingField_3(L_0);
		return;
	}
}
// Microsoft.AspNetCore.Http.SameSiteMode Microsoft.AspNetCore.Http.CookieOptions::get_SameSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieOptions_get_SameSite_m3FA930C25A199EAF691415A6BB14A3BE1F9A7FEC (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSameSiteU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_SameSite(Microsoft.AspNetCore.Http.SameSiteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_SameSite_m1CC4597F9A88C074EAC7D840C6C7AEC74E33012D (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSameSiteU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_HttpOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_HttpOnly_mAADBF3BC808691A074809E5509BDCCFA50179E08 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHttpOnlyU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_HttpOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_HttpOnly_m09245EE500AA0535828B0A158D8A8F223EB59084 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHttpOnlyU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Nullable`1<System.TimeSpan> Microsoft.AspNetCore.Http.CookieOptions::get_MaxAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  CookieOptions_get_MaxAge_mA3336BCF1CBC6BB82319302A57018DA53751B45B (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_0 = __this->get_U3CMaxAgeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_MaxAge(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_MaxAge_m6CA73A124151AFF1E6DE0B527900A40C130CBD47 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_0 = ___value0;
		__this->set_U3CMaxAgeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_IsEssential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_IsEssential_m1321D343E0F20206D64C51D4662969144A34256D (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsEssentialU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_IsEssential(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_IsEssential_m34D6BA9AAD0EF58F6DCEE644BEA32217EA9C1FC3 (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsEssentialU3Ek__BackingField_7(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m8ABF8D4719CE7F173F3EE8D603D1012D95D26B16 (EmbeddedAttribute_t42C364E7A5FA5A849EE2C424DAC3909EC18B3A2F * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_m453595D4C6D42BF103E912F1E6D96BECB4EEB982 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor(Microsoft.AspNetCore.Http.Features.IFeatureCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_mF6588C2B8542D31AAD4AF002643EE2EBE77CB401 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, RuntimeObject* ___defaults0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___defaults0;
		__this->set__defaults_1(L_0);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection::get_Revision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FeatureCollection_get_Revision_mF703F3EA8F2D2583AE2FF3675D307C9968E42C1D (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	int32_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	int32_t G_B3_0 = 0;
	int32_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	{
		int32_t L_0 = __this->get__containerRevision_3();
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = __this->get__defaults_1();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Microsoft.AspNetCore.Http.Features.IFeatureCollection::get_Revision() */, IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_001a:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
	}
}
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FeatureCollection_get_IsReadOnly_m83A78D04E4B618BEE41A5A30754B96F6C193043B (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object Microsoft.AspNetCore.Http.Features.FeatureCollection::get_Item(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FeatureCollection_get_Item_mE8C26DDDCA2E95D7BC928A9C2479E5B683620D0A (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		Type_t * L_0 = ___key0;
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
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FeatureCollection_get_Item_mE8C26DDDCA2E95D7BC928A9C2479E5B683620D0A_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->get__features_2();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__features_2();
		Type_t * L_5 = ___key0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, Type_t *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var, L_4, L_5, (RuntimeObject **)(&V_0));
		if (L_6)
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		RuntimeObject* L_7 = __this->get__defaults_1();
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0038;
		}
	}
	{
		return NULL;
	}

IL_0038:
	{
		Type_t * L_9 = ___key0;
		NullCheck(G_B6_0);
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(2 /* System.Object Microsoft.AspNetCore.Http.Features.IFeatureCollection::get_Item(System.Type) */, IFeatureCollection_tEB1428919008973A9DF54D09A0A2C108957B6288_il2cpp_TypeInfo_var, G_B6_0, L_9);
		return L_10;
	}

IL_003f:
	{
		RuntimeObject * L_11 = V_0;
		return L_11;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::set_Item(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection_set_Item_mCAD4E6114A2A49C014AEC2F9788D37EF27600C56 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___key0;
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
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FeatureCollection_set_Item_mCAD4E6114A2A49C014AEC2F9788D37EF27600C56_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__features_2();
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_5 = __this->get__features_2();
		Type_t * L_6 = ___key0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Object>::Remove(!0) */, IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var, L_5, L_6);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = __this->get__containerRevision_3();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->set__containerRevision_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		RuntimeObject* L_9 = __this->get__features_2();
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_10 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)il2cpp_codegen_object_new(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62(L_10, /*hidden argument*/Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		__this->set__features_2(L_10);
	}

IL_0053:
	{
		RuntimeObject* L_11 = __this->get__features_2();
		Type_t * L_12 = ___key0;
		RuntimeObject * L_13 = ___value1;
		NullCheck(L_11);
		InterfaceActionInvoker2< Type_t *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Object>::set_Item(!0,!1) */, IDictionary_2_t3E0F5452B9CB22E0C0F8C3793B47D9DA022CDB8C_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		int32_t L_14 = __this->get__containerRevision_3();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->set__containerRevision_3(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		return;
	}
}
// System.Collections.IEnumerator Microsoft.AspNetCore.Http.Features.FeatureCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_System_Collections_IEnumerable_GetEnumerator_m1B9B8FAB87DE191AD0ED4F815E166BE31A467064 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = FeatureCollection_GetEnumerator_m415A5E43018C906B5D6A48006758EC91CF32A320(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_GetEnumerator_m415A5E43018C906B5D6A48006758EC91CF32A320 (FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * L_0 = (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__14__ctor_m6BDA324F950791B15894C9EBF4BCD42D1A41E8DB(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__cctor_m72AA824498264A18A4A7B0E6C55FD23BA59BEE5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * L_0 = (KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 *)il2cpp_codegen_object_new(KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972_il2cpp_TypeInfo_var);
		KeyComparer__ctor_m61B0A536BF2CB7AB80F35ECCB570D8F7609357F3(L_0, /*hidden argument*/NULL);
		((FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_StaticFields*)il2cpp_codegen_static_fields_for(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var))->set_FeatureKeyComparer_0(L_0);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mD7008949B92263DA2BCD9AA13D8396E466998506 (IsReadOnlyAttribute_t851B9BEA43483532047D9EFE3784D813D139DABF * __this, const RuntimeMethod* method)
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
// System.String Microsoft.AspNetCore.Http.WebSocketAcceptContext::get_SubProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketAcceptContext_get_SubProtocol_mA40614D5F3B2B0EA0C35FA5775A6C0A1FC1E3141 (WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSubProtocolU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.WebSocketAcceptContext::set_SubProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketAcceptContext_set_SubProtocol_m79BE8CAEA7258F2A6D48AEEEB3E45070454610B2 (WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSubProtocolU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.WebSocketAcceptContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketAcceptContext__ctor_m4C23E8962E52B299038BC8A4A202AF2363A22BAC (WebSocketAcceptContext_t3274C00433FB84C1D3630E0FF07A19110C6E3223 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m6BDA324F950791B15894C9EBF4BCD42D1A41E8DB (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mEACBA0941C5BE6409C0DFE9D33AD45AA1D992E1E (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0041;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_0037;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x41, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m3C5BD2CFAB98BD0F389A634ECAFF4F1E37789280(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0037:
	{
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_mC9F4E2A01ED8D39FD7833EBF435E79B9F3094C60(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_m568B69E2DC7496D8C44F5CEC3ACADCD729EF9800 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Except_TisKeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_m2022874DA41AE3396F9E292730845E22A8C93EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB8CC751EE15206C4B4F49A7C563F3052C6AAE657_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t058F43269986091421CA33194D06DC3ED20D69EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * V_2 = NULL;
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * G_B11_0 = NULL;
	U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * G_B10_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * G_B12_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_0072;
				}
				case 2:
				{
					goto IL_00fe;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_012b;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get__features_2();
			if (!L_4)
			{
				goto IL_0094;
			}
		}

IL_0036:
		{
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_5 = V_2;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get__features_2();
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::GetEnumerator() */, IEnumerable_1_tB8CC751EE15206C4B4F49A7C563F3052C6AAE657_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CU3E7__wrap1_3(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007a;
		}

IL_0051:
		{
			RuntimeObject* L_8 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_8);
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_9;
			L_9 = InterfaceFuncInvoker0< KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::get_Current() */, IEnumerator_1_t058F43269986091421CA33194D06DC3ED20D69EB_il2cpp_TypeInfo_var, L_8);
			V_3 = L_9;
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_10 = V_3;
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_012b;
		}

IL_0072:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_007a:
		{
			RuntimeObject* L_11 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_11);
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0051;
			}
		}

IL_0087:
		{
			U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m3C5BD2CFAB98BD0F389A634ECAFF4F1E37789280(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
		}

IL_0094:
		{
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject* L_14 = L_13->get__defaults_1();
			if (!L_14)
			{
				goto IL_0120;
			}
		}

IL_009f:
		{
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_15 = V_2;
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->get__features_2();
			G_B10_0 = __this;
			if (!L_16)
			{
				G_B11_0 = __this;
				goto IL_00c0;
			}
		}

IL_00a8:
		{
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_17 = V_2;
			NullCheck(L_17);
			RuntimeObject* L_18 = L_17->get__defaults_1();
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_19 = V_2;
			NullCheck(L_19);
			RuntimeObject* L_20 = L_19->get__features_2();
			IL2CPP_RUNTIME_CLASS_INIT(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var);
			KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * L_21 = ((FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_StaticFields*)il2cpp_codegen_static_fields_for(FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E_il2cpp_TypeInfo_var))->get_FeatureKeyComparer_0();
			RuntimeObject* L_22;
			L_22 = Enumerable_Except_TisKeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_m2022874DA41AE3396F9E292730845E22A8C93EE9(L_18, L_20, L_21, /*hidden argument*/Enumerable_Except_TisKeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_m2022874DA41AE3396F9E292730845E22A8C93EE9_RuntimeMethod_var);
			G_B12_0 = L_22;
			G_B12_1 = G_B10_0;
			goto IL_00ca;
		}

IL_00c0:
		{
			FeatureCollection_tCE559D5FD6D2CC97D33AF02C8CF07530923A680E * L_23 = V_2;
			NullCheck(L_23);
			RuntimeObject* L_24 = L_23->get__defaults_1();
			V_4 = L_24;
			RuntimeObject* L_25 = V_4;
			G_B12_0 = L_25;
			G_B12_1 = G_B11_0;
		}

IL_00ca:
		{
			NullCheck(G_B12_0);
			RuntimeObject* L_26;
			L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::GetEnumerator() */, IEnumerable_1_tB8CC751EE15206C4B4F49A7C563F3052C6AAE657_il2cpp_TypeInfo_var, G_B12_0);
			NullCheck(G_B12_1);
			G_B12_1->set_U3CU3E7__wrap1_3(L_26);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0106;
		}

IL_00de:
		{
			RuntimeObject* L_27 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_27);
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_28;
			L_28 = InterfaceFuncInvoker0< KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::get_Current() */, IEnumerator_1_t058F43269986091421CA33194D06DC3ED20D69EB_il2cpp_TypeInfo_var, L_27);
			V_5 = L_28;
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_29 = V_5;
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_012b;
		}

IL_00fe:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0106:
		{
			RuntimeObject* L_30 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_30);
			bool L_31;
			L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_00de;
			}
		}

IL_0113:
		{
			U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_mC9F4E2A01ED8D39FD7833EBF435E79B9F3094C60(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
		}

IL_0120:
		{
			V_0 = (bool)0;
			goto IL_012b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0124;
	}

FAULT_0124:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mEACBA0941C5BE6409C0DFE9D33AD45AA1D992E1E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(292)
	} // end fault
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012b:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m3C5BD2CFAB98BD0F389A634ECAFF4F1E37789280 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_mC9F4E2A01ED8D39FD7833EBF435E79B9F3094C60 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.Type,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_TypeU2CSystem_ObjectU3EU3E_get_Current_m3F44165429647BB533435E674FA348322C25EED9 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mAEC9466622360635EFF815124B0DBDBAFF9B99DA (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mAEC9466622360635EFF815124B0DBDBAFF9B99DA_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mD193BC0F667FE673F3A9AB5E770812D57CBD33F2 (U3CGetEnumeratorU3Ed__14_tBC55E40DA8F9D985E544E4FAFB3EF572C6F4D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A_il2cpp_TypeInfo_var, &L_1);
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
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::Equals(System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyComparer_Equals_m56D517FF34DE295244925252144AFC97023DA4BB (KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * __this, KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___x0, KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0;
		L_0 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		Type_t * L_1;
		L_1 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&___y1), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::GetHashCode(System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyComparer_GetHashCode_m5F6393A53ED29A3AF3EF214C70F4C9AE707AEEAF (KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * __this, KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0;
		L_0 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&___obj0), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyComparer__ctor_m61B0A536BF2CB7AB80F35ECCB570D8F7609357F3 (KeyComparer_tCCDFEE613C1A4219F74841217803A7676A2C3972 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mEC8ECDA415C4FD9639E39ABE570580761E9C0AD7_inline (CookieOptions_t3F7F8A9B4C832EFF709DC2D586612DA9D09FC8F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
