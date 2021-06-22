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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>
struct ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Object>
struct ChangeTokenRegistration_1_tA9B4A0AD847284B6E20196DB80107747CFA2DD74;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>
struct Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment>
struct IEnumerator_1_tFBD58F7F03078004E973BB80BECBE478FB7C254B;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>
struct IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1/NoopDisposable<System.Action>
struct NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800;
// System.Pinnable`1<System.Char>
struct Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;
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
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// Microsoft.Extensions.Primitives.CancellationChangeToken
struct CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Microsoft.Extensions.Primitives.CompositeChangeToken
struct CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8DBD21FAEE7B6AAC2F91BB7D37BF804E74999EEE;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.Extensions.Primitives.IChangeToken
struct IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tC285B7F5B476C35A7CC7CBC939E563DFCE74C105;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
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
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9;
// Microsoft.Extensions.Primitives.StringSegmentComparer
struct StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable
struct NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16;
// Microsoft.Extensions.Primitives.ChangeToken/<>c
struct U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t11A993F323C32086EF190147308253E8B92B695D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t01CA92509CB890BEBE891C316BA88CDA5B64A0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionResource_tBB62068E7400475EDD43191A3E69BE9939FCC28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t16D68559E45D54E021334BB8594A6F432DE13E10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral123EAF9538507C08A07445DAE9C88F0397B65DB2;
IL2CPP_EXTERN_C String_t* _stringLiteral23AAD24B88E1254E39EC85AA38C64D9187D6D7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE8234F3A25D04BF2F28CAD03A3E970785334E9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31;
IL2CPP_EXTERN_C String_t* _stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF7B6F2693161F3E2D2D919BBDBF555A5AD41F71;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeTokenRegistration_1__ctor_mF7E786F5B082A2415099E1F0063D4F0F26BBA51C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeToken_OnChange_m3156D91835461E81218934C9B8909F566867AAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompositeChangeToken__ctor_mF219007B07F33623DDE9798C98E38E55EBD44BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBD6A02C07A69C0BD22E98B4E68CE94179409D56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB1B5ECF5C66E13F31308FFDDFB25B0EC88A31D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E714C04486B8B44A739A455DA0665EFBC0354EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8738602691CC09398995F83CC18D2C587A8C7725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_m0F8DB51613F5FCEA863ADAB80CCE61F7341959FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_m22EDDA3467485C37C5A45212BF43F05C53CA88AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnChangeU3Eb__0_0_m57E2703E0CC712DF9E20381D452F18117E1FDA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t25195C6DDEC59019C46B49CC913E06FF71B89823_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9;;
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com;
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com;;
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke;
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke;;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
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
struct U3CModuleU3E_tE29BC23FB3223FE0428DB14F144E0C40A80C2054 
{
public:

public:
};


// System.Object


// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>
struct ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022  : public RuntimeObject
{
public:
	// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_changeTokenProducer
	Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * ____changeTokenProducer_0;
	// System.Action`1<TState> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_changeTokenConsumer
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ____changeTokenConsumer_1;
	// TState Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_state
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____state_2;
	// System.IDisposable Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_disposable
	RuntimeObject* ____disposable_3;

public:
	inline static int32_t get_offset_of__changeTokenProducer_0() { return static_cast<int32_t>(offsetof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022, ____changeTokenProducer_0)); }
	inline Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * get__changeTokenProducer_0() const { return ____changeTokenProducer_0; }
	inline Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 ** get_address_of__changeTokenProducer_0() { return &____changeTokenProducer_0; }
	inline void set__changeTokenProducer_0(Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * value)
	{
		____changeTokenProducer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____changeTokenProducer_0), (void*)value);
	}

	inline static int32_t get_offset_of__changeTokenConsumer_1() { return static_cast<int32_t>(offsetof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022, ____changeTokenConsumer_1)); }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * get__changeTokenConsumer_1() const { return ____changeTokenConsumer_1; }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC ** get_address_of__changeTokenConsumer_1() { return &____changeTokenConsumer_1; }
	inline void set__changeTokenConsumer_1(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * value)
	{
		____changeTokenConsumer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____changeTokenConsumer_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022, ____state_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__state_2() const { return ____state_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}

	inline static int32_t get_offset_of__disposable_3() { return static_cast<int32_t>(offsetof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022, ____disposable_3)); }
	inline RuntimeObject* get__disposable_3() const { return ____disposable_3; }
	inline RuntimeObject** get_address_of__disposable_3() { return &____disposable_3; }
	inline void set__disposable_3(RuntimeObject* value)
	{
		____disposable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable_3), (void*)value);
	}
};

struct ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1/NoopDisposable<TState> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_disposedSentinel
	NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800 * ____disposedSentinel_4;

public:
	inline static int32_t get_offset_of__disposedSentinel_4() { return static_cast<int32_t>(offsetof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_StaticFields, ____disposedSentinel_4)); }
	inline NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800 * get__disposedSentinel_4() const { return ____disposedSentinel_4; }
	inline NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800 ** get_address_of__disposedSentinel_4() { return &____disposedSentinel_4; }
	inline void set__disposedSentinel_4(NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800 * value)
	{
		____disposedSentinel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposedSentinel_4), (void*)value);
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


// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF, ____items_1)); }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* get__items_1() const { return ____items_1; }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF_StaticFields, ____emptyArray_5)); }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Pinnable`1<System.Char>
struct Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04, ___Data_0)); }
	inline Il2CppChar get_Data_0() const { return ___Data_0; }
	inline Il2CppChar* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Il2CppChar value)
	{
		___Data_0 = value;
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


// Microsoft.Extensions.Primitives.ChangeToken
struct ChangeToken_t3888C08355DA140728A50CA2A8248731814D5AD5  : public RuntimeObject
{
public:

public:
};


// Microsoft.Extensions.Primitives.CompositeChangeToken
struct CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756  : public RuntimeObject
{
public:
	// System.Object Microsoft.Extensions.Primitives.CompositeChangeToken::_callbackLock
	RuntimeObject * ____callbackLock_1;
	// System.Threading.CancellationTokenSource Microsoft.Extensions.Primitives.CompositeChangeToken::_cancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancellationTokenSource_2;
	// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::_registeredCallbackProxy
	bool ____registeredCallbackProxy_3;
	// System.Collections.Generic.List`1<System.IDisposable> Microsoft.Extensions.Primitives.CompositeChangeToken::_disposables
	List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * ____disposables_4;
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::<ChangeTokens>k__BackingField
	RuntimeObject* ___U3CChangeTokensU3Ek__BackingField_5;
	// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::<ActiveChangeCallbacks>k__BackingField
	bool ___U3CActiveChangeCallbacksU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__callbackLock_1() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ____callbackLock_1)); }
	inline RuntimeObject * get__callbackLock_1() const { return ____callbackLock_1; }
	inline RuntimeObject ** get_address_of__callbackLock_1() { return &____callbackLock_1; }
	inline void set__callbackLock_1(RuntimeObject * value)
	{
		____callbackLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbackLock_1), (void*)value);
	}

	inline static int32_t get_offset_of__cancellationTokenSource_2() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ____cancellationTokenSource_2)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancellationTokenSource_2() const { return ____cancellationTokenSource_2; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancellationTokenSource_2() { return &____cancellationTokenSource_2; }
	inline void set__cancellationTokenSource_2(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancellationTokenSource_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancellationTokenSource_2), (void*)value);
	}

	inline static int32_t get_offset_of__registeredCallbackProxy_3() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ____registeredCallbackProxy_3)); }
	inline bool get__registeredCallbackProxy_3() const { return ____registeredCallbackProxy_3; }
	inline bool* get_address_of__registeredCallbackProxy_3() { return &____registeredCallbackProxy_3; }
	inline void set__registeredCallbackProxy_3(bool value)
	{
		____registeredCallbackProxy_3 = value;
	}

	inline static int32_t get_offset_of__disposables_4() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ____disposables_4)); }
	inline List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * get__disposables_4() const { return ____disposables_4; }
	inline List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF ** get_address_of__disposables_4() { return &____disposables_4; }
	inline void set__disposables_4(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * value)
	{
		____disposables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposables_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChangeTokensU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ___U3CChangeTokensU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CChangeTokensU3Ek__BackingField_5() const { return ___U3CChangeTokensU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CChangeTokensU3Ek__BackingField_5() { return &___U3CChangeTokensU3Ek__BackingField_5; }
	inline void set_U3CChangeTokensU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CChangeTokensU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChangeTokensU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveChangeCallbacksU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756, ___U3CActiveChangeCallbacksU3Ek__BackingField_6)); }
	inline bool get_U3CActiveChangeCallbacksU3Ek__BackingField_6() const { return ___U3CActiveChangeCallbacksU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CActiveChangeCallbacksU3Ek__BackingField_6() { return &___U3CActiveChangeCallbacksU3Ek__BackingField_6; }
	inline void set_U3CActiveChangeCallbacksU3Ek__BackingField_6(bool value)
	{
		___U3CActiveChangeCallbacksU3Ek__BackingField_6 = value;
	}
};

struct CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_StaticFields
{
public:
	// System.Action`1<System.Object> Microsoft.Extensions.Primitives.CompositeChangeToken::_onChangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____onChangeDelegate_0;

public:
	inline static int32_t get_offset_of__onChangeDelegate_0() { return static_cast<int32_t>(offsetof(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_StaticFields, ____onChangeDelegate_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__onChangeDelegate_0() const { return ____onChangeDelegate_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__onChangeDelegate_0() { return &____onChangeDelegate_0; }
	inline void set__onChangeDelegate_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____onChangeDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onChangeDelegate_0), (void*)value);
	}
};


// Microsoft.Extensions.Primitives.Extensions
struct Extensions_t7885868BF4F393B446051D98289B0DF7E2199F9D  : public RuntimeObject
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


// FxResources.Microsoft.Extensions.Primitives.SR
struct SR_t25195C6DDEC59019C46B49CC913E06FF71B89823  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_t16D68559E45D54E021334BB8594A6F432DE13E10  : public RuntimeObject
{
public:

public:
};

struct SR_t16D68559E45D54E021334BB8594A6F432DE13E10_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_t16D68559E45D54E021334BB8594A6F432DE13E10_StaticFields, ___s_resourceManager_0)); }
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


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// Microsoft.Extensions.Primitives.ThrowHelper
struct ThrowHelper_t76D2C1ED79E669832D51E775CC2EED3CF81CD728  : public RuntimeObject
{
public:

public:
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

// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable
struct NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16  : public RuntimeObject
{
public:

public:
};

struct NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::Instance
	NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_StaticFields, ___Instance_0)); }
	inline NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * get_Instance_0() const { return ___Instance_0; }
	inline NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Microsoft.Extensions.Primitives.ChangeToken/<>c
struct U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.ChangeToken/<>c Microsoft.Extensions.Primitives.ChangeToken/<>c::<>9
	U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * ___U3CU3E9_0;
	// System.Action`1<System.Action> Microsoft.Extensions.Primitives.ChangeToken/<>c::<>9__0_0
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.ReadOnlyMemory`1<System.Char>
struct ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD 
{
public:
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD, ____length_2)); }
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


// System.Threading.AsyncFlowControl
struct AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A 
{
public:
	// System.Boolean System.Threading.AsyncFlowControl::useEC
	bool ___useEC_0;
	// System.Threading.ExecutionContext System.Threading.AsyncFlowControl::_ec
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____ec_1;
	// System.Threading.Thread System.Threading.AsyncFlowControl::_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____thread_2;

public:
	inline static int32_t get_offset_of_useEC_0() { return static_cast<int32_t>(offsetof(AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A, ___useEC_0)); }
	inline bool get_useEC_0() const { return ___useEC_0; }
	inline bool* get_address_of_useEC_0() { return &___useEC_0; }
	inline void set_useEC_0(bool value)
	{
		___useEC_0 = value;
	}

	inline static int32_t get_offset_of__ec_1() { return static_cast<int32_t>(offsetof(AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A, ____ec_1)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get__ec_1() const { return ____ec_1; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of__ec_1() { return &____ec_1; }
	inline void set__ec_1(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		____ec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ec_1), (void*)value);
	}

	inline static int32_t get_offset_of__thread_2() { return static_cast<int32_t>(offsetof(AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A, ____thread_2)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__thread_2() const { return ____thread_2; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__thread_2() { return &____thread_2; }
	inline void set__thread_2(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____thread_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thread_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A_marshaled_pinvoke
{
	int32_t ___useEC_0;
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____ec_1;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____thread_2;
};
// Native definition for COM marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A_marshaled_com
{
	int32_t ___useEC_0;
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____ec_1;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____thread_2;
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
struct EmbeddedAttribute_t8DBD21FAEE7B6AAC2F91BB7D37BF804E74999EEE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// Microsoft.Extensions.Internal.HashCodeCombiner
struct HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E 
{
public:
	// System.Int64 Microsoft.Extensions.Internal.HashCodeCombiner::_combinedHash64
	int64_t ____combinedHash64_0;

public:
	inline static int32_t get_offset_of__combinedHash64_0() { return static_cast<int32_t>(offsetof(HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E, ____combinedHash64_0)); }
	inline int64_t get__combinedHash64_0() const { return ____combinedHash64_0; }
	inline int64_t* get_address_of__combinedHash64_0() { return &____combinedHash64_0; }
	inline void set__combinedHash64_0(int64_t value)
	{
		____combinedHash64_0 = value;
	}
};


// Microsoft.Extensions.Primitives.InplaceStringBuilder
struct InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 
{
public:
	// System.Int32 Microsoft.Extensions.Primitives.InplaceStringBuilder::_offset
	int32_t ____offset_0;
	// System.Int32 Microsoft.Extensions.Primitives.InplaceStringBuilder::_capacity
	int32_t ____capacity_1;
	// System.String Microsoft.Extensions.Primitives.InplaceStringBuilder::_value
	String_t* ____value_2;

public:
	inline static int32_t get_offset_of__offset_0() { return static_cast<int32_t>(offsetof(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05, ____offset_0)); }
	inline int32_t get__offset_0() const { return ____offset_0; }
	inline int32_t* get_address_of__offset_0() { return &____offset_0; }
	inline void set__offset_0(int32_t value)
	{
		____offset_0 = value;
	}

	inline static int32_t get_offset_of__capacity_1() { return static_cast<int32_t>(offsetof(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05, ____capacity_1)); }
	inline int32_t get__capacity_1() const { return ____capacity_1; }
	inline int32_t* get_address_of__capacity_1() { return &____capacity_1; }
	inline void set__capacity_1(int32_t value)
	{
		____capacity_1 = value;
	}

	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05, ____value_2)); }
	inline String_t* get__value_2() const { return ____value_2; }
	inline String_t** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(String_t* value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.InplaceStringBuilder
struct InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_pinvoke
{
	int32_t ____offset_0;
	int32_t ____capacity_1;
	char* ____value_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.InplaceStringBuilder
struct InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_com
{
	int32_t ____offset_0;
	int32_t ____capacity_1;
	Il2CppChar* ____value_2;
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tC285B7F5B476C35A7CC7CBC939E563DFCE74C105  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 
{
public:
	// System.String Microsoft.Extensions.Primitives.StringSegment::<Buffer>k__BackingField
	String_t* ___U3CBufferU3Ek__BackingField_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_2;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9, ___U3CBufferU3Ek__BackingField_1)); }
	inline String_t* get_U3CBufferU3Ek__BackingField_1() const { return ___U3CBufferU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CBufferU3Ek__BackingField_1() { return &___U3CBufferU3Ek__BackingField_1; }
	inline void set_U3CBufferU3Ek__BackingField_1(String_t* value)
	{
		___U3CBufferU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufferU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9, ___U3COffsetU3Ek__BackingField_2)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_2() const { return ___U3COffsetU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_2() { return &___U3COffsetU3Ek__BackingField_2; }
	inline void set_U3COffsetU3Ek__BackingField_2(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9, ___U3CLengthU3Ek__BackingField_3)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_3() const { return ___U3CLengthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_3() { return &___U3CLengthU3Ek__BackingField_3; }
	inline void set_U3CLengthU3Ek__BackingField_3(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_3 = value;
	}
};

struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Empty
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_StaticFields, ___Empty_0)); }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  get_Empty_0() const { return ___Empty_0; }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke
{
	char* ___U3CBufferU3Ek__BackingField_1;
	int32_t ___U3COffsetU3Ek__BackingField_2;
	int32_t ___U3CLengthU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com
{
	Il2CppChar* ___U3CBufferU3Ek__BackingField_1;
	int32_t ___U3COffsetU3Ek__BackingField_2;
	int32_t ___U3CLengthU3Ek__BackingField_3;
};

// Microsoft.Extensions.Primitives.StringValues
struct StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 
{
public:
	// System.Object Microsoft.Extensions.Primitives.StringValues::_values
	RuntimeObject * ____values_1;

public:
	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8, ____values_1)); }
	inline RuntimeObject * get__values_1() const { return ____values_1; }
	inline RuntimeObject ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(RuntimeObject * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}
};

struct StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Empty
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_StaticFields, ___Empty_0)); }
	inline StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  get_Empty_0() const { return ___Empty_0; }
	inline StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->____values_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringValues
struct StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_pinvoke
{
	Il2CppIUnknown* ____values_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringValues
struct StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_com
{
	Il2CppIUnknown* ____values_1;
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


// Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 
{
public:
	// System.String Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::buffer
	String_t* ___buffer_0;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::offset
	int32_t ___offset_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485, ___buffer_0)); }
	inline String_t* get_buffer_0() const { return ___buffer_0; }
	inline String_t** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(String_t* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};


// Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 
{
public:
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0::offset
	int32_t ___offset_0;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};


// Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F 
{
public:
	// System.String[] Microsoft.Extensions.Primitives.StringValues/Enumerator::_values
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____values_0;
	// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::_current
	String_t* ____current_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringValues/Enumerator::_index
	int32_t ____index_2;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F, ____values_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__values_0() const { return ____values_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F, ____current_1)); }
	inline String_t* get__current_1() const { return ____current_1; }
	inline String_t** get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(String_t* value)
	{
		____current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_1), (void*)value);
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_pinvoke
{
	char** ____values_0;
	char* ____current_1;
	int32_t ____index_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_com
{
	Il2CppChar** ____values_0;
	Il2CppChar* ____current_1;
	int32_t ____index_2;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC, ____pinnable_0)); }
	inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC, ____length_2)); }
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


// Microsoft.Extensions.Primitives.CancellationChangeToken
struct CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::<ActiveChangeCallbacks>k__BackingField
	bool ___U3CActiveChangeCallbacksU3Ek__BackingField_0;
	// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::<Token>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CTokenU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CActiveChangeCallbacksU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F, ___U3CActiveChangeCallbacksU3Ek__BackingField_0)); }
	inline bool get_U3CActiveChangeCallbacksU3Ek__BackingField_0() const { return ___U3CActiveChangeCallbacksU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CActiveChangeCallbacksU3Ek__BackingField_0() { return &___U3CActiveChangeCallbacksU3Ek__BackingField_0; }
	inline void set_U3CActiveChangeCallbacksU3Ek__BackingField_0(bool value)
	{
		___U3CActiveChangeCallbacksU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F, ___U3CTokenU3Ek__BackingField_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CTokenU3Ek__BackingField_1() const { return ___U3CTokenU3Ek__BackingField_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CTokenU3Ek__BackingField_1() { return &___U3CTokenU3Ek__BackingField_1; }
	inline void set_U3CTokenU3Ek__BackingField_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CTokenU3Ek__BackingField_1))->___m_source_0), (void*)NULL);
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

// Microsoft.Extensions.Primitives.ExceptionArgument
struct ExceptionArgument_t01CA92509CB890BEBE891C316BA88CDA5B64A0C3 
{
public:
	// System.Int32 Microsoft.Extensions.Primitives.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t01CA92509CB890BEBE891C316BA88CDA5B64A0C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.Extensions.Primitives.ExceptionResource
struct ExceptionResource_tBB62068E7400475EDD43191A3E69BE9939FCC28D 
{
public:
	// System.Int32 Microsoft.Extensions.Primitives.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_tBB62068E7400475EDD43191A3E69BE9939FCC28D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MemoryExtensions
struct MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD  : public RuntimeObject
{
public:

public:
};

struct MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields
{
public:
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;

public:
	inline static int32_t get_offset_of_StringAdjustment_0() { return static_cast<int32_t>(offsetof(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields, ___StringAdjustment_0)); }
	inline intptr_t get_StringAdjustment_0() const { return ___StringAdjustment_0; }
	inline intptr_t* get_address_of_StringAdjustment_0() { return &___StringAdjustment_0; }
	inline void set_StringAdjustment_0(intptr_t value)
	{
		___StringAdjustment_0 = value;
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


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 
{
public:
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer::_value
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ____value_0;
	// System.Char[] Microsoft.Extensions.Primitives.StringTokenizer::_separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____separators_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91, ____value_0)); }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  get__value_0() const { return ____value_0; }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of__separators_1() { return static_cast<int32_t>(offsetof(StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91, ____separators_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__separators_1() const { return ____separators_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__separators_1() { return &____separators_1; }
	inline void set__separators_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____separators_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____separators_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_pinvoke
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke ____value_0;
	uint8_t* ____separators_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_com
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com ____value_0;
	uint8_t* ____separators_1;
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


// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t11A993F323C32086EF190147308253E8B92B695D 
{
public:
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_value
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ____value_0;
	// System.Char[] Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____separators_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_index
	int32_t ____index_2;
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::<Current>k__BackingField
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___U3CCurrentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(Enumerator_t11A993F323C32086EF190147308253E8B92B695D, ____value_0)); }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  get__value_0() const { return ____value_0; }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of__separators_1() { return static_cast<int32_t>(offsetof(Enumerator_t11A993F323C32086EF190147308253E8B92B695D, ____separators_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__separators_1() const { return ____separators_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__separators_1() { return &____separators_1; }
	inline void set__separators_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____separators_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____separators_1), (void*)value);
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t11A993F323C32086EF190147308253E8B92B695D, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Enumerator_t11A993F323C32086EF190147308253E8B92B695D, ___U3CCurrentU3Ek__BackingField_3)); }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  get_U3CCurrentU3Ek__BackingField_3() const { return ___U3CCurrentU3Ek__BackingField_3; }
	inline StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * get_address_of_U3CCurrentU3Ek__BackingField_3() { return &___U3CCurrentU3Ek__BackingField_3; }
	inline void set_U3CCurrentU3Ek__BackingField_3(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  value)
	{
		___U3CCurrentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentU3Ek__BackingField_3))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_pinvoke
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke ____value_0;
	uint8_t* ____separators_1;
	int32_t ____index_2;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke ___U3CCurrentU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_com
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com ____value_0;
	uint8_t* ____separators_1;
	int32_t ____index_2;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com ___U3CCurrentU3Ek__BackingField_3;
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


// Microsoft.Extensions.Primitives.StringSegmentComparer
struct StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835  : public RuntimeObject
{
public:
	// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::<Comparison>k__BackingField
	int32_t ___U3CComparisonU3Ek__BackingField_2;
	// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<Comparer>k__BackingField
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___U3CComparerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CComparisonU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835, ___U3CComparisonU3Ek__BackingField_2)); }
	inline int32_t get_U3CComparisonU3Ek__BackingField_2() const { return ___U3CComparisonU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CComparisonU3Ek__BackingField_2() { return &___U3CComparisonU3Ek__BackingField_2; }
	inline void set_U3CComparisonU3Ek__BackingField_2(int32_t value)
	{
		___U3CComparisonU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CComparerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835, ___U3CComparerU3Ek__BackingField_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_U3CComparerU3Ek__BackingField_3() const { return ___U3CComparerU3Ek__BackingField_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_U3CComparerU3Ek__BackingField_3() { return &___U3CComparerU3Ek__BackingField_3; }
	inline void set_U3CComparerU3Ek__BackingField_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___U3CComparerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComparerU3Ek__BackingField_3), (void*)value);
	}
};

struct StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields
{
public:
	// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<Ordinal>k__BackingField
	StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * ___U3COrdinalU3Ek__BackingField_0;
	// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<OrdinalIgnoreCase>k__BackingField
	StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * ___U3COrdinalIgnoreCaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COrdinalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields, ___U3COrdinalU3Ek__BackingField_0)); }
	inline StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * get_U3COrdinalU3Ek__BackingField_0() const { return ___U3COrdinalU3Ek__BackingField_0; }
	inline StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 ** get_address_of_U3COrdinalU3Ek__BackingField_0() { return &___U3COrdinalU3Ek__BackingField_0; }
	inline void set_U3COrdinalU3Ek__BackingField_0(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * value)
	{
		___U3COrdinalU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrdinalU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrdinalIgnoreCaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields, ___U3COrdinalIgnoreCaseU3Ek__BackingField_1)); }
	inline StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * get_U3COrdinalIgnoreCaseU3Ek__BackingField_1() const { return ___U3COrdinalIgnoreCaseU3Ek__BackingField_1; }
	inline StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 ** get_address_of_U3COrdinalIgnoreCaseU3Ek__BackingField_1() { return &___U3COrdinalIgnoreCaseU3Ek__BackingField_1; }
	inline void set_U3COrdinalIgnoreCaseU3Ek__BackingField_1(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * value)
	{
		___U3COrdinalIgnoreCaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrdinalIgnoreCaseU3Ek__BackingField_1), (void*)value);
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


// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>
struct Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
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

IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_back(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled);
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_cleanup(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled);
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_back(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled);
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_cleanup(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled);

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Object>::.ctor(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action`1<TState>,TState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeTokenRegistration_1__ctor_m62B03FDDA6FE849D6D877C14469510C3F923CCCE_gshared (ChangeTokenRegistration_1_tA9B4A0AD847284B6E20196DB80107747CFA2DD74 * __this, Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * ___changeTokenProducer0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___changeTokenConsumer1, RuntimeObject * ___state2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationChangeToken_get_Token_m393873BEF52E0440D0533F68DA1A5A15AA195251_inline (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecutionContext_IsFlowSuppressed_mC96DC48000719962BA8C51636A3655BC2DB99448 (const RuntimeMethod* method);
// System.Threading.AsyncFlowControl System.Threading.ExecutionContext::SuppressFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A  ExecutionContext_SuppressFlow_m5B0D28AC590EA1BE1BB9927DB60C5B06C5AC3F42 (const RuntimeMethod* method);
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::set_ActiveChangeCallbacks(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m9F196EACE6EDABED317906D2FEF2A2053FC93C28_inline (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.ExecutionContext::RestoreFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RestoreFlow_m83C7A6FF8F46884F6A38C023F31A4348FF93252B (const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Action>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>::.ctor(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action`1<TState>,TState)
inline void ChangeTokenRegistration_1__ctor_mF7E786F5B082A2415099E1F0063D4F0F26BBA51C (ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022 * __this, Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * ___changeTokenProducer0, Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ___changeTokenConsumer1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___state2, const RuntimeMethod* method)
{
	((  void (*) (ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022 *, Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 *, Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))ChangeTokenRegistration_1__ctor_m62B03FDDA6FE849D6D877C14469510C3F923CCCE_gshared)(__this, ___changeTokenProducer0, ___changeTokenConsumer1, ___state2, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::get_ChangeTokens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::EnsureCallbacksInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_EnsureCallbacksInitialized_mB225476692711E3489C8484F78EB89468A23F6F0 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::OnChange(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931 (RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.IDisposable>::.ctor()
inline void List_1__ctor_mB1B5ECF5C66E13F31308FFDDFB25B0EC88A31D90 (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.IDisposable>::Add(!0)
inline void List_1_Add_mBD6A02C07A69C0BD22E98B4E68CE94179409D56D (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.IDisposable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m8738602691CC09398995F83CC18D2C587A8C7725_inline (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.IDisposable>::get_Count()
inline int32_t List_1_get_Count_m5E714C04486B8B44A739A455DA0665EFBC0354EA_inline (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17 (StringBuilder_t * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mF049F7E1956554FB36DA6671F55BE2CAA4937CC5 (int64_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::get_CombinedHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int64_t ___seed0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Collections.IEnumerable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m84322705C85CE555BC5928F06D7D26A41440732B_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject* ___e0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder__ctor_m42ECF72A1C422E0E0384376C75A8860E3AFB8E89 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.InplaceStringBuilder::get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_m22EDDA3467485C37C5A45212BF43F05C53CA88AD (int32_t ___resource0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_set_Capacity_mA48E6F15D3807EE2DAC01674CDE3A0F0FD308F61 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3 (int32_t ___argument0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m1A2D07859E5304853EE9BEB4D64405B0EAE07F6A (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m2F680F80F3F0D0BDDF0EE5A43811C21634BD4F2E (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::EnsureValueIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::ThrowValidationError(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715_inline (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790 (int32_t ___resource0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, Il2CppChar ___c0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.InplaceStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InplaceStringBuilder_ToString_m4CE2B1E76CFFC8827BFD3963434AAA860CB8A9CE (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5 (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mF5A28940C8B1A591DF22EFE1FA570D14186BD24B (const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_mA55F5811052D7A80D14553FD4256EFFADBBFCEC6 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___buffer0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1 (String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Char Microsoft.Extensions.Primitives.StringSegment::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringSegment_get_Item_mDCFF065065144635675DA8E885F4B8A0920A8C2C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  MemoryExtensions_AsSpan_m24B0025638F2D2A4623EA63240B92E350C933ECA_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  StringSegment_AsSpan_m11C51812880FEADEE6D05DFECD42BB1B5831442F (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<System.Char> System.MemoryExtensions::AsMemory(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  MemoryExtensions_AsMemory_mF3E25FF8205274E89E371D0997D88E23B31D42AB (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  StringSegment_AsMemory_m84BD1ACE1E09F8328BD008EB84B238CA3CAFCAD4 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m235536D851DC456E92886872EB685E9746CD8842 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m66FF03C7252C9206A0F660051E9366894ECCDB95 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mC7B55B56D01E6351E2275D60DC728E4C87C753AF (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m0644E8867443A04ACFC017A4554812A818472607_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::StartsWith(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m6B58E183DC94EF3E7BA584FCDC7C96F66B8A3906_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::EndsWith(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_m036E97C87D03ABF069853765786BF725345950A3_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mA4B492192FD2898606714E68C951A04E4ACF67AD (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m9C71FF839433A401A2E85BA61E0EEA3DE4F0AB1B (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m3A61B8C27BBED464066C9C13CB540150FEC99A3B (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_mCB39071BE36A07D3E15420D4E056CA1EB446455E (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_mDEEBBB4B14196D68B00CE81865E4ED93BDF80B46 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m2F49F72E433E32FE4021432592B19EA58B5A28A0 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m55A42C1176DFABDDD8DB6B6C0C263665ADE5CE58 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m762190E0CD0971B16BACB77E96E1EB8A2B5E96AE (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m4603225C20FD6F909F10825F14C3A927AD444575 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_LastIndexOf_mAD5FAFBE3274843E57FABA6EB50DCFC632C52A6C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimStart_m27EC034BBD08548F25AFCC6CF758D9BA8C54F060 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimEnd_mCD3F3C0DF82AEB487D56E7627937FA5858CE9743 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Trim_m004541B10022CFF9D3371F610BBD8EF3587B0D4D (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(Microsoft.Extensions.Primitives.StringSegment,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_mE62D46B0FF73E1B8F89C754A2635E569778FD52F (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringTokenizer Microsoft.Extensions.Primitives.StringSegment::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91  StringSegment_Split_m8FC41519956DA97F1773AA37947FBF7E21664CBE (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_ToString_m01F9CA738719EB83A6C6B00D1666EC544EAE674B (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method);
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|52_0(Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mDEE54CBEDA4D3C00BBAF65B5C89268E866B1DA50 (U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 * p0, const RuntimeMethod* method);
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|53_0(System.Boolean,Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_mC0E9458A5650232257187381E6EF6110A4451DB8 (bool ___hasValue0, U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 * p1, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_op_Implicit_m863FA071EC928516295AB200210C7F256B19A0AA (String_t* ___value0, const RuntimeMethod* method);
// System.ArgumentNullException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ThrowHelper_GetArgumentNullException_mC4069E45DB498ED3B06D28C6D385638985FE7744 (int32_t ___argument0, const RuntimeMethod* method);
// System.ArgumentOutOfRangeException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7 (int32_t ___argument0, const RuntimeMethod* method);
// System.ArgumentException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * ThrowHelper_GetArgumentException_m452EC2E7D69913927C14EF750E0861E6B9CEC6F5 (int32_t ___resource0, const RuntimeMethod* method);
// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparison()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m0268247C65F70E2191D1885614DE66DB9931D5A7_inline (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_Compare_m3921172A0B904E17F588F7991C827C57A5520E5C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___a0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mC939F7A8C805ADCD1527EAD330653B5900FB14FD (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___a0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringSegmentComparer_get_Comparer_m83330148D1741B4B4FB4D6B7F9F271E22EB967F7_inline (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.ctor(System.StringComparison,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__ctor_m3ADA069D91086ACB611EA1F3AD4B00586156B675 (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, int32_t ___comparison0, StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___comparer1, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(System.String,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m4EA66B543BF9FE4F5B05EC1F0B84F64A224859C7 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, String_t* ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringSegment&,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8342BDF9AC5F02C13DF5C64DC2857EF8BAFDEE2A (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator Microsoft.Extensions.Primitives.StringTokenizer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t11A993F323C32086EF190147308253E8B92B695D  StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment> Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.Generic.IEnumerable<Microsoft.Extensions.Primitives.StringSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_mF355925C144F1000298BD0CC9A556931C24633D4 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m5EF4EB0E1933C109BD76F820AFFA93AD7235D81E (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::GetStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.String[] Microsoft.Extensions.Primitives.StringValues::GetArrayValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.String[]>(System.Object)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline)(___o0, method);
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m08A3D778C046D097949764EFD1DBB9A644850050 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m4098FA9FB4508CEE5A531CB9A13B737E668F6FB6 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::OutOfBounds()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_OutOfBounds_m3EFA983F3EF5246EB95D343AFD1BAF794803EE69 (const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.String Microsoft.Extensions.Primitives.StringValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_ToString_mE4B04883C9C96A54052C3D8C12E928DD96CB2699 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetStringValueFromArray|19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m3306DAF300F11D39000E8F1CA15F43EB3BE66A66 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String[] Microsoft.Extensions.Primitives.StringValues::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_ToArray_m0EC3D7DDA066A8B8C568F2DC30A182C3235E11FF (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.String>(System.Object)
inline String_t* Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline)(___o0, method);
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m03650AA56AE48654CE64113440DE983E152CB2FA (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_mF0AF9B3F5EF62A55B418D46173A00B2C811C598F (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_m2B9E563A3ED4138BA45841DE4732340ECD1C6169 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringValues/Enumerator Microsoft.Extensions.Primitives.StringValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m758DFCF4AB76573BC327DC1314B3243E37739DA9 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_mDD3A1E3D3AFA3DC0B7A1A310E1306332DCDF7838 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mAC9B35277F8B7AEE98B2522E2A0228C861CE5F03 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___other0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m673E69E1A060577C3F1BD56D98E834EE75901050 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___other0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m923AF0A2E2BC523596320FC4E16839A3026E6C04 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___other0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m42F7BEFC275A972448E35195B28A5B6D1125125A (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, String_t* ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m24DFA7263F6C3759F3A2F337F4100B5D699BE20A (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___right1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Extensions.Primitives.StringValues::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_GetHashCode_m3735B0B2AE4CE6E6DE39CDEA3B5967CAED20CDB4 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetJoinedStringValueFromArray|19_1(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mDEB3DC11794BB5A3118F6304F36F5DCCCDF8F83E (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentName(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292 (int32_t ___argument0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceText(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1 (int32_t ___resource0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceName(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceName_m369C3541D199AD4A70F2434F255632D10049B4C1 (int32_t ___resource0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__ctor_m38C419E2FEEDB6249792ED0B57F96583247FDBAF (NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m978AE7E1600FF5F57E6CF4CC60CF53C96DB30333 (U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::set_Current(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringTokenizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2D78345773D57FD110600BF4F5D657C474B32722 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * ___tokenizer0, const RuntimeMethod* method);
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54_inline (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_mDB84CEDAD186B9642BD3EA277672EA8787FF8884 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m915D7206B21C50EFA07B169976F0501AA26BF3CA (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0E615047A082578A8DE5CCA4B3C9AC83589E6BC (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m24FF73D10B8F371E76918E9E00DDFB590412CE20 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3F6A9E565D4CF1DE903E6B1B2990354915D7A15C (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * ___values0, const RuntimeMethod* method);
// System.Boolean Microsoft.Extensions.Primitives.StringValues/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCC9829C1BA2715337A127BB18CA820DEA649B092 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method);
// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_m5DFA0840E95FC2C28F760A45E453017DA87F3334_inline (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method);
// System.Object Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m5DE0046C1572E855C211D5BD41B9284BCBE34BA4_inline (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method);
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCEDECBFCC716BED8C44DE824988FB4253BA7C1B1 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5 (int32_t ___argument0, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline)(___o0, method);
}
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
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
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationChangeToken__ctor_m25EA378D3BCDA8D9658BF146AFC6C7A22DC06A7A (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	{
		__this->set_U3CActiveChangeCallbacksU3Ek__BackingField_0((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___cancellationToken0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::get_ActiveChangeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationChangeToken_get_ActiveChangeCallbacks_m337C4E22101EE538A6A5B9CE3EF03393FE5DC4AF (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveChangeCallbacksU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::set_ActiveChangeCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m9F196EACE6EDABED317906D2FEF2A2053FC93C28 (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CActiveChangeCallbacksU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::get_HasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationChangeToken_get_HasChanged_m5F884FAB1486CB357B71B8D8C024DFE880BDACF8 (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0;
		L_0 = CancellationChangeToken_get_Token_m393873BEF52E0440D0533F68DA1A5A15AA195251_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationChangeToken_get_Token_m393873BEF52E0440D0533F68DA1A5A15AA195251 (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_U3CTokenU3Ek__BackingField_1();
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Primitives.CancellationChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CancellationChangeToken_RegisterChangeCallback_m127AB7BD063A760976181268A08CE071D30E7B5B (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ExecutionContext_IsFlowSuppressed_mC96DC48000719962BA8C51636A3655BC2DB99448(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		AsyncFlowControl_tAF472D51DFAF60049C66C074F808F794F7E7D03A  L_1;
		L_1 = ExecutionContext_SuppressFlow_m5B0D28AC590EA1BE1BB9927DB60C5B06C5AC3F42(/*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0011:
	{
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2;
			L_2 = CancellationChangeToken_get_Token_m393873BEF52E0440D0533F68DA1A5A15AA195251_inline(__this, /*hidden argument*/NULL);
			V_1 = L_2;
			Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___callback0;
			RuntimeObject * L_4 = ___state1;
			CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_5;
			L_5 = CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_1), L_3, L_4, /*hidden argument*/NULL);
			CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_6 = L_5;
			RuntimeObject * L_7 = Box(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var, &L_6);
			V_2 = (RuntimeObject*)L_7;
			IL2CPP_LEAVE(0x43, FINALLY_0034);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_002a;
			}
			throw e;
		}

CATCH_002a:
		{ // begin catch(System.ObjectDisposedException)
			CancellationChangeToken_set_ActiveChangeCallbacks_m9F196EACE6EDABED317906D2FEF2A2053FC93C28_inline(__this, (bool)0, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x3D, FINALLY_0034);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_0;
			if (!L_8)
			{
				goto IL_003c;
			}
		}

IL_0037:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
			ExecutionContext_RestoreFlow_m83C7A6FF8F46884F6A38C023F31A4348FF93252B(/*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var);
		NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * L_9 = ((NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_StaticFields*)il2cpp_codegen_static_fields_for(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var))->get_Instance_0();
		return L_9;
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_2;
		return L_10;
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
// System.IDisposable Microsoft.Extensions.Primitives.ChangeToken::OnChange(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangeToken_OnChange_m3156D91835461E81218934C9B8909F566867AAA2 (Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * ___changeTokenProducer0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___changeTokenConsumer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeTokenRegistration_1__ctor_mF7E786F5B082A2415099E1F0063D4F0F26BBA51C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnChangeU3Eb__0_0_m57E2703E0CC712DF9E20381D452F18117E1FDA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * G_B6_0 = NULL;
	Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * G_B6_1 = NULL;
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * G_B5_0 = NULL;
	Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * G_B5_1 = NULL;
	{
		Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * L_0 = ___changeTokenProducer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF7B6F2693161F3E2D2D919BBDBF555A5AD41F71)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChangeToken_OnChange_m3156D91835461E81218934C9B8909F566867AAA2_RuntimeMethod_var)));
	}

IL_000e:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___changeTokenConsumer1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AE8234F3A25D04BF2F28CAD03A3E970785334E9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChangeToken_OnChange_m3156D91835461E81218934C9B8909F566867AAA2_RuntimeMethod_var)));
	}

IL_001c:
	{
		Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8 * L_4 = ___changeTokenProducer0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var);
		Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_5 = ((U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = L_4;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = L_4;
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var);
		U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * L_7 = ((U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_8 = (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *)il2cpp_codegen_object_new(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3COnChangeU3Eb__0_0_m57E2703E0CC712DF9E20381D452F18117E1FDA80_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var);
		Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_9 = L_8;
		((U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_9);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003c:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ___changeTokenConsumer1;
		ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022 * L_11 = (ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022 *)il2cpp_codegen_object_new(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_il2cpp_TypeInfo_var);
		ChangeTokenRegistration_1__ctor_mF7E786F5B082A2415099E1F0063D4F0F26BBA51C(L_11, G_B6_1, G_B6_0, L_10, /*hidden argument*/ChangeTokenRegistration_1__ctor_mF7E786F5B082A2415099E1F0063D4F0F26BBA51C_RuntimeMethod_var);
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
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::.ctor(System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken__ctor_mF219007B07F33623DDE9798C98E38E55EBD44BAB (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, RuntimeObject* ___changeTokens0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * G_B1_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set__callbackLock_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___changeTokens0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral123EAF9538507C08A07445DAE9C88F0397B65DB2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompositeChangeToken__ctor_mF219007B07F33623DDE9798C98E38E55EBD44BAB_RuntimeMethod_var)));
	}

IL_0022:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CChangeTokensU3Ek__BackingField_5(G_B2_0);
		V_0 = 0;
		goto IL_004a;
	}

IL_002b:
	{
		RuntimeObject* L_4;
		L_4 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_ActiveChangeCallbacks() */, IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_U3CActiveChangeCallbacksU3Ek__BackingField_6((bool)1);
		return;
	}

IL_0046:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_9 = V_0;
		RuntimeObject* L_10;
		L_10 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::get_ChangeTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CChangeTokensU3Ek__BackingField_5();
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Primitives.CompositeChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_RegisterChangeCallback_m0BD07593E2175C1E0B03684CD1712D93F50EA1E2 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CompositeChangeToken_EnsureCallbacksInitialized_mB225476692711E3489C8484F78EB89468A23F6F0(__this, /*hidden argument*/NULL);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = __this->get__cancellationTokenSource_2();
		NullCheck(L_0);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1;
		L_1 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = ___callback0;
		RuntimeObject * L_3 = ___state1;
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_4;
		L_4 = CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_0), L_2, L_3, /*hidden argument*/NULL);
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_5 = L_4;
		RuntimeObject * L_6 = Box(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject*)L_6;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::get_HasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeChangeToken_get_HasChanged_m966C97A80E55705A3693EB88B425A39464C776D3 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = __this->get__cancellationTokenSource_2();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_1 = __this->get__cancellationTokenSource_2();
		NullCheck(L_1);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2;
		L_2 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0023:
	{
		RuntimeObject* L_4;
		L_4 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_HasChanged() */, IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
		CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::get_ActiveChangeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeChangeToken_get_ActiveChangeCallbacks_mC47081AC9332C2EBF0FB3591A129435604B960B1 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveChangeCallbacksU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::EnsureCallbacksInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_EnsureCallbacksInitialized_mB225476692711E3489C8484F78EB89468A23F6F0 (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBD6A02C07A69C0BD22E98B4E68CE94179409D56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB1B5ECF5C66E13F31308FFDDFB25B0EC88A31D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		bool L_0 = __this->get__registeredCallbackProxy_3();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject * L_1 = __this->get__callbackLock_1();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_3 = __this->get__registeredCallbackProxy_3();
			if (!L_3)
			{
				goto IL_0024;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_0090);
		}

IL_0024:
		{
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_4 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
			CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_4, /*hidden argument*/NULL);
			__this->set__cancellationTokenSource_2(L_4);
			List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * L_5 = (List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF *)il2cpp_codegen_object_new(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF_il2cpp_TypeInfo_var);
			List_1__ctor_mB1B5ECF5C66E13F31308FFDDFB25B0EC88A31D90(L_5, /*hidden argument*/List_1__ctor_mB1B5ECF5C66E13F31308FFDDFB25B0EC88A31D90_RuntimeMethod_var);
			__this->set__disposables_4(L_5);
			V_2 = 0;
			goto IL_0079;
		}

IL_003e:
		{
			RuntimeObject* L_6;
			L_6 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
			int32_t L_7 = V_2;
			NullCheck(L_6);
			RuntimeObject* L_8;
			L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var, L_6, L_7);
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_ActiveChangeCallbacks() */, IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var, L_8);
			if (!L_9)
			{
				goto IL_0075;
			}
		}

IL_0051:
		{
			RuntimeObject* L_10;
			L_10 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
			int32_t L_11 = V_2;
			NullCheck(L_10);
			RuntimeObject* L_12;
			L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_tAEA2B7C8FE5A04D54F4EB11E0E3C98D2EE4538BC_il2cpp_TypeInfo_var, L_10, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
			Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_13 = ((CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_StaticFields*)il2cpp_codegen_static_fields_for(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var))->get__onChangeDelegate_0();
			NullCheck(L_12);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker2< RuntimeObject*, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject * >::Invoke(2 /* System.IDisposable Microsoft.Extensions.Primitives.IChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object) */, IChangeToken_t8B63B395A3A61E0D29D187E23D8176ED95A3763D_il2cpp_TypeInfo_var, L_12, L_13, __this);
			V_3 = L_14;
			List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * L_15 = __this->get__disposables_4();
			RuntimeObject* L_16 = V_3;
			NullCheck(L_15);
			List_1_Add_mBD6A02C07A69C0BD22E98B4E68CE94179409D56D(L_15, L_16, /*hidden argument*/List_1_Add_mBD6A02C07A69C0BD22E98B4E68CE94179409D56D_RuntimeMethod_var);
		}

IL_0075:
		{
			int32_t L_17 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_0079:
		{
			int32_t L_18 = V_2;
			RuntimeObject* L_19;
			L_19 = CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			int32_t L_20;
			L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_tCC933D55B0ACC70199B50F396AE65E9BC07749BC_il2cpp_TypeInfo_var, L_19);
			if ((((int32_t)L_18) < ((int32_t)L_20)))
			{
				goto IL_003e;
			}
		}

IL_0087:
		{
			__this->set__registeredCallbackProxy_3((bool)1);
			IL2CPP_LEAVE(0x9A, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_1;
			if (!L_21)
			{
				goto IL_0099;
			}
		}

IL_0093:
		{
			RuntimeObject * L_22 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(144)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
	}

IL_009a:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::OnChange(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931 (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E714C04486B8B44A739A455DA0665EFBC0354EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8738602691CC09398995F83CC18D2C587A8C7725_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * V_0 = NULL;
	List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 *)CastclassClass((RuntimeObject*)L_0, CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var));
		CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * L_1 = V_0;
		NullCheck(L_1);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_2 = L_1->get__cancellationTokenSource_2();
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get__callbackLock_1();
		V_2 = L_4;
		V_3 = (bool)0;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_5 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_5, (bool*)(&V_3), /*hidden argument*/NULL);
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * L_6 = V_0;
			NullCheck(L_6);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_7 = L_6->get__cancellationTokenSource_2();
			NullCheck(L_7);
			CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(L_7, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x3B, FINALLY_0031);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_002e;
			}
			throw e;
		}

CATCH_002e:
		{ // begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x3B, FINALLY_0031);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			RuntimeObject * L_9 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
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
		CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * L_10 = V_0;
		NullCheck(L_10);
		List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * L_11 = L_10->get__disposables_4();
		V_1 = L_11;
		V_4 = 0;
		goto IL_005a;
	}

IL_0047:
	{
		List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = List_1_get_Item_m8738602691CC09398995F83CC18D2C587A8C7725_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m8738602691CC09398995F83CC18D2C587A8C7725_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m5E714C04486B8B44A739A455DA0665EFBC0354EA_inline(L_17, /*hidden argument*/List_1_get_Count_m5E714C04486B8B44A739A455DA0665EFBC0354EA_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0047;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken__cctor_m8E69B862D90F8177E878616B198F4B9A1E8F6F8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, NULL, (intptr_t)((intptr_t)CompositeChangeToken_OnChange_m178F7B4016C7B069497A463DDCFBB632B1686931_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_StaticFields*)il2cpp_codegen_static_fields_for(CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756_il2cpp_TypeInfo_var))->set__onChangeDelegate_0(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m73DB9913C4B762EF80AE48CF4E9015DA92F03712 (EmbeddedAttribute_t8DBD21FAEE7B6AAC2F91BB7D37BF804E74999EEE * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Microsoft.Extensions.Primitives.Extensions::Append(System.Text.StringBuilder,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * Extensions_Append_m42B0EFDDA8AA643FB5840690660F642544ADB3DF (StringBuilder_t * ___builder0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment1, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = ___builder0;
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment1), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment1), /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::get_CombinedHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_address_of__combinedHash64_0();
		int32_t L_1;
		L_1 = Int64_GetHashCode_mF049F7E1956554FB36DA6671F55BE2CAA4937CC5((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45 (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int64_t ___seed0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___seed0;
		__this->set__combinedHash64_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45_AdjustorThunk (RuntimeObject * __this, int64_t ___seed0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45_inline(_thisAdjusted, ___seed0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m84322705C85CE555BC5928F06D7D26A41440732B (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___e0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___e0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			RuntimeObject * L_5 = V_2;
			HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_5, /*hidden argument*/NULL);
			int32_t L_6 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_0028:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0016;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_3;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m84322705C85CE555BC5928F06D7D26A41440732B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	HashCodeCombiner_Add_m84322705C85CE555BC5928F06D7D26A41440732B_inline(_thisAdjusted, ___e0, method);
}
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::op_Implicit(Microsoft.Extensions.Internal.HashCodeCombiner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_op_Implicit_mA46523BF471C802D0D7FBCDF9D05D94797DF4C10 (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E  ___self0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)(&___self0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639 (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__combinedHash64_0();
		int64_t L_1 = __this->get__combinedHash64_0();
		int32_t L_2 = ___i0;
		__this->set__combinedHash64_0(((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_0<<(int32_t)5)), (int64_t)L_1))^(int64_t)((int64_t)((int64_t)L_2)))));
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline(_thisAdjusted, ___i0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202 (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202_inline(_thisAdjusted, ___s0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3 (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject * L_1 = ___o0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * _thisAdjusted = reinterpret_cast<HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *>(__this + _offset);
	HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_inline(_thisAdjusted, ___o0, method);
}
// Microsoft.Extensions.Internal.HashCodeCombiner Microsoft.Extensions.Internal.HashCodeCombiner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E  HashCodeCombiner_Start_m6377BCE9F4B70681B4EBE7E74024DC6077E5633B (const RuntimeMethod* method)
{
	{
		HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45_inline((&L_0), ((int64_t)((int64_t)((int32_t)5381))), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.InplaceStringBuilder
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_pinvoke(const InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05& unmarshaled, InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_pinvoke& marshaled)
{
	marshaled.____offset_0 = unmarshaled.get__offset_0();
	marshaled.____capacity_1 = unmarshaled.get__capacity_1();
	marshaled.____value_2 = il2cpp_codegen_marshal_string(unmarshaled.get__value_2());
}
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_pinvoke_back(const InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_pinvoke& marshaled, InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05& unmarshaled)
{
	int32_t unmarshaled__offset_temp_0 = 0;
	unmarshaled__offset_temp_0 = marshaled.____offset_0;
	unmarshaled.set__offset_0(unmarshaled__offset_temp_0);
	int32_t unmarshaled__capacity_temp_1 = 0;
	unmarshaled__capacity_temp_1 = marshaled.____capacity_1;
	unmarshaled.set__capacity_1(unmarshaled__capacity_temp_1);
	unmarshaled.set__value_2(il2cpp_codegen_marshal_string_result(marshaled.____value_2));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.InplaceStringBuilder
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_pinvoke_cleanup(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____value_2);
	marshaled.____value_2 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.InplaceStringBuilder
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_com(const InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05& unmarshaled, InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_com& marshaled)
{
	marshaled.____offset_0 = unmarshaled.get__offset_0();
	marshaled.____capacity_1 = unmarshaled.get__capacity_1();
	marshaled.____value_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get__value_2());
}
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_com_back(const InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_com& marshaled, InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05& unmarshaled)
{
	int32_t unmarshaled__offset_temp_0 = 0;
	unmarshaled__offset_temp_0 = marshaled.____offset_0;
	unmarshaled.set__offset_0(unmarshaled__offset_temp_0);
	int32_t unmarshaled__capacity_temp_1 = 0;
	unmarshaled__capacity_temp_1 = marshaled.____capacity_1;
	unmarshaled.set__capacity_1(unmarshaled__capacity_temp_1);
	unmarshaled.set__value_2(il2cpp_codegen_marshal_bstring_result(marshaled.____value_2));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.InplaceStringBuilder
IL2CPP_EXTERN_C void InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshal_com_cleanup(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____value_2);
	marshaled.____value_2 = NULL;
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder__ctor_m42ECF72A1C422E0E0384376C75A8860E3AFB8E89 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 ));
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(8, /*hidden argument*/NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		__this->set__capacity_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder__ctor_m42ECF72A1C422E0E0384376C75A8860E3AFB8E89_AdjustorThunk (RuntimeObject * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder__ctor_m42ECF72A1C422E0E0384376C75A8860E3AFB8E89(_thisAdjusted, ___capacity0, method);
}
// System.Int32 Microsoft.Extensions.Primitives.InplaceStringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__capacity_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_set_Capacity_mA48E6F15D3807EE2DAC01674CDE3A0F0FD308F61 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(7, /*hidden argument*/NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->get__offset_0();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_m22EDDA3467485C37C5A45212BF43F05C53CA88AD(2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		int32_t L_2 = ___value0;
		__this->set__capacity_1(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_set_Capacity_mA48E6F15D3807EE2DAC01674CDE3A0F0FD308F61_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_set_Capacity_mA48E6F15D3807EE2DAC01674CDE3A0F0FD308F61(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m1A2D07859E5304853EE9BEB4D64405B0EAE07F6A (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(7, /*hidden argument*/NULL);
	}

IL_0009:
	{
		String_t* L_1 = ___value0;
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, L_1, 0, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_Append_m1A2D07859E5304853EE9BEB4D64405B0EAE07F6A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_Append_m1A2D07859E5304853EE9BEB4D64405B0EAE07F6A(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m2F680F80F3F0D0BDDF0EE5A43811C21634BD4F2E (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment0), /*hidden argument*/NULL);
		InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_Append_m2F680F80F3F0D0BDDF0EE5A43811C21634BD4F2E_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_Append_m2F680F80F3F0D0BDDF0EE5A43811C21634BD4F2E(_thisAdjusted, ___segment0, method);
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___offset1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))) < ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6;
		L_6 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get__offset_0();
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		String_t* L_9 = ___value0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0031:
	{
		String_t* L_12 = __this->get__value_2();
		V_1 = L_12;
		String_t* L_13 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_13);
		Il2CppChar* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar* L_15 = V_0;
		int32_t L_16;
		L_16 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_16));
	}

IL_0046:
	{
		String_t* L_17 = ___value0;
		V_3 = L_17;
		String_t* L_18 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_18);
		Il2CppChar* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar* L_20 = V_2;
		int32_t L_21;
		L_21 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_21));
	}

IL_0056:
	{
		Il2CppChar* L_22 = V_0;
		int32_t L_23 = __this->get__offset_0();
		Il2CppChar* L_24 = V_2;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___count2;
		Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715_inline((void*)(void*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))), (void*)(void*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_25), (int32_t)2)))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)2)), /*hidden argument*/NULL);
		int32_t L_27 = __this->get__offset_0();
		int32_t L_28 = ___count2;
		__this->set__offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)));
		V_3 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_inline(_thisAdjusted, ___value0, ___offset1, ___count2, method);
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get__offset_0();
		int32_t L_1;
		L_1 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4 = 1;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_3;
		int32_t L_7;
		L_7 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_8 = __this->get__offset_0();
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790(3, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		String_t* L_11 = __this->get__value_2();
		V_1 = L_11;
		String_t* L_12 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_12);
		Il2CppChar* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		Il2CppChar* L_14 = V_0;
		int32_t L_15;
		L_15 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (int32_t)L_15));
	}

IL_0053:
	{
		Il2CppChar* L_16 = V_0;
		int32_t L_17 = __this->get__offset_0();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set__offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_2;
		Il2CppChar L_20 = ___c0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_19), (int32_t)2))))) = (int16_t)L_20;
		V_1 = (String_t*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E_inline(_thisAdjusted, ___c0, method);
}
// System.String Microsoft.Extensions.Primitives.InplaceStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InplaceStringBuilder_ToString_m4CE2B1E76CFFC8827BFD3963434AAA860CB8A9CE (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get__offset_0();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4;
		L_4 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		int32_t L_8 = __this->get__offset_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790(4, L_7, /*hidden argument*/NULL);
	}

IL_0036:
	{
		String_t* L_11 = __this->get__value_2();
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* InplaceStringBuilder_ToString_m4CE2B1E76CFFC8827BFD3963434AAA860CB8A9CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = InplaceStringBuilder_ToString_m4CE2B1E76CFFC8827BFD3963434AAA860CB8A9CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::EnsureValueIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__value_2();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->get__capacity_1();
		String_t* L_2;
		L_2 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, 0, L_1, /*hidden argument*/NULL);
		__this->set__value_2(L_2);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8(_thisAdjusted, method);
}
// System.Void Microsoft.Extensions.Primitives.InplaceStringBuilder::ThrowValidationError(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6 (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(7, /*hidden argument*/NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___offset1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))) >= ((int32_t)L_5)))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		int32_t L_6;
		L_6 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get__offset_0();
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		String_t* L_11 = ___value0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_10;
		int32_t L_16;
		L_16 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_17 = __this->get__offset_0();
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790(3, L_15, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * _thisAdjusted = reinterpret_cast<InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *>(__this + _offset);
	InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6(_thisAdjusted, ___value0, ___offset1, ___count2, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mF034B72A2DEC9893177B2F8C7E01719615AC3BC1 (IsReadOnlyAttribute_tC285B7F5B476C35A7CC7CBC939E563DFCE74C105 * __this, const RuntimeMethod* method)
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
		L_4 = SR_get_ResourceManager_mF5A28940C8B1A591DF22EFE1FA570D14186BD24B(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m5211A543E8DFBA77B974418A3AC91E670349EBC9 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m205287E7290D757F7FF62D0A7241186AFBEBE7F0 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m38CEECE45BE0958602399584AFA6B4CBA5E42063 (String_t* ___resourceFormat0, RuntimeObject * ___p11, RuntimeObject * ___p22, RuntimeObject * ___p33, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD061B931225AEC37A51CFE7CCCAC6FDE150368E3 (String_t* ___resourceFormat0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m69D32F43C33E9344846800035BF49B294B8AE804 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m73434B7E41F1D6747813D9A840856C707F1393E9 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mFCFFA470AEE25669F8A3CED58F2C64D3F04EA047 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject * ___p12, RuntimeObject * ___p23, RuntimeObject * ___p34, const RuntimeMethod* method)
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
		L_0 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mE98BEC7A2D38363A2163D25F832E6164696FF4AE (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
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
		L_1 = SR_UsingResourceKeys_m68AAE40A8E29817B95B9DCF1E34090C00E0B1AA5(/*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mF5A28940C8B1A591DF22EFE1FA570D14186BD24B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t16D68559E45D54E021334BB8594A6F432DE13E10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t25195C6DDEC59019C46B49CC913E06FF71B89823_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_t16D68559E45D54E021334BB8594A6F432DE13E10_StaticFields*)il2cpp_codegen_static_fields_for(SR_t16D68559E45D54E021334BB8594A6F432DE13E10_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_t25195C6DDEC59019C46B49CC913E06FF71B89823_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_t16D68559E45D54E021334BB8594A6F432DE13E10_StaticFields*)il2cpp_codegen_static_fields_for(SR_t16D68559E45D54E021334BB8594A6F432DE13E10_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_Argument_InvalidOffsetLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidOffsetLength_mD32388A33FA24F8E408981174C6701970673A3BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(_stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidOffsetLengthStringSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidOffsetLengthStringSegment_m2066135F7EED55696AF0ED53CA3255ED640D7C2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(_stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_CannotChangeAfterWriteStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_CannotChangeAfterWriteStarted_mF882BA9D46CA305EF9FF095FD42CE2DD2AC853E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(_stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_NotEnough()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_NotEnough_m58985FECE12EDAAC5B7E0E44BD090F2F0FD9C7F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(_stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_NotUsedEntirely()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_NotUsedEntirely_m687202ED620470F35DE578EA728EA153E9070F58 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(_stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26, (String_t*)NULL, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CBufferU3Ek__BackingField_1());
	marshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaled.get_U3COffsetU3Ek__BackingField_2();
	marshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaled.get_U3CLengthU3Ek__BackingField_3();
}
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_back(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled)
{
	unmarshaled.set_U3CBufferU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CBufferU3Ek__BackingField_1));
	int32_t unmarshaled_U3COffsetU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3COffsetU3Ek__BackingField_temp_1 = marshaled.___U3COffsetU3Ek__BackingField_2;
	unmarshaled.set_U3COffsetU3Ek__BackingField_2(unmarshaled_U3COffsetU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_2 = marshaled.___U3CLengthU3Ek__BackingField_3;
	unmarshaled.set_U3CLengthU3Ek__BackingField_3(unmarshaled_U3CLengthU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_cleanup(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3CBufferU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled)
{
	marshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CBufferU3Ek__BackingField_1());
	marshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaled.get_U3COffsetU3Ek__BackingField_2();
	marshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaled.get_U3CLengthU3Ek__BackingField_3();
}
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_back(const StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9& unmarshaled)
{
	unmarshaled.set_U3CBufferU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CBufferU3Ek__BackingField_1));
	int32_t unmarshaled_U3COffsetU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3COffsetU3Ek__BackingField_temp_1 = marshaled.___U3COffsetU3Ek__BackingField_2;
	unmarshaled.set_U3COffsetU3Ek__BackingField_2(unmarshaled_U3COffsetU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_2 = marshaled.___U3CLengthU3Ek__BackingField_3;
	unmarshaled.set_U3CLengthU3Ek__BackingField_3(unmarshaled_U3CLengthU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_cleanup(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3CBufferU3Ek__BackingField_1 = NULL;
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_mA55F5811052D7A80D14553FD4256EFFADBBFCEC6 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___buffer0, const RuntimeMethod* method)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * G_B2_0 = NULL;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___buffer0;
		__this->set_U3CBufferU3Ek__BackingField_1(L_0);
		__this->set_U3COffsetU3Ek__BackingField_2(0);
		String_t* L_1 = ___buffer0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->set_U3CLengthU3Ek__BackingField_3(G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringSegment__ctor_mA55F5811052D7A80D14553FD4256EFFADBBFCEC6_AdjustorThunk (RuntimeObject * __this, String_t* ___buffer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment__ctor_mA55F5811052D7A80D14553FD4256EFFADBBFCEC6(_thisAdjusted, ___buffer0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___offset1;
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) <= ((uint32_t)L_3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = ___length2;
		String_t* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___offset1;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))))))
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		String_t* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_11 = ___buffer0;
		__this->set_U3CBufferU3Ek__BackingField_1(L_11);
		int32_t L_12 = ___offset1;
		__this->set_U3COffsetU3Ek__BackingField_2(L_12);
		int32_t L_13 = ___length2;
		__this->set_U3CLengthU3Ek__BackingField_3(L_13);
		return;
	}
}
IL2CPP_EXTERN_C  void StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_AdjustorThunk (RuntimeObject * __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline(_thisAdjusted, ___buffer0, ___offset1, ___length2, method);
}
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBufferU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COffsetU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378(_thisAdjusted, method);
	return _returnValue;
}
// System.Char Microsoft.Extensions.Primitives.StringSegment::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringSegment_get_Item_mDCFF065065144635675DA8E885F4B8A0920A8C2C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(6, /*hidden argument*/NULL);
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_4 = ___index0;
		NullCheck(L_2);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Il2CppChar StringSegment_get_Item_mDCFF065065144635675DA8E885F4B8A0920A8C2C_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = StringSegment_get_Item_mDCFF065065144635675DA8E885F4B8A0920A8C2C(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  StringSegment_AsSpan_m11C51812880FEADEE6D05DFECD42BB1B5831442F (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_3;
		L_3 = MemoryExtensions_AsSpan_m24B0025638F2D2A4623EA63240B92E350C933ECA_inline(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  StringSegment_AsSpan_m11C51812880FEADEE6D05DFECD42BB1B5831442F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  _returnValue;
	_returnValue = StringSegment_AsSpan_m11C51812880FEADEE6D05DFECD42BB1B5831442F(_thisAdjusted, method);
	return _returnValue;
}
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  StringSegment_AsMemory_m84BD1ACE1E09F8328BD008EB84B238CA3CAFCAD4 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  L_3;
		L_3 = MemoryExtensions_AsMemory_mF3E25FF8205274E89E371D0997D88E23B31D42AB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  StringSegment_AsMemory_m84BD1ACE1E09F8328BD008EB84B238CA3CAFCAD4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  _returnValue;
	_returnValue = StringSegment_AsMemory_m84BD1ACE1E09F8328BD008EB84B238CA3CAFCAD4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_Compare_m3921172A0B904E17F588F7991C827C57A5520E5C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___a0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___b1, int32_t ___comparisonType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___b1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___a0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___b1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___b1), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = ___comparisonType2;
		int32_t L_9;
		L_9 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11;
		L_11 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___b1), /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
	}

IL_004b:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m66FF03C7252C9206A0F660051E9366894ECCDB95 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_0;
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
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((*(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)UnBox(L_2, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var))));
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_3 = V_0;
		bool L_4;
		L_4 = StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m66FF03C7252C9206A0F660051E9366894ECCDB95_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m66FF03C7252C9206A0F660051E9366894ECCDB95(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___other0;
		bool L_1;
		L_1 = StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, 4, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___other0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		String_t* L_2;
		L_2 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___other0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___other0), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___other0), /*hidden argument*/NULL);
		int32_t L_7 = ___comparisonType1;
		int32_t L_8;
		L_8 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___other0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA(_thisAdjusted, ___other0, ___comparisonType1, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mC939F7A8C805ADCD1527EAD330653B5900FB14FD (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___a0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___b1, int32_t ___comparisonType2, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___b1;
		int32_t L_1 = ___comparisonType2;
		bool L_2;
		L_2 = StringSegment_Equals_m493F644D0D68ED3855201CDA60D0A5819E7CA8BA((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___a0), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mC7B55B56D01E6351E2275D60DC728E4C87C753AF (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, 4, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_mC7B55B56D01E6351E2275D60DC728E4C87C753AF_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_mC7B55B56D01E6351E2275D60DC728E4C87C753AF(_thisAdjusted, ___text0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_6, L_7, L_8, 0, L_9, L_10, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m0644E8867443A04ACFC017A4554812A818472607 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_GetHashCode_m0644E8867443A04ACFC017A4554812A818472607_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_GetHashCode_m0644E8867443A04ACFC017A4554812A818472607_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::op_Equality(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_op_Equality_mB05C57BC9B567DFEDBFE20771C19DB16B89D2E9D (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___left0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___right1, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___right1;
		bool L_1;
		L_1 = StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___left0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::op_Inequality(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_op_Inequality_m16602C0EA1D9E9563C4F566CB8A4B74F6D1B9445 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___left0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___right1, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___right1;
		bool L_1;
		L_1 = StringSegment_Equals_mBFF0348C59BF586CEAF650405D8B1BD8619927BA((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___left0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_op_Implicit_m863FA071EC928516295AB200210C7F256B19A0AA (String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringSegment__ctor_mA55F5811052D7A80D14553FD4256EFFADBBFCEC6((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::op_Implicit(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  StringSegment_op_Implicit_mA1B4BB88EC75B302419C35AE5EBF5C16B21077C8 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment0, const RuntimeMethod* method)
{
	{
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_0;
		L_0 = StringSegment_AsSpan_m11C51812880FEADEE6D05DFECD42BB1B5831442F((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::op_Implicit(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  StringSegment_op_Implicit_m1429A42BC22D4286A9028BB07DA9C6C4B45D942D (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___segment0, const RuntimeMethod* method)
{
	{
		ReadOnlyMemory_1_tB88FB6BB9D72ED12E0F5DDE2DC713663BB9798DD  L_0;
		L_0 = StringSegment_AsMemory_m84BD1ACE1E09F8328BD008EB84B238CA3CAFCAD4((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___segment0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m6B58E183DC94EF3E7BA584FCDC7C96F66B8A3906 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_1;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_6, L_7, L_8, 0, L_9, L_10, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_StartsWith_m6B58E183DC94EF3E7BA584FCDC7C96F66B8A3906_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_StartsWith_m6B58E183DC94EF3E7BA584FCDC7C96F66B8A3906_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_m036E97C87D03ABF069853765786BF725345950A3 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)L_5));
		bool L_6;
		L_6 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		String_t* L_10 = ___text0;
		int32_t L_11 = V_1;
		int32_t L_12 = ___comparisonType1;
		int32_t L_13;
		L_13 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_8, L_9, L_10, 0, L_11, L_12, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_EndsWith_m036E97C87D03ABF069853765786BF725345950A3_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_EndsWith_m036E97C87D03ABF069853765786BF725345950A3_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mA4B492192FD2898606714E68C951A04E4ACF67AD (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2 = ___offset0;
		String_t* L_3;
		L_3 = StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_Substring_mA4B492192FD2898606714E68C951A04E4ACF67AD_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_Substring_mA4B492192FD2898606714E68C951A04E4ACF67AD(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8_inline(_thisAdjusted, ___offset0, ___length1, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m9C71FF839433A401A2E85BA61E0EEA3DE4F0AB1B (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2 = ___offset0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_3;
		L_3 = StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m9C71FF839433A401A2E85BA61E0EEA3DE4F0AB1B_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = StringSegment_Subsegment_m9C71FF839433A401A2E85BA61E0EEA3DE4F0AB1B(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline((&L_12), L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF(_thisAdjusted, ___offset0, ___length1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		bool L_2;
		L_2 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___start1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) > ((uint32_t)L_6))))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		Il2CppChar L_9 = ___c0;
		int32_t L_10 = V_0;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = String_IndexOf_m3A61B8C27BBED464066C9C13CB540150FEC99A3B(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_inline(_thisAdjusted, ___c0, ___start1, ___count2, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_mCB39071BE36A07D3E15420D4E056CA1EB446455E (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		int32_t L_1 = ___start1;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = ___start1;
		int32_t L_4;
		L_4 = StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_mCB39071BE36A07D3E15420D4E056CA1EB446455E_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_mCB39071BE36A07D3E15420D4E056CA1EB446455E(_thisAdjusted, ___c0, ___start1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_mDEEBBB4B14196D68B00CE81865E4ED93BDF80B46 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, 0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_mDEEBBB4B14196D68B00CE81865E4ED93BDF80B46_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_mDEEBBB4B14196D68B00CE81865E4ED93BDF80B46(_thisAdjusted, ___c0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = ___startIndex1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex1;
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_8 = ___startIndex1;
		int32_t L_9 = ___count2;
		String_t* L_10;
		L_10 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9))) <= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(5, /*hidden argument*/NULL);
	}

IL_004a:
	{
		String_t* L_12;
		L_12 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___anyOf0;
		int32_t L_14;
		L_14 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_15 = ___startIndex1;
		int32_t L_16 = ___count2;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = String_IndexOfAny_m2F49F72E433E32FE4021432592B19EA58B5A28A0(L_12, L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)), L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_inline(_thisAdjusted, ___anyOf0, ___startIndex1, ___count2, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m55A42C1176DFABDDD8DB6B6C0C263665ADE5CE58 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___anyOf0;
		int32_t L_1 = ___startIndex1;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex1;
		int32_t L_4;
		L_4 = StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_m55A42C1176DFABDDD8DB6B6C0C263665ADE5CE58_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_m55A42C1176DFABDDD8DB6B6C0C263665ADE5CE58(_thisAdjusted, ___anyOf0, ___startIndex1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m762190E0CD0971B16BACB77E96E1EB8A2B5E96AE (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___anyOf0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_0, 0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_m762190E0CD0971B16BACB77E96E1EB8A2B5E96AE_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_m762190E0CD0971B16BACB77E96E1EB8A2B5E96AE(_thisAdjusted, ___anyOf0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_LastIndexOf_mAD5FAFBE3274843E57FABA6EB50DCFC632C52A6C (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		Il2CppChar L_2 = ___value0;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_6;
		L_6 = String_LastIndexOf_m4603225C20FD6F909F10825F14C3A927AD444575(L_1, L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)1)), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
	}

IL_0039:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_LastIndexOf_mAD5FAFBE3274843E57FABA6EB50DCFC632C52A6C_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_LastIndexOf_mAD5FAFBE3274843E57FABA6EB50DCFC632C52A6C(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Trim_m004541B10022CFF9D3371F610BBD8EF3587B0D4D (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0;
		L_0 = StringSegment_TrimStart_m27EC034BBD08548F25AFCC6CF758D9BA8C54F060((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1;
		L_1 = StringSegment_TrimEnd_mCD3F3C0DF82AEB487D56E7627937FA5858CE9743((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_Trim_m004541B10022CFF9D3371F610BBD8EF3587B0D4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = StringSegment_Trim_m004541B10022CFF9D3371F610BBD8EF3587B0D4D(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimStart_m27EC034BBD08548F25AFCC6CF758D9BA8C54F060 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_3 = L_3;
		String_t* L_4 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_4);
		Il2CppChar* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar* L_6 = V_2;
		int32_t L_7;
		L_7 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7));
		goto IL_0042;
	}

IL_002c:
	{
		Il2CppChar* L_8 = V_2;
		int32_t L_9 = V_0;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))));
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002c;
		}
	}

IL_0046:
	{
		V_3 = (String_t*)NULL;
		String_t* L_16;
		L_16 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline((&L_20), L_16, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimStart_m27EC034BBD08548F25AFCC6CF758D9BA8C54F060_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = StringSegment_TrimStart_m27EC034BBD08548F25AFCC6CF758D9BA8C54F060(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimEnd_mCD3F3C0DF82AEB487D56E7627937FA5858CE9743 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)1));
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_3 = L_3;
		String_t* L_4 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_4);
		Il2CppChar* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar* L_6 = V_2;
		int32_t L_7;
		L_7 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7));
		goto IL_003f;
	}

IL_0029:
	{
		Il2CppChar* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))));
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0029;
		}
	}

IL_0043:
	{
		V_3 = (String_t*)NULL;
		String_t* L_16;
		L_16 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline((&L_20), L_16, L_17, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), (int32_t)1)), /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  StringSegment_TrimEnd_mCD3F3C0DF82AEB487D56E7627937FA5858CE9743_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = StringSegment_TrimEnd_mCD3F3C0DF82AEB487D56E7627937FA5858CE9743(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringTokenizer Microsoft.Extensions.Primitives.StringSegment::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91  StringSegment_Split_m8FC41519956DA97F1773AA37947FBF7E21664CBE (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = (*(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringTokenizer__ctor_mE62D46B0FF73E1B8F89C754A2635E569778FD52F((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91  StringSegment_Split_m8FC41519956DA97F1773AA37947FBF7E21664CBE_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91  _returnValue;
	_returnValue = StringSegment_Split_m8FC41519956DA97F1773AA37947FBF7E21664CBE(_thisAdjusted, ___chars0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::IsNullOrEmpty(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_IsNullOrEmpty_mCAE7584522C4D16960CC515772710C6B7B965075 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___value0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___value0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		V_0 = (bool)1;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.StringSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_ToString_m01F9CA738719EB83A6C6B00D1666EC544EAE674B (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_ToString_m01F9CA738719EB83A6C6B00D1666EC544EAE674B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_ToString_m01F9CA738719EB83A6C6B00D1666EC544EAE674B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1 (String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___buffer0;
		(&V_0)->set_buffer_0(L_0);
		int32_t L_1 = ___offset1;
		(&V_0)->set_offset_1(L_1);
		int32_t L_2 = ___length2;
		(&V_0)->set_length_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mDEE54CBEDA4D3C00BBAF65B5C89268E866B1DA50((U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294 (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___offset0;
		(&V_0)->set_offset_0(L_0);
		int32_t L_1 = ___length1;
		(&V_0)->set_length_1(L_1);
		bool L_2;
		L_2 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_mC0E9458A5650232257187381E6EF6110A4451DB8(L_2, (U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * _thisAdjusted = reinterpret_cast<StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *>(__this + _offset);
	StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294(_thisAdjusted, ___offset0, ___length1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__cctor_m7B4E9D1B92A0A5F9F306FA16534AD90BC0429FBA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1;
		L_1 = StringSegment_op_Implicit_m863FA071EC928516295AB200210C7F256B19A0AA(L_0, /*hidden argument*/NULL);
		((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_StaticFields*)il2cpp_codegen_static_fields_for(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var))->set_Empty_0(L_1);
		return;
	}
}
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|52_0(Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mDEE54CBEDA4D3C00BBAF65B5C89268E866B1DA50 (U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 * p0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 * L_0 = p0;
		String_t* L_1 = L_0->get_buffer_0();
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2;
		L_2 = ThrowHelper_GetArgumentNullException_mC4069E45DB498ED3B06D28C6D385638985FE7744(0, /*hidden argument*/NULL);
		return L_2;
	}

IL_000f:
	{
		U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 * L_3 = p0;
		int32_t L_4 = L_3->get_offset_1();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5;
		L_5 = ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7(1, /*hidden argument*/NULL);
		return L_5;
	}

IL_001f:
	{
		U3CU3Ec__DisplayClass52_0_t94533369A2CD052F3F1D2C760CC0BB5CA53DC485 * L_6 = p0;
		int32_t L_7 = L_6->get_length_2();
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8;
		L_8 = ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7(2, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9;
		L_9 = ThrowHelper_GetArgumentException_m452EC2E7D69913927C14EF750E0861E6B9CEC6F5(0, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|53_0(System.Boolean,Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_mC0E9458A5650232257187381E6EF6110A4451DB8 (bool ___hasValue0, U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 * p1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___hasValue0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1;
		L_1 = ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7(1, /*hidden argument*/NULL);
		return L_1;
	}

IL_000a:
	{
		U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 * L_2 = p1;
		int32_t L_3 = L_2->get_offset_0();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4;
		L_4 = ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7(1, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		U3CU3Ec__DisplayClass53_0_t4047AB0D9B89BF4FE57640167E29BD0EFC545D00 * L_5 = p1;
		int32_t L_6 = L_5->get_length_1();
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7;
		L_7 = ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7(2, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8;
		L_8 = ThrowHelper_GetArgumentException_m452EC2E7D69913927C14EF750E0861E6B9CEC6F5(1, /*hidden argument*/NULL);
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
// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Ordinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * StringSegmentComparer_get_Ordinal_mB50037852D0F335985D69944A14CADFA6F7B65AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * L_0 = ((StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var))->get_U3COrdinalU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_OrdinalIgnoreCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * StringSegmentComparer_get_OrdinalIgnoreCase_m1427C866AC36B43E41A6145EF00A932366FA0F75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * L_0 = ((StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var))->get_U3COrdinalIgnoreCaseU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.ctor(System.StringComparison,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__ctor_m3ADA069D91086ACB611EA1F3AD4B00586156B675 (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, int32_t ___comparison0, StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___comparer1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___comparison0;
		__this->set_U3CComparisonU3Ek__BackingField_2(L_0);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_1 = ___comparer1;
		__this->set_U3CComparerU3Ek__BackingField_3(L_1);
		return;
	}
}
// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparison()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m0268247C65F70E2191D1885614DE66DB9931D5A7 (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CComparisonU3Ek__BackingField_2();
		return L_0;
	}
}
// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringSegmentComparer_get_Comparer_m83330148D1741B4B4FB4D6B7F9F271E22EB967F7 (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method)
{
	{
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = __this->get_U3CComparerU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegmentComparer::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_Compare_m7AFE6556F646A93EAF6FD8AB22C13E2E03D4358D (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___x0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___x0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1 = ___y1;
		int32_t L_2;
		L_2 = StringSegmentComparer_get_Comparison_m0268247C65F70E2191D1885614DE66DB9931D5A7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = StringSegment_Compare_m3921172A0B904E17F588F7991C827C57A5520E5C(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegmentComparer::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegmentComparer_Equals_m337240C826DCA7F4A974E487EFD90835E1099C6F (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___x0, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___x0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1 = ___y1;
		int32_t L_2;
		L_2 = StringSegmentComparer_get_Comparison_m0268247C65F70E2191D1885614DE66DB9931D5A7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringSegment_Equals_mC939F7A8C805ADCD1527EAD330653B5900FB14FD(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegmentComparer::GetHashCode(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_GetHashCode_m4CD4847C4AB4CF3A3E236A073B1191101A0564E2 (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___obj0, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___obj0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_1;
		L_1 = StringSegmentComparer_get_Comparer_m83330148D1741B4B4FB4D6B7F9F271E22EB967F7_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___obj0), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.StringComparer::GetHashCode(System.String) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__cctor_mD8A1434183558E5AF350E80A28B88865A05C9041 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * L_1 = (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 *)il2cpp_codegen_object_new(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		StringSegmentComparer__ctor_m3ADA069D91086ACB611EA1F3AD4B00586156B675(L_1, 4, L_0, /*hidden argument*/NULL);
		((StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var))->set_U3COrdinalU3Ek__BackingField_0(L_1);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * L_3 = (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 *)il2cpp_codegen_object_new(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var);
		StringSegmentComparer__ctor_m3ADA069D91086ACB611EA1F3AD4B00586156B675(L_3, 5, L_2, /*hidden argument*/NULL);
		((StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835_il2cpp_TypeInfo_var))->set_U3COrdinalIgnoreCaseU3Ek__BackingField_1(L_3);
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


// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_pinvoke(const StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91& unmarshaled, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_pinvoke& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke(unmarshaled.get__value_0(), marshaled.____value_0);
	if (unmarshaled.get__separators_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__separators_Length = (unmarshaled.get__separators_1())->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.get__separators_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_pinvoke_back(const StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_pinvoke& marshaled, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled__value_temp_0;
	memset((&unmarshaled__value_temp_0), 0, sizeof(unmarshaled__value_temp_0));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_back(marshaled.____value_0, unmarshaled__value_temp_0);
	unmarshaled.set__value_0(unmarshaled__value_temp_0);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.get__separators_1() == NULL)
		{
			unmarshaled.set__separators_1(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__separators_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__separators_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_pinvoke_cleanup(StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_pinvoke& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
}


// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_com(const StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91& unmarshaled, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_com& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com(unmarshaled.get__value_0(), marshaled.____value_0);
	if (unmarshaled.get__separators_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__separators_Length = (unmarshaled.get__separators_1())->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.get__separators_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_com_back(const StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_com& marshaled, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled__value_temp_0;
	memset((&unmarshaled__value_temp_0), 0, sizeof(unmarshaled__value_temp_0));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_back(marshaled.____value_0, unmarshaled__value_temp_0);
	unmarshaled.set__value_0(unmarshaled__value_temp_0);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.get__separators_1() == NULL)
		{
			unmarshaled.set__separators_1(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__separators_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__separators_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshal_com_cleanup(StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_marshaled_com& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(System.String,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m4EA66B543BF9FE4F5B05EC1F0B84F64A224859C7 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, String_t* ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(7, /*hidden argument*/NULL);
	}

IL_0009:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___separators1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(((int32_t)9), /*hidden argument*/NULL);
	}

IL_0013:
	{
		String_t* L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_3;
		L_3 = StringSegment_op_Implicit_m863FA071EC928516295AB200210C7F256B19A0AA(L_2, /*hidden argument*/NULL);
		__this->set__value_0(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___separators1;
		__this->set__separators_1(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void StringTokenizer__ctor_m4EA66B543BF9FE4F5B05EC1F0B84F64A224859C7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * _thisAdjusted = reinterpret_cast<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *>(__this + _offset);
	StringTokenizer__ctor_m4EA66B543BF9FE4F5B05EC1F0B84F64A224859C7(_thisAdjusted, ___value0, ___separators1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(Microsoft.Extensions.Primitives.StringSegment,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_mE62D46B0FF73E1B8F89C754A2635E569778FD52F (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)(&___value0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(7, /*hidden argument*/NULL);
	}

IL_000f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___separators1;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(((int32_t)9), /*hidden argument*/NULL);
	}

IL_0019:
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_2 = ___value0;
		__this->set__value_0(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___separators1;
		__this->set__separators_1(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void StringTokenizer__ctor_mE62D46B0FF73E1B8F89C754A2635E569778FD52F_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * _thisAdjusted = reinterpret_cast<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *>(__this + _offset);
	StringTokenizer__ctor_mE62D46B0FF73E1B8F89C754A2635E569778FD52F(_thisAdjusted, ___value0, ___separators1, method);
}
// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator Microsoft.Extensions.Primitives.StringTokenizer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t11A993F323C32086EF190147308253E8B92B695D  StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_0 = __this->get_address_of__value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = __this->get__separators_1();
		Enumerator_t11A993F323C32086EF190147308253E8B92B695D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m8342BDF9AC5F02C13DF5C64DC2857EF8BAFDEE2A((&L_2), (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Enumerator_t11A993F323C32086EF190147308253E8B92B695D  StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * _thisAdjusted = reinterpret_cast<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *>(__this + _offset);
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D  _returnValue;
	_returnValue = StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment> Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.Generic.IEnumerable<Microsoft.Extensions.Primitives.StringSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_mF355925C144F1000298BD0CC9A556931C24633D4 (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t11A993F323C32086EF190147308253E8B92B695D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t11A993F323C32086EF190147308253E8B92B695D  L_0;
		L_0 = StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382((StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *)__this, /*hidden argument*/NULL);
		Enumerator_t11A993F323C32086EF190147308253E8B92B695D  L_1 = L_0;
		RuntimeObject * L_2 = Box(Enumerator_t11A993F323C32086EF190147308253E8B92B695D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_mF355925C144F1000298BD0CC9A556931C24633D4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * _thisAdjusted = reinterpret_cast<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_mF355925C144F1000298BD0CC9A556931C24633D4(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m5EF4EB0E1933C109BD76F820AFFA93AD7235D81E (StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t11A993F323C32086EF190147308253E8B92B695D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t11A993F323C32086EF190147308253E8B92B695D  L_0;
		L_0 = StringTokenizer_GetEnumerator_mA784E3D33EF989EA9A3650D1952A308CB2701382((StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *)__this, /*hidden argument*/NULL);
		Enumerator_t11A993F323C32086EF190147308253E8B92B695D  L_1 = L_0;
		RuntimeObject * L_2 = Box(Enumerator_t11A993F323C32086EF190147308253E8B92B695D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m5EF4EB0E1933C109BD76F820AFFA93AD7235D81E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * _thisAdjusted = reinterpret_cast<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m5EF4EB0E1933C109BD76F820AFFA93AD7235D81E(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_pinvoke(const StringValues_tF072065151A4080180381AF6F4548C082ACA19E8& unmarshaled, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__values_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__values_1()))
		{
			marshaled.____values_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__values_1()));
			(marshaled.____values_1)->AddRef();
		}
		else
		{
			marshaled.____values_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__values_1());
		}
	}
	else
	{
		marshaled.____values_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_pinvoke_back(const StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_pinvoke& marshaled, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____values_1 != NULL)
	{
		unmarshaled.set__values_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__values_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__values_1()), Il2CppIUnknown::IID, marshaled.____values_1);
		}
	}
	else
	{
		unmarshaled.set__values_1(NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_pinvoke_cleanup(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_pinvoke& marshaled)
{
	if (marshaled.____values_1 != NULL)
	{
		(marshaled.____values_1)->Release();
		marshaled.____values_1 = NULL;
	}
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_com(const StringValues_tF072065151A4080180381AF6F4548C082ACA19E8& unmarshaled, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_com& marshaled)
{
	if (unmarshaled.get__values_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__values_1()))
		{
			marshaled.____values_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__values_1()));
			(marshaled.____values_1)->AddRef();
		}
		else
		{
			marshaled.____values_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__values_1());
		}
	}
	else
	{
		marshaled.____values_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_com_back(const StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_com& marshaled, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____values_1 != NULL)
	{
		unmarshaled.set__values_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__values_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__values_1()), Il2CppIUnknown::IID, marshaled.____values_1);
		}
	}
	else
	{
		unmarshaled.set__values_1(NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshal_com_cleanup(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_marshaled_com& marshaled)
{
	if (marshaled.____values_1 != NULL)
	{
		(marshaled.____values_1)->Release();
		marshaled.____values_1 = NULL;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__values_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		__this->set__values_1((RuntimeObject *)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline(_thisAdjusted, ___values0, method);
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  StringValues_op_Implicit_m6739AB3DD54927FC9D595A5FC241266E45EDE1C6 (String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::op_Implicit(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  StringValues_op_Implicit_m122BF644B8DD683273765FD9F8CA0D3F09C7E6D8 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::op_Implicit(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_op_Implicit_mB1C51AA3F59BBD79C329CC03D87D0602EB30448F (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___values0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___values0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::op_Implicit(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_op_Implicit_m878B41858E2E66A567C2D7FFEF4325EF5D1A51B2 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___value0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}

IL_0011:
	{
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		RuntimeObject * L_3 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_3, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		NullCheck(L_4);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m08A3D778C046D097949764EFD1DBB9A644850050 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m08A3D778C046D097949764EFD1DBB9A644850050_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m08A3D778C046D097949764EFD1DBB9A644850050(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m4098FA9FB4508CEE5A531CB9A13B737E668F6FB6 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m4098FA9FB4508CEE5A531CB9A13B737E668F6FB6_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m4098FA9FB4508CEE5A531CB9A13B737E668F6FB6(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m2D9A03A21EBA3DBAAD706925FFD37BFDF45E6344(_thisAdjusted, ___index0, ___value1, method);
}
// System.String Microsoft.Extensions.Primitives.StringValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		RuntimeObject * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_6, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = StringValues_OutOfBounds_m3EFA983F3EF5246EB95D343AFD1BAF794803EE69(/*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::OutOfBounds()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_OutOfBounds_m3EFA983F3EF5246EB95D343AFD1BAF794803EE69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_ToString_mE4B04883C9C96A54052C3D8C12E928DD96CB2699 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_ToString_mE4B04883C9C96A54052C3D8C12E928DD96CB2699_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_ToString_mE4B04883C9C96A54052C3D8C12E928DD96CB2699(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::GetStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = V_1;
		return L_3;
	}

IL_0013:
	{
		RuntimeObject * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m3306DAF300F11D39000E8F1CA15F43EB3BE66A66(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_GetStringValue_mC09DAD90347D4D14AB092DDB92CED7848613A301(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_ToArray_m0EC3D7DDA066A8B8C568F2DC30A182C3235E11FF (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_ToArray_m0EC3D7DDA066A8B8C568F2DC30A182C3235E11FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* _returnValue;
	_returnValue = StringValues_ToArray_m0EC3D7DDA066A8B8C568F2DC30A182C3235E11FF(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::GetArrayValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_1;
		return L_3;
	}

IL_0013:
	{
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		RuntimeObject * L_7 = V_0;
		String_t* L_8;
		L_8 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_7, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		return L_6;
	}

IL_0026:
	{
		return (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* _returnValue;
	_returnValue = StringValues_GetArrayValue_m52091B78A285B042F3B877DD7095A4368B065D8C(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m03650AA56AE48654CE64113440DE983E152CB2FA (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___item0;
		int32_t L_1;
		L_1 = StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m03650AA56AE48654CE64113440DE983E152CB2FA_AdjustorThunk (RuntimeObject * __this, String_t* ___item0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m03650AA56AE48654CE64113440DE983E152CB2FA(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		V_2 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = ___item0;
		bool L_8;
		L_8 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_6, L_7, 4, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_9 = V_2;
		return L_9;
	}

IL_0023:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_11 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		RuntimeObject * L_13 = V_0;
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject * L_14 = V_0;
		String_t* L_15;
		L_15 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_14, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		String_t* L_16 = ___item0;
		bool L_17;
		L_17 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_15, L_16, 4, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
		return (-1);
	}

IL_0043:
	{
		return 0;
	}

IL_0045:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6_AdjustorThunk (RuntimeObject * __this, String_t* ___item0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_mF0AF9B3F5EF62A55B418D46173A00B2C811C598F (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___item0;
		int32_t L_1;
		L_1 = StringValues_IndexOf_m4057080EE15E676CCEB8FA5A9C98AA872D6901A6((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_mF0AF9B3F5EF62A55B418D46173A00B2C811C598F_AdjustorThunk (RuntimeObject * __this, String_t* ___item0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_mF0AF9B3F5EF62A55B418D46173A00B2C811C598F(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_m2B9E563A3ED4138BA45841DE4732340ECD1C6169 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_m2B9E563A3ED4138BA45841DE4732340ECD1C6169_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_m2B9E563A3ED4138BA45841DE4732340ECD1C6169(_thisAdjusted, ___array0, ___arrayIndex1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___array0;
		int32_t L_5 = ___arrayIndex1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_1;
		NullCheck(L_6);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		RuntimeObject * L_7 = V_0;
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___array0;
		if (L_8)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_9 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_10 = ___arrayIndex1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_11 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E_RuntimeMethod_var)));
	}

IL_003e:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___arrayIndex1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))) >= ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23AAD24B88E1254E39EC85AA38C64D9187D6D7D4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E_RuntimeMethod_var)));
	}

IL_0051:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = ___array0;
		int32_t L_16 = ___arrayIndex1;
		RuntimeObject * L_17 = V_0;
		String_t* L_18;
		L_18 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_17, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (String_t*)L_18);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E(_thisAdjusted, ___array0, ___arrayIndex1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC_AdjustorThunk (RuntimeObject * __this, String_t* ___item0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m82552EFE8B4FC13F39391C49D784E9DA364E67BC(_thisAdjusted, ___item0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_mC74EF0AC74ADCC9820D6E7A4B03B48447C6BDF3B(_thisAdjusted, ___index0, ___item1, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980_AdjustorThunk (RuntimeObject * __this, String_t* ___item0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mE6104ACAD63DC6B6EE697C49F40DC8FE8A950980(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_mBA8A2A05D0E7BD881BCC591CDD68D8A83D66C013(_thisAdjusted, ___index0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m9097CD8029C1AB06723F06BA673AA62B5411C42F(_thisAdjusted, method);
}
// Microsoft.Extensions.Primitives.StringValues/Enumerator Microsoft.Extensions.Primitives.StringValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__values_1();
		Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  _returnValue;
	_returnValue = StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m758DFCF4AB76573BC327DC1314B3243E37739DA9 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  L_0;
		L_0 = StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  L_1 = L_0;
		RuntimeObject * L_2 = Box(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m758DFCF4AB76573BC327DC1314B3243E37739DA9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m758DFCF4AB76573BC327DC1314B3243E37739DA9(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_mDD3A1E3D3AFA3DC0B7A1A310E1306332DCDF7838 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  L_0;
		L_0 = StringValues_GetEnumerator_m3257598E4F82509E4FAE12B5EB39745EB5E522B1((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F  L_1 = L_0;
		RuntimeObject * L_2 = Box(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_mDD3A1E3D3AFA3DC0B7A1A310E1306332DCDF7838_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringValues_System_Collections_IEnumerable_GetEnumerator_mDD3A1E3D3AFA3DC0B7A1A310E1306332DCDF7838(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::IsNullOrEmpty(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_IsNullOrEmpty_mDB235D25DFE0CB68F98A93F2BE220E2DE122F1D7 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___value0;
		RuntimeObject * L_1 = L_0.get__values_1();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject * L_3 = V_0;
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_1;
		NullCheck(L_5);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002e;
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		RuntimeObject * L_12 = V_0;
		String_t* L_13;
		L_13 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_12, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		bool L_14;
		L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  StringValues_Concat_mB09EA9913F14900C58EC8C2AF5B190283C20E7A3 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___values10, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___values21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___values10), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___values21), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_3 = ___values21;
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_5 = ___values10;
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		V_2 = L_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_2;
		StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___values10), L_9, 0, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_2;
		int32_t L_11 = V_0;
		StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___values21), L_10, L_11, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_2;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_13;
		memset((&L_13), 0, sizeof(L_13));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_13), L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(Microsoft.Extensions.Primitives.StringValues&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  StringValues_Concat_m93E97ED58182DEABCD45683022B281D229F32863 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * ___values0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		String_t* L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_1 = ___values0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_1);
		return L_2;
	}

IL_000a:
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_3 = ___values0;
		int32_t L_4;
		L_4 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_6 = ___value1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_7;
		memset((&L_7), 0, sizeof(L_7));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_7), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		V_1 = L_9;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_10 = ___values0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_1;
		StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_10, L_11, 0, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_1;
		int32_t L_13 = V_0;
		String_t* L_14 = ___value1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_16;
		memset((&L_16), 0, sizeof(L_16));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_16), L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(System.String,Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  StringValues_Concat_mDB8F15A787CCDFEA5340E4EA9C604D28B1E1CFED (String_t* ___value0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * ___values1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_1 = ___values1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_1);
		return L_2;
	}

IL_000a:
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_3 = ___values1;
		int32_t L_4;
		L_4 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_6 = ___value0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_7;
		memset((&L_7), 0, sizeof(L_7));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_7), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		V_1 = L_9;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_1;
		String_t* L_11 = ___value0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_12 = ___values1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_1;
		StringValues_CopyTo_mB6A317581A025F69AE0FC3AD2E76F39D570B382E((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)L_12, L_13, 1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_15;
		memset((&L_15), 0, sizeof(L_15));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_15), L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___left0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___right1), /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		int32_t L_3 = V_1;
		String_t* L_4;
		L_4 = StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___left0), L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		String_t* L_6;
		L_6 = StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___right1), L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m53A3271DC9C8FBC9035003EEB1AF4765B2359DB9 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m5734F277DFDD35F978473E2E7710D15BE44AF858 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mAC9B35277F8B7AEE98B2522E2A0228C861CE5F03 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_mAC9B35277F8B7AEE98B2522E2A0228C861CE5F03_AdjustorThunk (RuntimeObject * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_mAC9B35277F8B7AEE98B2522E2A0228C861CE5F03(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m71096A111252901B013498E894B9492D7A7C4EF2 (String_t* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m42F7BEFC275A972448E35195B28A5B6D1125125A (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, String_t* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m673E69E1A060577C3F1BD56D98E834EE75901050 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		String_t* L_1 = ___other0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_m673E69E1A060577C3F1BD56D98E834EE75901050_AdjustorThunk (RuntimeObject * __this, String_t* ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_m673E69E1A060577C3F1BD56D98E834EE75901050(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m2C7883F63B12CFB23DA512C87361819613E6CC35 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m24DFA7263F6C3759F3A2F337F4100B5D699BE20A (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m923AF0A2E2BC523596320FC4E16839A3026E6C04 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___other0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_m923AF0A2E2BC523596320FC4E16839A3026E6C04_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_m923AF0A2E2BC523596320FC4E16839A3026E6C04(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m870EA97D32E6A433FBE4E11FDFA60AA33D6FC3A6 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, String_t* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_mED9311224ACAD69DDBE1D21F51F3E94F2A45C1D5 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, String_t* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m0FF03DE03DD1FCE689C8CFFA6A91975D75BFCEDE (String_t* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m45D621DE38F3388AD050F75A7D3D5A4877EC3AD3 (String_t* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_mEFA2AE9D97A0B313E400FD23344A848F81CBD328 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m3FF5E610B9A8A2D63249D7AEDA49E36FF9497659 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_0 = ___left0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___right1;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_2), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_0, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m77F95FB832B168EE517B8E9919B06E75BC1ABCE7 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m11E473C38C238B46CB539227FED3011471323C02 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___left0;
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m03A7AAFFD817F582D38204A04E721A26B9E9CAB2 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___right1;
		bool L_1;
		L_1 = StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___left0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_mA742D25A4451337405E9978034B56393B04EA443 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___right1;
		bool L_1;
		L_1 = StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___left0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.Object,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m6809E1AE225E60F2DCD8BEFD87956E25593CC627 (RuntimeObject * ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___left0;
		bool L_1;
		L_1 = StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___right1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.Object,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m7B1B26505A3A80A8735FB39029500E47AE9D4798 (RuntimeObject * ___left0, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  ___right1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___left0;
		bool L_1;
		L_1 = StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)(&___right1), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_2 = ((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_StaticFields*)il2cpp_codegen_static_fields_for(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var))->get_Empty_0();
		bool L_3;
		L_3 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0014:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_5 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		RuntimeObject * L_6 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = StringValues_Equals_m42F7BEFC275A972448E35195B28A5B6D1125125A(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_002e:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_8, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_9 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		RuntimeObject * L_10 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = StringValues_Equals_m24DFA7263F6C3759F3A2F337F4100B5D699BE20A(L_9, ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_10, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_11;
	}

IL_0048:
	{
		RuntimeObject * L_12 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_13 = (*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this);
		RuntimeObject * L_14 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = StringValues_Equals_m64B5E9302254372540DE18654416EA1141183711(L_13, ((*(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)UnBox(L_14, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_15;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_mD1A492A9C9E0ABFF54F6A600633F819096F484DE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_GetHashCode_m3735B0B2AE4CE6E6DE39CDEA3B5967CAED20CDB4 (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_3;
		L_3 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4;
		L_4 = StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, 0, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_4, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0039;
		}
	}
	{
		int32_t L_7;
		L_7 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8;
		L_8 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_3), /*hidden argument*/NULL);
		return L_8;
	}

IL_0039:
	{
		NullCheck(G_B4_0);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B4_0);
		return L_9;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E ));
		V_4 = 0;
		goto IL_005d;
	}

IL_004c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)(&V_2), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_15 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_17;
		L_17 = HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)(&V_2), /*hidden argument*/NULL);
		return L_17;
	}

IL_006c:
	{
		RuntimeObject * L_18 = V_0;
		String_t* L_19;
		L_19 = Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_inline(L_18, /*hidden argument*/Unsafe_As_TisString_t_m414F9A797BC515F183ACCEB6F13BB4C9DC99B947_RuntimeMethod_var);
		String_t* L_20 = L_19;
		G_B10_0 = L_20;
		if (L_20)
		{
			G_B11_0 = L_20;
			goto IL_0085;
		}
	}
	{
		int32_t L_21;
		L_21 = StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *)__this, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22;
		L_22 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_3), /*hidden argument*/NULL);
		return L_22;
	}

IL_0085:
	{
		NullCheck(G_B11_0);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B11_0);
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_GetHashCode_m3735B0B2AE4CE6E6DE39CDEA3B5967CAED20CDB4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * _thisAdjusted = reinterpret_cast<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_GetHashCode_m3735B0B2AE4CE6E6DE39CDEA3B5967CAED20CDB4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__cctor_m2BE5DD800B8C4DAAB76D5B73A2EA970A3615B368 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline((&L_1), L_0, /*hidden argument*/NULL);
		((StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_StaticFields*)il2cpp_codegen_static_fields_for(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var))->set_Empty_0(L_1);
		return;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetStringValueFromArray|19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m3306DAF300F11D39000E8F1CA15F43EB3BE66A66 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_1, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		V_0 = L_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}

IL_001f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mDEB3DC11794BB5A3118F6304F36F5DCCCDF8F83E(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetJoinedStringValueFromArray|19_1(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mDEB3DC11794BB5A3118F6304F36F5DCCCDF8F83E (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		V_0 = 0;
		V_3 = 0;
		goto IL_002f;
	}

IL_0006:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		int32_t L_1 = V_3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		String_t* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11));
	}

IL_002b:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_13 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ___values0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		InplaceStringBuilder__ctor_m42ECF72A1C422E0E0384376C75A8860E3AFB8E89((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)(&V_1), L_15, /*hidden argument*/NULL);
		V_2 = (bool)0;
		V_5 = 0;
		goto IL_0075;
	}

IL_0044:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ___values0;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		String_t* L_20 = V_6;
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_21 = V_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_0064;
		}
	}
	{
		InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)(&V_1), ((int32_t)44), /*hidden argument*/NULL);
	}

IL_0064:
	{
		String_t* L_24 = V_6;
		InplaceStringBuilder_Append_m1A2D07859E5304853EE9BEB4D64405B0EAE07F6A((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)(&V_1), L_24, /*hidden argument*/NULL);
		V_2 = (bool)1;
	}

IL_006f:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0075:
	{
		int32_t L_26 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = ___values0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_28;
		L_28 = InplaceStringBuilder_ToString_m4CE2B1E76CFFC8827BFD3963434AAA860CB8A9CE((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)(&V_1), /*hidden argument*/NULL);
		return L_28;
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
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292(L_0, /*hidden argument*/NULL);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292(L_0, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m0F8DB51613F5FCEA863ADAB80CCE61F7341959FA (int32_t ___resource0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1(L_0, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_m0F8DB51613F5FCEA863ADAB80CCE61F7341959FA_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_m22EDDA3467485C37C5A45212BF43F05C53CA88AD (int32_t ___resource0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1(L_0, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_m22EDDA3467485C37C5A45212BF43F05C53CA88AD_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790 (int32_t ___resource0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		String_t* L_3;
		L_3 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790_RuntimeMethod_var)));
	}
}
// System.ArgumentNullException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ThrowHelper_GetArgumentNullException_mC4069E45DB498ED3B06D28C6D385638985FE7744 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292(L_0, /*hidden argument*/NULL);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ArgumentOutOfRangeException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * ThrowHelper_GetArgumentOutOfRangeException_mFDAA02B770C3516B06C3CD36CF248C65C5E1D4A7 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292(L_0, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ArgumentException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * ThrowHelper_GetArgumentException_m452EC2E7D69913927C14EF750E0861E6B9CEC6F5 (int32_t ___resource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1(L_0, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceText(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceText_m172B7E6783318A9E6FED134782E45CB919EC4FB1 (int32_t ___resource0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceName_m369C3541D199AD4A70F2434F255632D10049B4C1(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = SR_GetResourceString_m6262FE8295E91B129824B456D29AEDE773C433A4(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentName(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m7EE439DF0768D1D289F93B14B53C917819FB6292 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t01CA92509CB890BEBE891C316BA88CDA5B64A0C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t01CA92509CB890BEBE891C316BA88CDA5B64A0C3_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		return L_1;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceName(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceName_m369C3541D199AD4A70F2434F255632D10049B4C1 (int32_t ___resource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionResource_tBB62068E7400475EDD43191A3E69BE9939FCC28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionResource_tBB62068E7400475EDD43191A3E69BE9939FCC28D_il2cpp_TypeInfo_var, (&___resource0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___resource0 = *(int32_t*)UnBox(L_0);
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
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable_Dispose_mCA4561BBB5582511577AF9B4F6A5856A6DBD077A (NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__ctor_m38C419E2FEEDB6249792ED0B57F96583247FDBAF (NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__cctor_m099F7F20111AF85A7185BD5A179F4AB4DA7E2585 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 * L_0 = (NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16 *)il2cpp_codegen_object_new(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var);
		NullDisposable__ctor_m38C419E2FEEDB6249792ED0B57F96583247FDBAF(L_0, /*hidden argument*/NULL);
		((NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_StaticFields*)il2cpp_codegen_static_fields_for(NullDisposable_tE7F722411DEC43D931296964036D090690D3BB16_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6BD5904B421AED414CA485CDBE50860928DBF1AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * L_0 = (U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 *)il2cpp_codegen_object_new(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m978AE7E1600FF5F57E6CF4CC60CF53C96DB30333(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m978AE7E1600FF5F57E6CF4CC60CF53C96DB30333 (U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::<OnChange>b__0_0(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnChangeU3Eb__0_0_m57E2703E0CC712DF9E20381D452F18117E1FDA80 (U3CU3Ec_t04B2985BB6F11C3238318B29D72EE57296C7E3E0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___callback0;
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




// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_pinvoke(const Enumerator_t11A993F323C32086EF190147308253E8B92B695D& unmarshaled, Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_pinvoke& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke(unmarshaled.get__value_0(), marshaled.____value_0);
	if (unmarshaled.get__separators_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__separators_Length = (unmarshaled.get__separators_1())->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.get__separators_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
	marshaled.____index_2 = unmarshaled.get__index_2();
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke(unmarshaled.get_U3CCurrentU3Ek__BackingField_3(), marshaled.___U3CCurrentU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_pinvoke_back(const Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_pinvoke& marshaled, Enumerator_t11A993F323C32086EF190147308253E8B92B695D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled__value_temp_0;
	memset((&unmarshaled__value_temp_0), 0, sizeof(unmarshaled__value_temp_0));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_back(marshaled.____value_0, unmarshaled__value_temp_0);
	unmarshaled.set__value_0(unmarshaled__value_temp_0);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.get__separators_1() == NULL)
		{
			unmarshaled.set__separators_1(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__separators_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__separators_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
	int32_t unmarshaled__index_temp_2 = 0;
	unmarshaled__index_temp_2 = marshaled.____index_2;
	unmarshaled.set__index_2(unmarshaled__index_temp_2);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled_U3CCurrentU3Ek__BackingField_temp_3;
	memset((&unmarshaled_U3CCurrentU3Ek__BackingField_temp_3), 0, sizeof(unmarshaled_U3CCurrentU3Ek__BackingField_temp_3));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_back(marshaled.___U3CCurrentU3Ek__BackingField_3, unmarshaled_U3CCurrentU3Ek__BackingField_temp_3);
	unmarshaled.set_U3CCurrentU3Ek__BackingField_3(unmarshaled_U3CCurrentU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_pinvoke_cleanup(Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_pinvoke& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_pinvoke_cleanup(marshaled.___U3CCurrentU3Ek__BackingField_3);
}




// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_com(const Enumerator_t11A993F323C32086EF190147308253E8B92B695D& unmarshaled, Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_com& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com(unmarshaled.get__value_0(), marshaled.____value_0);
	if (unmarshaled.get__separators_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__separators_Length = (unmarshaled.get__separators_1())->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.get__separators_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
	marshaled.____index_2 = unmarshaled.get__index_2();
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com(unmarshaled.get_U3CCurrentU3Ek__BackingField_3(), marshaled.___U3CCurrentU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_com_back(const Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_com& marshaled, Enumerator_t11A993F323C32086EF190147308253E8B92B695D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled__value_temp_0;
	memset((&unmarshaled__value_temp_0), 0, sizeof(unmarshaled__value_temp_0));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_back(marshaled.____value_0, unmarshaled__value_temp_0);
	unmarshaled.set__value_0(unmarshaled__value_temp_0);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.get__separators_1() == NULL)
		{
			unmarshaled.set__separators_1(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__separators_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__separators_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
	int32_t unmarshaled__index_temp_2 = 0;
	unmarshaled__index_temp_2 = marshaled.____index_2;
	unmarshaled.set__index_2(unmarshaled__index_temp_2);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  unmarshaled_U3CCurrentU3Ek__BackingField_temp_3;
	memset((&unmarshaled_U3CCurrentU3Ek__BackingField_temp_3), 0, sizeof(unmarshaled_U3CCurrentU3Ek__BackingField_temp_3));
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_back(marshaled.___U3CCurrentU3Ek__BackingField_3, unmarshaled_U3CCurrentU3Ek__BackingField_temp_3);
	unmarshaled.set_U3CCurrentU3Ek__BackingField_3(unmarshaled_U3CCurrentU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshal_com_cleanup(Enumerator_t11A993F323C32086EF190147308253E8B92B695D_marshaled_com& marshaled)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_marshal_com_cleanup(marshaled.___U3CCurrentU3Ek__BackingField_3);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringSegment&,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8342BDF9AC5F02C13DF5C64DC2857EF8BAFDEE2A (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_0 = ___value0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1 = (*(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_0);
		__this->set__value_0(L_1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___separators1;
		__this->set__separators_1(L_2);
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 ));
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_3 = V_0;
		Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, L_3, /*hidden argument*/NULL);
		__this->set__index_2(0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m8342BDF9AC5F02C13DF5C64DC2857EF8BAFDEE2A_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	Enumerator__ctor_m8342BDF9AC5F02C13DF5C64DC2857EF8BAFDEE2A(_thisAdjusted, ___value0, ___separators1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringTokenizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2D78345773D57FD110600BF4F5D657C474B32722 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * ___tokenizer0, const RuntimeMethod* method)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * L_0 = ___tokenizer0;
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1 = L_0->get__value_0();
		__this->set__value_0(L_1);
		StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * L_2 = ___tokenizer0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2->get__separators_1();
		__this->set__separators_1(L_3);
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 ));
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_4 = V_0;
		Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, L_4, /*hidden argument*/NULL);
		__this->set__index_2(0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m2D78345773D57FD110600BF4F5D657C474B32722_AdjustorThunk (RuntimeObject * __this, StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91 * ___tokenizer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	Enumerator__ctor_m2D78345773D57FD110600BF4F5D657C474B32722(_thisAdjusted, ___tokenizer0, method);
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = __this->get_U3CCurrentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  _returnValue;
	_returnValue = Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::set_Current(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_AdjustorThunk (RuntimeObject * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline(_thisAdjusted, ___value0, method);
}
// System.Object Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_mDB84CEDAD186B9642BD3EA277672EA8787FF8884 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0;
		L_0 = Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, /*hidden argument*/NULL);
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_1 = L_0;
		RuntimeObject * L_2 = Box(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_mDB84CEDAD186B9642BD3EA277672EA8787FF8884_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mDB84CEDAD186B9642BD3EA277672EA8787FF8884(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m915D7206B21C50EFA07B169976F0501AA26BF3CA (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m915D7206B21C50EFA07B169976F0501AA26BF3CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	Enumerator_Dispose_m915D7206B21C50EFA07B169976F0501AA26BF3CA(_thisAdjusted, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0E615047A082578A8DE5CCA4B3C9AC83589E6BC (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_0 = __this->get_address_of__value_0();
		bool L_1;
		L_1 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = __this->get__index_2();
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_3 = __this->get_address_of__value_0();
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 ));
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_5 = V_1;
		Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, L_5, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0031:
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_6 = __this->get_address_of__value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = __this->get__separators_1();
		int32_t L_8 = __this->get__index_2();
		int32_t L_9;
		L_9 = StringSegment_IndexOfAny_m55A42C1176DFABDDD8DB6B6C0C263665ADE5CE58((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0059;
		}
	}
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_11 = __this->get_address_of__value_0();
		int32_t L_12;
		L_12 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0059:
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * L_13 = __this->get_address_of__value_0();
		int32_t L_14 = __this->get__index_2();
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get__index_2();
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_17;
		L_17 = StringSegment_Subsegment_m18C76646BBE084EDB377CC8E12880CFEA2368FEF((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)L_13, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
		Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		__this->set__index_2(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mB0E615047A082578A8DE5CCA4B3C9AC83589E6BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mB0E615047A082578A8DE5CCA4B3C9AC83589E6BC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m24FF73D10B8F371E76918E9E00DDFB590412CE20 (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 ));
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = V_0;
		Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline((Enumerator_t11A993F323C32086EF190147308253E8B92B695D *)__this, L_0, /*hidden argument*/NULL);
		__this->set__index_2(0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m24FF73D10B8F371E76918E9E00DDFB590412CE20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t11A993F323C32086EF190147308253E8B92B695D * _thisAdjusted = reinterpret_cast<Enumerator_t11A993F323C32086EF190147308253E8B92B695D *>(__this + _offset);
	Enumerator_Reset_m24FF73D10B8F371E76918E9E00DDFB590412CE20(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_pinvoke(const Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F& unmarshaled, Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_pinvoke& marshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_pinvoke_back(const Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_pinvoke& marshaled, Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F& unmarshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_pinvoke_cleanup(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_com(const Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F& unmarshaled, Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_com& marshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_com_back(const Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_com& marshaled, Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F& unmarshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshal_com_cleanup(Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->set__values_0((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		String_t* L_2 = V_0;
		__this->set__current_1(L_2);
		goto IL_002d;
	}

IL_001a:
	{
		__this->set__current_1((String_t*)NULL);
		RuntimeObject * L_3 = ___value0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_3, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		__this->set__values_0(L_4);
	}

IL_002d:
	{
		__this->set__index_2(0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3F6A9E565D4CF1DE903E6B1B2990354915D7A15C (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * ___values0, const RuntimeMethod* method)
{
	{
		StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * L_0 = ___values0;
		RuntimeObject * L_1 = L_0->get__values_1();
		Enumerator__ctor_mA431E4274F9E301B3B258D7A84DC38E856B7902F((Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m3F6A9E565D4CF1DE903E6B1B2990354915D7A15C_AdjustorThunk (RuntimeObject * __this, StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * ___values0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	Enumerator__ctor_m3F6A9E565D4CF1DE903E6B1B2990354915D7A15C(_thisAdjusted, ___values0, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCC9829C1BA2715337A127BB18CA820DEA649B092 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		int32_t L_0 = __this->get__index_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get__values_0();
		V_1 = L_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_1;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_0;
		__this->set__index_2(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set__current_1(L_10);
		return (bool)1;
	}

IL_0031:
	{
		__this->set__index_2((-1));
		return (bool)0;
	}

IL_003a:
	{
		__this->set__index_2((-1));
		String_t* L_11 = __this->get__current_1();
		return (bool)((!(((RuntimeObject*)(String_t*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mCC9829C1BA2715337A127BB18CA820DEA649B092_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mCC9829C1BA2715337A127BB18CA820DEA649B092(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_m5DFA0840E95FC2C28F760A45E453017DA87F3334 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__current_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Enumerator_get_Current_m5DFA0840E95FC2C28F760A45E453017DA87F3334_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Enumerator_get_Current_m5DFA0840E95FC2C28F760A45E453017DA87F3334_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m5DE0046C1572E855C211D5BD41B9284BCBE34BA4 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__current_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m5DE0046C1572E855C211D5BD41B9284BCBE34BA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m5DE0046C1572E855C211D5BD41B9284BCBE34BA4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	Enumerator_System_Collections_IEnumerator_Reset_mBF5D955ABC364F72C2070C11DFFEA3254D068014(_thisAdjusted, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCEDECBFCC716BED8C44DE824988FB4253BA7C1B1 (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mCEDECBFCC716BED8C44DE824988FB4253BA7C1B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * _thisAdjusted = reinterpret_cast<Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F *>(__this + _offset);
	Enumerator_Dispose_mCEDECBFCC716BED8C44DE824988FB4253BA7C1B1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationChangeToken_get_Token_m393873BEF52E0440D0533F68DA1A5A15AA195251_inline (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_U3CTokenU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m9F196EACE6EDABED317906D2FEF2A2053FC93C28_inline (CancellationChangeToken_tB90CF810543FC16A6321BB819392375573745E8F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CActiveChangeCallbacksU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_mDF308EDFB40906D81BD037C2FD2E0DD321276574_inline (CompositeChangeToken_t2A14F18871AB2A690D2E29338144A4794564F756 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CChangeTokensU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBufferU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COffsetU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_m2E69A0E69079818D0DBBC7E8390C45E789015B3E_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_address_of__combinedHash64_0();
		int32_t L_1;
		L_1 = Int64_GetHashCode_mF049F7E1956554FB36DA6671F55BE2CAA4937CC5((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_mE016EE5E26D6BFBCCD6BD9D79FB22507C7D1BB45_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int64_t ___seed0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___seed0;
		__this->set__combinedHash64_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__combinedHash64_0();
		int64_t L_1 = __this->get__combinedHash64_0();
		int32_t L_2 = ___i0;
		__this->set__combinedHash64_0(((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_0<<(int32_t)5)), (int64_t)L_1))^(int64_t)((int64_t)((int64_t)L_2)))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject * L_1 = ___o0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m84322705C85CE555BC5928F06D7D26A41440732B_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___e0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___e0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			RuntimeObject * L_5 = V_2;
			HashCodeCombiner_Add_m43D7F0DB8B8AA932B0CC3A6468B5127C020D39A3_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_5, /*hidden argument*/NULL);
			int32_t L_6 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_0028:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0016;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_3;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m4A0D23566AE27978E7BA0E6EFEDD3B828DD1D202_inline (HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m8ECC33E36597474F55EF403FBFBF3A0C61A05639_inline((HashCodeCombiner_t2DD52039220960EF298E8E8ABE2AC8B4D08D142E *)__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__capacity_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m454DA18961D8E8D7125642CB7752B7A611A559F8_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, String_t* ___value0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___offset1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))) < ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6;
		L_6 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get__offset_0();
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		String_t* L_9 = ___value0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		InplaceStringBuilder_ThrowValidationError_m628DA8547CE77510213EE54D3A6B34EFD6659BD6((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0031:
	{
		String_t* L_12 = __this->get__value_2();
		V_1 = L_12;
		String_t* L_13 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_13);
		Il2CppChar* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar* L_15 = V_0;
		int32_t L_16;
		L_16 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_16));
	}

IL_0046:
	{
		String_t* L_17 = ___value0;
		V_3 = L_17;
		String_t* L_18 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_18);
		Il2CppChar* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar* L_20 = V_2;
		int32_t L_21;
		L_21 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_21));
	}

IL_0056:
	{
		Il2CppChar* L_22 = V_0;
		int32_t L_23 = __this->get__offset_0();
		Il2CppChar* L_24 = V_2;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___count2;
		Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715_inline((void*)(void*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))), (void*)(void*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_25), (int32_t)2)))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)2)), /*hidden argument*/NULL);
		int32_t L_27 = __this->get__offset_0();
		int32_t L_28 = ___count2;
		__this->set__offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)));
		V_3 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715_inline (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		void* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InplaceStringBuilder_Append_m94EA45328A5F2F5C7241F57E802391D6F1BBA34E_inline (InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		InplaceStringBuilder_EnsureValueIsInitialized_mBE3873F283BBD78EFE224E8D4CEB8EAD5A51C6B8((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get__offset_0();
		int32_t L_1;
		L_1 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4 = 1;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_3;
		int32_t L_7;
		L_7 = InplaceStringBuilder_get_Capacity_mC2791A4FDD593B5EF4195F6609971376DBC751FB_inline((InplaceStringBuilder_t90F2F7489F21DCA3C1B75917451C541043122E05 *)__this, /*hidden argument*/NULL);
		int32_t L_8 = __this->get__offset_0();
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ThrowHelper_ThrowInvalidOperationException_mFA6F97AED8E072AA5A518E6AF501AEE04EA52790(3, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		String_t* L_11 = __this->get__value_2();
		V_1 = L_11;
		String_t* L_12 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_12);
		Il2CppChar* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		Il2CppChar* L_14 = V_0;
		int32_t L_15;
		L_15 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (int32_t)L_15));
	}

IL_0053:
	{
		Il2CppChar* L_16 = V_0;
		int32_t L_17 = __this->get__offset_0();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set__offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_2;
		Il2CppChar L_20 = ___c0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_19), (int32_t)2))))) = (int16_t)L_20;
		V_1 = (String_t*)NULL;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringSegment__ctor_mB5EF9FBA443E690ABC7DBB30375B7FE00D731DD8_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___offset1;
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) <= ((uint32_t)L_3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = ___length2;
		String_t* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___offset1;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))))))
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		String_t* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9_il2cpp_TypeInfo_var);
		StringSegment_ThrowInvalidArguments_m3C45B0F8E5CCB0DD988C1D10BA2A916DD3608AB1(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_11 = ___buffer0;
		__this->set_U3CBufferU3Ek__BackingField_1(L_11);
		int32_t L_12 = ___offset1;
		__this->set_U3COffsetU3Ek__BackingField_2(L_12);
		int32_t L_13 = ___length2;
		__this->set_U3CLengthU3Ek__BackingField_3(L_13);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  MemoryExtensions_AsSpan_m24B0025638F2D2A4623EA63240B92E350C933ECA_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0019;
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5(1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC ));
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10))))))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5(1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		String_t* L_11 = ___text0;
		Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * L_12;
		L_12 = Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_inline(L_11, /*hidden argument*/Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		intptr_t L_13 = ((MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var))->get_StringAdjustment_0();
		int32_t L_14 = ___start1;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_13, ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), /*hidden argument*/NULL);
		int32_t L_16 = ___length2;
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_17;
		memset((&L_17), 0, sizeof(L_17));
		ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_inline((&L_17), L_12, (intptr_t)L_15, L_16, /*hidden argument*/ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var);
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_Equals_m2D26B9616129E05B738DB0A9CEEE15335E3AACC5_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_6, L_7, L_8, 0, L_9, L_10, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m0644E8867443A04ACFC017A4554812A818472607_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_m1B530B172A12D8B05FBDD07D1E043E22D3254AB4((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m6B58E183DC94EF3E7BA584FCDC7C96F66B8A3906_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_1;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_6, L_7, L_8, 0, L_9, L_10, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_m036E97C87D03ABF069853765786BF725345950A3_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m8B83DE18875365D0A3423E69602BEBE1D6753AB3(3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)L_5));
		bool L_6;
		L_6 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		String_t* L_10 = ___text0;
		int32_t L_11 = V_1;
		int32_t L_12 = ___comparisonType1;
		int32_t L_13;
		L_13 = String_Compare_m235536D851DC456E92886872EB685E9746CD8842(L_8, L_9, L_10, 0, L_11, L_12, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mB517E7DE143D100E9C6B30E9B8DD5F4BBC4C9AF8_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m7CFC8257890EABABC1B9D1DFCAA1C92C682E2026_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_mBF016B6C520389D69A35258E97DD15E1337F7294((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m0FDFC93D409BB5D0B81775654E6D96B0913DB8EE_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		bool L_2;
		L_2 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___start1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) > ((uint32_t)L_6))))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		Il2CppChar L_9 = ___c0;
		int32_t L_10 = V_0;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = String_IndexOf_m3A61B8C27BBED464066C9C13CB540150FEC99A3B(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_mAE320BF5998A92A206110800D3D5BDAB2DA994EB_inline (StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_mFF4C2B27F1B8F94D64C86FC43C09416C67A28378((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = ___startIndex1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex1;
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_8 = ___startIndex1;
		int32_t L_9 = ___count2;
		String_t* L_10;
		L_10 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9))) <= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFD7C5AD95B2C955E5F7A85333BE41B399DBE39A1(5, /*hidden argument*/NULL);
	}

IL_004a:
	{
		String_t* L_12;
		L_12 = StringSegment_get_Buffer_m955EB1310E58E5AB617F391EA68E5A6640B24339_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___anyOf0;
		int32_t L_14;
		L_14 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		int32_t L_15 = ___startIndex1;
		int32_t L_16 = ___count2;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = String_IndexOfAny_m2F49F72E433E32FE4021432592B19EA58B5A28A0(L_12, L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)), L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = StringSegment_get_Offset_mB4C3A1E10A1B1DB22F540591FBE2B702898E97CF_inline((StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9 *)__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m0268247C65F70E2191D1885614DE66DB9931D5A7_inline (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CComparisonU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringSegmentComparer_get_Comparer_m83330148D1741B4B4FB4D6B7F9F271E22EB967F7_inline (StringSegmentComparer_t3BD813A98F9901AAD7AC1835EC936BC1AA400835 * __this, const RuntimeMethod* method)
{
	{
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = __this->get_U3CComparerU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m0E5103CC2F56A56E0BD8991793461A2958634C4E_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__values_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_mAC315115A2725BFBA00A95C6066ADC15A1282DD1_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		__this->set__values_1((RuntimeObject *)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_m082D74C881FF6BBFE580C6D6BF8F014A2BE93901_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}

IL_0011:
	{
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		RuntimeObject * L_3 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_3, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		NullCheck(L_4);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m50170AC141D439E6956662690319316BD691E67C_inline (StringValues_tF072065151A4080180381AF6F4548C082ACA19E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__values_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		RuntimeObject * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_inline(L_6, /*hidden argument*/Unsafe_As_TisStringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_m8C8B8B444F25511D9511EB23BC634FCECEF4C8F2_RuntimeMethod_var);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = StringValues_OutOfBounds_m3EFA983F3EF5246EB95D343AFD1BAF794803EE69(/*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_m8D77542583C96850679E42037E875B018ACA0489_inline (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  ___value0, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  Enumerator_get_Current_m98B89C91AA949086FB7ED803B948BE1F74B8DF54_inline (Enumerator_t11A993F323C32086EF190147308253E8B92B695D * __this, const RuntimeMethod* method)
{
	{
		StringSegment_tA70CE8E6927B64136123AA435527897ACC3C00A9  L_0 = __this->get_U3CCurrentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_m5DFA0840E95FC2C28F760A45E453017DA87F3334_inline (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__current_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_m5DE0046C1572E855C211D5BD41B9284BCBE34BA4_inline (Enumerator_t95CE405C42C6373A4D19D8B086CEF8D99B2E849F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__current_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
